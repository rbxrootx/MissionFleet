
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0047A3F0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xe]
    __asm and eax, 0xffff
    __asm and eax, 0x7ff8
    __asm cmp eax, 0x7ff0
    __asm jne loc_0047A417
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm shl ecx, 0xd
    __asm test ecx, ecx
    __asm jne loc_0047A42E
    __asm cmp dword ptr [ebp + 8], 0
    __asm jne loc_0047A42E
loc_0047A417:
    __asm mov edx, dword ptr [ebp + 0xe]
    __asm and edx, 0xffff
    __asm and edx, 0x7ff8
    __asm cmp edx, 0x7ff8
    __asm jne loc_0047A435
loc_0047A42E:
    __asm mov eax, 1
    __asm jmp loc_0047A437
loc_0047A435:
    __asm xor eax, eax
loc_0047A437:
    __asm pop ebp
    __asm ret
}
