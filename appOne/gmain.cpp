#include"libOne.h"

class BABY {	//静的確保
public:
	BABY() {	//コンストラクタはclassと同じ名前voidもつけない
		textSize(200);
		text("Hello", 700, 300);
	}

	~BABY() {	//デストラクタ。インスタンスがなくなったとき呼び出される
		textSize(200);
		text("GoodBye", 700, 600);
	}
};
void func() {	//関数の中で使うことで関数が終わったら消える
	BABY baby;  //インスタンス。ここで自動的に呼び出される(コンストラクタ)
}

void gmain() {
	window(1920, 1080, full);
	func();

	while (notQuit) {

	}
}

