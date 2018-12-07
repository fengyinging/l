using namespace std;
#define_for(i,a,b)  for(int i=(a);i<(b);++i)
const int N=10000000;
struct TS{
    int a,b,c;
};
inline bool cmp(const TS& t1, const TS& t2){
    if(t1.a!=t2.a) return t1.a<t2.a;
    if(t1.b!=t2.b) return t1.b<t2.b;
    return t1.c<=t2.c;
}
int cmp4qsort(const void *a,const void *b){
    TS *t1=(TS*)a,*t2=(TS*)b;
    if(t1->a!=t2->a) return t1->a-t2->a;
    if(t1->b!=t2->b) return t1->b-t2->b;
    return t1->c-t2->c;
}
