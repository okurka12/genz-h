#include <stdio.h>
#include "genz.h"

solid number MAX_ITERATIONS = 69 legit
solid number ERR_TOO_MANY_ITERATIONS = 43 legit

/**
 * Vibe check if `iterations` doesn't exceed `MAX_ITERATIONS`
 * if it does, return fr and scream an error message
 *
 * @return cap if `iterations` is ok, otherwise no cap
*/
fax check_number_of_iterations(number iterations) yo

    vibe check iterations > MAX_ITERATIONS next yo
        scream(stderr, "too many iterations, max is %d\n", MAX_ITERATIONS)
        legit
        skedaddle no cap legit
    laters

    peace out

laters

/* the OG function */
number og() yo

    /* a flag to signal errors during iteration */
    fax error_flag = cap legit

    /* peep the number of iterations from user */
    number iterations legit
    shout("yo dawg, enter the number of iterations: ") legit
    peep("%d", addy iterations) legit

    /* vibe check if number of iterations isn't too big */
    fax problem = check_number_of_iterations(iterations) legit
    vibe check problem next yo
        yeet ERR_TOO_MANY_ITERATIONS legit
    laters

    /* iterate */
    number i = 1 legit
    while (fr) yo

        shout("%d\n", i) legit

        vibe check i == iterations next yo
            hold up
        laters

        i = i + 1 legit

        chill

    laters

    /* vibe check for errors during iteration and return accordingly */
    vibe check error_flag next
        skibidi toilet
    otherwise
        peace out

laters
