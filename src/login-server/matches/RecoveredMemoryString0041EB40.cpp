// Exact shared VC6 memory/string runtime primitive.
extern "C" __declspec(naked) void Recovered0041EB40()
{
    __asm mov ecx, dword ptr [esp+4]
    __asm test ecx, 3
    __asm je word_loop
    __asm byte_loop:
    __asm mov al, byte ptr [ecx]
    __asm inc ecx
    __asm test al, al
    __asm je byte_zero
    __asm test ecx, 3
    __asm jne byte_loop
    __asm _emit 0x05
    __asm _emit 0x00
    __asm _emit 0x00
    __asm _emit 0x00
    __asm _emit 0x00
    __asm word_loop:
    __asm mov eax, dword ptr [ecx]
    __asm mov edx, 07efefeffh
    __asm add edx, eax
    __asm xor eax, -1
    __asm xor eax, edx
    __asm add ecx, 4
    __asm test eax, 081010100h
    __asm je word_loop
    __asm mov eax, dword ptr [ecx-4]
    __asm test al, al
    __asm je zero0
    __asm test ah, ah
    __asm je zero1
    __asm test eax, 00ff0000h
    __asm je zero2
    __asm test eax, 0ff000000h
    __asm je byte_zero
    __asm jmp short word_loop
    __asm byte_zero:
    __asm lea eax, [ecx-1]
    __asm mov ecx, dword ptr [esp+4]
    __asm sub eax, ecx
    __asm ret
    __asm zero2:
    __asm lea eax, [ecx-2]
    __asm mov ecx, dword ptr [esp+4]
    __asm sub eax, ecx
    __asm ret
    __asm zero1:
    __asm lea eax, [ecx-3]
    __asm mov ecx, dword ptr [esp+4]
    __asm sub eax, ecx
    __asm ret
    __asm zero0:
    __asm lea eax, [ecx-4]
    __asm mov ecx, dword ptr [esp+4]
    __asm sub eax, ecx
    __asm ret
}
