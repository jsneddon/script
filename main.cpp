//really slow to compile example preprocessor boom!
//make a 400 meg is exe

#define a "xxxxxxxxxxx"
#define b a a a a a a a
#define c b b b b b b b
#define d c c c c c c c
#define e d d d d d d d
#define f e e e e e e e
#define g f f f f f f f
#define h g g g g g g g
#define i h h h h h h h
#define j i i i i i i i
const char*buff=j;

int main(void){

    return 0;
}
