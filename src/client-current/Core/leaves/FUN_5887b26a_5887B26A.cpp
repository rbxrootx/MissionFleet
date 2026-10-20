// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B26A .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_5887b26a_5887B26A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push edi
        xor esi, esi
        mov edi, 0e3h
        lea eax, [edi + esi]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 8]
        mov ecx, eax
        sar ecx, 1
        sub edx, dword ptr [ecx*8 + 588ce3b8h]
        ; Exact mapped bytes 74 19: je 0x5887b2a7
        __asm _emit 0x74
        __asm _emit 0x19
        test edx, edx
        lea eax, [ecx - 1]
        cmovns eax, edi
        mov edi, eax
        lea eax, [ecx + 1]
        cmovns esi, eax
        cmp esi, edi
        ; Exact mapped bytes 7E D6: jle 0x5887b278
        __asm _emit 0x7e
        __asm _emit 0xd6
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x5887b2a9
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, ecx
        pop edi
        pop esi
        pop ebp
        ret
    }
}
