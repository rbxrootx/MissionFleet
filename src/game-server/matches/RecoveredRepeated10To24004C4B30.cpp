extern "C" void Call004C4880();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004C4B30()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov cx, word ptr [ebp + 8]
    __asm push ecx
    __asm call Call004C4880
    __asm add esp, 8
    __asm pop ebp
    __asm ret
}
