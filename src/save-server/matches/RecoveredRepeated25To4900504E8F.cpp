extern "C" void Call00504BA0();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00504E8F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 1
    __asm lea eax, [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Call00504BA0
    __asm pop ebp
    __asm ret 0xc
}
