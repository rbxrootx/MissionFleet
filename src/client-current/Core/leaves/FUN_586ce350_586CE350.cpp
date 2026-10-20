// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CE350 .. +0x5FE bytes.
extern "C" __declspec(naked) void FUN_586ce350_586CE350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
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
        ; Exact mapped bytes 0F 84 38 05 00 00: je 0x586ce8b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 57 B0 E6 FF: call 0x585393e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb0
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        push 40h
        push 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 100h
        push ecx
        ; Exact mapped bytes E8 71 EA 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xea
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        movzx edx, word ptr [ebp - 0ah]
        push edx
        movzx eax, word ptr [ebp - 0ch]
        push eax
        push 588b1ff8h
        push 40h
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 100h
        push ecx
        ; Exact mapped bytes E8 2E 2A DE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2a
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 100h
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BD 7C DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x7c
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 74 1B: je 0x586ce416
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 5D 01 00 00: jne 0x586ce573
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x586ce4b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 54h]
        sub ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], -8
        ; Exact mapped bytes 7E 58: jle 0x586ce495
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 1ch], 8
        ; Exact mapped bytes 7D 52: jge 0x586ce495
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 1ch], -4
        ; Exact mapped bytes 7E 39: jle 0x586ce482
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 1ch], 4
        ; Exact mapped bytes 7D 33: jge 0x586ce482
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 09: jge 0x586ce45e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x586ce47a
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7E 09: jle 0x586ce46d
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x586ce474
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x586ce48d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x586ce4a4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 1ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FA 6D 0E 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x586ce573
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 75 32: jne 0x586ce512
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 61: jmp 0x586ce573
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 4A: jne 0x586ce573
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
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
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 0F 85 2A 03 00 00: jne 0x586ce8b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 0d2h]
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 0d0h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 0E 03 00 00: je 0x586ce8b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, word ptr [ecx + 0d2h]
        cmp edx, 0ah
        ; Exact mapped bytes 0F 85 36 01 00 00: jne 0x586ce6f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x586ce6ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0cch], 0
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 0d0h]
        cmp eax, 0ah
        ; Exact mapped bytes 75 19: jne 0x586ce602
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 44 12 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x12
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x586ce6ee
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 0d0h]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 68: jne 0x586ce679
        __asm _emit 0x75
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 BC 78 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A9 78 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 93 78 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7D 78 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 4ch], edx
        push 2
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 CA 11 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x11
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 75: jmp 0x586ce6ee
        __asm _emit 0xeb
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 0d0h]
        cmp ecx, 0dh
        ; Exact mapped bytes 75 66: jne 0x586ce6ee
        __asm _emit 0x75
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 45 78 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 32 78 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 58h], ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 1C 78 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 06 78 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 53 11 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x586ce7d7
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 0d2h]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 5B: jne 0x586ce75d
        __asm _emit 0x75
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0cch], 0
        ; Exact mapped bytes 74 4D: je 0x586ce75b
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 64h], edx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 AF 77 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x77
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 99 77 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x77
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 6ch], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 E6 10 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x10
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7A: jmp 0x586ce7d7
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, word ptr [ecx + 0d2h]
        cmp edx, 0dh
        ; Exact mapped bytes 75 25: jne 0x586ce791
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 70h], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 5E 77 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x77
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0cch], 0
        ; Exact mapped bytes EB 46: jmp 0x586ce7d7
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 0d2h]
        test ecx, ecx
        ; Exact mapped bytes 75 38: jne 0x586ce7d7
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes E8 1D 63 E6 FF: call 0x58534ad0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x63
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x586ce7d7
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 74h], eax
        push 2
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 76 10 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x10
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0cch], 0
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0cch], 0
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x586ce8b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0c8h], 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0cch], 0ffffffffh
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes E8 9B D8 DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd8
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 46h
        mov dword ptr [ebp - 84h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 88 D0 00 00 00: mov cx, word ptr [eax + 0xd0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8A D2 00 00 00: mov word ptr [edx + 0xd2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 48 77 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x77
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, word ptr [ecx + 0d0h]
        test edx, edx
        ; Exact mapped bytes 74 61: je 0x586ce8b8
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 0d2h]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 02: jne 0x586ce868
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 50: jmp 0x586ce8b8
        __asm _emit 0xeb
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 0d0h]
        cmp eax, 0bh
        ; Exact mapped bytes 75 02: jne 0x586ce879
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 3F: jmp 0x586ce8b8
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, word ptr [ecx + 0d0h]
        cmp edx, 0ah
        ; Exact mapped bytes 75 30: jne 0x586ce8b8
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 7ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 F2 76 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x76
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ech]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0ech]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x586ce8d9
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x586ce8d9
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 5A: je 0x586ce942
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x586ce8fc
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB E6: jmp 0x586ce8e2
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0C 6D DC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x6d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x586ce920
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x586ce942
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x586ce940
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E8 6C DC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 80h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB A0: jmp 0x586ce8e2
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 04 27 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        mov esp, ebp
    }
}
