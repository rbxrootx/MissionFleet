// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FF150 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_587ff150() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 0C: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 47 04: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes 2D 00 01 00 00: sub eax, 0x100
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x587ff295
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x587ff276
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 2B 01 00 00: jne 0x587ff2a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes D0 E9: shr cl, 1
        __asm _emit 0xd0
        __asm _emit 0xe9
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 17 01 00 00: jne 0x587ff2a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 40 0D 02 00 00: cmp dword ptr [esi + 0x20d40], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x587ff1c3
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 84 47 A2 58: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 E9 87 10 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 84 47 A2 58: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 02 D8 FF FF: call 0x587fc9c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 83 E8 3D: sub eax, 0x3d
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x3d
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x587ff253
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 1E: sub eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x1e
        ; Exact mapped bytes 74 3C: je 0x587ff210
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 83 E8 02: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x587ff269
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 86 2C 0E 02 00: cmp dword ptr [esi + 0x20e2c], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x587ff269
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 28 05 01 00: mov eax, dword ptr [esi + 0x10528]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 64: add eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 3D D0 07 00 00: cmp eax, 0x7d0
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 47: jle 0x587ff240
        __asm _emit 0x7e
        __asm _emit 0x47
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 28 05 01 00 D0 07 00 00: mov dword ptr [esi + 0x10528], 0x7d0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B5 D7 FF FF: call 0x587fc9c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 2C 0E 02 00 00: cmp dword ptr [esi + 0x20e2c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 50: je 0x587ff269
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 28 05 01 00: mov eax, dword ptr [esi + 0x10528]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 9C: add eax, -0x64
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x9c
        ; Exact mapped bytes 3D F4 01 00 00: cmp eax, 0x1f4
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x587ff240
        __asm _emit 0x7d
        __asm _emit 0x17
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 28 05 01 00 F4 01 00 00: mov dword ptr [esi + 0x10528], 0x1f4
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 85 D7 FF FF: call 0x587fc9c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 86 28 05 01 00: mov dword ptr [esi + 0x10528], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 72 D7 FF FF: call 0x587fc9c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes F6 86 A8 05 01 00 01: test byte ptr [esi + 0x105a8], 1
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 0D: je 0x587ff269
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A7 A7 FE FF: call 0x587e9a10
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 4F D7 FF FF: call 0x587fc9c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 EC 18 02 00 00 00 00 00: mov dword ptr [esi + 0x218ec], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 08 10: cmp dword ptr [edi + 8], 0x10
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x10
        ; Exact mapped bytes 75 1D: jne 0x587ff2a3
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C7 86 2C 1D 02 00 00 00 00 00: mov dword ptr [esi + 0x21d2c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 25 F0 FE FF: call 0x587ee2c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 8D 82 FF FF: call 0x587f7530
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
