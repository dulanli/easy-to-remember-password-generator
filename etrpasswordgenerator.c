/* Topic 2: Easy-to-remember password generator */

#include <stdio.h>                          // allows use of printf and scanf
#include <stdlib.h>                         // generates random numbers
#include <string.h>                         // allows the use of strncpy, strlen, memset
#include <unistd.h>                         // allows use of usleep,sleep 
#include <time.h>                           // allows time delays, gettimeofday, timeval (for timestamp in microsecond) 

int load(){						// opening of load function
    

        printf("\n/////////////         /////////////           ////////////");
        usleep(700000);         // delays the next line by 70ms

        printf("\n//                         //                //        //");
        usleep(700000);         // delays the next line by 70ms

        printf("\n//                         //                //       //");
        usleep(700000);         // delays the next line by 70ms

        printf("\n////////////               //                //////////");
        usleep(700000);         // delays the next line by 70ms

        printf("\n//                         //                //     //");
        usleep(700000);         // delays the next line by 70ms

        printf("\n//                         //                //      //");
        usleep(700000);         // delays the next line by 70ms

        printf("\n/////////////              //                //       //");
        usleep(700000);         // delays the next line by 70ms
        
        printf("\n\n\n///////////////////////////////////////////////////////");
        usleep(500000);         // delays the next line by 50ms
        printf("\n//////ETR PASSWORD GENERATOR LOADED SUCCESSFULLY///////");
        usleep(500000);         // delays the next line by 50ms
        printf("\n///////////////////////////////////////////////////////");
        usleep(500000);         // delays the next line by 50ms
        
}                             // closing of load function

int scan(){                                 // scan function - display error when character is entered
    
    int num;                               // initialising value as int
    
    while (scanf("%d", &num) != 1){        // opening of while loop
    
        int x;                                // initialising chr as int
        printf("\n[ENG] ERROR: Please Enter A Number And Not A Character");             // output message
        printf("\n[FR] ERREUR: Veuillez Inserez Un Nombre Et Non Pas Un Caractère");    // output message
        printf("\n> ");                                                                 // out message
        do{                                                                             // opening of do-while loop
            x = getchar();                                                              // gets a character from input
        } while ((x != EOF) && (x != '\n'));                                            // conditions for while loop
                                                                                        // EOF means End-of-File
                                                                                        // (chr != '\n') - to accept new values when character is entered
    }                                                                                   // closing of while-loop
    return num;                                                                         // return value num
}                             // closing of scan function

char *readFile4(int rLine){                         // opening readFile4 function
                                                    // open and read file 4.txt
  static char lineTrimmed[500];                     // static is used so that the variable remains in memory while the program is running
                                                    // array of 500 is stored - dictionaries have 500 words
  FILE *file = fopen("4.txt", "r");                 // opening of 4.txt and option "r" means read-only

  if ( file != NULL ){                              // opening of if statement
                                                    // condition (null): if there is a file
    char line[500];                                 // initialising line as char with an array of 500                    
    
    int x = 0;                                      // declaring x as 0
    
    /* TO FETCH A WORD FROM THE DICTIONARY */
    while (fgets(line, sizeof(line), file)){            // opening of while loop
    x++;                                                // incrementing x 
        if(x == rLine){                                 // opening of if statement 
                                                        // condition: if x(incremented) tally with the random number
            memset(&lineTrimmed[0], 0, sizeof(lineTrimmed));        /* memset - library function to fill a block of memory with a particular value
                                                                       sizeof - returns the amount of memory is allocated */
            strncpy(lineTrimmed,line,strlen(line)-1);               /* strncpy - returns the last copy of the copied string 
                                                                       strlen - counts and gives the length of the given string*/
        }                                               // closing of if statement
    }    // closing of while loop                                           
    
  }                          // closing of if statement

    return lineTrimmed;                             //return lineTrimmed;
}             // closing readFile4 function

char *readFile5(int rLine){                         // opening of readFile5 function
                                                    // open and read file 5.txt
  static char lineTrimmed[500];                     // initialising lineTrimmed as static char with an array of 500
  FILE *file = fopen("5.txt", "r");                 // opening of 5.txt - read-only opyion

  if ( file != NULL ){                              // opening of if statement
    char line[500];                                 // initialising line as char with a 500 array              
    
    int x = 0;                                      // declaring x as 0
    
    while (fgets(line, sizeof(line), file)){        // opening of while loop
      x++;                                          // incrementing x 
      if(x == rLine){                               // opening of if-statement
      
        memset(&lineTrimmed[0], 0, sizeof(lineTrimmed));            /* memset - library function to fill a block of memory with a particular value
                                                                       sizeof - returns the amount of memory is allocated */
        strncpy(lineTrimmed,line,strlen(line)-1);                   /* strncpy - returns the last copy of the copied string 
                                                                       strlen - counts and gives the length of the given string*/
      }                                             
    }                                               
    
  }                          // closing of if statement

  return lineTrimmed;                          // return lineTrimmed
}             // closing readFile5 function

char *readFile6(int rLine){         // opening readFile6 function
                                                    // open and read file 6.txt
  static char lineTrimmed[500];                     // initializing line as char with a 500 array
  FILE *file = fopen("6.txt", "r");                 // opening of 6.txt - read-only opyion

  if ( file != NULL ){                                    //opening of if statement
    char line[500];                                       // opening of 6.txt - read-only option
    
    int x = 0;                                           //initializing x to 0
    
    while (fgets(line, sizeof(line), file)){              //while loop
      x++;                                                //incrementing x
      if(x == rLine){                                     //opening of if statement
        memset(&lineTrimmed[0], 0, sizeof(lineTrimmed));  /* memset - library function to fill a block of memory with a particular value
                                                                       sizeof - returns the amount of memory is allocated */
        strncpy(lineTrimmed,line,strlen(line)-1);        /* strncpy - returns the last copy of the copied string 
                                                                       strlen - counts and gives the length of the given string*/
      }                                                  
    }                                                     

  }                  // closing of if statement

  return lineTrimmed;                                      // return lineTrimmed
}             // closing readFile6 function

char *readFile7(int rLine){                                // opening readFile7 function
                                                    // open and read file 7.txt
    
  static char lineTrimmed[500];                     // initializing line as char with a 500 array
  FILE *file = fopen("7.txt", "r");                 // opening of 7.txt - read-only option


  if ( file != NULL ){                              //opening of if-statement
    char line[500];                                 // opening of 7.txt - read-only option
    
    
    int x = 0;                                      //initializing x to 0
    
    while (fgets(line, sizeof(line), file)){    //while loop
      x++;                                      //incrmenting x
      if(x == rLine) {                                    //opening of if-statement    
        memset(&lineTrimmed[0], 0, sizeof(lineTrimmed));   /* memset - library function to fill a block of memory with a particular value
                                                                       sizeof - returns the amount of memory is allocated */
        strncpy(lineTrimmed,line,strlen(line)-1);           /* strncpy - returns the last copy of the copied string 
                                                                       strlen - counts and gives the length of the given string*/
      }                                                    
    }                                                      
    
  }                          // closing of if attement                                  

  return lineTrimmed;                                        //return lineTrimmed
  
}             // closing readFile7 function

int random1(){                  // opening of random1 function     
                                // randomizing files/dictionaries(4,5,6,7.txt) and the words for the first time
    srand(time(NULL));          // generating a sequence of random characters
    int randomtextfile1;        // initializing randomtextfile1 as int

    do{                         // opening do-while loop
        
        randomtextfile1 = ("%d\n", rand() % 7);                         // randomizing text files(dictionaries)
    }   while (randomtextfile1 < 4 || randomtextfile1 > 7);             // while loop till conditions are met
                                              
        if (randomtextfile1 == 4){                          // opening of if statement
            int randomnum;                                  // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 500);             /* generating a random number in 4.txt
                                                                   which will be less or equal to 500   */
                printf("%s", readFile4(randomnum));         // print random word from 4.txt  
            }   while (randomnum == 0);                     // line cannot be 0
        }           // closing of if statement
        
        if (randomtextfile1 == 5){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening do-while loop
                randomnum = ("%d\n", rand() % 500);         // generate a random number in 5.txt

                printf("%s", readFile5(randomnum));         // print random word from 5.txt
            }   while (randomnum == 0);                     // line cannot be 0
        }           // closing of if statement
        
        if (randomtextfile1 == 6){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 500);         // generate a random number in 6.txt

                printf("%s", readFile6(randomnum));         // print random word from 6.txt     
            }   while (randomnum == 0);                     // line cannot be 0
        }           // closing of if statement
        
        if (randomtextfile1 == 7){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 500);         // generate a random number in 7.txt

                printf("%s", readFile7(randomnum));         // print random word from 7.txt   
            }   while (randomnum == 0);                     // line cannot be 0
        }           // closing of if statement
    
    
}        // closing of function random1

int random2(){                  // opening of random2 function
                                // randomizing files/dictionaries(4,5,6,7.txt) and the words for the second time
    srand(time(NULL));          // generating a sequence of random characters
    int randomtextfile2;        // initializing randomtextfile2 as int

    do{                         // opening do-while loop 
        
    randomtextfile2 = ("%d\n", rand() % 8);                             // randomizing text files(dictionaries) 
    }   while (randomtextfile2 < 4 || randomtextfile2 > 7);             // while loop till conditions are met
    
    
        if (randomtextfile2 == 4){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int 
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 490);         // generate a random number in 4.txt 

                printf("%s", readFile4(randomnum));         // print random word from 4.txt   
            }   while (randomnum == 0);                     // line cannot be 0
        }       // closing of if statement
        
        if (randomtextfile2 == 5){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 490);         // generate a random number in 5.txt

                printf("%s", readFile5(randomnum));         // print random word from 5.txt  
            }   while (randomnum == 0);                     // line cannot be 0
        }       // closing if statement
        
        if (randomtextfile2 == 6){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 490);         // generate a random number in 6.txt

                printf("%s", readFile6(randomnum));         // print random word from 6.txt  
            }   while (randomnum == 0);                     // line cannot be 0
        }       // closing if statement
        
        if (randomtextfile2 == 7){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 490);         // generate a random number in 7.txt

                printf("%s", readFile7(randomnum));         // print random word from 7.txt
            }   while (randomnum == 0);                     // line cannot be 0
        }       // closing if statement
    
    
}        // closing of function random2

int random3(){                  // opening of random3 function
                                // randomizing files/dictionaries(4,5,6,7.txt) and the words for the third time
    srand(time(NULL));          // generating a sequence of random characters
    int randomtextfile3;        // initializing randomtextfile3 as int

    do{                         // opening do-while loop
        
    randomtextfile3 = ("%d\n", rand() % 9);                             // randomizing text files(dictionaries)
    }   while (randomtextfile3 < 4 || randomtextfile3 > 7);             // while loop till conditions are met
    
    
        if (randomtextfile3 == 4){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 480);         // generate a random number in 4.txt

                printf("%s", readFile4(randomnum));         // print random word from 4.txt
            }   while (randomnum == 0);                     // line cannot be 0
        }      // closing if statement
        
        if (randomtextfile3 == 5){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 480);         // generate a random number in 5.txt
        
                printf("%s", readFile5(randomnum));         // print random word from 5.txt
            }   while (randomnum == 0);                     // line cannot be 0
        }      // closing if statement
        
        if (randomtextfile3 == 6){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 480);         // generate a random number in 6.txt

                printf("%s", readFile6(randomnum));         // print random word from 6.txt 
            }   while (randomnum == 0);                     // line cannot be 0
        }      // closing if statement
        
        if (randomtextfile3 == 7){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 480);         // generate a random number in 7.txt

                printf("%s", readFile7(randomnum));         // print random word from 7.txt
            }   while (randomnum == 0);                     // line cannot be 0
        }      // closing if statement
    
    
}        // closing of function random3 

int random4(){                  // opening of random4 function
                                // randomizing files/dictionaries(4,5,6,7.txt) and the words for the fourth time
    srand(time(NULL));          // generating a sequence of random characters
    int randomtextfile4;        // initializing randomtextfile4 as int

    do{                         // opening do-while loop
        
    randomtextfile4 = ("%d\n", rand() % 10);                            // randomizing text files(dictionaries)
    }   while (randomtextfile4 < 4 || randomtextfile4 > 7);             // while loop till conditions are met
    
    
        if (randomtextfile4 == 4){                          // opening of if statment
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of do-while loop
                randomnum = ("%d\n", rand() % 495);         // generate a random number in 4.txt

                printf("%s", readFile4(randomnum));         // print random word from 4.txt  
            }   while (randomnum == 0);                     // line cannot be 0
        }      // closing if statement
        
        if (randomtextfile4 == 5){                          // opening of if statement
        int randomnum;                                      // initialising randomnum as int
        
            do{                                             // opening of a do-while loop
                randomnum = ("%d\n", rand() % 495);         // generate a random number in 4.txt

                printf("%s", readFile5(randomnum));         // print random word from 5.txt    
            }   while (randomnum == 0);                     // line cannot be 0
        }      // closing if statement
        
        if (randomtextfile4 == 6){                         // opening of if statement
        int randomnum;                                     // initialising randomnum as int
        
            do{                                            // opening of a do while loop
                randomnum = ("%d\n", rand() % 495);        // generate a random number in 4.txt

                printf("%s", readFile6(randomnum));        // print random word from 6.txt   
            }   while (randomnum == 0);                    // line cannot be 0
        }      // closing if statement
        
        if (randomtextfile4 == 7){                         // opening of if-statement
        int randomnum;                                     // initialising randomnum as int 
        
            do{                                            // opening of a do-while loop
                randomnum = ("%d\n", rand() % 495);        // generate a random number in 4.txt

                printf("%s", readFile7(randomnum));       // print random word from 7.txt 
            }   while (randomnum == 0);                   // line cannot be 0
        }      // closing if statement
    
}        // closing of functon random4

int etreng(){                                        // opening of function etr (easy-to-remember) password
    
    int words;                                       // initializing words as int
    
    usleep(250000);                                 // delays the next line by 25ms
    printf("\nNumber of words: ");                  // displaying message 
    words = scan();                                 // read user value
    
    
    if (words == 4){                        // opening of if-statement
        
        printf("\n");                       // leave a line
        printf("Generating Password\n");    // output Message
        
        printf("1 - ");                      // output message
        random1();                          // calling function random1
        printf("\n2 - ");                    // output message
        random2();                          // calling function random2
        printf("\n3 - ");                    // output message
        random3();                          // calling function random3
        printf("\n4 - ");                    // output message
        random4();                          // calling function random4

        printf("\n\nYour easy-to-remember password is ");           // output message
        random1();                           // calling function random1
        printf("-");                        // output message
        random2();                           // calling function random2
        printf("-");                        // output message
        random3();                           // calling function random3
        printf("-");                        // output message
        random4();                           // calling function random4
        printf("\n");                       // leaving a line
        
        choiceeng();                        // calling function choiceeng
    }                   // closing of if statement
    
    if (words == 3){                        // opening of if-statement
        
        printf("\n");                       // leave a line
        printf("Generating Password\n");    // output message
        
    
        printf("1 - ");                     // output message
        random1();                         // calling function random1 
        printf("\n2 - ");                   // output message
        random2();                         // calling function random2
        printf("\n3 - ");                   // output message
        random3();                         // calling function random3
        
        printf("\n\nYour easy-to-remember password is ");             // output message
        random1();                          // calling function random1
        printf("-");                       // output message
        random2();                          // calling function random2
        printf("-");                       // output message
        random3();                          // calling function random3
        printf("\n");                      // leaving a line
        
        choiceeng();                       // calling function choiceeng
    }                   // closing of if statement
    
    if (words > 4 || words < 3){                           // opening of if statement
        
    printf("\nERROR: Please Enter A Valid Number (2 < x < 5)");        // output message
    choiceeng();                                           // calling choiceeng function
    }       // closing of if statement   

    
}         // closing of etreng function

int etrfr(){                                         // opening of function etr (easy-to-remember) password
    
    int words;                                       // initializing words as int
    
    usleep(250000);                                  // delays the next line by 25ms
    printf("\nNombre de mots: ");                    // displaying message 
    words = scan();                                  // read user value

    
    if (words == 4){                        // opening of if-statement
        
        printf("\n");                       // leave a line
        printf("Mot De Passe Généré\n");    // output Message
        
        printf("1 - ");                      // output message
        random1();                          // calling function random1
        printf("\n2 - ");                    // output message
        random2();                          // calling function random2
        printf("\n3 - ");                    // output message
        random3();                          // calling function random3
        printf("\n4 - ");                    // output message
        random4();                          // calling function random4

        printf("\n\nVotre facile-à-retenir mot de passe est ");           // output message
        random1();                           // calling function random1
        printf("-");                        // output message
        random2();                           // calling function random2
        printf("-");                        // output message
        random3();                           // calling function random3
        printf("-");                        // output message
        random4();                           // calling function random4
        printf("\n");                       // leaving a line
        
        choicefr();      // calling function choicefr
    }                    // closing of if statement
    
    if (words == 3){                        // opening of if statement
        
        printf("\n");                       // leave a line
        printf("Mot De Passe Généré\n");    // output message
        
        printf("1 - ");                     // output message
        random1();                         // calling function random1
        printf("\n2 - ");                  // output message
        random2();                        // calling function random2
        printf("\n3 - ");                 // output message
        random3();                       // calling function random3

        
        printf("\n\nVotre facile-à-retenir mot de passe est ");          //output message
        random1();                      // calling function random1
        printf("-");                   // output message
        random2();                      // calling function random2
        printf("-");                   // output message
        random3();                      // calling function random3
        printf("\n");                  // leave a line
        
        choicefr();                     // calling choicefr function
    }                   // closing of if statement
    
    if (words > 4 || words < 3){        // opening of if statement
        
    printf("\nERREUR: Veuillez Inserez Un Nombre Valide (2 < x < 5)");     // output message
    choicefr();                         // calling choicefr function
    }      // closing of if statement   

    
}          // closing of etrfr function

int choiceeng(){
    
    int n;                                       // initialising n as int
        
    sleep(1);                                    // applying a time delay of 1 second
    printf("\n\n>> Choose Between [1/2] and Press ENTER !");        // output message
    usleep(500000);                               // applying a time delay of 50ms
    printf("\n>> 1 - Run ETR Again");            // output message
    usleep(500000);                               // applying a time delay of 50ms
    printf("\n>> 2 - Exit\n");                   // output message
    usleep(500000);                               // applying a time delay of 50ms
    printf("> ");                                // output message
    n = scan();                                  // read user value

        switch (n){                              // switch case - value input is compared with each case
            
            case 1:                              // if value 1 is input, this block of code is executed
            
            printf("\n");                        // leave a line 
            etreng();                            // calling function etreng
            break;                               // bring the program out of loop
            
        
            case 2:                              // if value 2 is input, this block of code is executed
            
            printf("\n\n\n\n\n>> EXIT SUCCESS");                 //output message
            exit(EXIT_SUCCESS);                  // closes all open files - normal exit
            break;                               // bring the program out of loop
            
            
            default:                            // executed when value input does not tally with the case-expression
            printf("\nERROR: Please Enter A Valid Number");     // output message
            choiceeng();                        // calling function choiceeng 
            
        }                          // closing of switch case
           
    
}      // closing of function choiceeng

int choicefr(){
    
    int n;                  // initializing n as integer                    
    
    sleep(1);               // applying a time delay of 1 second
    printf("\n\n>> Choisissez Entre [1/2] et Appuyez Sur ENTER!");  // output message
    usleep(500000);                                                 // applying a delay of 50ms
    printf("\n>> 1 - Exécutez ETR à Nouveau");                      // output message
    usleep(500000);                                                 // applying a delay of 50ms
    printf("\n>> 2 - Quitter\n");                                   // output message
    usleep(500000);                                                 // applying a delay of 50ms
    printf("> ");                                                   // output message
    n = scan();                                                     // read user value

        switch (n){                                     // switch case - value input is compared with each case
            
            
            case 1:                                     // if value 1 is input, this block of code is executed
            
            printf("\n");                               // leave a line
            etrfr();                                    // calling function etreng
            break;                                      // break the loop
        
            case 2:                                     // if value 2 is input, this block of code is executed
            
            printf("\n\n\n\n\n>> Terminé");               // output message
            exit(EXIT_SUCCESS);                           // closes all open files - normal exit
            break;                                        // break the loop
            
            default:                                      // executed when value input does not tally with the case-expression
            printf("\nERREUR: Veuillez Entrez Un Nombre Valide");     // output message
            choicefr();                                   // calling function choiceeng 
        }                                             // closing of switch case
    
}       // closing of function choicefr


int main(){               // opening of main function
    
    load();                                                 // calling load function
    
    int lang;                                               // initialising lang as int

    printf("\n\n\n\nEasy-to-Remember Password Generator [ETR]\n");              // output message
    usleep(500000);                                          // applying a time delay of 50ms
    
    do{                                                     // do-while loop
    printf("\n[ENG] Please Choose A Language");             // output message
    usleep(400000);                                          // applying a time delay of 40ms
    printf("\n[FR] Choisissez Une Langue");                 // output message
    usleep(400000);                                          // applying a time delay of 40ms
    printf("\n>> 1 - ENGLISH/ANGLAIS\n");                   // output message
    usleep(400000);                                          // applying a time delay of 40ms
    printf(">> 2 - FRENCH/FRANCAIS\n");                     // output message
    printf("> ");                                           // output message
    lang = scan();                                          // read user value
        
        if (lang == 1){                                     // opening of if statement
            etreng();                                       // calling function etreng
        }                                                   // closing of if statement
        
        if (lang == 2){                                     // opening of if statement
            etrfr();                                        // calling function etrfr
        }                                                   // closing of if statement
        
        
    }   while (lang != 1 && lang != 2);                     // while condition

}           // closing of main function




