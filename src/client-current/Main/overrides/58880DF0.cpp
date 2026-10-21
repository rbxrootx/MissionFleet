// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880DF0 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_58880df0_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 A8 BD FF FF: call 0x5887cba0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7E 70 FF: cmp dword ptr [esi + 0x70], -1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x70
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x58880ee3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 74: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x58880ee3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B4 01 00 00: mov ecx, dword ptr [esi + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 14: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C4 0E EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 1D A2 FF FF: call 0x5887b040
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 74: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 30 47 A2 58: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 18: jle 0x58880e4f
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 14: jl 0x58880e4f
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x58880e4f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x58880e51
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 08 01 00 00: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x58880e86
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 9F FC FF FF: call 0x58880b30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 4E: jne 0x58880ee3
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 46 6C: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x6c
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 77 46: ja 0x58880ee3
        __asm _emit 0x77
        __asm _emit 0x46
        ; Exact mapped bytes FF 24 85 E8 0E 88 58: jmp dword ptr [eax*4 + 0x58880ee8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x88
        __asm _emit 0x58
        ; Exact mapped bytes 8B 56 74: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x74
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 41 CD FF FF: call 0x5887dbf0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 46 74: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F4 D3 FF FF: call 0x5887e2b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C7 DA FF FF: call 0x5887e990
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 56 74: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x74
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 EA DD FF FF: call 0x5887ecc0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 46 74: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 AD F9 FF FF: call 0x58880890
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
