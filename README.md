<!---   so comments work. that's interesting.
        it also did what I wanted. that's a first. -->

#kitten projects
Just having a bit of fun with the
[Kitten programming language](https://github.com/evincarofautumn/kitten).

I also have tried (and failed) to make a Syntastic plugin for Kitten.

You can play around with what I wrote by using `:l filename.ktn` in the REPL.

I've found it really interesting both as a functional programming language
and a concatenative one. I found the functional part easy, having experience
(however limited) with Scheme, but the concatenative part was something to
get used to. The concatenative aspect of Kitten reminded me of my programming
language, [juggle](https://github.com/cheezgi/juggle), stringing together
commands.

I'm pleasantly surprised by how much I like it so far:

*   The choice to use significant whitespace or not. Both function definitions
    are equally valid:

        define whitespace (->):
            "this uses whitespace!" say
            if (true):
                "whitespace, neat" say

        define braces (->) {
            "this uses braces!" say
            if (true) {
                "braces, neat" say
            }
        }

    The same holds true for `if/else`, `option`, and whatever else that I don't
    know about. Personally I use braces for function definitions and whitespace
    for `if/else`.

*   The ability to define infix operators. I haven't found a use for them
    personally yet, however this could be useful for mathematical applications.

        infix left 1 @#$%
        define @#$% (int int -> char) {
            -> a b;
            (a - b) absInt intToChar -> someChar;
            option (someChar):
            else:
                ' '
        }

    For some reason Kitten does not allow the use of non-symbols as an
    operator. This makes defining an operator `op` a syntax error. Then again,
    the usefulness is somewhat lost on me. The fact that this language is
    concatenative should imply that all operators should be postfix, and
    this concern has been brought up.

*   The concatenativity (if that's a word). There's something really
    interesting about being able to string together results of functions one
    after the other. If you want to get a single-digit number from a user:

        getLine head fromSome charToInt 48 (-)

    Set a single character in a string:

        "string" 3 'a' (.=)

    Move the front item in a vector to the back:

        dup head fromSome append tail
        reverse dup head fromSome append tail reverse // and put it back again

    The ability to manipulate the stack and then pop an item off for storage
    with `-> var` is an incredibly powerful feature that I really like so far.

There are also a few problems I have with Kitten, however having no experience
in Haskell, I am unable to contribute. Kitten is a very young language, so
it has its fair share of quirks and bugs, but I'm willing to work around them
to accomplish stuff.

Firstly:

*   No documentation. This is something that is being worked on, and something
    that I would be willing to contribute (though I am no technical writer).
    The information that I have gleaned comes from reading the Kitten prelude
    library.

*   The REPL is slightly annoying to work with. Since using the whitespace
    method of function definition and if/else requires newlines, the REPL
    throws an error when it sees that there is no body to the `if`. You will
    have to use braces to define functions/use if/else in the REPL.

    Local variables also do not last for more than one line. If you pull
    something off the stack with `-> something;`, it was just eaten. It's
    almost as if a new scope is introduced every line.

    Keep in mind that these problems only exist in the REPL. Interpreting your
    program is all good.

*   The compiler is slightly buggy. I tried to compile the 99 bottles of beer
    example as 9999 bottles of beer, and it crashed with some sorf of
    type error after about 1000. Interpretatiton is also painfully slow, with
    said 9999 bottles of beer taking almost an entire minute to complete.
    If your program works as intended when compiled, it is much faster however.

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

    Again, documentation would really clear this up.

I don't want this to be a blog post, but apparently people do that with GH
pages.

Thanks to /r/programming for introducing me to this language. I've learned a
lot about language design while working with Kitten, and I really want it to
succeed. I might even learn Haskell to help contribute.

