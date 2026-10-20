// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58497CB0 .. +0x2EE bytes.
extern "C" __declspec(naked) void FUN_58497cb0_58497CB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887da67h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 4ch
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 468h], 0
        ; Exact mapped bytes 0F 84 A5 02 00 00: je 0x58497f8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 468h], 0
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 82 D2 02 00 00: mov ax, word ptr [edx + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 D2 02 00 00: mov word ptr [ecx + 0x2d2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 510h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 2d2h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 63 34 32 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x34
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 07 47 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 CC FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x58497d7d
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 F1 46 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8A CC FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 0c2h]
        cmp edx, ecx
        ; Exact mapped bytes 75 09: jne 0x58497d74
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 64h
        ; Exact mapped bytes EB 07: jmp 0x58497d7b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 14h
        ; Exact mapped bytes EB 07: jmp 0x58497d84
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 64h
        push 6eh
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 158h]
        push eax
        push 32c8h
        ; Exact mapped bytes E8 55 C2 04 00: call 0x584e3ff0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 4a8h]
        cdq
        mov ecx, 5dch
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 4a8h]
        cdq
        mov ecx, 5dch
        idiv ecx
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        mov dword ptr [ebp - 54h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 4a8h]
        cdq
        mov ecx, 5dch
        idiv ecx
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov dword ptr [ebp - 44h], eax
        push 438h
        ; Exact mapped bytes E8 B7 91 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x91
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 61: je 0x58497ec1
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 EB FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 D7 42 FF FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 44 FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 40h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 14 C7 0B 00: call 0x585545d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc7
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58497ec8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x58497f8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4B 01 0C 00: call 0x58558040
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C 52 00 00: call 0x5849d1a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 0bch
        push eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A3 FC 0B 00: call 0x58557bd0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A7 52 00 00: call 0x5849d1e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C D8 FF FF: call 0x58495790
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 3D 86 0B 00: call 0x58550590
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 D9 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x58497f8e
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 D9 FF FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 1B: jne 0x58497f8e
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 D8 FF FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 03 B4 FF FF: call 0x58493390
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
