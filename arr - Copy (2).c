#include<stdio.h>
struct abc{
    int id;
    char name[10];
    float age;
    }v1,v2,v3;
int main()
{
    struct abc v1={20220844,"niharika",21.3};#include<stdio.h>
struct abc{
    int id;
    char name[10];
    float age;
    }v1,v2,v3;
int main()
{
    struct abc v1={20220844,"niharika",21.3};
     struct abc v2={20220900,"gangadhar",53.11};
      struct abc v3={20220100,"Deppika",44.4};

printf("%d\n%s\n%f\n\n%d\n%s\n%f\n\n%d\n%s\n%f\n\n",v1.id,v1.name,v1.age,v2.id,v2.name,v2.age,v3.id,v3.name,v3.age);
}

