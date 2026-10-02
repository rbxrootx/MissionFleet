// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872D130 .. +0x19B bytes.
extern "C" __declspec(naked) void FUN_5872d130() {
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
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 79 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x79
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 9B D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9b
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 8D D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 8D D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 8D D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 79 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x79
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 9A D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9a
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 79 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x79
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 9A D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9a
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes C7 45 E8 FF FF FF FF: mov dword ptr [ebp - 0x18], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 81 7D F8 00 00 04 00: cmp dword ptr [ebp - 8], 0x40000
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 77 24: ja 0x5872d1f7
        __asm _emit 0x77
        __asm _emit 0x24
        ; Exact mapped bytes 81 7D F8 00 00 04 00: cmp dword ptr [ebp - 8], 0x40000
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5872d280
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7D F8 00 00 02 00: cmp dword ptr [ebp - 8], 0x20000
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 45: je 0x5872d22e
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 81 7D F8 00 00 03 00: cmp dword ptr [ebp - 8], 0x30000
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x5872d205
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x5872d299
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7D F8 00 00 05 00: cmp dword ptr [ebp - 8], 0x50000
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 57: je 0x5872d257
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x5872d299
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C7 41 64 02 00 00 00: mov dword ptr [ecx + 0x64], 2
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 42 64: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 89 41 68: mov dword ptr [ecx + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 9A D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9a
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 6B: jmp 0x5872d299
        __asm _emit 0xeb
        __asm _emit 0x6b
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes C7 42 64 02 00 00 00: mov dword ptr [edx + 0x64], 2
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 48 64: mov ecx, dword ptr [eax + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x64
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 89 4A 68: mov dword ptr [edx + 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x68
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 9A D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9a
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 42: jmp 0x5872d299
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 40 64 02 00 00 00: mov dword ptr [eax + 0x64], 2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 89 50 68: mov dword ptr [eax + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x68
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 99 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x99
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 19: jmp 0x5872d299
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C7 41 64 02 00 00 00: mov dword ptr [ecx + 0x64], 2
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 42 64: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 89 41 68: mov dword ptr [ecx + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes C7 42 54 2C 01 00 00: mov dword ptr [edx + 0x54], 0x12c
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x54
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 40 58 2C 01 00 00: mov dword ptr [eax + 0x58], 0x12c
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 42 64: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 89 41 5C: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 42 68: mov eax, dword ptr [edx + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x68
        ; Exact mapped bytes 89 41 60: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
