//多线程创建
//https://www.jb51.net/article/259518.htm
/*pthread_create (thread, attr, start_routine, arg)  其中，thread为线程指针；
  attr为线程属性，默认NULL；start_routine为线程运行函数起始地址；arg为运行函数的参数。无参数时使用NULL
  如果线程成功创建，函数返回0，否则说明创建失败。
当线程完成工作后，若无需继续存在，则会调用pthread_exit函数。也就是说，这个函数可以显式地退出一个线程。*/

//****多线程编译  gcc thread.c -o thread -lpthread
#include<stdio.h>
#include<pthread.h>
#define NUM_THREADS 5

void *PrintTh(void *th){
	int i = *((int*)th);
	printf("Hello, I'm thread %d\n", i);
	return 0;
}

int main(){
	int i,ret;
	pthread_t p;
	for(i=0; i<NUM_THREADS; i++){
		printf("create th %d\n",i);
		ret = pthread_create(&p,NULL, PrintTh, (void*)&i);
		if(ret != 0)
			printf("th %d error, code = \n",i);
	}
	pthread_exit(NULL);
	return 0;
}
