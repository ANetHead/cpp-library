jtest(){
	cout<<"Function Included Successfully";
}

struct Point{
	float x,y;
};

float slope_of_line(Point p1,Point p2){
	return (p2.y-p1.y)/(p2.x-p1.x);
}

int line_orientation(Point p1,Point p2,Point p3){
	float m=slope_of_line(p1,p2)-slope_of_line(p2,p3);
	if(m==0)
		return 0;
	else if(m>0)
		return 1;
	else
		return -1;
		
}
