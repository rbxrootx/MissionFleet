extern "C" void Call005828D1();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00583416()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm lea eax, [ebp + 0x20]
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x1c]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x18]
    __asm push eax
    __asm mov cx, word ptr [ebp + 0x14]
    __asm push ecx
    __asm mov dx, word ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call005828D1
    __asm mov dword ptr [ebp - 4], 0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
