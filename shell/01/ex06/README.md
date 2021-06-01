`sed -n 'p;n'`

`-n` suppresses all output that isn't explicitly printed.

`'p;n'` is the sed script to run on each input line. The semicolon is a separator between two commands, p and n.

`p` prints the current line, without moving to the next line.

`n` moves to the next line without printing anything.

>Once these two commands have been run on the current line, sed moves on to the next line, and then runs the script again on this new line. This script will keep running until there are no more input lines. The effect of the script is to keep printing, then skipping lines.