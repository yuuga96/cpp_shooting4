#include"libOne.h"

class BABY {	//�ÓI�m��
public:
	BABY() {	//�R���X�g���N�^��class�Ɠ������Ovoid�����Ȃ�
		textSize(200);
		text("Hello", 700, 300);
	}

	~BABY() {	//�f�X�g���N�^�B�C���X�^���X���Ȃ��Ȃ����Ƃ��Ăяo�����
		textSize(200);
		text("GoodBye", 700, 600);
	}
};
void func() {	//�֐��̒��Ŏg�����ƂŊ֐����I������������
	BABY baby;  //�C���X�^���X�B�����Ŏ����I�ɌĂяo�����(�R���X�g���N�^)
}

void gmain() {
	window(1920, 1080, full);
	func();

	while (notQuit) {

	}
}

