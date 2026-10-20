// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006ECE0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_1006ece0_1006ECE0() {
    __asm {
        push ebx
        push esi
        push edi
        xor edi, edi
        lea ebx, [ecx + 88h]
        mov dword ptr [ebx], 0
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov esi, dword ptr [ecx + edi + 0f7ch]
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x1006ed15
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 0ch]
        push 0
        ; Exact mapped bytes E8 E2 AF F9 FF: call 0x10009cf0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xaf
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 75 EF: jne 0x1006ed04
        __asm _emit 0x75
        __asm _emit 0xef
        add edi, 10h
        add ebx, 4
        cmp edi, 80h
        ; Exact mapped bytes 7C C8: jl 0x1006eceb
        __asm _emit 0x7c
        __asm _emit 0xc8
        pop edi
        pop esi
        pop ebx
        ret
    }
}
