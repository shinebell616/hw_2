// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �� ������Ʈ ���� ���� ������
// ��� �ִ� ���� �����Դϴ�.
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



// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
bool is_file_existsW(_In_ const wchar_t* file_path);
void print(_In_ const char* fmt, _In_ ...);
wchar_t* get_current_directory(void);
