# bs-readline

A small package for reading from node.

# Installation

```
npm install --save bs-readline
```
or
```
npm i -S bs-readline
```

Then add bs-readline to bs-dependencies in your bsconfig.json:
```
{
  ...
  "bs-dependencies": ["bs-readline"]
}
```

# Examples

Read a line:
```
Readline.readline((data) => {
    Js.log(data);
});
```

Close(release the streams):
```
Readline.close();
```

Read a line and then close:
```
Readline.readline((data) => {
    Js.log(data);
    Readline.close();
});
```

# Notes

When using bs-readline in your project, node will not exit until you have called `Readline.close()`
