type io;
type rlType;
[@bs.module "readline"] external createInterface : io => rlType = "";
let rl: rlType;
let readline: (string => unit) => unit;
let close: unit => unit;