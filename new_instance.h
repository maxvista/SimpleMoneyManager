void new_ins(void) {
  #ifdef _WIN32
    system("Start monman.exe");
  #elif __linux__
    system("sh monman");
  #elif __unix__
    system("sh monman");
  #else
    printf("Failed to launch new new instance.\n");
    printf("Reason: Unidentified Operating System.\n");
  #endif
}
