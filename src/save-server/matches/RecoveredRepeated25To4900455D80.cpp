extern "C" void Call00457090();
extern "C" void Call004570A0();
extern "C" void Call004571E0();
extern "C" void Call00457370();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00455D80()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00457090
    __asm test eax, eax
    __asm je loc_00455DAD
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 4
    __asm call Call004571E0
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004570A0
    __asm push eax
    __asm call Call00457370
loc_00455DAD:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
