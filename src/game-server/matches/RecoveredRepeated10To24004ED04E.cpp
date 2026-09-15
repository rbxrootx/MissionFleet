extern "C" void Call004ED409();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004ED04E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004ED409
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
