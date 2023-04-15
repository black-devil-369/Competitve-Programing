import java.io.*;
class Bicycle{
	private int gear;
	private int speed;
	// creating a Bicycle Constructor
	public Bicycle(int g,int s){
		this.gear = g;
		this.speed = s;
	}
	public void applyBrake(int decrement){
		speed -= decrement;
	}
	public void speedUp(int increment){
		speed+=increment;
	}
	public void toString(){
		return ("No of Gears "+gear+"\n"
	            +"Speed of Bicycle is "+speed);
	}
}

// declare subclass
class MountainBike extends Bicycle{
	private int seatHeight;
}
class Inheritance2{
	public static void main(String[] args){
		
	}
}