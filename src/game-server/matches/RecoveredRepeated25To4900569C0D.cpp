extern "C" void Call0057013F();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00569C0D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 0x14]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0057013F
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
