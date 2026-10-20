// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853C1B .. +0x2C6 bytes.
extern "C" __declspec(naked) void FUN_58853c1b_58853C1B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        ; Exact mapped bytes E8 1A 23 00 00: call 0x58855f4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 5E 02 00 00: je 0x58853e9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0ch], 0
        ; Exact mapped bytes 0F 84 76 02 00 00: je 0x58853ebc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 450h]
        inc eax
        mov dword ptr [esi + 450h], eax
        cmp eax, 2
        ; Exact mapped bytes 0F 84 03 02 00 00: je 0x58853e5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        and dword ptr [esi + 34h], 0
        mov byte ptr [esi + 18h], 0
        mov bl, byte ptr [eax]
        inc eax
        mov dword ptr [esi + 0ch], eax
        mov byte ptr [esi + 2dh], bl
        test bl, bl
        ; Exact mapped bytes 0F 84 C9 01 00 00: je 0x58853e41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], bl
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 0F 8C BC 01 00 00: jl 0x58853e41
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 18h]
        mov ecx, esi
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 FB FF FF: call 0x588537a6
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [esi + 18h], al
        cmp al, 8
        ; Exact mapped bytes 0F 83 03 02 00 00: jae 0x58853ea2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        cmp eax, 7
        ; Exact mapped bytes 0F 87 EF 01 00 00: ja 0x58853e9a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 E3 3E 85 58: jmp dword ptr [eax*4 + 0x58853ee3]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x3e
        __asm _emit 0x85
        __asm _emit 0x58
        mov edi, dword ptr [esi + 8]
        xor eax, eax
        mov byte ptr [esi + 38h], al
        cmp byte ptr [edi + 14h], al
        ; Exact mapped bytes 75 07: jne 0x58853cc6
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 DA 21 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, byte ptr [esi + 2dh]
        push 8000h
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        push eax
        mov eax, dword ptr [edi + 0ch]
        push dword ptr [eax]
        ; Exact mapped bytes E8 19 25 00 00: call 0x588561f5
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea edi, [esi + 448h]
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58853d28
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 11: jne 0x58853d04
        __asm _emit 0x75
        __asm _emit 0x11
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 05: je 0x58853cfe
        __asm _emit 0x74
        __asm _emit 0x05
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes EB 16: jmp 0x58853d14
        __asm _emit 0xeb
        __asm _emit 0x16
        or dword ptr [esi + 14h], 0ffffffffh
        ; Exact mapped bytes EB 10: jmp 0x58853d14
        __asm _emit 0xeb
        __asm _emit 0x10
        inc dword ptr [esi + 14h]
        inc dword ptr [ecx + 8]
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax]
        mov byte ptr [eax], bl
        mov eax, dword ptr [edi]
        inc dword ptr [eax]
        mov eax, dword ptr [esi + 0ch]
        mov bl, byte ptr [eax]
        inc eax
        mov dword ptr [esi + 0ch], eax
        mov byte ptr [esi + 2dh], bl
        test bl, bl
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x58853e64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 17: jne 0x58853d49
        __asm _emit 0x75
        __asm _emit 0x17
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x58853d40
        __asm _emit 0x74
        __asm _emit 0x08
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x58853e2a
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 14h], 0ffffffffh
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x58853e2a
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 14h]
        inc dword ptr [ecx + 8]
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax]
        mov byte ptr [eax], bl
        mov eax, dword ptr [edi]
        inc dword ptr [eax]
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x58853e2a
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [esi + 20h], 0
        and dword ptr [esi + 1ch], 0
        or dword ptr [esi + 24h], 0ffffffffh
        and dword ptr [esi + 28h], 0
        mov byte ptr [esi + 2ch], 0
        mov byte ptr [esi + 38h], 0
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x58853e2a
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        sub eax, 20h
        ; Exact mapped bytes 74 34: je 0x58853db7
        __asm _emit 0x74
        __asm _emit 0x34
        sub eax, 3
        ; Exact mapped bytes 74 29: je 0x58853db1
        __asm _emit 0x74
        __asm _emit 0x29
        sub eax, 8
        ; Exact mapped bytes 74 1E: je 0x58853dab
        __asm _emit 0x74
        __asm _emit 0x1e
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 12: je 0x58853da5
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, 3
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x58853e2a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 8
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x58853e2a
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 4
        ; Exact mapped bytes EB 7F: jmp 0x58853e2a
        __asm _emit 0xeb
        __asm _emit 0x7f
        or dword ptr [esi + 1ch], 1
        ; Exact mapped bytes EB 79: jmp 0x58853e2a
        __asm _emit 0xeb
        __asm _emit 0x79
        or dword ptr [esi + 1ch], 20h
        ; Exact mapped bytes EB 73: jmp 0x58853e2a
        __asm _emit 0xeb
        __asm _emit 0x73
        or dword ptr [esi + 1ch], 2
        ; Exact mapped bytes EB 6D: jmp 0x58853e2a
        __asm _emit 0xeb
        __asm _emit 0x6d
        cmp bl, 2ah
        ; Exact mapped bytes 74 0D: je 0x58853dcf
        __asm _emit 0x74
        __asm _emit 0x0d
        lea eax, [esi + 20h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B4 FA FF FF: call 0x58853881
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 57: jmp 0x58853e26
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [esi + 10h]
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [esi + 20h], eax
        test eax, eax
        ; Exact mapped bytes 79 09: jns 0x58853dea
        __asm _emit 0x79
        __asm _emit 0x09
        or dword ptr [esi + 1ch], 4
        neg eax
        mov dword ptr [esi + 20h], eax
        mov al, 1
        ; Exact mapped bytes EB 38: jmp 0x58853e26
        __asm _emit 0xeb
        __asm _emit 0x38
        and dword ptr [esi + 24h], 0
        ; Exact mapped bytes EB 36: jmp 0x58853e2a
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp bl, 2ah
        ; Exact mapped bytes 74 05: je 0x58853dfe
        __asm _emit 0x74
        __asm _emit 0x05
        lea eax, [esi + 24h]
        ; Exact mapped bytes EB C7: jmp 0x58853dc5
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov ecx, dword ptr [esi + 10h]
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [esi + 24h], eax
        test eax, eax
        ; Exact mapped bytes 79 DA: jns 0x58853dea
        __asm _emit 0x79
        __asm _emit 0xda
        or dword ptr [esi + 24h], 0ffffffffh
        ; Exact mapped bytes EB D4: jmp 0x58853dea
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, esi
        ; Exact mapped bytes E8 6B 07 00 00: call 0x58854588
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x58853e26
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 3C 0E 00 00: call 0x58854c62
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 70: je 0x58853e9a
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 0ch]
        mov bl, byte ptr [eax]
        inc eax
        mov dword ptr [esi + 0ch], eax
        mov byte ptr [esi + 2dh], bl
        mov byte ptr [ebp - 4], bl
        test bl, bl
        ; Exact mapped bytes 0F 85 3A FE FF FF: jne 0x58853c7b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [esi + 18h]
        test al, al
        ; Exact mapped bytes 74 04: je 0x58853e4c
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 7
        ; Exact mapped bytes 75 70: jne 0x58853ebc
        __asm _emit 0x75
        __asm _emit 0x70
        inc dword ptr [esi + 450h]
        cmp dword ptr [esi + 450h], 2
        ; Exact mapped bytes 0F 85 FD FD FF FF: jne 0x58853c5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 14h]
        ; Exact mapped bytes EB 39: jmp 0x58853e9d
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [esi + 8]
        xor ebx, ebx
        push 16h
        pop edi
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], edi
        push dword ptr [esi + 8]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 AE D0 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], edi
        push dword ptr [esi + 8]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 97 D0 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 30h
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov ecx, dword ptr [esi + 8]
        xor eax, eax
        mov byte ptr [ecx + 1ch], 1
        mov dword ptr [ecx + 18h], 16h
        push dword ptr [esi + 8]
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes EB 1B: jmp 0x58853ed7
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        push dword ptr [esi + 8]
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 52 D0 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes EB B9: jmp 0x58853e9a
        __asm _emit 0xeb
        __asm _emit 0xb9
    }
}
