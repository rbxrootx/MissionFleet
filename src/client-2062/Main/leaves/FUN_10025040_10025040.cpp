// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10025040 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_10025040_10025040() {
    __asm {
        ; Exact mapped bytes 66 8B 54 24 04: mov dx, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        push ebx
        mov al, dl
        push esi
        and al, 0fh
        push edi
        cmp al, 5
        ; Exact mapped bytes 75 2A: jne 0x1002507a
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edi, dword ptr [ecx + 6ch]
        mov ebx, dword ptr [ecx + 78h]
        xor ecx, ecx
        test edi, edi
        ; Exact mapped bytes 7E 1E: jle 0x1002507a
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov esi, ebx
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 33 C2: xor ax, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc2
        test al, 1fh
        ; Exact mapped bytes 75 07: jne 0x1002506f
        __asm _emit 0x75
        __asm _emit 0x07
        test eax, 0ffe0h
        ; Exact mapped bytes 74 13: je 0x10025082
        __asm _emit 0x74
        __asm _emit 0x13
        inc ecx
        add esi, 0b4h
        cmp ecx, edi
        ; Exact mapped bytes 7C E4: jl 0x1002505e
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ecx + ecx*4]
        pop edi
        pop esi
        lea ecx, [eax + eax*8]
        lea eax, [ebx + ecx*4]
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
