// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B2AD .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5887b2ad_5887B2AD() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        xor edi, edi
        mov ebx, 0e3h
        lea eax, [ebx + edi]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        push 55h
        push dword ptr [esi*8 + 588cf4d8h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 D7 FF FF: call 0x58878a10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5887b2f5
        __asm _emit 0x74
        __asm _emit 0x17
        lea ecx, [esi - 1]
        cmovns ecx, ebx
        mov ebx, ecx
        lea ecx, [esi + 1]
        cmovns edi, ecx
        cmp edi, ebx
        ; Exact mapped bytes 7E CC: jle 0x5887b2bc
        __asm _emit 0x7e
        __asm _emit 0xcc
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x5887b2fc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [esi*8 + 588cf4dch]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
