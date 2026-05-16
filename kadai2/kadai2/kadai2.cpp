
#include <iostream>

int maxscore = 0;
float ave;

struct StudentData
{
    char name[10];
    int score;
};

StudentData no1student;

void Point(StudentData studentdata) {

    if (studentdata.score > maxscore) {
        no1student = studentdata;
        maxscore = studentdata.score;
    }
    
    ave += studentdata.score;
}

int main()
{
    StudentData student1{ "player",20 };
    Point(student1);

    StudentData student2{ "enemy",60 };
    Point(student2);

    StudentData student3{ "monky",99 };
    Point(student3);

    StudentData student4{ "lion",2 };
    Point(student4);

    StudentData student5{ "slime",2000 };
    Point(student5);

    ave /= 5;

    printf("平均点:%f\n",ave);
    printf("最高点:%d\n", maxscore);
    printf("最高得点者:%s\n", no1student.name);
}