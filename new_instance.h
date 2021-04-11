void new_ins(void) {
  #ifdef _WIN32
    system("Start smm.exe");
  #elif __linux__
    system("sh smm");
  #elif __unix__
    system("sh smm");
  #else
    printf("Failed to launch new new instance.\n");
    printf("Reason: Unidentified Operating System.\n");
  #endif
}
