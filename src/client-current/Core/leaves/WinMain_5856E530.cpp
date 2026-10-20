// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856E530 .. +0x3A6 bytes.
extern "C" __declspec(naked) void WinMain_5856E530() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 81 EC B8 02 00 00: sub esp, 0x2b8
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes E8 B8 6F F5 FF: call 0x584c5500
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6f
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x5856e557
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes E8 9F 6E F5 FF: call 0x584c53f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E8 2A EA FA FF: call 0x5851cf80
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E8 A4 73 F5 FF: call 0x584c5900
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x73
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C0: movzx eax, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 58: je 0x5856e5bb
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 10 67 96 58: mov ecx, dword ptr [0x58966710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 64 8B 15 2C 00 00 00: mov edx, dword ptr fs:[0x2c]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 8A: mov eax, dword ptr [edx + ecx*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x8a
        ; Exact mapped bytes 8B 0D E0 23 96 58: mov ecx, dword ptr [0x589623e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 88 04 00 00 00: cmp ecx, dword ptr [eax + 4]
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 3A: jle 0x5856e5bb
        __asm _emit 0x7e
        __asm _emit 0x3a
        ; Exact mapped bytes 68 E0 23 96 58: push 0x589623e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 34 2C 00: call 0x58831a7d
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x34
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 3D E0 23 96 58 FF: cmp dword ptr [0x589623e0], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 75 24: jne 0x5856e5bb
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes B9 CC 23 96 58: mov ecx, 0x589623cc
        __asm _emit 0xb9
        __asm _emit 0xcc
        __asm _emit 0x23
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF F8 FF FF: call 0x5856de90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 B0 2E 89 58: push 0x58892eb0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x2e
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 34 2C 00: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x34
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 68 E0 23 96 58: push 0x589623e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 34 2C 00: call 0x58831a2c
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x34
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes E8 20 40 F9 FF: call 0x585025e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E8 9B 0F F6 FF: call 0x584cf560
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0f
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes B9 F0 BE 90 58: mov ecx, 0x5890bef0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 95 F5 FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x95
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E8 4A 10 F6 FF: call 0x584cf620
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes C7 85 48 FD FF FF 80 02 00 00: mov dword ptr [ebp - 0x2b8], 0x280
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 28 98 8A 58: push 0x588a9828
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x98
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 3E FB FF: call 0x58522430
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 68 80 02 00 00: push 0x280
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 49 3F FB FF: call 0x58522540
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes E8 51 71 F5 FF: call 0x584c5750
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x71
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 D0: movzx edx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 06: je 0x5856e60c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes E8 15 3C F9 FF: call 0x58502220
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E8 3F 40 F9 FF: call 0x58502650
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E8 A9 22 F9 FF: call 0x585008c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 42 1E F9 FF: call 0x58500460
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1e
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 16: jne 0x5856e638
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes E8 99 22 F9 FF: call 0x585008c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 82 27 F9 FF: call 0x58500db0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x27
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes B8 FE FF FF FF: mov eax, 0xfffffffe
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8E 02 00 00: jmp 0x5856e8c6
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 8D 8D 6C FD FF FF: lea ecx, [ebp - 0x294]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 9B 64 01 00: call 0x58584ae0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 8C 01 00 00: push 0x18c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 22 96 58: push 0x58962240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA E7 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe7
        __asm _emit 0x2d
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 0D: cmp eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 7C 63: jl 0x5856e6cb
        __asm _emit 0x7c
        __asm _emit 0x63
        ; Exact mapped bytes 68 34 98 8A 58: push 0x588a9834
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x98
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 6A 25 2E 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x25
        __asm _emit 0x2e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4E: je 0x5856e6cb
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 1A: push 0x1a
        __asm _emit 0x6a
        __asm _emit 0x1a
        ; Exact mapped bytes 68 40 22 96 58: push 0x58962240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 5A 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5a
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 0D: imul ecx, eax, 0xd
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x0d
        ; Exact mapped bytes 03 4D 10: add ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 3C 98 8A 58: push 0x588a983c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x98
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 68 2C 01 00 00: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 5A 22 96 58: push 0x5896225a
        __asm _emit 0x68
        __asm _emit 0x5a
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 27 F4 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x27
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 68 5A 22 96 58: push 0x5896225a
        __asm _emit 0x68
        __asm _emit 0x5a
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 2A 2E 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2a
        __asm _emit 0x2e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 07: jbe 0x5856e6cb
        __asm _emit 0x76
        __asm _emit 0x07
        ; Exact mapped bytes C6 05 C8 23 96 58 01: mov byte ptr [0x589623c8], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x23
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8D 6C FD FF FF: lea ecx, [ebp - 0x294]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F6 68 01 00: call 0x58584fd0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 C0: movzx eax, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 29: jne 0x5856e70a
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C7 85 58 FD FF FF 00 00 00 00: mov dword ptr [ebp - 0x2a8], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 6C FD FF FF: lea ecx, [ebp - 0x294]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 31 66 01 00: call 0x58584d30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 58 FD FF FF: mov eax, dword ptr [ebp - 0x2a8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BC 01 00 00: jmp 0x5856e8c6
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 98 8A 58: push 0x588a9840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x98
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 5F 96 58: push 0x58965fb8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 5A 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5a
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C7 85 60 FD FF FF 01 00 00 00: mov dword ptr [ebp - 0x2a0], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 64 FD FF FF 00 00 00 00: mov dword ptr [ebp - 0x29c], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 68 FD FF FF 00 00 00 00: mov dword ptr [ebp - 0x298], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5C 6E F5 FF: call 0x584c55a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 4B: je 0x5856e796
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 13: push 0x13
        __asm _emit 0x6a
        __asm _emit 0x13
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 00 03 00 00: push 0x300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 68 FD FF FF: mov edx, dword ptr [ebp - 0x298]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 64 FD FF FF: mov eax, dword ptr [ebp - 0x29c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 50 98 8A 58: push 0x588a9850
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x98
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 38 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D8 F5 2B 00: call 0x5882dd60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf5
        __asm _emit 0x2b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 2C: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x2c
        ; Exact mapped bytes 89 85 60 FD FF FF: mov dword ptr [ebp - 0x2a0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x5856e824
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 F0 44 89 58: call dword ptr [0x588944f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 54 FD FF FF: mov dword ptr [ebp - 0x2ac], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF 15 F0 44 89 58: call dword ptr [0x588944f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 50 FD FF FF: mov dword ptr [ebp - 0x2b0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 54 FD FF FF: mov eax, dword ptr [ebp - 0x2ac]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 2D FD 03 00 00: sub eax, 0x3fd
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 89 85 64 FD FF FF: mov dword ptr [ebp - 0x29c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 50 FD FF FF: mov eax, dword ptr [ebp - 0x2b0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 2D 02 03 00 00: sub eax, 0x302
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 89 85 68 FD FF FF: mov dword ptr [ebp - 0x298], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 65: push 0x65
        __asm _emit 0x6a
        __asm _emit 0x65
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 02 03 00 00: push 0x302
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 68 FD FF FF: mov ecx, dword ptr [ebp - 0x298]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 64 FD FF FF: mov edx, dword ptr [ebp - 0x29c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 6C 98 8A 58: push 0x588a986c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x98
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 37 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x37
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 45 F5 2B 00: call 0x5882dd60
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf5
        __asm _emit 0x2b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 2C: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x2c
        ; Exact mapped bytes 89 85 60 FD FF FF: mov dword ptr [ebp - 0x2a0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 BD 60 FD FF FF 00: cmp dword ptr [ebp - 0x2a0], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 75 26: jne 0x5856e853
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 90 98 8A 58: push 0x588a9890
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 68 31 98 8A 58: push 0x588a9831
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0x98
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C0 44 89 58: call dword ptr [0x588944c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 6A F0: push -0x10
        __asm _emit 0x6a
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 AC 44 89 58: call dword ptr [0x588944ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 5C FD FF FF: mov dword ptr [ebp - 0x2a4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 5C FD FF FF: mov eax, dword ptr [ebp - 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0D 00 00 0A 00: or eax, 0xa0000
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 5C FD FF FF: mov dword ptr [ebp - 0x2a4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 5C FD FF FF: mov ecx, dword ptr [ebp - 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A F0: push -0x10
        __asm _emit 0x6a
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A8 44 89 58: call dword ptr [0x588944a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC F7 2B 00: call 0x5882e060
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf7
        __asm _emit 0x2b
        __asm _emit 0x00
        ; Exact mapped bytes E8 77 3F F9 FF: call 0x58502810
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3f
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E8 52 3A F9 FF: call 0x585022f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes B9 F0 BE 90 58: mov ecx, 0x5890bef0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 92 F5 FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x92
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C7 85 4C FD FF FF 00 00 00 00: mov dword ptr [ebp - 0x2b4], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 6C FD FF FF: lea ecx, [ebp - 0x294]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 70 64 01 00: call 0x58584d30
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 4C FD FF FF: mov eax, dword ptr [ebp - 0x2b4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 80 27 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
