// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420DBA .. +0x2CF bytes.
extern "C" __declspec(naked) void FUN_00420dba_00420DBA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x420e6d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 14h]
        mov esi, dword ptr [ebp + 10h]
        xor ecx, ecx
        cmp dword ptr [edi], ecx
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x420e6d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 98 11 45 00: mov dword ptr [0x451198], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov al, byte ptr [ebx]
        mov byte ptr [ebp + 0bh], al
        lea eax, [ebx + 1]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dl, byte ptr [ebp + 0bh]
        inc ecx
        inc dword ptr [ebp + 10h]
        mov al, byte ptr [eax]
        cmp al, dl
        ; Exact mapped bytes 74 F0: je 0x420df1
        __asm _emit 0x74
        __asm _emit 0xf0
        dec dword ptr [ebp + 10h]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F BE C2: movsx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc2
        cmp eax, 64h
        ; Exact mapped bytes 0F 8F 6C 01 00 00: jg 0x420f7f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 31 01 00 00: je 0x420f4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 27h
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x420ef4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 41h
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x420ebe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 48h
        ; Exact mapped bytes 74 73: je 0x420ea3
        __asm _emit 0x74
        __asm _emit 0x73
        cmp eax, 4dh
        ; Exact mapped bytes 74 3D: je 0x420e72
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp eax, 61h
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x420ebe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 AC 44 00: mov ecx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        movzx eax, dl
        test byte ptr [ecx + eax*2 + 1], 80h
        ; Exact mapped bytes 74 0B: je 0x420e59
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [ebp - 4]
        mov byte ptr [eax], dl
        inc dword ptr [esi]
        dec dword ptr [edi]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [ebx]
        mov byte ptr [eax], cl
        inc dword ptr [esi]
        inc ebx
        dec dword ptr [edi]
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x420dd3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        leave
        ret
        dec ecx
        ; Exact mapped bytes 74 1B: je 0x420e90
        __asm _emit 0x74
        __asm _emit 0x1b
        dec ecx
        ; Exact mapped bytes 74 22: je 0x420e9a
        __asm _emit 0x74
        __asm _emit 0x22
        dec ecx
        ; Exact mapped bytes 74 0C: je 0x420e87
        __asm _emit 0x74
        __asm _emit 0x0c
        dec ecx
        ; Exact mapped bytes 75 C0: jne 0x420e3e
        __asm _emit 0x75
        __asm _emit 0xc0
        mov byte ptr [ebp + 14h], 42h
        ; Exact mapped bytes E9 ED 01 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 14h], 62h
        ; Exact mapped bytes E9 E4 01 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 98 11 45 00 01 00 00 00: mov dword ptr [0x451198], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 14h], 6dh
        ; Exact mapped bytes E9 D1 01 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec ecx
        ; Exact mapped bytes 74 05: je 0x420eab
        __asm _emit 0x74
        __asm _emit 0x05
        dec ecx
        ; Exact mapped bytes 74 0C: je 0x420eb5
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes EB 93: jmp 0x420e3e
        __asm _emit 0xeb
        __asm _emit 0x93
        ; Exact mapped bytes C7 05 98 11 45 00 01 00 00 00: mov dword ptr [0x451198], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 14h], 48h
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 43fb94h
        push ebx
        ; Exact mapped bytes E8 A7 53 00 00: call 0x426270
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 05: jne 0x420ed4
        __asm _emit 0x75
        __asm _emit 0x05
        add ebx, 5
        ; Exact mapped bytes EB 14: jmp 0x420ee8
        __asm _emit 0xeb
        __asm _emit 0x14
        push 43fb90h
        push ebx
        ; Exact mapped bytes E8 91 53 00 00: call 0x426270
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 06: jne 0x420eeb
        __asm _emit 0x75
        __asm _emit 0x06
        add ebx, 3
        mov dword ptr [ebp + 10h], ebx
        mov byte ptr [ebp + 14h], 70h
        ; Exact mapped bytes E9 80 01 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test cl, 1
        ; Exact mapped bytes 74 4A: je 0x420f43
        __asm _emit 0x74
        __asm _emit 0x4a
        add ebx, ecx
        mov al, byte ptr [ebx]
        test al, al
        ; Exact mapped bytes 0F 84 5F FF FF FF: je 0x420e64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 0F 84 56 FF FF FF: je 0x420e64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp al, 27h
        ; Exact mapped bytes 74 2B: je 0x420f3d
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 15 C0 AC 44 00: mov edx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        movzx ecx, al
        test byte ptr [edx + ecx*2 + 1], 80h
        ; Exact mapped bytes 74 0E: je 0x420f30
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [edi], 1
        ; Exact mapped bytes 76 09: jbe 0x420f30
        __asm _emit 0x76
        __asm _emit 0x09
        mov ecx, dword ptr [esi]
        mov byte ptr [ecx], al
        inc dword ptr [esi]
        inc ebx
        dec dword ptr [edi]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [ebx]
        mov byte ptr [eax], cl
        inc dword ptr [esi]
        inc ebx
        dec dword ptr [edi]
        ; Exact mapped bytes EB BE: jmp 0x420efb
        __asm _emit 0xeb
        __asm _emit 0xbe
        inc ebx
        ; Exact mapped bytes E9 21 FF FF FF: jmp 0x420e64
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add ebx, ecx
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x420e64
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec ecx
        ; Exact mapped bytes 74 1F: je 0x420f6c
        __asm _emit 0x74
        __asm _emit 0x1f
        dec ecx
        ; Exact mapped bytes 74 26: je 0x420f76
        __asm _emit 0x74
        __asm _emit 0x26
        dec ecx
        ; Exact mapped bytes 74 10: je 0x420f63
        __asm _emit 0x74
        __asm _emit 0x10
        dec ecx
        ; Exact mapped bytes 0F 85 E4 FE FF FF: jne 0x420e3e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp + 14h], 41h
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 14h], 61h
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 98 11 45 00 01 00 00 00: mov dword ptr [0x451198], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 14h], 64h
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 68h
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x42105b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x421040
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 6
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x421025
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 29: je 0x420fc6
        __asm _emit 0x74
        __asm _emit 0x29
        sub eax, 5
        ; Exact mapped bytes 0F 85 98 FE FF FF: jne 0x420e3e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ecx
        dec eax
        dec eax
        ; Exact mapped bytes 74 11: je 0x420fbd
        __asm _emit 0x74
        __asm _emit 0x11
        dec eax
        dec eax
        ; Exact mapped bytes 0F 85 8A FE FF FF: jne 0x420e3e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp + 14h], 59h
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 14h], 79h
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x421074
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 0bh
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7F 08: jg 0x420fda
        __asm _emit 0x7f
        __asm _emit 0x08
        mov eax, dword ptr [eax + 98h]
        ; Exact mapped bytes EB 06: jmp 0x420fe0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [eax + 9ch]
        test ecx, ecx
        ; Exact mapped bytes 7E 39: jle 0x42101d
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 76 34: jbe 0x42101d
        __asm _emit 0x76
        __asm _emit 0x34
        mov cl, byte ptr [eax]
        ; Exact mapped bytes 8B 1D C0 AC 44 00: mov ebx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        movzx edx, cl
        test byte ptr [ebx + edx*2 + 1], 80h
        ; Exact mapped bytes 74 0E: je 0x421009
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [edi], 1
        ; Exact mapped bytes 76 09: jbe 0x421009
        __asm _emit 0x76
        __asm _emit 0x09
        mov edx, dword ptr [esi]
        mov byte ptr [edx], cl
        inc dword ptr [esi]
        inc eax
        dec dword ptr [edi]
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [eax]
        mov byte ptr [ecx], dl
        inc dword ptr [esi]
        inc eax
        dec dword ptr [edi]
        dec dword ptr [ebp + 8]
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7F C7: jg 0x420fe4
        __asm _emit 0x7f
        __asm _emit 0xc7
        mov ebx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E9 3F FE FF FF: jmp 0x420e64
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        dec ecx
        ; Exact mapped bytes 74 08: je 0x421030
        __asm _emit 0x74
        __asm _emit 0x08
        dec ecx
        ; Exact mapped bytes 74 0F: je 0x42103a
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes E9 0E FE FF FF: jmp 0x420e3e
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 98 11 45 00 01 00 00 00: mov dword ptr [0x451198], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 14h], 53h
        ; Exact mapped bytes EB 34: jmp 0x421074
        __asm _emit 0xeb
        __asm _emit 0x34
        dec ecx
        ; Exact mapped bytes 74 08: je 0x42104b
        __asm _emit 0x74
        __asm _emit 0x08
        dec ecx
        ; Exact mapped bytes 74 0F: je 0x421055
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes E9 F3 FD FF FF: jmp 0x420e3e
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 98 11 45 00 01 00 00 00: mov dword ptr [0x451198], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 14h], 4dh
        ; Exact mapped bytes EB 19: jmp 0x421074
        __asm _emit 0xeb
        __asm _emit 0x19
        dec ecx
        ; Exact mapped bytes 74 08: je 0x421066
        __asm _emit 0x74
        __asm _emit 0x08
        dec ecx
        ; Exact mapped bytes 74 0F: je 0x421070
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes E9 D8 FD FF FF: jmp 0x420e3e
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 98 11 45 00 01 00 00 00: mov dword ptr [0x451198], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 14h], 49h
        push dword ptr [ebp + 18h]
        push edi
        push esi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 68 F8 FF FF: call 0x4208ec
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 94: jmp 0x42101d
        __asm _emit 0xeb
        __asm _emit 0x94
    }
}
