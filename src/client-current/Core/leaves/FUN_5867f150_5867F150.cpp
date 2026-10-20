// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867F150 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_5867f150_5867F150() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 18: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x18
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes A1 10 67 96 58: mov eax, dword ptr [0x58966710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 64 8B 0D 2C 00 00 00: mov ecx, dword ptr fs:[0x2c]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 81: mov edx, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x81
        ; Exact mapped bytes A1 3C 5D 96 58: mov eax, dword ptr [0x58965d3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 82 04 00 00 00: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 2C: jle 0x5867f1a1
        __asm _emit 0x7e
        __asm _emit 0x2c
        ; Exact mapped bytes 68 3C 5D 96 58: push 0x58965d3c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 28 1B 00: call 0x58831a7d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 3D 3C 5D 96 58 FF: cmp dword ptr [0x58965d3c], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 75 16: jne 0x5867f1a1
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 0D 38 5D 96 58: mov dword ptr [0x58965d38], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 3C 5D 96 58: push 0x58965d3c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 28 1B 00: call 0x58831a2c
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 15 38 5D 96 58: mov edx, dword ptr [0x58965d38]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 55 08: cmp edx, dword ptr [ebp + 8]
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 7D 0F: jge 0x5867f1bb
        __asm _emit 0x7d
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 80 1C 03 00 00 01 00 00 00: mov dword ptr [eax + 0x31c], 1
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x5867f1c8
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C7 81 1C 03 00 00 00 00 00 00: mov dword ptr [ecx + 0x31c], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 89 15 38 5D 96 58: mov dword ptr [0x58965d38], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 2B 45 08: sub eax, dword ptr [ebp + 8]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 6B 45 F8 31: imul eax, dword ptr [ebp - 8], 0x31
        __asm _emit 0x6b
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x31
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 7D 0C: idiv dword ptr [ebp + 0xc]
        __asm _emit 0xf7
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 83 7D F8 00: cmp dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x00
        ; Exact mapped bytes 74 28: je 0x5867f213
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 08 03 00 00: mov edx, dword ptr [ecx + 0x308]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 F0: mov dword ptr [ebp - 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 0C 03 00 00: mov ecx, dword ptr [eax + 0x30c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 F4: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 8D 44 11 01: lea eax, [ecx + edx + 1]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 A0 64 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 1F: jmp 0x5867f232
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 08 03 00 00: mov edx, dword ptr [ecx + 0x308]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 EC: mov dword ptr [ebp - 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 0C 03 00 00: mov ecx, dword ptr [eax + 0x30c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 7F 64 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 04 03 00 00: mov eax, dword ptr [edx + 0x304]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 14 03 00 00: mov edx, dword ptr [ecx + 0x314]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 55 F4: sub edx, dword ptr [ebp - 0xc]
        __asm _emit 0x2b
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 5D 64 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
