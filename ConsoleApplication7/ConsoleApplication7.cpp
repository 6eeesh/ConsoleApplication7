#include<iostream>
using namespace std;
class Man {
public:
	int number_of_hands = 2;
public:
	int number_of_eyes = 2;
public:
	void Pick_Up(Mobile_phone& what) {
		cout << "Телефон в руках)" << endl;
	}
public:
	string eye_color = "grean";
public:
	string fur_color = "black";
public:
	string name;
public:
	void Dance() {
		cout << "Микита почав танцювати" << endl;
	}
public:
	void StopDance() {
		cout << "Микита припинив танцювати" << endl;
	}
public:
	void Walk() {
		cout << "Микита пiшов" << endl;
	}
public:
	void DoHomework() {
		cout << "Микита почав виконувати домашне завдання" << endl;
	}
public:
	void Musick(string executor) {
		cout << "Микта почав слухати музику" << executor << endl;
	}
};
class Room {
	int Computer = 1;
public:
	int Doors = 1;
public:
	int Windows = 3;
public:
	int Bed = 1;
public:
	string wallpaper_color = "blue";
public:
	int chairs = 4;
public:
	void OpenTheDoor(Man& who) {
		cout << "Дверi вiдчиняются" << endl;
	}
public:
	void Turn_on_the_computer() {
		cout << "Чутно як ввiмкнувся комп`ютер" << endl;
	}
public:
	void Lie_on_the_bed() {
		cout << "Поздравляю вы легли на кровать!!!" << endl;
	}
public:
	void Open_the_window() {
		cout << "Вiкно вiдчинено" << endl;
	}
public:
	void Sit_on_a_chair() {
		cout << "Стул был с подвохом и вы упали" << endl;
	}

};
class Mobile_phone {
public:
	int sidebotton = 1;
public:
	int front_camera = 1;
public:
	int back_camera = 3;
public:
	string model;
public:
	string collor = "Black";
public:
	void Interaction(Man& who) {
		cout << "Началось взаимодействие с кем-то" << endl;
	}
public:
	double diagonal = 6.06;//дюймiв
public:
	void On_Phone(Man& who) {
		cout << "Телефон почав ввiмкатись" << endl;
	}
public:
	void Do_selfie(Man& who) {
		cout << "Ввiмкнулась фронтальна камера та вилетiла пташка" << endl;
	}
public:
	void make_a_call() {
		cout << "Чутно гудки..." << endl;
	}
public:
	void Play_the_game() {
		cout << "Ввiмкнулась гра" << endl;
	}
public:
	void Post_a_photo(Man& who) {
		cout << "Спочатку треба завантажити iнстаграмчик!" << endl;
	}
};
class Monkey {
public:
	int eyes = 2;
public:
	int hands = 2;
public:
	int ears = 2;
public:
	double wool_length = 0.4;
public:
	string Nick = "Arnold";
public:
	void Eat(string food) {
		cout << "Беремо смачний" << food << "та починаемо iсти" << endl;
	}
public:
	void Noise(Man& who) {
		cout << "Привiтатися" << endl;
	}
public:
	void Sleep() {
		cout << "Арнольд в пошуках мiстечка для дрьому" << endl;
	}
public:
	void Play() {
		cout << "Арнольд починае гратися с друзями" << endl;
	}
public:
	void Dance() {
		cout << "Арнольд показуе дуже класснi рухи" << endl;
	}
};
class Car {
public:
	int Wheels = 6;
public:
	int doors = 4;
public:
	int Number_of_seats = 7;
public:
	string Color = "White";
public:
	int Steering_wheel = 1;
public:
	void We_start_the_engine(Man& who) {
		cout << "Слышен рёв этого зверя" << endl;
	}
public:
	void Need_to_fix_urgently() {
		cout << "На панели засвтился бензин, машине пора кушать" << endl;
	}
public:
	void Fasten_seat_belts() {
		cout << "Машина напоминает нам о мере безопасности, и что нужно присегнуть ремни" << endl;
	}
public:
	void Nead_to_fix() {
		cout << "Машина чуствует себя не хорошо, нужно заехать на СТО" << endl;
	}
public:
	void Ride_back() {
		cout << "Машина начинает движение назад" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	Man m;
	Mobile_phone p;
	Room r;
	Monkey mo;
	Car c;
	m.name = "Nikita";
	p.model = "Iphone";
	r.OpenTheDoor(m);
	m.Pick_Up(p);
	p.Interaction(m);
	p.Do_selfie(m);
	mo.Noise(m);
	mo.Dance();
	c.We_start_the_engine(m);
	c.Fasten_seat_belts();
	c.Ride_back();
	p.Post_a_photo(m);
}