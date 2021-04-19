
#define BUFF 100

int printStringUpper(char *pt)
{
       char buff[BUFF];
       int i=0,num_char;
       while(*pt !='\0')
       { 
       	if(((int)*pt>=97)&&((int)*pt<=122))
       	 buff[i]=(char)((int)*pt-32);
       	else 
       		buff[i]=*pt;
       	 i++;
       	 pt++;
       }
       num_char=i;
       buff[i]='\n';

       __asm__ __volatile__(
       	"movl $1, %%eax \n\t"
       	"movq $1, %%rdi \n\t"
       	"syscall \n\t"
       	:
       	:"S"(buff), "d"(num_char)
       	) ;
       return num_char;
}