import java.util.Scanner;

class Room {
    float length;
    float width;

    void input() {
        Scanner sc = new Scanner(System.in);
        length = sc.nextFloat();
        width = sc.nextFloat();
    }

    void area() {
        System.out.println("Area = " + (length * width));
    }
}

public class Main {
    public static void main(String[] args) {
        Room r = new Room();
        r.input();
        r.area();
    }
}
