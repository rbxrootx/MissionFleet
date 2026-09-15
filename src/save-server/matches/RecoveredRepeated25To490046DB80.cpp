extern "C" void Call0046DA80();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0046DB80()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm mov eax, dword ptr [ebp + 0x14]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call0046DA80
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm pop ebp
    __asm ret
}
