// Exact recovered conditional table probe.
extern "C" void Probe0049A1E0();
extern "C" void Probe0049B450();
extern "C" __declspec(naked) void Recovered0049AEF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm lea eax, dword ptr [ebp+8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm call Probe0049A1E0
    __asm and eax, 0ffh
    __asm test eax, eax
    __asm je failed
    __asm mov ecx, dword ptr [ebp+12]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm push edx
    __asm mov ecx, dword ptr [ebp-4]
    __asm call Probe0049B450
    __asm mov al, 1
    __asm jmp done
    __asm failed:
    __asm xor al, al
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
