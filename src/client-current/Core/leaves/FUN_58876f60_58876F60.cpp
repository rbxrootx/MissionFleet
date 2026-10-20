// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58876F60 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58876f60_58876F60() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        movzx eax, word ptr [esi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 21: je 0x58876f93
        __asm _emit 0x74
        __asm _emit 0x21
        mov edi, dword ptr [ebp + 0ch]
        mov ecx, eax
        push ecx
        push edi
        ; Exact mapped bytes E8 D1 63 00 00: call 0x5887d34f
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58876f99
        __asm _emit 0x75
        __asm _emit 0x14
        movzx eax, word ptr [esi + 2]
        add esi, 2
        mov ecx, eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 E4: jne 0x58876f77
        __asm _emit 0x75
        __asm _emit 0xe4
        pop edi
        xor eax, eax
        pop esi
        pop ebp
        ret
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
