#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "error_checking.h"

int main(void){
	Mkfifo("tmp/conn_est",   0666);
	Mkfifo("tmp/conn_conf",  0666);
	Mkfifo("tmp/server_in0", 0666);
	Mkfifo("tmp/server_in1", 0666);
	Mkfifo("tmp/server_in2", 0666);
	Mkfifo("tmp/server_in3", 0666);
	Mkfifo("tmp/server_out0",0666);
	Mkfifo("tmp/server_out1",0666);
	Mkfifo("tmp/server_out2",0666);
	Mkfifo("tmp/server_out3",0666);
	printf("FIFOs successfully created\n");
}
