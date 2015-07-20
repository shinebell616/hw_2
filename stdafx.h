// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 및 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include<crtdbg.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdint.h>
#include<Strsafe.h>
#include<string.h>
#include<handleapi.h>



#include <conio.h>



// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
bool is_file_existsW(_In_ const wchar_t* file_path);
void print(_In_ const char* fmt, _In_ ...);
wchar_t* get_current_directory(void);
