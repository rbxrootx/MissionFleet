// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C1D50 .. +0x1CF bytes.
extern "C" __declspec(naked) void FUN_100c1d50_100C1D50() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 3B 05 FC 56 1C 10: cmp eax, dword ptr [0x101c56fc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 75 04: jne 0x100c1d66
        __asm _emit 0x75
        __asm _emit 0x04
        mov bl, 1
        ; Exact mapped bytes EB 7E: jmp 0x100c1de4
        __asm _emit 0xeb
        __asm _emit 0x7e
        ; Exact mapped bytes 3B 05 F0 56 1C 10: cmp eax, dword ptr [0x101c56f0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 75 04: jne 0x100c1d72
        __asm _emit 0x75
        __asm _emit 0x04
        mov bl, 2
        ; Exact mapped bytes EB 72: jmp 0x100c1de4
        __asm _emit 0xeb
        __asm _emit 0x72
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 75 33: jne 0x100c1daf
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ecx + 9a4h]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100c1d97
        __asm _emit 0x74
        __asm _emit 0x11
        xor ecx, ecx
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 04: jne 0x100c1d97
        __asm _emit 0x75
        __asm _emit 0x04
        mov bl, 4
        ; Exact mapped bytes EB 4D: jmp 0x100c1de4
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov al, byte ptr [esi + 0b74h]
        cmp al, 7
        ; Exact mapped bytes 74 0A: je 0x100c1dab
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp al, 8
        ; Exact mapped bytes 74 06: je 0x100c1dab
        __asm _emit 0x74
        __asm _emit 0x06
        pop esi
        mov al, 3
        pop ebx
        pop ecx
        ret
        mov bl, 8
        ; Exact mapped bytes EB 35: jmp 0x100c1de4
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 3B 05 10 57 1C 10: cmp eax, dword ptr [0x101c5710]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 75 04: jne 0x100c1dbb
        __asm _emit 0x75
        __asm _emit 0x04
        mov bl, 5
        ; Exact mapped bytes EB 29: jmp 0x100c1de4
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 3B 05 F4 56 1C 10: cmp eax, dword ptr [0x101c56f4]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 75 04: jne 0x100c1dc7
        __asm _emit 0x75
        __asm _emit 0x04
        mov bl, 6
        ; Exact mapped bytes EB 1D: jmp 0x100c1de4
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 3B 05 0C 57 1C 10: cmp eax, dword ptr [0x101c570c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 75 04: jne 0x100c1dd3
        __asm _emit 0x75
        __asm _emit 0x04
        mov bl, 7
        ; Exact mapped bytes EB 11: jmp 0x100c1de4
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp byte ptr [esi + 0b74h], 7
        ; Exact mapped bytes 74 04: je 0x100c1de0
        __asm _emit 0x74
        __asm _emit 0x04
        xor bl, bl
        ; Exact mapped bytes EB 04: jmp 0x100c1de4
        __asm _emit 0xeb
        __asm _emit 0x04
        mov bl, byte ptr [esp + 0bh]
        cmp bl, byte ptr [esi + 0b74h]
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x100c1f19
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        lea edi, [esi + 64h]
        mov ebp, 2
        cmp bl, 6
        ; Exact mapped bytes 75 79: jne 0x100c1e78
        __asm _emit 0x75
        __asm _emit 0x79
        mov ecx, dword ptr [edi]
        push 0edh
        push 11ch
        ; Exact mapped bytes E8 C0 CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        push 0edh
        push 11ch
        ; Exact mapped bytes E8 AE CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b7ch]
        push 1f3h
        push 12fh
        ; Exact mapped bytes E8 99 CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b88h]
        push 1f3h
        push 241h
        ; Exact mapped bytes E8 84 CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b80h]
        push 1f3h
        push 270h
        ; Exact mapped bytes E8 6F CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b84h]
        push 1f3h
        push 2a1h
        ; Exact mapped bytes E8 5A CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 7B: jmp 0x100c1ef3
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov ecx, dword ptr [edi]
        push 99h
        push 0adh
        ; Exact mapped bytes E8 47 CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        push 99h
        push 0adh
        ; Exact mapped bytes E8 35 CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b7ch]
        push 19fh
        push 0c0h
        ; Exact mapped bytes E8 20 CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b88h]
        push 19fh
        push 1d2h
        ; Exact mapped bytes E8 0B CE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b80h]
        push 19fh
        push 201h
        ; Exact mapped bytes E8 F6 CD 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b84h]
        push 19fh
        push 232h
        ; Exact mapped bytes E8 E1 CD 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        test bl, bl
        ; Exact mapped bytes 74 1A: je 0x100c1f0d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [edi]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 12: jne 0x100c1f0d
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0b88h]
        mov dword ptr [edx + 50h], ecx
        add edi, 4
        dec ebp
        ; Exact mapped bytes 0F 85 E3 FE FF FF: jne 0x100c1dfa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebp
        mov al, bl
        pop esi
        pop ebx
        pop ecx
        ret
    }
}
