
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004BD7A0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xe]
    __asm and eax, 0xffff
    __asm and eax, 0x7ff8
    __asm cmp eax, 0x7ff0
    __asm jne loc_004BD7C7
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm shl ecx, 0xd
    __asm test ecx, ecx
    __asm jne loc_004BD7DE
    __asm cmp dword ptr [ebp + 8], 0
    __asm jne loc_004BD7DE
loc_004BD7C7:
    __asm mov edx, dword ptr [ebp + 0xe]
    __asm and edx, 0xffff
    __asm and edx, 0x7ff8
    __asm cmp edx, 0x7ff8
    __asm jne loc_004BD7E5
loc_004BD7DE:
    __asm mov eax, 1
    __asm jmp loc_004BD7E7
loc_004BD7E5:
    __asm xor eax, eax
loc_004BD7E7:
    __asm pop ebp
    __asm ret
}
