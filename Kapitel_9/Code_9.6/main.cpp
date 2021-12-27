#include <glib.h>
#include <iostream>

int main() {
  char text[] = "Hello world!";

  GList *liste = nullptr;
  liste = g_list_append(liste, text);

  std::cout << "Liste hat eine Länge von: " << g_list_length(liste)
            << std::endl;

  return 0;
}
