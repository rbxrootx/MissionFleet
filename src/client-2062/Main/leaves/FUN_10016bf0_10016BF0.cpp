// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10016BF0 .. +0x21C bytes.
extern "C" __declspec(naked) void FUN_10016bf0_10016BF0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 0B 02 00 00: je 0x10016e09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        xor edi, edi
        cmp eax, edi
        ; Exact mapped bytes 0F 84 FB 01 00 00: je 0x10016e09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d4h]
        push ebx
        cmp eax, edi
        push ebp
        ; Exact mapped bytes 74 0C: je 0x10016c26
        __asm _emit 0x74
        __asm _emit 0x0c
        dec eax
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x10016cfa
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        cmp eax, edi
        ; Exact mapped bytes 75 66: jne 0x10016c96
        __asm _emit 0x75
        __asm _emit 0x66
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [esi + 0b4h]
        cmp ecx, eax
        ; Exact mapped bytes 7E 0C: jle 0x10016c4c
        __asm _emit 0x7e
        __asm _emit 0x0c
        inc eax
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x10016cfa
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0dch]
        mov ebx, 1
        push ebx
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0dch]
        ; Exact mapped bytes E8 39 B8 01 00: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e0h]
        mov dword ptr [eax + 50h], edi
        mov dword ptr [esi + 0c4h], edi
        mov dword ptr [esi + 0cch], edi
        mov dword ptr [esi + 0b0h], edi
        mov dword ptr [esi + 98h], ebx
        ; Exact mapped bytes EB 64: jmp 0x10016cfa
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ebx, 1
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x10016d9d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        mov eax, dword ptr [esi + 0c8h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8E A9 00 00 00: jle 0x10016d60
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        mov ebp, dword ptr [esi + 50h]
        cmp eax, ebp
        ; Exact mapped bytes 75 07: jne 0x10016cc8
        __asm _emit 0x75
        __asm _emit 0x07
        inc ecx
        mov dword ptr [esi + 0c4h], ecx
        mov edi, dword ptr [esi + 0e0h]
        test byte ptr [edi + 24h], bl
        ; Exact mapped bytes 75 50: jne 0x10016d23
        __asm _emit 0x75
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 0dch]
        ; Exact mapped bytes E8 02 B9 01 00: call 0x100325e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x10016cf8
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        xor edi, edi
        mov ecx, dword ptr [esi + 3ch]
        pop ebp
        cmp ecx, edi
        pop ebx
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x10016e09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x10016e04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 E7: jne 0x10016d07
        __asm _emit 0x75
        __asm _emit 0xe7
        pop edi
        pop esi
        ret
        mov edx, dword ptr [edi + 54h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x10016d32
        __asm _emit 0x74
        __asm _emit 0x08
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4A 0C: mov cx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x10016d34
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebx, dword ptr [edi + 54h]
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x10016d43
        __asm _emit 0x74
        __asm _emit 0x08
        xor edx, edx
        ; Exact mapped bytes 66 8B 53 0C: mov dx, word ptr [ebx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x10016d45
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        imul eax, edx
        cdq
        idiv ebp
        mov edx, 0
        sub ecx, eax
        sub ecx, 2
        sets dl
        dec edx
        and edx, ecx
        mov dword ptr [edi + 50h], edx
        ; Exact mapped bytes EB 98: jmp 0x10016cf8
        __asm _emit 0xeb
        __asm _emit 0x98
        mov eax, dword ptr [esi + 0dch]
        push edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0dch]
        ; Exact mapped bytes E8 2A B7 01 00: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 0c4h], edi
        mov dword ptr [esi + 0cch], edi
        mov dword ptr [esi + 98h], 2
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x10016cfa
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 0F 85 54 FF FF FF: jne 0x10016cfa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0cch]
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, eax
        ; Exact mapped bytes 7E 0C: jle 0x10016dc2
        __asm _emit 0x7e
        __asm _emit 0x0c
        inc eax
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E9 38 FF FF FF: jmp 0x10016cfa
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0dch]
        push ebx
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0dch]
        ; Exact mapped bytes E8 C8 B6 01 00: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e0h]
        mov dword ptr [eax + 50h], edi
        mov dword ptr [esi + 0c4h], edi
        mov dword ptr [esi + 0cch], edi
        mov dword ptr [esi + 98h], ebx
        ; Exact mapped bytes E9 F6 FE FF FF: jmp 0x10016cfa
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
