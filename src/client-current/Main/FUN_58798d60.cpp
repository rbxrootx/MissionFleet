// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 4336 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798D60 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_58798d60_segment_00() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0ch]
        push ebx
        ; Exact mapped bytes 66 8B 5C 24 0C: mov bx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x0c
        push ebp
        push esi
        mov esi, ecx
        xor edx, edx
        mov dword ptr [esi + 2ech], eax
        ; Exact mapped bytes C7 05 D8 48 A2 58 01 00 00 00: mov dword ptr [0x58a248d8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 66 89 9E 6C 02 00 00: mov word ptr [esi + 0x26c], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edx
        ; Exact mapped bytes 74 08: je 0x58798d95
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 48h]
        shr eax, 0ah
        ; Exact mapped bytes EB 05: jmp 0x58798d9a
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 0ffffh
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [esi + 270h], ecx
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esi + 274h], ecx
        ; Exact mapped bytes 66 8B 4C 24 28: mov cx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 66 89 8E 78 02 00 00: mov word ptr [esi + 0x278], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 6E 02 00 00: mov word ptr [esi + 0x26e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 260h], edx
        mov dword ptr [esi + 2c8h], edx
        mov ecx, 0ffffffffh
        ; Exact mapped bytes 66 39 86 9C 02 00 00: cmp word ptr [esi + 0x29c], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x58798de4
        __asm _emit 0x75
        __asm _emit 0x09
        cmp byte ptr [esi + 2d8h], 2
        ; Exact mapped bytes 75 2F: jne 0x58798e13
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes 66 89 86 9C 02 00 00: mov word ptr [esi + 0x29c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esi + 2a0h], ecx
        mov dword ptr [esi + 2a4h], ecx
        mov dword ptr [esi + 2a8h], ecx
        mov dword ptr [esi + 2ach], ecx
        ; Exact mapped bytes 66 89 86 B0 02 00 00: mov word ptr [esi + 0x2b0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 B2 02 00 00: mov word ptr [esi + 0x2b2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2f0h]
        mov dword ptr [esi + 2b4h], ecx
        mov dword ptr [esi + 2b8h], ecx
        mov dword ptr [esi + 2bch], ecx
        mov dword ptr [esi + 2c0h], ecx
        mov ecx, 0ffffh
        mov eax, ecx
        ; Exact mapped bytes 66 89 8E C4 02 00 00: mov word ptr [esi + 0x2c4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 C6 02 00 00: mov word ptr [esi + 0x2c6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, edx
        ; Exact mapped bytes 74 45: je 0x58798e8f
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        mov ebp, dword ptr [edi + 4]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x58798e6a
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 E2 3D 1E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x3d
        __asm _emit 0x1e
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798E6A .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58798d60_segment_01() {
    __asm {
        mov ecx, dword ptr [edi + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x58798e80
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi + 14h], 0
        push edi
        ; Exact mapped bytes E8 BC 3D 1E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3d
        __asm _emit 0x1e
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798E8F .. +0xFD4 bytes.
extern "C" __declspec(naked) void FUN_58798d60_segment_02() {
    __asm {
        mov ecx, dword ptr [esi + 0b0h]
        xor eax, eax
        mov dword ptr [esi + 2f4h], eax
        mov dword ptr [esi + 2f8h], eax
        mov dword ptr [esi + 2f0h], eax
        mov dword ptr [esi + 2fch], eax
        ; Exact mapped bytes E8 3C F9 16 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf9
        __asm _emit 0x16
        __asm _emit 0x00
        lea edi, [esi + 0b4h]
        mov ebp, 6
        nop
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 29 F9 16 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E6: jne 0x58798ec0
        __asm _emit 0x75
        __asm _emit 0xe6
        mov eax, dword ptr [esi + 1ach]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b0h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        movzx edi, bx
        lea eax, [edi - 1]
        mov byte ptr [esi + 250h], 0
        mov dword ptr [esi + 2d0h], ebp
        mov dword ptr [esp + 28h], edi
        cmp eax, 0dh
        ; Exact mapped bytes 0F 87 1E 0F 00 00: ja 0x58799e5b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 64 9E 79 58: jmp dword ptr [eax*4 + 0x58799e64]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x9e
        __asm _emit 0x79
        __asm _emit 0x58
        cmp byte ptr [esi + 2d8h], 3
        mov dword ptr [esi + 264h], ebp
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 57: jne 0x58798faf
        __asm _emit 0x75
        __asm _emit 0x57
        cmp dword ptr [eax + 164h], 139h
        ; Exact mapped bytes 7E 16: jle 0x58798f7a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58798f7a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 4e4h]
        ; Exact mapped bytes EB 02: jmp 0x58798f7c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        push eax
        ; Exact mapped bytes E8 38 87 F9 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 13ah
        ; Exact mapped bytes 7E 6D: jle 0x58799006
        __asm _emit 0x7e
        __asm _emit 0x6d
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 65: je 0x58799006
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 4e8h]
        ; Exact mapped bytes EB 59: jmp 0x58799008
        __asm _emit 0xeb
        __asm _emit 0x59
        cmp dword ptr [eax + 164h], 0c8h
        ; Exact mapped bytes 7E 16: jle 0x58798fd1
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58798fd1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 320h]
        ; Exact mapped bytes EB 02: jmp 0x58798fd3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        push eax
        ; Exact mapped bytes E8 E1 86 F9 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0c9h
        ; Exact mapped bytes 7E 16: jle 0x58799006
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58799006
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 324h]
        ; Exact mapped bytes EB 02: jmp 0x58799008
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        push eax
        ; Exact mapped bytes E8 AC 86 F9 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 1C: je 0x58799038
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ecx + 0cc0h]
        cmp eax, ebp
        ; Exact mapped bytes 74 12: je 0x58799038
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 250h], eax
        mov dword ptr [esi + 2d0h], 1
        cmp byte ptr [esi + 2d8h], 1
        ; Exact mapped bytes 0F 85 16 0E 00 00: jne 0x58799e5b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, ebp
        ; Exact mapped bytes 0F 85 F9 03 00 00: jne 0x58799446
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ffffh
        mov ecx, dword ptr [esp + 20h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 AC 09 02 00: call 0x587b9a10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esi + 264h], ebp
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0cah
        ; Exact mapped bytes 7E 16: jle 0x58799099
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58799099
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 328h]
        ; Exact mapped bytes EB 02: jmp 0x5879909b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x587990d0
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0cbh
        ; Exact mapped bytes 7E 16: jle 0x587990f7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x587990f7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 32ch]
        ; Exact mapped bytes EB 02: jmp 0x587990f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x5879912e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esp + 1ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 32: je 0x58799168
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ecx + 0cc8h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x58799148
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 250h], edx
        mov eax, dword ptr [ecx + 48h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 0ah
        push eax
        mov eax, dword ptr [esp + 24h]
        push eax
        push edi
        ; Exact mapped bytes E8 B0 08 02 00: call 0x587b9a10
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 0ffffh
        push eax
        mov eax, dword ptr [esp + 24h]
        push eax
        push edi
        ; Exact mapped bytes E8 91 08 02 00: call 0x587b9a10
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esi + 264h], ebp
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d0h
        ; Exact mapped bytes 7E 16: jle 0x587991b4
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x587991b4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 340h]
        ; Exact mapped bytes EB 02: jmp 0x587991b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x587991eb
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d1h
        ; Exact mapped bytes 7E 16: jle 0x58799212
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58799212
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 344h]
        ; Exact mapped bytes EB 02: jmp 0x58799214
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x58799249
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esp + 1ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 17: je 0x58799268
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [ecx + edx*4 + 0b40h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x58799268
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 250h], eax
        cmp byte ptr [esi + 2d8h], 2
        ; Exact mapped bytes 0F 84 E6 0B 00 00: je 0x58799e5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, ebp
        ; Exact mapped bytes 0F 84 D0 FD FF FF: je 0x5879904d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 48h]
        shr eax, 0ah
        ; Exact mapped bytes E9 CA FD FF FF: jmp 0x58799052
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 264h], ebp
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0cch
        ; Exact mapped bytes 7E 16: jle 0x587992b5
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x587992b5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 330h]
        ; Exact mapped bytes EB 02: jmp 0x587992b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x587992ec
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0cdh
        ; Exact mapped bytes 7E 16: jle 0x58799313
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58799313
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 334h]
        ; Exact mapped bytes EB 02: jmp 0x58799315
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x5879934a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esp + 1ch]
        cmp ecx, ebp
        ; Exact mapped bytes 0F 84 12 FE FF FF: je 0x58799168
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 0ccch]
        ; Exact mapped bytes E9 DB FD FF FF: jmp 0x5879913c
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 264h], ebp
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d2h
        ; Exact mapped bytes 7E 16: jle 0x5879938e
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x5879938e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 348h]
        ; Exact mapped bytes EB 02: jmp 0x58799390
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x587993c5
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d3h
        ; Exact mapped bytes 7E 16: jle 0x587993ec
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x587993ec
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 34ch]
        ; Exact mapped bytes EB 02: jmp 0x587993ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x58799423
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esp + 1ch]
        cmp ecx, ebp
        ; Exact mapped bytes 0F 84 1E FC FF FF: je 0x5879904d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [ecx + edx*4 + 0b40h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x58799446
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 250h], eax
        mov eax, dword ptr [ecx + 48h]
        shr eax, 0ah
        ; Exact mapped bytes E9 01 FC FF FF: jmp 0x58799052
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 264h], 1
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d4h
        ; Exact mapped bytes 7E 16: jle 0x58799482
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58799482
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 350h]
        ; Exact mapped bytes EB 02: jmp 0x58799484
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x587994b9
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d5h
        ; Exact mapped bytes 7E 16: jle 0x587994e0
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x587994e0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 354h]
        ; Exact mapped bytes EB 02: jmp 0x587994e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x58799517
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 1ach]
        mov edx, 0fh
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b0h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b4h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a8h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 16h
        ; Exact mapped bytes 7E 15: jle 0x58799571
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x58799571
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 580h
        ; Exact mapped bytes EB 02: jmp 0x58799573
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x587995a8
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        cmp byte ptr [esi + 2d8h], 2
        ; Exact mapped bytes 0F 84 9C 08 00 00: je 0x58799e5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        mov ecx, dword ptr [edi + 0cc0h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edi + 0a70h]
        imul edx, edx, 3e8h
        xor eax, 0aaaaaaaah
        sub edx, eax
        cmp dword ptr [esi + 270h], 1ch
        mov dword ptr [esi + 258h], edx
        ; Exact mapped bytes 0F 8C 0D 01 00 00: jl 0x587996ff
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        mov edx, dword ptr [ecx + 0cc0h]
        movzx eax, word ptr [edx + 11ah]
        lea eax, [eax + eax*4]
        add eax, eax
        mov dword ptr [esi + 254h], eax
        mov edx, dword ptr [ecx + 0cc0h]
        mov ebp, dword ptr [edx + 268h]
        lea edi, [ecx + 0bc0h]
        add ecx, 0b40h
        mov ebx, 1ch
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 79 37: jns 0x5879966b
        __asm _emit 0x79
        __asm _emit 0x37
        mov edx, dword ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 31: je 0x5879966b
        __asm _emit 0x74
        __asm _emit 0x31
        cmp byte ptr [edx], 6
        ; Exact mapped bytes 75 2C: jne 0x5879966b
        __asm _emit 0x75
        __asm _emit 0x2c
        movzx eax, word ptr [ecx - 80h]
        movzx edx, word ptr [edx + 98h]
        xor eax, 0aah
        and edx, 0fh
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 13: jle 0x5879966b
        __asm _emit 0x7e
        __asm _emit 0x13
        mov edx, dword ptr [edi]
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x5879966b
        __asm _emit 0x74
        __asm _emit 0x0d
        movzx edx, word ptr [edx + 1eh]
        imul edx, eax
        sub dword ptr [esi + 254h], edx
        add ebp, ebp
        add ecx, 4
        add edi, 8
        sub ebx, 1
        ; Exact mapped bytes 75 B8: jne 0x58799630
        __asm _emit 0x75
        __asm _emit 0xb8
        mov ebp, dword ptr [esp + 1ch]
        lea edx, [ebp + 0b32h]
        mov edi, 1ch
        add ebp, 0ca4h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        cmp edi, dword ptr [esp + 20h]
        ; Exact mapped bytes 74 38: je 0x587996ce
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp]
        test ecx, ecx
        ; Exact mapped bytes 74 31: je 0x587996ce
        __asm _emit 0x74
        __asm _emit 0x31
        movzx eax, word ptr [edx]
        xor eax, 0aah
        cmp byte ptr [ecx], 0bh
        movzx ecx, word ptr [ecx + 1eh]
        ; Exact mapped bytes 75 17: jne 0x587996c5
        __asm _emit 0x75
        __asm _emit 0x17
        imul eax, ecx
        mov ecx, eax
        neg ecx
        add ecx, ecx
        add ecx, ecx
        sub ecx, eax
        add ecx, ecx
        add dword ptr [esi + 254h], ecx
        ; Exact mapped bytes EB 09: jmp 0x587996ce
        __asm _emit 0xeb
        __asm _emit 0x09
        imul eax, ecx
        sub dword ptr [esi + 254h], eax
        inc edi
        add ebp, 8
        add edx, 4
        cmp edi, 20h
        ; Exact mapped bytes 7C B6: jl 0x58799690
        __asm _emit 0x7c
        __asm _emit 0xb6
        mov ecx, dword ptr [esi + 254h]
        mov ebx, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 1ch]
        mov ebp, dword ptr [esp + 24h]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes EB 5D: jmp 0x5879975c
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ebx, dword ptr [esp + 20h]
        mov ecx, dword ptr [edi + ebx*4 + 0b40h]
        movzx edx, word ptr [ecx + 1eh]
        mov eax, dword ptr [edi + 0cc0h]
        movzx eax, word ptr [eax + ebx*2 + 0dah]
        mov ebp, dword ptr [esp + 24h]
        sub eax, edx
        xor ecx, ecx
        lea eax, [eax + eax*4]
        add eax, eax
        test ebp, ebp
        sete cl
        mov dword ptr [esi + 254h], eax
        lea edx, [ecx + ebx*2 + 2f0h]
        mov edx, dword ptr [edi + edx*4]
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x58799762
        __asm _emit 0x74
        __asm _emit 0x20
        movzx edx, word ptr [edx + 1eh]
        lea ecx, [ecx + ebx*2 + 560h]
        movzx ecx, word ptr [edi + ecx*2]
        xor ecx, 0aah
        imul ecx, edx
        sub eax, ecx
        mov dword ptr [esi + 254h], eax
        lea eax, [ebp + ebx*2 + 2f0h]
        lea ecx, [edi + eax*4]
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x587997c2
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 250h], edx
        lea eax, [ebp + ebx*2 + 560h]
        movzx edx, word ptr [edi + eax*2]
        lea eax, [edi + eax*2]
        mov dword ptr [esi + 25ch], edx
        movzx eax, word ptr [eax]
        mov ecx, dword ptr [ecx]
        xor eax, 0aah
        imul eax, dword ptr [ecx + 24h]
        add dword ptr [esi + 258h], eax
        mov edx, dword ptr [edi + 48h]
        mov eax, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        shr edx, 0ah
        push edx
        push ebx
        push eax
        ; Exact mapped bytes E8 56 02 02 00: call 0x587b9a10
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [esi + 25ch], 0aah
        mov edx, dword ptr [edi + 48h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        shr edx, 0ah
        push edx
        push ebx
        push eax
        ; Exact mapped bytes E8 2C 02 02 00: call 0x587b9a10
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esi + 264h], 1
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d6h
        ; Exact mapped bytes 7E 16: jle 0x5879981d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x5879981d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 358h]
        ; Exact mapped bytes EB 02: jmp 0x5879981f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x58799854
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d7h
        ; Exact mapped bytes 7E 16: jle 0x5879987b
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x5879987b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 35ch]
        ; Exact mapped bytes EB 02: jmp 0x5879987d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x587998b2
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 1ach]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b4h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a8h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 16h
        ; Exact mapped bytes 7E 15: jle 0x5879990c
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x5879990c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 580h
        ; Exact mapped bytes EB 02: jmp 0x5879990e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x58799943
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov edi, dword ptr [esp + 1ch]
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [edi + 0cc0h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edi + 0a70h]
        imul edx, edx, 3e8h
        xor eax, 0aaaaaaaah
        sub edx, eax
        mov eax, dword ptr [esi + 270h]
        mov dword ptr [esi + 258h], edx
        mov ecx, dword ptr [edi + eax*4 + 0b40h]
        mov eax, dword ptr [edi + 0cc0h]
        movzx edx, word ptr [eax + 11ah]
        mov eax, dword ptr [eax + 268h]
        lea edx, [edx + edx*4]
        add edx, edx
        xor ebp, ebp
        lea ebx, [edi + 0bc0h]
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 18h], eax
        add edi, 0b40h
        nop
        test dword ptr [esp + 18h], 80000000h
        ; Exact mapped bytes 74 39: je 0x587999f3
        __asm _emit 0x74
        __asm _emit 0x39
        cmp ebp, dword ptr [esp + 20h]
        ; Exact mapped bytes 74 33: je 0x587999f3
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x587999f3
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp byte ptr [ecx], 6
        ; Exact mapped bytes 75 28: jne 0x587999f3
        __asm _emit 0x75
        __asm _emit 0x28
        movzx eax, word ptr [edi - 80h]
        movzx ecx, word ptr [ecx + 98h]
        xor eax, 0aah
        and ecx, 0fh
        sub eax, ecx
        test eax, eax
        ; Exact mapped bytes 7E 0F: jle 0x587999f3
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ebx]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x587999f3
        __asm _emit 0x74
        __asm _emit 0x09
        movzx ecx, word ptr [ecx + 1eh]
        imul ecx, eax
        sub edx, ecx
        shl dword ptr [esp + 18h], 1
        inc ebp
        add edi, 4
        add ebx, 8
        cmp ebp, 1ch
        ; Exact mapped bytes 7C AD: jl 0x587999b0
        __asm _emit 0x7c
        __asm _emit 0xad
        mov eax, dword ptr [esp + 1ch]
        mov ecx, 1dh
        lea ebp, [eax + 0b36h]
        lea ebx, [eax + 0cach]
        cmp ecx, dword ptr [esp + 20h]
        ; Exact mapped bytes 74 2F: je 0x58799a4d
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edi, dword ptr [ebx]
        test edi, edi
        ; Exact mapped bytes 74 29: je 0x58799a4d
        __asm _emit 0x74
        __asm _emit 0x29
        movzx eax, word ptr [ebp]
        xor eax, 0aah
        cmp byte ptr [edi], 0bh
        movzx edi, word ptr [edi + 1eh]
        ; Exact mapped bytes 75 12: jne 0x58799a48
        __asm _emit 0x75
        __asm _emit 0x12
        imul eax, edi
        mov edi, eax
        neg edi
        add edi, edi
        add edi, edi
        sub edi, eax
        lea edx, [edx + edi*2]
        ; Exact mapped bytes EB 05: jmp 0x58799a4d
        __asm _emit 0xeb
        __asm _emit 0x05
        imul eax, edi
        sub edx, eax
        inc ecx
        add ebx, 8
        add ebp, 4
        cmp ecx, 20h
        ; Exact mapped bytes 7C BF: jl 0x58799a18
        __asm _emit 0x7c
        __asm _emit 0xbf
        mov ecx, dword ptr [esi + 270h]
        cmp ecx, 1ch
        mov edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 7C 1D: jl 0x58799a85
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov ebx, dword ptr [esp + 24h]
        mov dword ptr [esi + 254h], edx
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [esi + 260h], 0
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x58799b0e
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 80000000h
        shr eax, cl
        mov ecx, dword ptr [edi + 0cc0h]
        test dword ptr [ecx + 268h], eax
        ; Exact mapped bytes 74 1C: je 0x58799ab6
        __asm _emit 0x74
        __asm _emit 0x1c
        mov dword ptr [esi + 254h], edx
        mov edx, dword ptr [esp + 10h]
        movzx eax, word ptr [edx + 98h]
        and eax, 0fh
        mov dword ptr [esi + 260h], eax
        ; Exact mapped bytes EB 1E: jmp 0x58799ad4
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 254h], 0
        movzx edx, word ptr [ecx + 98h]
        and edx, 0fh
        mov dword ptr [esi + 260h], edx
        mov ebx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 20h]
        xor eax, eax
        test ebx, ebx
        sete al
        lea ecx, [eax + edx*2 + 2f0h]
        mov ecx, dword ptr [edi + ecx*4]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x58799b0e
        __asm _emit 0x74
        __asm _emit 0x1d
        movzx ecx, word ptr [ecx + 1eh]
        lea eax, [eax + edx*2 + 560h]
        movzx eax, word ptr [edi + eax*2]
        xor eax, 0aah
        imul eax, ecx
        sub dword ptr [esi + 254h], eax
        lea eax, [ebx + edx*2 + 2f0h]
        lea ecx, [edi + eax*4]
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58799b5b
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 250h], eax
        lea eax, [ebx + edx*2 + 560h]
        movzx ebx, word ptr [edi + eax*2]
        lea eax, [edi + eax*2]
        mov dword ptr [esi + 25ch], ebx
        movzx eax, word ptr [eax]
        mov ecx, dword ptr [ecx]
        xor eax, 0aah
        imul eax, dword ptr [ecx + 24h]
        add dword ptr [esi + 258h], eax
        mov eax, dword ptr [edi + 48h]
        shr eax, 0ah
        push eax
        push edx
        ; Exact mapped bytes E9 F0 02 00 00: jmp 0x58799e4b
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 25ch], 0aah
        mov eax, dword ptr [edi + 48h]
        shr eax, 0ah
        push eax
        push edx
        ; Exact mapped bytes E9 D9 02 00 00: jmp 0x58799e4b
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 264h], 1
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d8h
        ; Exact mapped bytes 7E 16: jle 0x58799ba3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58799ba3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 360h]
        ; Exact mapped bytes EB 02: jmp 0x58799ba5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x58799bda
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0d9h
        ; Exact mapped bytes 7E 16: jle 0x58799c01
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58799c01
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 364h]
        ; Exact mapped bytes EB 02: jmp 0x58799c03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x58799c38
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 1ach]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b4h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a8h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 16h
        ; Exact mapped bytes 7E 15: jle 0x58799c92
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x58799c92
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 580h
        ; Exact mapped bytes EB 02: jmp 0x58799c94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x58799cc9
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ebx + 0cc0h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebx + 0a70h]
        imul edx, edx, 3e8h
        mov edi, dword ptr [esi + 270h]
        xor eax, 0aaaaaaaah
        sub edx, eax
        mov dword ptr [esi + 258h], edx
        mov ecx, dword ptr [ebx + 0cc0h]
        movzx eax, word ptr [ecx + 11ch]
        lea edx, [eax + eax*4]
        add edx, edx
        mov dword ptr [esi + 254h], edx
        mov ecx, 1ch
        lea eax, [ebx + 0bb0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 1F: je 0x58799d3b
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [eax]
        cmp edx, ebp
        ; Exact mapped bytes 74 19: je 0x58799d3b
        __asm _emit 0x74
        __asm _emit 0x19
        movzx ebp, word ptr [eax - 80h]
        movzx edx, word ptr [edx + 1eh]
        xor ebp, 0aah
        imul ebp, edx
        sub dword ptr [esi + 254h], ebp
        xor ebp, ebp
        inc ecx
        add eax, 4
        cmp ecx, 20h
        ; Exact mapped bytes 7C D4: jl 0x58799d18
        __asm _emit 0x7c
        __asm _emit 0xd4
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [ebx + ecx*4 + 0b40h]
        cmp eax, ebp
        ; Exact mapped bytes 74 18: je 0x58799d6b
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 250h], eax
        movzx ecx, word ptr [ebx + ecx*4 + 0ac0h]
        mov dword ptr [esi + 25ch], ecx
        ; Exact mapped bytes EB 0A: jmp 0x58799d75
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 25ch], 0aah
        mov dword ptr [esi + 2cch], 0
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 14h]
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov bl, byte ptr [edx + 61h]
        test edi, edi
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x58799e35
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 20h]
        add ebp, -1ch
        nop
        cmp ebp, 3
        ; Exact mapped bytes 77 79: ja 0x58799e1e
        __asm _emit 0x77
        __asm _emit 0x79
        ; Exact mapped bytes FF 24 AD 9C 9E 79 58: jmp dword ptr [ebp*4 + 0x58799e9c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0xad
        __asm _emit 0x9c
        __asm _emit 0x9e
        __asm _emit 0x79
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 0ch]
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        cmp eax, 1fh
        ; Exact mapped bytes 74 4B: je 0x58799e07
        __asm _emit 0x74
        __asm _emit 0x4b
        cmp eax, 66h
        ; Exact mapped bytes 74 46: je 0x58799e07
        __asm _emit 0x74
        __asm _emit 0x46
        cmp eax, 67h
        ; Exact mapped bytes 75 58: jne 0x58799e1e
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes EB 3F: jmp 0x58799e07
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [edi + 0ch]
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        cmp eax, 20h
        ; Exact mapped bytes 72 46: jb 0x58799e1e
        __asm _emit 0x72
        __asm _emit 0x46
        cmp eax, 22h
        ; Exact mapped bytes EB 28: jmp 0x58799e05
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [edi + 0ch]
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        cmp eax, 23h
        ; Exact mapped bytes 72 31: jb 0x58799e1e
        __asm _emit 0x72
        __asm _emit 0x31
        cmp eax, 25h
        ; Exact mapped bytes EB 13: jmp 0x58799e05
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [edi + 0ch]
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        cmp eax, 26h
        ; Exact mapped bytes 72 1C: jb 0x58799e1e
        __asm _emit 0x72
        __asm _emit 0x1c
        cmp eax, 28h
        ; Exact mapped bytes 77 17: ja 0x58799e1e
        __asm _emit 0x77
        __asm _emit 0x17
        mov dl, byte ptr [ecx + 5eh]
        and dl, 0fh
        cmp dl, bl
        ; Exact mapped bytes 74 1A: je 0x58799e2b
        __asm _emit 0x74
        __asm _emit 0x1a
        movzx eax, bl
        push eax
        ; Exact mapped bytes E8 16 FE FD FF: call 0x58779c30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x58799e2b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 0F 85 77 FF FF FF: jne 0x58799da0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x58799e35
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 2cch], 1
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [esp + 20h]
        shr edx, 0ah
        add eax, -1bh
        push edx
        shl eax, 10h
        push eax
        mov ecx, dword ptr [esp + 30h]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 FB 01 00: call 0x587b9a10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
