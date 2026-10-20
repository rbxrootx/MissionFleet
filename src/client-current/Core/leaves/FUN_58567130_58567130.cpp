// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58567130 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_58567130_58567130() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7F: je 0x585671be
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 2F: jne 0x58567188
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edi, dword ptr [ebp - 4]
        add edi, 270h
        mov ecx, 2bh
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 78h
        push 50h
        push 3fffh
        ; Exact mapped bytes E8 76 CE F7 FF: call 0x584e3ff0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 26ch], eax
        ; Exact mapped bytes EB 36: jmp 0x585671be
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edi, dword ptr [ebp - 4]
        add edi, 270h
        mov ecx, 2bh
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 78h
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 9ch]
        push eax
        push 3fffh
        ; Exact mapped bytes E8 3E CE F7 FF: call 0x584e3ff0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 26ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 7F: je 0x58567243
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 2F: jne 0x5856720d
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edi, dword ptr [ebp - 4]
        add edi, 324h
        mov ecx, 2bh
        mov esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 78h
        push 50h
        push 3fffh
        ; Exact mapped bytes E8 F1 CD F7 FF: call 0x584e3ff0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcd
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 320h], eax
        ; Exact mapped bytes EB 36: jmp 0x58567243
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edi, dword ptr [ebp - 4]
        add edi, 324h
        mov ecx, 2bh
        mov esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 78h
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [eax + 9ch]
        push ecx
        push 3fffh
        ; Exact mapped bytes E8 B9 CD F7 FF: call 0x584e3ff0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xcd
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 320h], eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
