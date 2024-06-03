#include <pthread.h>
#include <stdio.h>

int counter = 0;

void *increment(void *arg) {
  for (int i = 0; i < 1000000; i++) {
    counter++;
  }
  return NULL;
}

int main() {
  pthread_t t1, t2;
  pthread_create(&t1, NULL, increment, NULL);
  pthread_create(&t2, NULL, increment, NULL);
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  printf("Counter: %d\n", counter); // Expected value is 2000000, but it may be
                                    // less due to race conditions
  return 0;
}

// #include <pthread.h>
// #include <stdio.h>
//
// int counter = 0;
// pthread_mutex_t lock;
//
// void *increment(void *arg) {
//   for (int i = 0; i < 1000000; i++) {
//     pthread_mutex_lock(&lock);
//     counter++;
//     pthread_mutex_unlock(&lock);
//   }
//   return NULL;
// }
//
// int main() {
//   pthread_t t1, t2;
//
//   pthread_mutex_init(&lock, NULL);
//
//   pthread_create(&t1, NULL, increment, NULL);
//   pthread_create(&t2, NULL, increment, NULL);
//
//   pthread_join(t1, NULL);
//   pthread_join(t2, NULL);
//
//   pthread_mutex_destroy(&lock);
//
//   printf("Counter: %d\n", counter); // Expected value is 2000000
//   return 0;
// }
