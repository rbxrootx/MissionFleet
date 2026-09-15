extern "C" void Call00567760();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0056793B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm cmp dword ptr [ebp + 8], 0
    __asm je loc_00567952
    __asm push 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00567760
loc_00567952:
    __asm mov eax, 1
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
