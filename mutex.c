#include <pthread.h>

int main(){
	pthread_mutex_t mutex;
	/*create the mutex lock*/
	pthread_mutex_init(&mutex, NULL);
	
	/*acquire the mutex lock*/
	pthred_mutex_lock(&mutex);

	printf("Here is the critical section\n");
	
	/*release the mutex lock*/
	pthread_mutex_unlock(&mutex);
}
	
	
	
