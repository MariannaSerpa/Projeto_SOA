#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	
	system("fswebcam foto.jpeg");
	sleep(2);
	system("./email_anexo.sh");
	
	return 0;
	
}	
