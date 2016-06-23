<!---
just checking what's goint on in markdown. does it suck? does it not?
I don't know. let's find out!
-->

#kitten projects
Just having a bit of fun with the
[Kitten programming language](https://github.com/evincarofautumn/kitten).

I also have tried (and failed) to make a Syntastic plugin for Kitten.

I've found it really interesting both as a functional programming language
and a concatenative one. I found the functional part easy, having experience
(however limited) with Scheme, but the concatenative part was something to
get used to. The concatenative aspect of Kitten reminded me of my programming
language, [juggle](htts://github.com/cheezgi/juggle), stringing together
commands.

There are a few problems I have with Kitten, however having no experience in
Haskell, I am unable to contribute.

Firstly:

*   No documentation. This is something that is being worked on, and something
    that I would be willing to contribute (though I am no technical writer)

*   The semicolon `;` rules are confusing. This can lead to some unhelpful
    error messages if you don't understand them, which I didn't. For example:

        // this code is invalid:
        3 -> i;
        if (i = 1):
            "i is 1" say;
        else:
            "i is 2" say;
        "done" say

    From what I can tell, `;` is only for separation of expressiony things.
    Expressiony things seem to be limited to assignment and everything else.
    A good example of this is `checkWinner` in t2.ktn:

        define checkWinner ([char] char char -> char) {
            -> board p1 p2;
            board 0 checkCols -> c0;        // assignment: semicolons
            board 1 checkCols -> c1;
            board 2 checkCols -> c2;

            // ...

            if (winners p1 elemChar):       // not assignment: no semicolons
                p1
            else:
                if (winners p2 elemChar):
                    p2
                else:
                    if (winners '!' elemChar):
                        "An error has occurred." say
                        '!'
                    else:
                     ' '
