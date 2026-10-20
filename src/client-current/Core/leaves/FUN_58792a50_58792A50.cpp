// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792A50 .. +0x2AD bytes.
extern "C" __declspec(naked) void FUN_58792a50_58792A50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x58792af9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 03 00 00: call 0x58792e00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58792a84
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 13 0D 00 00: call 0x58793790
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x58792cf7
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0E: jne 0x58792a98
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 DB 7E FF FF: call 0x5878a970
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5C: jmp 0x58792af4
        __asm _emit 0xeb
        __asm _emit 0x5c
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 16: jne 0x58792ab4
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7A 4D FF FF: call 0x58787820
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 84h], eax
        ; Exact mapped bytes EB 40: jmp 0x58792af4
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp dword ptr [ebp + 10h], 0ah
        ; Exact mapped bytes 75 3A: jne 0x58792af4
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3E 7F FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2B 7F FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD D2 FF FF: call 0x5878fdc0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FC 01 00 00: jmp 0x58792cf5
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 4E: jne 0x58792b4d
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 75 3B: jne 0x58792b48
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 E5 38 D5 FF: call 0x584e6400
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x38
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 26: jne 0x58792b48
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 E0 50 FF FF: call 0x58787c10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 35 7E FF FF: call 0x5878a970
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], 0
        ; Exact mapped bytes E9 A8 01 00 00: jmp 0x58792cf5
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x58792bef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B 02 00 00: call 0x58792e00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 2D: jne 0x58792b9b
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8A 7E FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C D5 FF FF: call 0x587900a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x58792cf7
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 16: jne 0x58792bb7
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E7 4B FF FF: call 0x58787790
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 BC 7D FF FF: call 0x5878a970
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 33: jmp 0x58792bea
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 41 7E FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 0bh]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 32 7E FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 0ah]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 97 05 00 00: call 0x58793180
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x58792cf5
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x58792cf5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 01 00 00: call 0x58792e00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x58792c11
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x58792cf7
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 1D CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1d
        __asm _emit 0xcf
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 2C CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2c
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x58792cbc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 1D CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x1d
        __asm _emit 0xcf
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 02 00 00: call 0x58792f20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58792c4d
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x58792cf7
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 1D CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1d
        __asm _emit 0xcf
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 04 00 00: call 0x587930e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 75 07: jne 0x58792c71
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x58792cf7
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 87 7D FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 0bh]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 20: jne 0x58792ca2
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 7D FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 0ah]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 75 0C: jne 0x58792ca2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 12 4F FF FF: call 0x58787bb0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 55: jmp 0x58792cf7
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 04 00 00: call 0x58793180
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x58792cf5
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3C 7D FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 1D CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC D2 FF FF: call 0x5878ffc0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
