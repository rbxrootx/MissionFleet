extern "C" void Call00583416();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0058344D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 0
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov cx, word ptr [ebp + 0xc]
    __asm push ecx
    __asm push 2
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm push eax
    __asm call Call00583416
    __asm add esp, 0x18
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
