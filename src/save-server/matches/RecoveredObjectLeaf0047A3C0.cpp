// Exact recovered repeated object/value leaf helper.
extern "C" __declspec(naked) void Recovered0047A3C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+14]
    __asm and eax, 0ffffh
    __asm and eax, 7ff0h
    __asm cmp eax, 7ff0h
    __asm jne finite
    __asm xor eax, eax
    __asm jmp done
    __asm finite:
    __asm mov eax, 1
    __asm done:
    __asm pop ebp
    __asm ret
}
