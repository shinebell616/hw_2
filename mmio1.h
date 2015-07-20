#include"stdafx.h"



bool create_very_big_file(_In_ const wchar_t* file_path, _In_ uint32_t size_in_mb);


bool
file_copy_using_read_write(
_In_ const wchar_t* src_file,
_In_ const wchar_t* dst_file
);

bool
file_copy_using_memory_map(
_In_ const wchar_t* src_file,
_In_ const wchar_t* dst_file
);

