extern "C" void Call0056C554();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0056C5AE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm cmp dword ptr [ebp + 8], 0
    __asm je loc_0056C5C9
    __asm push 1
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0056C554
loc_0056C5C9:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
