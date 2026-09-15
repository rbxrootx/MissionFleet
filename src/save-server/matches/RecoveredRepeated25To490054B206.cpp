extern "C" void Call0054B2B2();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0054B206()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 4], 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx], 0
    __asm push 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054B2B2
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
