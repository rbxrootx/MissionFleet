extern "C" void Call0042F23F();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0040B000()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0042F23F
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
