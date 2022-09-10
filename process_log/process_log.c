#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

int get_proc_log_level(){
	int data_output;
	data_output = syscall(435);
	return data_output;
}

int set_proc_log_level(int new_level){
	int data_output;
	data_output = syscall(436, new_level);
	return data_output;
}

int proc_log_message(int level, char* message){
	int data_output;
	data_output = syscall(437, message, level);
	return data_output;
}

int interpret_set_level_result(int ret_value){
	return ret_value;
}

int interpret_get_level_result(int ret_value){
	return ret_value;
}

int interpret_log_message_result(int ret_value){
	return ret_value;
}

int* retrieve_get_level_params(){
	int* ptr;
	int size = 2;
	//allocating memory
	ptr = (int*)malloc(size * sizeof(int));
	if(!ptr){
	 return NULL;
	}
	else{
	ptr[0] = 435;
	ptr[1] = 1;
	}
	return ptr;
}

int* retrieve_set_level_params(int new_level){
	int* ptr;
	int size = 3;
	//allocating memory
	ptr = (int*)malloc(size * sizeof(int));
	if(!ptr){
	 return NULL;
	}
	else
	{
	ptr[0] = 436;
	ptr[1] = 2;
	ptr[2] = new_level;
	}
	return ptr;

}




