/* Cli arg parse weekly challenge */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

char VERSION[15] = "1.0.0";
char HELP[] = "Usage:\n(-v,--version, Print program version)\n(-h, --help, Print program help)\n(-p, --print [text], Print [text] to the screen\n";

int main(int argc, char *argv[])
{
  int choice;
  while (1)
  {
    static struct option long_options[] =
    {
      /* Use flags like so:
      {"verbose",	no_argument,	&verbose_flag, 'V'}*/
      /* Argument styles: no_argument, required_argument, optional_argument */
      {"version" , no_argument       , 0 , 'v'},
      {"help"    , no_argument       , 0 , 'h'},
      {"print"   , required_argument , 0 , 'p'},
      {0         , 0                 , 0 , 0}
    };

    int option_index = 0;

    /* Argument parameters:
      no_argument: " "
      required_argument: ":"
      optional_argument: "::" */

    choice = getopt_long( argc, argv, "vh",
          long_options, &option_index);

    if (choice == -1)
      break;

    switch( choice )
    {
      case 'v':
        printf("Program version is %s\n", VERSION);
        break;

      case 'h':
        printf("%s",HELP);
        break;

      case 'p':
        printf("%s\n",optarg);
        break;

      case '?':
        /* getopt_long will have already printed an error */
        break;

      default:
        /* Not sure how to get here... */
        return EXIT_FAILURE;
    }
  }

  /* Deal with non-option arguments here */
  if ( optind < argc )
  {
    while ( optind < argc )
    {
      printf("Unknown option: %c\n", optind);
    }
  }

  return 0;
}
