// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FB9A0 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_585fb9a0_585FB9A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6e0h], 0
        ; Exact mapped bytes 0F 84 85 01 00 00: je 0x585fbb3e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 75 4E: jne 0x585fba13
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], 40000000h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 91 FE FF: call 0x585e4bc0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 86 F2 FF: call 0x58524080
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585fb9fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 12: jge 0x585fba13
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx*4 + 58948c34h]
        ; Exact mapped bytes E8 C0 7A F2 FF: call 0x585234d0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB DF: jmp 0x585fb9f2
        __asm _emit 0xeb
        __asm _emit 0xdf
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 11 01 00 00: je 0x585fbb31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 2D F8 FF: call 0x5857e7b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 9E E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9e
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 74 2C: je 0x585fba68
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 9E E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 9
        ; Exact mapped bytes 74 1C: je 0x585fba68
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 83 3D 78 20 96 58 01: cmp dword ptr [0x58962078], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 75 13: jne 0x585fba68
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 1F F8 FF: call 0x5857d9d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D B6 ED FF: call 0x584d70d0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb6
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D6 00 00 00: call 0x585fbb50
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 64: jne 0x585fbae3
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 0F B6 0D C5 05 96 58: movzx ecx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 7C 40: jl 0x585fbaca
        __asm _emit 0x7c
        __asm _emit 0x40
        ; Exact mapped bytes 0F B6 15 C5 05 96 58: movzx edx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 5
        ; Exact mapped bytes 7D 34: jge 0x585fbaca
        __asm _emit 0x7d
        __asm _emit 0x34
        ; Exact mapped bytes 0F B6 05 C5 05 96 58: movzx eax, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [eax*4 + 589605ach], -1
        ; Exact mapped bytes 74 23: je 0x585fbaca
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 0F B6 0D C5 05 96 58: movzx ecx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 0F B6 15 C5 05 96 58: movzx edx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx*4 + 589605ach]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 1D F8 FF: call 0x5857d8c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB B5 ED FF: call 0x584d70d0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb5
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DE 8E FF FF: call 0x585f49c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 7C 20 96 58 01: cmp dword ptr [0x5896207c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 75 45: jne 0x585fbb31
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 AB FA FF: call 0x585a66a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xab
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F B6 0D C5 05 96 58: movzx ecx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ecx*4 + 589605ach], -1
        ; Exact mapped bytes 74 28: je 0x585fbb31
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 9D E9 FF: call 0x58495910
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9d
        __asm _emit 0xe9
        __asm _emit 0xff
        and eax, 1
        ; Exact mapped bytes 74 18: je 0x585fbb31
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 0F B6 15 C5 05 96 58: movzx edx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 5
        ; Exact mapped bytes 7D 0C: jge 0x585fbb31
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 AE FA FF: call 0x585a69a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xae
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6e0h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
