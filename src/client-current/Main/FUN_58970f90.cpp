// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 224 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58970F90 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_58970f90_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5897102a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 30 00: cmp dword ptr [esi + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x5897102a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 04 FF: cmp dword ptr [esi + 4], -1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0xff
        ; Exact mapped bytes 89 46 2C: mov dword ptr [esi + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 75 1A: jne 0x58970fcc
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes FF 15 4C C4 98 58: call dword ptr [0x5898c44c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 5E: je 0x5897102a
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 46 2C: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 80 18 02 00 00: mov eax, dword ptr [eax + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 68 62 04 00 00: push 0x462
        __asm _emit 0x68
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 50 C4 98 58: call dword ptr [0x5898c450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 3E: je 0x5897102a
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 54 24 0C: lea edx, [esp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 02 10 00 00: push 0x1002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 44 24 1C 00 00 04 00: mov dword ptr [esp + 0x1c], 0x40000
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 5C C4 98 58: call dword ptr [0x5898c45c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 1C: jne 0x58971030
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 58 C4 98 58: call dword ptr [0x5898c458]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 56 04 00 00: call 0x58971480
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D3 FE FF FF: call 0x58970f10
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 54 24 0C: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 40 C4 98 58: call dword ptr [0x5898c440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 12: jne 0x58971067
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes E8 1F 04 00 00: call 0x58971480
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
