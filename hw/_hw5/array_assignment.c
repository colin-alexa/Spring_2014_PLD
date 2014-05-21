int main(void){
  struct{
    int f;
    struct{
      char g;
    } h;
  } c;
  char *a;
  char b[20];
  a = b;
  c.h.g = '\n';
}