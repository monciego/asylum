#include <stdio.h>

int max_wayne_memory(int max_threads, int memory_per_thread) {
  return max_threads * memory_per_thread;
}

void init_wayne(int max_threads, int memory_per_thread) {
  printf("Initializing Wayne...\n");
  printf("Max threads: %d\n", max_threads);
  printf("Memory per thread: %d\n", memory_per_thread);
  int max_memory = max_wayne_memory(max_threads, memory_per_thread);
  printf("Max memory: %d\n", max_memory);
  printf("==============================\n");
}

int main() {
  init_wayne(4, 512);
  init_wayne(8, 1024);
  init_wayne(16, 2048);
  return 0;
}
