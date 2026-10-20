// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58758240 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_58758240() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 5B: je 0x587582a6
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        mov eax, 100h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        mov eax, 200h
        ; Exact mapped bytes 75 42: jne 0x587582a8
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e2ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 C9 FE FF FF: call 0x58758150
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x587582a6
        __asm _emit 0x74
        __asm _emit 0x18
        push edi
        nop
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 73: je 0x58758310
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x58758290
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 1E: jne 0x587582d2
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, esi
        ; Exact mapped bytes E8 55 EA FF FF: call 0x58756d10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 C8: jne 0x58758287
        __asm _emit 0x75
        __asm _emit 0xc8
        cmp dword ptr [esi + 5fch], eax
        ; Exact mapped bytes 74 C0: je 0x58758287
        __asm _emit 0x74
        __asm _emit 0xc0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB B5: jmp 0x58758287
        __asm _emit 0xeb
        __asm _emit 0xb5
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 A4: jne 0x58758287
        __asm _emit 0x75
        __asm _emit 0xa4
        mov ecx, 0fff0h
        ; Exact mapped bytes C7 05 90 45 A2 58 00 00 00 00: mov dword ptr [0x58a24590], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 23 A9 1A 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 6C A9 1A 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
