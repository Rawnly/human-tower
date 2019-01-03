#define INPUT_SIZE 6

int isNumber(char input[]) {
    int i;

    if (input[i] < '0' || input[i] > '9') {
        return 0;
    }

    return 1;
}

int locateChar(char search_param, char search_domain[]) {
    int search_param_location = 1;
    for(int i=0; i<strlen(search_domain) - 1; i++) {
        if (search_domain[i] == search_param) {
            search_param_location = i;
        }
    }

    return search_param_location;
}

int asciiToInteger(char string[]) {
    int integer = 0;

    printf("\n*****************\n");
    printf("%s", string);
    printf("%d", isNumber(string));
    printf("\n*****************\n\n");

    for(int i = 0; i<INPUT_SIZE; i++) {
        if (string[i+1] != '\n' && string[i+1] != '\0') {
            integer = (integer + (string[i] - '0')) * 10;
        } else {
            integer = integer + (string[i] - '0');
        }

        if (string[i+1] == '\n') i = INPUT_SIZE;
    }

    return integer;
}

void errorOrganizer (int error_code) {
    switch (error_code) {
        case 1:
            printf("ERROR CODE %d: incorrect number of participants. \n", error_code);
            break;
        case 2:
            printf("ERROR CODE %d: incorrect number of levels. \n", error_code);
            break;
        case 3:
            printf("ERROR CODE %d: not a possible level.\n", error_code);
            break;
        case 4:
            printf("ERROR CODE %d: the sum is greater than the total number of participants",error_code);
            break;
        default:
            printf("ERROR CODE 0: Unknown Error\n", error_code);
            break;
    }
}