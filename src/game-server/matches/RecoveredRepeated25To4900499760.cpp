extern "C" void Call0049AA70();
extern "C" void Call0049AA80();
extern "C" void Call0049ABC0();
extern "C" void Call0049AD50();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00499760()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0049AA70
    __asm test eax, eax
    __asm je loc_0049978D
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 4
    __asm call Call0049ABC0
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0049AA80
    __asm push eax
    __asm call Call0049AD50
loc_0049978D:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
