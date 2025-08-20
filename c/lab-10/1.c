#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");  // path may vary

    // Draw shapes
    rectangle(100, 100, 200, 200);   // square
    circle(300, 150, 50);           // circle
    line(50, 250, 200, 300);        // line
    ellipse(400, 250, 0, 360, 80, 40); // ellipse

    getch();
    closegraph();
    return 0;
}
