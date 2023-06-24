/*
    Question:

        What can be done using one type of loop
        can also be done the other two types of
        loops - True of False.

    Answer:
        True

*/

int main() {

    int forNum =5, whileNum =5;


    for(int i = 1; i<=10;i++) {
        printf("For Num %d X %d = %d\n", forNum, i, forNum*i);
    }

    printf("\n");

    int j = 1;
    while(j<=10) {
        printf("While Num %d X %d = %d\n", whileNum, j, whileNum*j);
        j++;
    }


    /*
        OUTPUT:
            For Num 5 X 1 = 5
            For Num 5 X 2 = 10
            For Num 5 X 3 = 15
            For Num 5 X 4 = 20
            For Num 5 X 5 = 25
            For Num 5 X 6 = 30
            For Num 5 X 7 = 35
            For Num 5 X 8 = 40
            For Num 5 X 9 = 45
            For Num 5 X 10 = 50

            While Num 5 X 1 = 5
            While Num 5 X 2 = 10
            While Num 5 X 3 = 15
            While Num 5 X 4 = 20
            While Num 5 X 5 = 25
            While Num 5 X 6 = 30
            While Num 5 X 7 = 35
            While Num 5 X 8 = 40
            While Num 5 X 9 = 45
            While Num 5 X 10 = 50
    */


    return 0;
}




