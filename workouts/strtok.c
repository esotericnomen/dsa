#include <stdio.h>
#include <stdlib.h>
#define ST_LOG(x) printf x
#define STRING "root"
#define ST_ERR_FOPEN_FAIL -1;
#define ST_ERR_MALLOC_FAIL -2

int main()
{
    FILE *fp = NULL;

    fp = fopen("/proc/cmdline","r");
    if(NULL == fp) {
        perror("Fopen failed ");
        return ST_ERR_FOPEN_FAIL;
    }
    else {
        char *buffer = NULL;
        char *pbuffer = NULL;
        size_t ret = 0;

        buffer = malloc(128 * sizeof(char));
        pbuffer = buffer;
        if(NULL == buffer) {
            perror("Malloc failed :");
            if(0 != fclose(fp)) {
                perror("File closing failed\n");
                return ST_ERR_FOPEN_FAIL;
            }
            return ST_ERR_MALLOC_FAIL;
        }
        ret = fread(buffer,1,128,fp);
        buffer = (char *)strtok(buffer," ");

        while(NULL != buffer) {
            if(0 == strncmp(buffer,STRING,sizeof(STRING)-1)) {
                buffer = (char *)strtok(buffer,"=");
                buffer = (char *)strtok(NULL," ");
                break;
            }
            buffer = (char *)strtok(NULL," ");
        }
        if(NULL != buffer) {
        ST_LOG(("%s : %s\n",STRING,buffer));
        }
        else {
            printf("Variable %s is not found\n",STRING);
        }
        free(pbuffer);
        if(0 != fclose(fp)) {
            perror("File closing failed\n");
            return ST_ERR_FOPEN_FAIL;
        }
    }
    return 0;
}
