#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(char *ptr, int len) {
    int i = 0;
    for(i=0; i<len;i++) printf(" %c ",ptr[i]);
    printf("\n");
}

void rmanacher(const char *tstring) {
    int tlen = strlen(tstring);
    int len = 2*tlen+1;
    char string[len];
    int count[len];
    int i = 0;

    string[0] = '#';
    string[1] = tstring[0];
    for(i=2; i<len;i++) {
        if(!(i%2)) string[i] = '#';
        else string[i] = tstring[i/2];
    }
    print_array(string,len);
    count[0]=0;
    count[1]=1;

    for(i=2; i<len;i++) {
        int prev = i-1;
        int next = i+1;
        while((prev >= 0) && (next < len) && (string[prev] == string[next])) {
            next++;prev--;
        }
        count[i]=(next-prev)/2;
    }
    for(i=0; i<len;i++) {
        printf("%2d ",count[i]);
    }
}

int main(int argc, char *argv[]) {
    if(argc !=2) {
        printf("Run as %s any string to be checked for palindrom\n",argv[0]);
        exit(0);
    }
    print_array(argv[1],strlen(argv[1]));
    rmanacher(argv[1]);
    printf("Completed\n");
}
