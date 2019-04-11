# Google-Competitions

It's true that time can mess your mind.

Being a beginner, while solving CodeJam 2019 Problem D (Dat Bae), I faced a lot of issues to submit a correct solution.
Though, it works for every test case I can think of but either there's some logical bug in my code or I am missing something to take care of.

Link - https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/00000000000881de

## Code Explaination

Sending 5 inputs in binary form of decimal values from 0 to (N-1) number of bits.
Which makes a sequence of binary representation in a single column-row fashion.

```
For example:

0 is represented by 00000 in 5 bits,
1 is represented by 00001 in 5 bits,
2 is represented by 00010 in 5 bits,
3 is represented by 00011 in 5 bits,
4 is represented by 00100 in 5 bits,
```

My program is representing these into this form which basically transpose of the above.
```
01010
00110
00001
00000
00000
```
Above output is sent to the judge and it gives back an output with missing bits.

Suppose, machine 1 and 3 is not working, so the output will be......
```
000
010
001
000
000
```
I am converting this output back into decimal form, which in this case will give : 0 2 4 (Working machines id)

Simply print the missing numbers in sorted order as 1 3 to the judge to evalaute it further for correctness.

If correct, return 1 else -1.
