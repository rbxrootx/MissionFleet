extern "C" void Call00519580();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0051955D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 0x88
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00519580
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
