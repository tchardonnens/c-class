#include <stdio.h>

struct point {
	double x;
	double y;
};

typedef struct point Point;

struct segment {
	Point p1;
	Point p2;
};

typedef struct segment Segment;

Point createPoint(double x, double y){
	Point p;
	p.x = x;
	p.y = y;
	return p;
}

void showPoint(Point p){
	printf("x = %f y = %f\n", p.x, p.y);
}

Segment createSegment(Point p1, Point p2){
	Segment s;
	s.p1 = p1;
	s.p2 = p2;
	return s;
}

void showSegment(Segment s){
	showPoint(s.p1);
	showPoint(s.p2);
}

int main(void){
	Point p1 = createPoint(2.5, -6.9);
	Point p2 = createPoint(5, 9);
	Segment s = createSegment(p1, p2);
	showSegment(s);
	return 0;
}

