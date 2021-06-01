```shell
ifconfig | grep -Eio '[0-9a-f:]{17}'
```

```
-E, --extended-regexp
    Interpret PATTERN as an extended regular expression (ERE, see below). (-E is specified by POSIX .) 
```

```
-i, --ignore-case
    Ignore case distinctions in both the PATTERN and the input files. (-i is specified by POSIX .) 
```

```
-o, --only-matching
    Print only the matched (non-empty) parts of a matching line, with each such part on a separate output line. 
```