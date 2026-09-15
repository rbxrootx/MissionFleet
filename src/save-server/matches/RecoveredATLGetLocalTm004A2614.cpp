extern "C" void Recovered0046AE40();
// Exact recovered ATL CTime local-time wrapper.
extern "C" __declspec(naked) void Recovered004A2614()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-8], ecx
    __asm cmp dword ptr [ebp+8], 0
    __asm je direct
    __asm mov eax, dword ptr [ebp-8]
    __asm push eax
    __asm call Recovered0046AE40
    __asm add esp, 4
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm jne copy
    __asm xor eax, eax
    __asm jmp done
    __asm copy:
    __asm mov esi, dword ptr [ebp-4]
    __asm mov ecx, 9
    __asm mov edi, dword ptr [ebp+8]
    __asm rep movsd
    __asm mov eax, dword ptr [ebp+8]
    __asm jmp done
    __asm direct:
    __asm mov ecx, dword ptr [ebp-8]
    __asm push ecx
    __asm call Recovered0046AE40
    __asm add esp, 4
    __asm done:
    __asm pop edi
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
