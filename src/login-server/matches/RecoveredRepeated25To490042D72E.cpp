extern "C" void Call0042D68D();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0042D72E()
{
    __asm mov eax, dword ptr [esp + 4]
    __asm mov edx, dword ptr [ecx + 0x10]
    __asm mov dword ptr [eax], edx
    __asm dec dword ptr [ecx + 0xc]
    __asm mov dword ptr [ecx + 0x10], eax
    __asm jne loc_0042D744
    __asm call Call0042D68D
loc_0042D744:
    __asm ret 4
}
