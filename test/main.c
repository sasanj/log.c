#include "log.h"

int main(int argc, char *argv[]) {
  log_error("There are errors.");
  log_set_relative_filenames(false);
  log_error("There are errors.");
  log_set_use_color(false);
  log_set_print_time(false);
  log_set_relative_filenames(false);
  log_error("There are errors.");
  log_set_relative_filenames(true);
  log_error("There are errors.");
  return 0;
}
