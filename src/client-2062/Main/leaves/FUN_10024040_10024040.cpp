// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024040 .. +0xF7 bytes.
extern "C" __declspec(naked) void FUN_10024040_10024040() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        push ebx
        push ebp
        ; Exact mapped bytes 66 8B 9A 2C 03 00 00: mov bx, word ptr [edx + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x9a
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 66 8B B8 2C 03 00 00: mov di, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B FB: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 75 0C: jne 0x1002406b
        __asm _emit 0x75
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 54h]
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x1002407e
        __asm _emit 0x75
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 8]
        cmp esi, ebp
        ; Exact mapped bytes 74 6A: je 0x100240f2
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 39 78 08: cmp word ptr [eax + 8], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 75 5B: jne 0x100240eb
        __asm _emit 0x75
        __asm _emit 0x5b
        mov ecx, dword ptr [edx + 5c54h]
        test ecx, ecx
        ; Exact mapped bytes 74 3B: je 0x100240d5
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 66 39 58 18: cmp word ptr [eax + 0x18], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 74 73: je 0x10024113
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [eax + 10h]
        cmp ecx, 0ffffh
        ; Exact mapped bytes 74 1B: je 0x100240c6
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ecx, dword ptr [edx + 0f34h]
        ; Exact mapped bytes 75 38: jne 0x100240eb
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [eax + 14h]
        mov ecx, dword ptr [edx + 0f38h]
        cmp eax, ecx
        ; Exact mapped bytes 75 2B: jne 0x100240eb
        __asm _emit 0x75
        __asm _emit 0x2b
        test eax, eax
        ; Exact mapped bytes 75 5B: jne 0x1002411f
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes EB 25: jmp 0x100240eb
        __asm _emit 0xeb
        __asm _emit 0x25
        xor ecx, ecx
        mov cl, byte ptr [edx + 330h]
        cmp dword ptr [eax + 14h], ecx
        ; Exact mapped bytes 74 58: je 0x1002412b
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes EB 16: jmp 0x100240eb
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [eax + 10h], 0ffffh
        ; Exact mapped bytes 75 0D: jne 0x100240eb
        __asm _emit 0x75
        __asm _emit 0x0d
        xor ecx, ecx
        mov cl, byte ptr [edx + 330h]
        cmp dword ptr [eax + 14h], ecx
        ; Exact mapped bytes 74 28: je 0x10024113
        __asm _emit 0x74
        __asm _emit 0x28
        add esi, 4
        cmp esi, ebp
        ; Exact mapped bytes 75 96: jne 0x10024088
        __asm _emit 0x75
        __asm _emit 0x96
        mov eax, dword ptr [esp + 14h]
        mov bl, byte ptr [edx + 330h]
        pop edi
        pop esi
        mov al, byte ptr [eax + 330h]
        pop ebp
        sub al, bl
        pop ebx
        neg al
        sbb eax, eax
        and eax, 2
        inc eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr [edx + 0ch]
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr [eax + 0ch]
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr [ecx + 0ch]
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
