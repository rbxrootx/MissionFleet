extern "C" void Call0042D278();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0042D319()
{
    __asm mov eax, dword ptr [esp + 4]
    __asm mov edx, dword ptr [ecx + 0x10]
    __asm mov dword ptr [eax], edx
    __asm dec dword ptr [ecx + 0xc]
    __asm mov dword ptr [ecx + 0x10], eax
    __asm jne loc_0042D32F
    __asm call Call0042D278
loc_0042D32F:
    __asm ret 4
}
