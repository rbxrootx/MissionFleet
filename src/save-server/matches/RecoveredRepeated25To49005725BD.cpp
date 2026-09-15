extern "C" void Call00578AEF();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005725BD()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 0x14]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00578AEF
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
