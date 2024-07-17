#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int install_req() {
    system("sudo apt install nmap nuclei assetfinder subfinder finalrecon lolcat");
    system("pip3 install requests colorama");
}


int main(void) {
    install_req();
    system("printf '\033c'");

    

    printf("   /$$$$$$   /$$$$$$  /$$   /$$ /$$   /$$ /$$$$$$$   /$$$$$$  \n");
    printf("  /$$__  $$ /$$    $$| $$  /$$/| $$  | $$| $$__  $$ /$$    $$ \n");
    printf(" | $$  |__/| $$    $$| $$ /$$/ | $$  | $$| $$  | $$| $$    $$ \n");
    printf(" |  $$$$$$ | $$$$$$$$| $$$$$/  | $$  | $$| $$$$$$$/| $$$$$$$$ \n");
    printf("  |____  $$| $$__  $$| $$  $$  | $$  | $$| $$__  $$| $$__  $$ \n");
    printf("  /$$  | $$| $$  | $$| $$_  $$ | $$  | $$| $$  | $$| $$  | $$ \n");
    printf(" |  $$$$$$/| $$  | $$| $$ |  $$|  $$$$$$/| $$  | $$| $$  | $$ \n");
    printf(" |______/ |__/  |__/|__/  |___/ |______/ |__/  |__/|__/  |__/ \n");
    printf("                                    Maden by WIGIL and Akiyama\n");


    while(true)
    {
        printf("            Main Menu\n");
        printf("1. Pentest Recon\n");
        printf("2. Doxing\n");
        printf("3. DoS\n");
        printf("4. Exit\n");


        int choice;
        printf("Make Ur Choice(etc: '1'): ");
        scanf("&i", &choice);

        if(choice == 1){
            system("printf '\033c'");
            while(true) {
                int penChoice;
                printf("                Pentest Recon Menu");
                printf("                1. Start Recon");
                printf("                2. Back To Menu");
                scanf("Choice: ", &penChoice);
                if(penChoice == 1){
                    char *targetURL;
                    printf("Enter target url: ");
                    scanf("%s", &targetURL);
                    // Recon start
                    printf("%s", targetURL);
                    // system("nmap -sV -Pn -O -sC --script vulners -n -oX result.xml %s\n", targetURL);
                }
            }
        }
        
    }
    


    return 0;
}