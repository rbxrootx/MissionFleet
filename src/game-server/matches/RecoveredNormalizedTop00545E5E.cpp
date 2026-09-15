extern "C" void Call005063C8();
extern "C" void *Data005C7E48;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00545E5E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Data005C7E48
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call005063C8
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [ecx], eax
    __asm mov eax, dword ptr [ebp + 8]
    __asm pop ebp
    __asm ret 8
}
