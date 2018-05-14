type io = {.
    "input": in_channel,
    "output": out_channel
};
type rlType = {.
    [@bs.meth] "close": unit => unit,
    [@bs.meth] "write": string => unit,
    [@bs.meth] "on": (string, string => unit) => unit
};
[@bs.module "readline"] external createInterface : io => rlType = "";

let rl = createInterface({
    "input": [%raw "process.stdin"],
    "output": [%raw "process.stdout"]
});

let readline = (callback) => {
    rl##on("line", (data) => {
        callback(data);
    });
};

let close = () => {
    rl##close();
};