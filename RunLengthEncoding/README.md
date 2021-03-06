# Run Length Encoding

Run Length Encoding (RLE) is a lossless data compression algorithm in which
runs of identical characters in a stream of data are represented as a single
character and a run length.  To avoid ambiguity, for the sake of this task, each
character/length set will be represented as "%N$C", where "N" is a decimal integer
of arbitrary length, and "C" is a single character in the range 0x20-0x7e.

For instance...

rle("XXXXYYYZZzzzzzzzzzzzzzzzzzzzz") -> "%4$X%3$Y%2$Z%20$z"
rle("AAAAAaaawwwwwwwwwwwwe!") -> "%5$A%3$a%12$w%1$e%1$!"

Similarly, the process can be reverse...

unrle("%12$*%1$1%2$2%3$3%4$4") -> "************1234"
unrle("%23$$") -> "$$$$$$$$$$$$$$$$$$$$$$$"

Your program will be given a series of newline seperated strings in the form:
e ...
d ...

If the line begins with "e ", the rest of the data should be RLE-encoded.  If
the line begins with "d ", the rest of the data should be decoded.  Your program
should print each answer on a newline.



Example
===============================================================================

If your program reads the input:
e aaaaBBBBcccc
d %13$z%3$q%1$b
e A
d %10$?%5$Z

It should output:
%4$a%4$B%4$c
zzzzzzzzzzzzzqqqb
%1$A
??????????ZZZZZ
