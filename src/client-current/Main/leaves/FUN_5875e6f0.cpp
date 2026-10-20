// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E6F0 .. +0x229 bytes.
extern "C" __declspec(naked) void FUN_5875e6f0() {
    __asm {
        push -1
        push 589894abh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 E2 01 00 00: je 0x5875e905
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 60h], 0
        ; Exact mapped bytes 0F 8E C2 01 00 00: jle 0x5875e8ef
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 50h], 0
        ; Exact mapped bytes 75 6C: jne 0x5875e79f
        __asm _emit 0x75
        __asm _emit 0x6c
        ; Exact mapped bytes 83 3D DC 8E 9C 58 00: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 63: je 0x5875e79f
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 1D 80 45 A2 58: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ebx + 1ch]
        sub eax, dword ptr [ebx + 14h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 10524h]
        mov edi, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv edi
        mov edi, dword ptr [esi + 4]
        mov ebp, dword ptr [ecx + 50h]
        sub edi, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, dword ptr [ebx + 18h]
        sub edi, ebp
        mov ebp, dword ptr [ecx + 54h]
        mov ecx, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 64h]
        push edx
        sub eax, dword ptr [esi + 8]
        add eax, ebp
        push eax
        push edi
        ; Exact mapped bytes E8 61 8C 05 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        movzx edx, word ptr [esi + 24h]
        inc dword ptr [esi + 50h]
        dec dword ptr [esi + 60h]
        mov ecx, 0ffffh
        ; Exact mapped bytes 66 33 C1: xor ax, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc1
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        movzx edx, word ptr [esi + 24h]
        test dl, 1
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x5875e8a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 6F E4 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe4
        __asm _emit 0x21
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 14h], ebp
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        cmp ebp, ebx
        ; Exact mapped bytes 74 71: je 0x5875e863
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1b9h
        ; Exact mapped bytes 7E 14: jle 0x5875e817
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0C: je 0x5875e817
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 18ch]
        mov ebx, dword ptr [eax + 6e4h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx eax, dx
        push eax
        ; Exact mapped bytes E8 01 E4 21 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0x21
        __asm _emit 0x00
        cdq
        mov ecx, 3
        idiv ecx
        mov eax, dword ptr [esi + 8]
        sub eax, edx
        inc eax
        push eax
        ; Exact mapped bytes E8 ED E3 21 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0x21
        __asm _emit 0x00
        cdq
        mov ecx, 3
        idiv ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, ebp
        sub eax, edx
        inc eax
        push eax
        push ebx
        push edi
        ; Exact mapped bytes E8 2F 64 03 00: call 0x58794c90
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov ebx, eax
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 C6 E3 21 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe3
        __asm _emit 0x21
        __asm _emit 0x00
        cdq
        mov ecx, 0c8h
        idiv ecx
        mov eax, dword ptr [esi + 58h]
        mov ecx, 0e10h
        lea eax, [edx + eax - 64h]
        cdq
        idiv ecx
        mov edi, edx
        test edi, edi
        ; Exact mapped bytes 7D 02: jge 0x5875e88f
        __asm _emit 0x7d
        __asm _emit 0x02
        add edi, ecx
        ; Exact mapped bytes E8 A2 E3 21 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe3
        __asm _emit 0x21
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov ecx, ebx
        add edx, dword ptr [esi + 5ch]
        push edx
        push edi
        ; Exact mapped bytes E8 68 60 03 00: call 0x58794910
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 56: je 0x5875e905
        __asm _emit 0x74
        __asm _emit 0x56
        nop
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 1C: je 0x5875e8d9
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5875e8b0
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
        ; Exact mapped bytes E8 2C 43 1A 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x43
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 75 43 1A 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x43
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
