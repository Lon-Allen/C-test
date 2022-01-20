#include <stdio.h>
#include <math.h>



int main(int argc, char const *argv[])
{
    void print_hello();
    void print_welcome();
    void print_triangle();
    void print_lozenge();
    void print_word_blank();
    int calculate(int fahr);
    
    int result = calculate(100);
    int calculate_height(int length,int time,int g);
    printf("\n  %d",result);
    int height = calculate_height(100,3,10);
    printf("\nheight:%d",height);
    void deal_input();
    deal_input();
    // print_triangle();
    // print_hello();
    // print_welcome();
    // print_lozenge();
    // print_word_blank();
    return 0;
}
void deal_input(){
    float calculate_average(int a,int b,int c);
    int score_math = 0,score_com = 0, score_eng = 0;
    printf("请输入数学成绩：");
    scanf("%d",&score_math);
    printf("\n请输入英语成绩：");
    scanf("%d",&score_eng);
    printf("\n请输入计算机专业课成绩：");
    scanf("%d",&score_com);
    printf("\n");
    float result = calculate_average(score_math,score_eng,score_com);
    printf("平均分为：%3.1f\n",result);
}
float calculate_average(int score_math,int score_eng,int score_comp){
    float avg = 0;

    avg = (score_math+score_eng+score_comp)/3.0;

   
    return avg;
}
int calculate_height(int length,int time,int g){
    int height = 0;
    height = g*pow(time,2)/2;

    return height;
}
int calculate(int fahr){
    int celsius = 0;
    celsius = 5*(fahr - 32)/9;
    return celsius;

}
void print_word_blank(){
    printf("************\n   Welcome\n**********");
}
void print_welcome(){
    printf("Welcome to You!");
}
void print_triangle(){
    printf("****\n");
    printf("***\n");
    printf("**\n");
    printf("*\n");
}
void print_lozenge(){
    printf(" A\n");
    printf("A A\n");
    printf(" A\n");
}
void print_hello(){


    printf("hello,world!");

}