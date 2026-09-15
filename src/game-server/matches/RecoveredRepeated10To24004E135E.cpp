extern "C" void Call004E1371();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004E135E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm call Call004E1371
    __asm pop ebp
    __asm ret 8
}
