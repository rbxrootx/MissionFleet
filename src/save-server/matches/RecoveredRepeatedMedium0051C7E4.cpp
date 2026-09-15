extern "C" void Call0051BB24();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered0051C7E4()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call0051BB24
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm and ecx, 0xffff
    __asm cmp eax, ecx
    __asm jle loc_0051C80F
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call0051BB24
    __asm mov dword ptr [ebp - 0xc], eax
    __asm jmp loc_0051C81B
loc_0051C80F:
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm and edx, 0xffff
    __asm mov dword ptr [ebp - 0xc], edx
loc_0051C81B:
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm and ecx, 0xffff
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm push 0x1a0
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0xa8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
