[StackOverflow](https://stackoverflow.com/a/21759654)

```shell
cat /etc/passwd | grep -v "#" | sed -n 'n;p' | cut -f 1 -d : | rev | sort -r | awk -v s="$FT_LINE1" -v e="$FT_LINE2" 's<=NR&&NR<=e' | paste -sd ',' | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
```