extern "C" void Call004556C0();
extern "C" void Call00457060();
extern "C" void Call00457090();
extern "C" void Call004571A0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00455680()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00457090
    __asm test eax, eax
    __asm je loc_004556AE
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004556C0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00457060
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 4
    __asm call Call004571A0
loc_004556AE:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
