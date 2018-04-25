CRYPTO_SHIFT
============
## Encryption

This constructs a shift cipher of type _n_ on an input _M_ given an _M_ and _n_.
This shifts letters right or left _n_ spaces.
_n_ can be positive or negative.

shift-(4)(bacon) => aconb
shift-(0)(bacon) => bacon
shift-(-1)(bacon) => aconb
shift-(6)(bacon) => nbaco

This works only on strings that do not have any spaces.
