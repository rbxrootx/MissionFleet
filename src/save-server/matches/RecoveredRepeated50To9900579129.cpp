extern "C" void Call00578ACB();
extern "C" void Call00578BBF();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00579129()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 4], 0
    __asm je loc_00579140
    __asm mov eax, 1
    __asm jmp loc_00579166
loc_00579140:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00578BBF
    __asm test eax, eax
    __asm jne loc_00579164
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00578ACB
    __asm cmp dword ptr [eax + 0xac], 0
    __asm je loc_00579164
    __asm mov eax, 1
    __asm jmp loc_00579166
loc_00579164:
    __asm xor eax, eax
loc_00579166:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
