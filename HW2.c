#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int password = 2024;
    int input_password;
    int attempts = 0;

    printf("****************************************\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*         Welcome to My Program        *\n");
    printf("*                                      *\n");
    printf("*           my name is hudson          *\n");
    printf("*                                      *\n");
    printf("*     My class seat number is E1B16    *\n");
    printf("*                                      *\n");
    printf("*        +------------------+          *\n");
    printf("*     |  [ Nice to meet you :) ]   |   *\n");
    printf("*        +------------------+          *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("*                                      *\n");
    printf("****************************************\n");

    while (attempts < 3) {
        printf("�п�J4��ƪ��K�X: ");
        scanf("%d", &input_password);

        if (input_password == password) {
            break;
        } else {
            attempts++;
            printf("�K�X��J���~�A�ЦA�դ@���C\n");
        }
    }

    if (attempts == 3) {
        printf("�z�w�s���J���~�T��,�{�������I\n");
        return 0;
    }

  
    system("cls");
    char choice;

    do {
        printf("--------------------------\n");
        printf("|  a. �e�X�����T����    |\n");
        printf("|  b. ��ܭ��k��        |\n");
        printf("|  c. ����              |\n");
        printf("--------------------------\n");
        printf("�п��: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
            case 'A': {
                system("cls");
                printf("�п�J'a'��'n'���r��: ");
                char character;
                scanf(" %c", &character);

                if (character < 'a' || character > 'n') {
                    printf("ĵ�i�G�п�J'a'��'n'���r���I\n");
                } else {
                    system("cls");
                    printf("�z��J���r�����G%c\n", character);

            
                    for (char c = 'a'; c <= character; c++) {
                        for (char d = 'a'; d <= c; d++) {
                            printf("%c ", d);
                        }
                        printf("\n");
                    }

                    printf("\n���U���N���~��...");
                    getch(); 
                    system("cls"); 
                }
                break;
            }
            case 'b':
            case 'B': {
                system("cls");
                int n;

                printf("�п�J1��9�����n: ");
                scanf("%d", &n);

                if (n < 1 || n > 9) {
                    printf("ĵ�i�G�п�J1��9����ơI\n");
                } else {
                    system("cls");
                    printf("���k��]1*1 �� %d*%d�^�G\n\n", n, n);

                
                    for (int i = 1; i <= n; i++) {
                        for (int j = 1; j <= n; j++) {
                            printf("%d\t", i * j);
                        }
                        printf("\n");
                    }

                    printf("\n���U���N���~��...");
                    getch(); 
                    system("cls"); 
                }
                break;
            }
            case 'c':
            case 'C': {
                char continue_choice;
                printf("Continue? (y/n): ");
                scanf(" %c", &continue_choice);

                if (continue_choice == 'n' || continue_choice == 'N') {
                    return 0;
                } else if (continue_choice != 'y' && continue_choice != 'Y') {
                    printf("���~����J�I\n");
                }
                break;
            }
            default:
                printf("�п�ܥ��T���ﶵ�I\n");
        }
    } while (choice != 'c' && choice != 'C');

    return 0;
}
