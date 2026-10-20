// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E360 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_5875e360() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x5875e404
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esi + 50h]
        mov eax, edi
        cdq
        idiv dword ptr [esi + 70h]
        test edx, edx
        ; Exact mapped bytes 75 24: jne 0x5875e3a1
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 64h]
        imul ecx, ecx, 19h
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 7D 09: jge 0x5875e3a1
        __asm _emit 0x7d
        __asm _emit 0x09
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x5875e406
        __asm _emit 0x74
        __asm _emit 0x5e
        movzx ecx, word ptr [eax + 0ch]
        imul ecx, dword ptr [eax + 8]
        dec ecx
        xor eax, eax
        cmp dword ptr [esi + 50h], ecx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5875e406
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 09: je 0x5875e3cf
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 64h]
        imul ecx, ecx, 19h
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp dword ptr [esi + 50h], ecx
        ; Exact mapped bytes 7E 18: jle 0x5875e403
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, esi
        ; Exact mapped bytes E8 2E 48 1A 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x48
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 77 48 1A 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x48
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esi + 3ch]
        inc dword ptr [esi + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 F3: je 0x5875e403
        __asm _emit 0x74
        __asm _emit 0xf3
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5875e428
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5875e410
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
