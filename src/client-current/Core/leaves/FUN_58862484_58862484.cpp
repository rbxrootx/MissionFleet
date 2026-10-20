// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862484 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58862484_58862484() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, 190h
        push edi
        lea ecx, [eax - 1]
        add eax, 12bh
        cdq
        idiv esi
        push 64h
        mov esi, eax
        mov eax, ecx
        cdq
        pop edi
        idiv edi
        pop edi
        sub esi, eax
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add eax, -11h
        add eax, esi
        pop esi
        pop ebp
        ret
    }
}
