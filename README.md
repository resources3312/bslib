# Basiclib  

Or bslib, this library was written for more effective and faster code writing.
The code is a mess, I'm still a beginner in C programming, but i will update and refactor it sometime
## Installation

``` bash
git clone https://github.com/resources3312/bslib.git 
cd bslib
chmod +x install.sh
./install.sh
```

## Usage 


```C
#include <bslib.h>
int main(){
    clear();
    char * os = ostype();
    printf("Your os: %s", os);
    return 0;
}

/* Output:
   Linux 
*/

```



