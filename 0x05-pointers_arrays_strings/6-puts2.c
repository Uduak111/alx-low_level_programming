#include "main.h" /* Make sure to include any necessary header files */

# Function that prints every other character of a string, starting with the first character
# Usage: print_every_other str
print_every_other()
{
str="$1"
len=${#str}

for ((i = 0; i < len; i += 2)); do
printf "%c" "${str:$i:1}"
done

printf "\n"
}

input="Lrmismdlrstae,cnettraiicn lt e oeumdtmo niiutu aoee ooemgaaiu.U nma ii eim usnsrdeectto lac aoi iiu lqi xe omd osqa.Di ueiuedlri erhnei nvlpaevltes ilmdlr ufga ul aitr xetu itocea uiaa o riet uti up u fii eeutmli nmi s aou.Hletn"

print_every_other "$input"
