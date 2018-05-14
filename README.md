# bs-readline

A small package for reading from node.

# Examples

Read a line:
```
Readline.readline((in) => {
    Js.log(in);
});
```

Close(release the streams):
```
Readline.close();
```

Read a line and then close:
```
Readline.readline((in) => {
    Js.log(in);
    Readline.close();
});
```

# Notes

When using bs-readline in your project, node will not exit until you have called `Readline.close()`