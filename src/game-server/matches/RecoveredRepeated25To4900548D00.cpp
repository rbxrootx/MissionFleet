extern "C" void Call00548095();
extern "C" void Call00548D30();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00548D00()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00548D30
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_00548D22
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call00548095
loc_00548D22:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
