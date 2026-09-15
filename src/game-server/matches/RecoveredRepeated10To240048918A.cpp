
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered0048918A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x14
}
