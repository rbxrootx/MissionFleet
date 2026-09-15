// Exact recovered math/debug structure leaf.
extern "C" __declspec(naked) void Recovered004BCF10()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+14]
    __asm and eax, 0ffffh
    __asm and eax, 7ff0h
    __asm sar eax, 4
    __asm mov word ptr [ebp-4], ax
    __asm mov cx, word ptr [ebp-4]
    __asm sub cx, 3feh
    __asm mov word ptr [ebp-4], cx
    __asm movsx eax, word ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
