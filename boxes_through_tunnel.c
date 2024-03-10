#include <stdio.h>
#define maxHeight 41
struct Box {
 int length, width, height;
};
int volume(struct Box box) {
 return box.length*box.width*box.height;
}
int lower(struct Box box) {
 return box.height < maxHeight;
}
int main()
{
 int n;
 printf("Enter number of boxes: ");
 scanf("%d", &n);
 struct Box boxes[100];
 printf("Enter %d boxes dimensions\n", n);
 int i;
 for (i = 0; i < n; i++) {
 printf("Enter length, width and height of Box - %d: ", i + 1);
 scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
 }
 printf("Areas of the Boxes that can passthrough the tunnel\n");
 for (i = 0; i < n; i++) {
 if (lower(boxes[i]))
 printf("%d\n", volume(boxes[i]));
 }
 return 0;
}
