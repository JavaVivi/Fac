package td4.segment2;

import java.util.Arrays;

public class Segment {
	private Point[] points;
	private double l;
	
	

	public Segment(int x1, int y1, int x2, int y2) {
		points = new Point[2];
		points[0] = new Point(x1,y1);
		points[1] = new Point(x2,y2);
		
	}





	@Override
	public String toString() {
		return "Segment [points=" + Arrays.toString(points) + ", Longueur=" + l + "]";
	}





	public void move(int dx, int dy) {
		points[0].setX(points[0].getX() + dx);
		points[0].setY(points[0].getY() + dy);

		points[1].setX(points[1].getX() + dx);
		points[1].setY(points[1].getY() + dy);

	}
	
	public double getLength() {
		int x1 = points[0].getX();
		int x2 = points[1].getX();
		
		int y1 = points[0].getY();
		int y2 = points[1].getY();
		
		return l = Math.sqrt(Math.pow((x1-x2),2) + Math.pow((y1-y2), 2));
	}
}
