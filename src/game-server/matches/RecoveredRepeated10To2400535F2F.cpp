extern "C" void Call00535F46();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered00535F2F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm push eax
    __asm call Call00535F46
    __asm add esp, 4
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
