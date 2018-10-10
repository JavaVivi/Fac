package td4.segment2;

public class TestSegment {
	public static void main(String[] args) {
		Segment s1 = new Segment(3, 5, 2, 0);
		System.out.println(s1);
		s1.move(5, 4);
		System.out.println(s1);
		s1.getLength();
		System.out.println(s1);
	}
}
