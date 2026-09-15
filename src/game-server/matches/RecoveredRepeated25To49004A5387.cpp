extern "C" void Call004A5339();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004A5387()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004A5339
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x20]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x20]
    __asm mov edx, dword ptr [eax]
    __asm call dword ptr [edx + 0x84]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
