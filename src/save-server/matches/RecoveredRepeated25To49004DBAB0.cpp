extern "C" void Call004DBA90();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004DBAB0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004DBA90
    __asm add esp, 4
    __asm test eax, eax
    __asm je loc_004DBACF
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 0xc]
    __asm mov dword ptr [ebp - 4], edx
    __asm jmp loc_004DBAD7
loc_004DBACF:
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 4], ecx
loc_004DBAD7:
    __asm mov eax, dword ptr [ebp - 4]
    __asm and eax, 0x40
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
