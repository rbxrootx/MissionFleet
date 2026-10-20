// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886C826 .. +0x241 bytes.
extern "C" __declspec(naked) void FUN_5886c826_5886C826() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        xor eax, eax
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, esi
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes A1 78 9C 96 58: mov eax, dword ptr [0x58969c78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes EB 01: jmp 0x5886c847
        __asm _emit 0xeb
        __asm _emit 0x01
        inc ebx
        mov al, byte ptr [ebx]
        cmp al, 20h
        ; Exact mapped bytes 74 F9: je 0x5886c846
        __asm _emit 0x74
        __asm _emit 0xf9
        cmp al, 61h
        ; Exact mapped bytes 74 1D: je 0x5886c86e
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp al, 72h
        ; Exact mapped bytes 74 10: je 0x5886c865
        __asm _emit 0x74
        __asm _emit 0x10
        cmp al, 77h
        ; Exact mapped bytes 0F 85 F3 01 00 00: jne 0x5886ca50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], 301h
        ; Exact mapped bytes EB 0F: jmp 0x5886c874
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov dword ptr [esi + 4], 1
        ; Exact mapped bytes EB 0D: jmp 0x5886c87b
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov dword ptr [esi], 109h
        mov dword ptr [esi + 4], 2
        xor dl, dl
        mov byte ptr [ebp - 3], 0
        inc ebx
        mov byte ptr [ebp - 4], 0
        xor ch, ch
        mov byte ptr [ebp - 2], dl
        mov byte ptr [ebp - 1], ch
        mov cl, 1
        mov al, byte ptr [ebx]
        test al, al
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x5886c98e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        cmp eax, 53h
        ; Exact mapped bytes 7F 78: jg 0x5886c91a
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 74 63: je 0x5886c907
        __asm _emit 0x74
        __asm _emit 0x63
        sub eax, 20h
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x5886c978
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0bh
        ; Exact mapped bytes 74 48: je 0x5886c8fa
        __asm _emit 0x74
        __asm _emit 0x48
        sub eax, 1
        ; Exact mapped bytes 74 37: je 0x5886c8ee
        __asm _emit 0x74
        __asm _emit 0x37
        sub eax, 18h
        ; Exact mapped bytes 74 27: je 0x5886c8e3
        __asm _emit 0x74
        __asm _emit 0x27
        sub eax, 0ah
        ; Exact mapped bytes 74 15: je 0x5886c8d6
        __asm _emit 0x74
        __asm _emit 0x15
        sub eax, 4
        ; Exact mapped bytes 0F 85 86 01 00 00: jne 0x5886ca50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ch, byte ptr [ebp - 1]
        test dl, dl
        ; Exact mapped bytes 75 22: jne 0x5886c8f3
        __asm _emit 0x75
        __asm _emit 0x22
        or dword ptr [esi], 10h
        ; Exact mapped bytes EB 3B: jmp 0x5886c911
        __asm _emit 0xeb
        __asm _emit 0x3b
        or dword ptr [esi], 80h
        mov cl, 1
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x5886c978
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 01 02 00 00: call 0x5886caea
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x5886c972
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ch, 1
        mov byte ptr [ebp - 1], ch
        xor cl, cl
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5886c97b
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        push esi
        ; Exact mapped bytes E8 84 02 00 00: call 0x5886cb88
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB 6B: jmp 0x5886c972
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ch, byte ptr [ebp - 1]
        test dl, dl
        ; Exact mapped bytes 75 E5: jne 0x5886c8f3
        __asm _emit 0x75
        __asm _emit 0xe5
        or dword ptr [esi], 20h
        mov dl, 1
        mov byte ptr [ebp - 2], dl
        mov cl, dl
        ; Exact mapped bytes EB 61: jmp 0x5886c97b
        __asm _emit 0xeb
        __asm _emit 0x61
        sub eax, 54h
        ; Exact mapped bytes 74 4D: je 0x5886c96c
        __asm _emit 0x74
        __asm _emit 0x4d
        sub eax, 0eh
        ; Exact mapped bytes 74 40: je 0x5886c964
        __asm _emit 0x74
        __asm _emit 0x40
        sub eax, 1
        ; Exact mapped bytes 74 2F: je 0x5886c958
        __asm _emit 0x74
        __asm _emit 0x2f
        sub eax, 0bh
        ; Exact mapped bytes 74 1E: je 0x5886c94c
        __asm _emit 0x74
        __asm _emit 0x1e
        sub eax, 6
        ; Exact mapped bytes 74 11: je 0x5886c944
        __asm _emit 0x74
        __asm _emit 0x11
        sub eax, 4
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x5886ca50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 9C 02 00 00: call 0x5886cbde
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x5886c972
        __asm _emit 0xeb
        __asm _emit 0x2e
        push esi
        ; Exact mapped bytes E8 74 02 00 00: call 0x5886cbbe
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x5886c972
        __asm _emit 0xeb
        __asm _emit 0x26
        lea eax, [ebp - 3]
        push eax
        push esi
        ; Exact mapped bytes E8 10 02 00 00: call 0x5886cb66
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB AC: jmp 0x5886c904
        __asm _emit 0xeb
        __asm _emit 0xac
        lea eax, [ebp - 3]
        push eax
        push esi
        ; Exact mapped bytes E8 E2 01 00 00: call 0x5886cb44
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A0: jmp 0x5886c904
        __asm _emit 0xeb
        __asm _emit 0xa0
        push esi
        ; Exact mapped bytes E8 BA 01 00 00: call 0x5886cb24
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x5886c972
        __asm _emit 0xeb
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 93 01 00 00: call 0x5886cb05
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [ebp - 2]
        pop ecx
        mov cl, al
        mov ch, byte ptr [ebp - 1]
        xor eax, eax
        test cl, cl
        setne al
        add ebx, eax
        test cl, cl
        ; Exact mapped bytes 0F 85 04 FF FF FF: jne 0x5886c890
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 03: jmp 0x5886c991
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ch, byte ptr [ebp - 1]
        lea edi, [ebx + 1]
        test ch, ch
        push 20h
        cmove edi, ebx
        pop ebx
        ; Exact mapped bytes EB 01: jmp 0x5886c99f
        __asm _emit 0xeb
        __asm _emit 0x01
        inc edi
        cmp byte ptr [edi], bl
        ; Exact mapped bytes 74 FB: je 0x5886c99e
        __asm _emit 0x74
        __asm _emit 0xfb
        test ch, ch
        ; Exact mapped bytes 75 11: jne 0x5886c9b8
        __asm _emit 0x75
        __asm _emit 0x11
        cmp byte ptr [edi], ch
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x5886ca50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 8], 1
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x5886ca60
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        push 588c58b0h
        push edi
        ; Exact mapped bytes E8 6B 98 FF FF: call 0x58866230
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x5886ca50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 3
        ; Exact mapped bytes EB 01: jmp 0x5886c9d6
        __asm _emit 0xeb
        __asm _emit 0x01
        inc edi
        mov al, byte ptr [edi]
        cmp al, bl
        ; Exact mapped bytes 74 F9: je 0x5886c9d5
        __asm _emit 0x74
        __asm _emit 0xf9
        cmp al, 3dh
        ; Exact mapped bytes 75 70: jne 0x5886ca50
        __asm _emit 0x75
        __asm _emit 0x70
        inc edi
        cmp byte ptr [edi], bl
        ; Exact mapped bytes 74 FB: je 0x5886c9e0
        __asm _emit 0x74
        __asm _emit 0xfb
        push 5
        pop ebx
        push ebx
        push 588c58b4h
        push edi
        ; Exact mapped bytes E8 CC A3 FF FF: call 0x58866dc0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x5886ca03
        __asm _emit 0x75
        __asm _emit 0x08
        or dword ptr [esi], 40000h
        ; Exact mapped bytes EB 3A: jmp 0x5886ca3d
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 8
        pop ebx
        push ebx
        push 588c58bch
        push edi
        ; Exact mapped bytes E8 AE A3 FF FF: call 0x58866dc0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x5886ca21
        __asm _emit 0x75
        __asm _emit 0x08
        or dword ptr [esi], 20000h
        ; Exact mapped bytes EB 1C: jmp 0x5886ca3d
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 7
        pop ebx
        push ebx
        push 588c58c4h
        push edi
        ; Exact mapped bytes E8 90 A3 FF FF: call 0x58866dc0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5886ca50
        __asm _emit 0x75
        __asm _emit 0x19
        or dword ptr [esi], 10000h
        lea ecx, [edi + ebx]
        ; Exact mapped bytes EB 01: jmp 0x5886ca43
        __asm _emit 0xeb
        __asm _emit 0x01
        inc ecx
        mov al, byte ptr [ecx]
        cmp al, 20h
        ; Exact mapped bytes 74 F9: je 0x5886ca42
        __asm _emit 0x74
        __asm _emit 0xf9
        test al, al
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x5886c9a9
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 1A 5A FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 4B 45 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
