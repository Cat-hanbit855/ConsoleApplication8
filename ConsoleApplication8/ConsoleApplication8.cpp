#include <stdio.h>
#include <time.h>

#include <bangtal.h>

SceneID scene1;
ObjectID a[8];
ObjectID white, startButton;



int aX[8] = { 50, 430, 860, 50, 430, 860, 50, 430 };
int Y[8] = { 480, 480, 480, 240, 240, 240, 0, 0 };

void startGame() {
	hideObject(startButton);
	showObject(a[0]);
	showObject(a[1]);
	showObject(a[2]);
	showObject(a[3]);
	showObject(a[4]);
	showObject(a[5]);
	showObject(a[6]);
	showObject(a[7]);
	showObject(white);
}

void endGame() {
	setObjectImage(startButton, "restart.png");
	showObject(startButton);
}
// 게임 랜덤- 흰색칸 0 옆에 바꿀수 있는 흰칸 있으면 1 옆에 흰칸이 없으면 2
// 2차원 배열(?) 을 통해서 위아래 양옆을 확인해보는 if문을 만들고 
// 만약 0을 기준으로 1이 옆에 있으면 움직이도록 배치한다.
//void random() {

//}
// 함수를 여러개 만들어서 흰색 분할파일과 다른 파일을 변경하게 만들자.
// 잘못됨.
void check1() {
	setObjectImage(white, "과제-001.jpg");
	showObject(white);
}
void check2() {
	setObjectImage(white, "과제-002.jpg");
	showObject(white);
}
void check3() {
	setObjectImage(white, "과제-003.jpg");
	showObject(white);
}
void check4() {
	setObjectImage(white, "과제-004.jpg");
	showObject(white);
}
void check5() {
	setObjectImage(white, "과제-005.jpg");
	showObject(white);
}
void check6() {
	setObjectImage(white, "과제-006.jpg");
	showObject(white);
}
void check7() {
	setObjectImage(white, "과제-007.jpg");
	showObject(white);
}
void check8() {
	setObjectImage(white, "과제-008.jpg");
	showObject(white);
}
void check9() {
	setObjectImage(a[0], "white.png");
	showObject(a[0]);
}
void check10() {
	setObjectImage(a[1], "white.png");
	showObject(a[1]);
}
void check11() {
	setObjectImage(a[2], "white.png");
	showObject(a[2]);
}
void check12() {
	setObjectImage(a[3], "white.png");
	showObject(a[3]);
}
void check13() {
	setObjectImage(a[4], "white.png");
	showObject(a[4]);
}
void check14() {
	setObjectImage(a[5], "white.png");
	showObject(a[5]);
}
void check15() {
	setObjectImage(a[6], "white.png");
	showObject(a[6]);
}
void check16() {
	setObjectImage(a[7], "white.png");
	showObject(a[7]);
}
// check 함수 2개를 통해서 이미지 2개를 서로 바꾼다.
// 이미지가 9번 파일로 겹쳐짐
void mouseCallback(ObjectID object, int x, int y, MouseAction aciton) {
	if (object == startButton) {
		startGame();
	}
	else if (object == a[0]) {
		check1();
		check9();
	}
	else if (object == a[1]) {
		check2();
		check10();
	}
	else if (object == a[2]) {
		check3();
		check11();
	}
	else if (object == a[3]) {
		check4();
		check12();
	}
	else if (object == a[4]) {
		check5();
		check13();
	}
	else if (object == a[5]) {
		check6();
		check14();
	}
	else if (object == a[6]) {
		check7();
		check15();
	}
	else if (object == a[7]) {
		check8();
		check16();
	}
}

int main() {

	setMouseCallback(mouseCallback);

	scene1 = createScene("흰색", "bigwhite.png");

	startButton = createObject("start.png");
	locateObject(startButton, scene1, 600, 50);
	showObject(startButton);

	a[0] = createObject("과제-001.jpg");
	locateObject(a[0], scene1, 50, 480);

	a[1] = createObject("과제-002.jpg");
	locateObject(a[1], scene1, 430, 480);

	a[2] = createObject("과제-003.jpg");
	locateObject(a[2], scene1, 860, 480);

	a[3] = createObject("과제-004.jpg");
	locateObject(a[3], scene1, 50, 240);

	a[4] = createObject("과제-005.jpg");
	locateObject(a[4], scene1, 430, 240);

	a[5] = createObject("과제-006.jpg");
	locateObject(a[5], scene1, 860, 240);

	a[6] = createObject("과제-007.jpg");
	locateObject(a[6], scene1, 50, 0);

	a[7] = createObject("과제-008.jpg");
	locateObject(a[7], scene1, 430, 0);

	white = createObject("white.png");
	locateObject(white, scene1, 860, 0);

	startGame(scene1);
}