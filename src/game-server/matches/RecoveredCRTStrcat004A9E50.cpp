// Exact shared optimized VC6 strcat implementation.
extern "C" __declspec(naked) void Recovered004A9E50()
{
    __asm mov ecx, dword ptr [esp+4]
    __asm push edi
    __asm test ecx, 3
    __asm je scan_words
    __asm scan_bytes:
    __asm mov al, byte ptr [ecx]
    __asm inc ecx
    __asm test al, al
    __asm je end1
    __asm test ecx, 3
    __asm jne scan_bytes
    __asm scan_words:
    __asm mov eax, dword ptr [ecx]
    __asm mov edx, 07efefeffh
    __asm add edx, eax
    __asm xor eax, 0ffffffffh
    __asm xor eax, edx
    __asm add ecx, 4
    __asm test eax, 081010100h
    __asm je scan_words
    __asm mov eax, dword ptr [ecx-4]
    __asm test al, al
    __asm je end4
    __asm test ah, ah
    __asm je end3
    __asm test eax, 00ff0000h
    __asm je end2
    __asm test eax, 0ff000000h
    __asm je end1
    __asm jmp scan_words
    __asm end1:
    __asm lea edi, [ecx-1]
    __asm jmp source
    __asm end2:
    __asm lea edi, [ecx-2]
    __asm jmp source
    __asm end3:
    __asm lea edi, [ecx-3]
    __asm jmp source
    __asm end4:
    __asm lea edi, [ecx-4]
    __asm source:
    __asm mov ecx, dword ptr [esp+0ch]
    __asm test ecx, 3
    __asm je copy_words
    __asm copy_bytes:
    __asm mov dl, byte ptr [ecx]
    __asm inc ecx
    __asm test dl, dl
    __asm je copy_zero
    __asm mov byte ptr [edi], dl
    __asm inc edi
    __asm test ecx, 3
    __asm jne copy_bytes
    __asm jmp copy_words
    __asm store_word:
    __asm mov dword ptr [edi], edx
    __asm add edi, 4
    __asm copy_words:
    __asm mov edx, 07efefeffh
    __asm mov eax, dword ptr [ecx]
    __asm add edx, eax
    __asm xor eax, 0ffffffffh
    __asm xor eax, edx
    __asm mov edx, dword ptr [ecx]
    __asm add ecx, 4
    __asm test eax, 081010100h
    __asm je store_word
    __asm test dl, dl
    __asm je copy_zero
    __asm test dh, dh
    __asm je copy_word
    __asm test edx, 00ff0000h
    __asm je copy_two
    __asm test edx, 0ff000000h
    __asm je copy_four
    __asm jmp store_word
    __asm copy_four:
    __asm mov dword ptr [edi], edx
    __asm mov eax, dword ptr [esp+8]
    __asm pop edi
    __asm ret
    __asm copy_two:
    __asm mov word ptr [edi], dx
    __asm mov eax, dword ptr [esp+8]
    __asm mov byte ptr [edi+2], 0
    __asm pop edi
    __asm ret
    __asm copy_word:
    __asm mov word ptr [edi], dx
    __asm mov eax, dword ptr [esp+8]
    __asm pop edi
    __asm ret
    __asm copy_zero:
    __asm mov byte ptr [edi], dl
    __asm mov eax, dword ptr [esp+8]
    __asm pop edi
    __asm ret
}
