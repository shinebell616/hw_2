// MMIO.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "StopWatch.h"
#include "mmio1.h"


int _tmain(int argc, _TCHAR* argv[])
{
	_ASSERTE(create_very_big_file(L"d:\\big.txt", 5120));

	StopWatch sw;
	sw.Start();
	print("[read_write] 복사중...");
	_ASSERTE(file_copy_using_read_write(L"d:\\big.txt", L"d:\\big2.txt"));
	sw.Stop();
	print("[read_write] time elapsed = %f", sw.GetDurationMilliSecond());


	StopWatch sw2;
	sw2.Start();
	print("[memory_map] 복사중...");
	_ASSERTE(file_copy_using_memory_map(L"d:\\big.txt", L"d:\\big3.txt"));
	sw2.Stop();
	print("[memory_map] time elapsed = %f", sw2.GetDurationMilliSecond());



	_getch();
	return 0;
}

