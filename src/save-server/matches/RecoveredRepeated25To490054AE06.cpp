extern "C" void Call0054AA07();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0054AE06()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xc
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054AA07
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
