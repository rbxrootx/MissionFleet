// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CD660 .. +0x39F bytes.
extern "C" __declspec(naked) void FUN_584cd660_584CD660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 64 03 00 00: je 0x584cd9f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 76 3C: jbe 0x584cd6d2
        __asm _emit 0x76
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x584cd6be
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 70h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 70h], eax
        ; Exact mapped bytes E9 1F 03 00 00: jmp 0x584cd9f1
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x584cd6f6
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 01: or ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 84h]
        neg eax
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 88h]
        neg edx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 8ch]
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 14h], -10h
        ; Exact mapped bytes 7E 7B: jle 0x584cd7a1
        __asm _emit 0x7e
        __asm _emit 0x7b
        cmp dword ptr [ebp - 14h], 10h
        ; Exact mapped bytes 7D 75: jge 0x584cd7a1
        __asm _emit 0x7d
        __asm _emit 0x75
        cmp dword ptr [ebp - 14h], -8
        ; Exact mapped bytes 7E 58: jle 0x584cd78a
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 52: jge 0x584cd78a
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 14h], -4
        ; Exact mapped bytes 7E 39: jle 0x584cd777
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 33: jge 0x584cd777
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 09: jge 0x584cd753
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584cd76f
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 09: jle 0x584cd762
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 07: jmp 0x584cd769
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584cd782
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 0F: jmp 0x584cd799
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 14h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 0F: jmp 0x584cd7b0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 14h]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 10h], -10h
        ; Exact mapped bytes 7E 7B: jle 0x584cd837
        __asm _emit 0x7e
        __asm _emit 0x7b
        cmp dword ptr [ebp - 10h], 10h
        ; Exact mapped bytes 7D 75: jge 0x584cd837
        __asm _emit 0x7d
        __asm _emit 0x75
        cmp dword ptr [ebp - 10h], -8
        ; Exact mapped bytes 7E 58: jle 0x584cd820
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 52: jge 0x584cd820
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 10h], -4
        ; Exact mapped bytes 7E 39: jle 0x584cd80d
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 33: jge 0x584cd80d
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x584cd7e9
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584cd805
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 09: jle 0x584cd7f8
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 1
        ; Exact mapped bytes EB 07: jmp 0x584cd7ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 0B: jmp 0x584cd818
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 0F: jmp 0x584cd82f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x584cd846
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 0ch], -10h
        ; Exact mapped bytes 7E 7B: jle 0x584cd8cd
        __asm _emit 0x7e
        __asm _emit 0x7b
        cmp dword ptr [ebp - 0ch], 10h
        ; Exact mapped bytes 7D 75: jge 0x584cd8cd
        __asm _emit 0x7d
        __asm _emit 0x75
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x584cd8b6
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x584cd8b6
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x584cd8a3
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x584cd8a3
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x584cd87f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584cd89b
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x584cd88e
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 1
        ; Exact mapped bytes EB 07: jmp 0x584cd895
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x584cd8ae
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes EB 0F: jmp 0x584cd8c5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 0F: jmp 0x584cd8dc
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 84h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 84h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 88h]
        add eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 88h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8ch]
        add eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 8ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 7ch], eax
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [eax + 8ch], 6
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 88h]
        add ecx, eax
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 80h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 80h], ecx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 80h]
        cdq
        mov ecx, 15eh
        idiv ecx
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 78h]
        sub ecx, eax
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 7ch]
        cdq
        mov ecx, 0c8h
        idiv ecx
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 74h]
        lea edx, [ecx + eax + 1]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 80 7C 2E 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 17 70 FB FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ecx + 60h]
        ; Exact mapped bytes 7D 0D: jge 0x584cd9be
        __asm _emit 0x7d
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 85 77 FE FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 33: jmp 0x584cd9f1
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DA 8F FB FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x584cd9ea
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 A4: call dword ptr [ebp - 0x5c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa4
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x584cd9f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 55 36 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x36
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
