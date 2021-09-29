# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include  <stdio.h>
# include<stdlib.h>

int main()
{
int fd;
char Ubuff[] = "user1";
char kbuff[100];

fd=open("/dev/add",0_RDWR, 0777);
if(fd<0)
{
printf("\n error opening file\n");
exit(1);
}

write(fd ,Ubuff, sizeof(Ubuff));
read(fd, kbuff, 50);

printf("data read from kernel : %s\n, kbuff");
close(fd);

return 0;

}
