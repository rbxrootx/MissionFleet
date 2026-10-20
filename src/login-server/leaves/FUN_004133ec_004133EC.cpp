// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004133EC .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_004133ec_004133EC() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 75 06: jne 0x4133ff
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 86 88 00 00 00: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 83 E2 08: and edx, 8
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x08
        ; Exact mapped bytes 75 09: jne 0x413419
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes F6 C1 04: test cl, 4
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 74 04: je 0x413419
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 03: jmp 0x41341c
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 89 86 D0 00 00 00: mov dword ptr [esi + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E7 04: and edi, 4
        __asm _emit 0x83
        __asm _emit 0xe7
        __asm _emit 0x04
        ; Exact mapped bytes 75 09: jne 0x413432
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 05: jne 0x413432
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes EB 02: jmp 0x413434
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 CC 00 00 00: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 00 02 00 00: mov eax, 0x200
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 C1 20: test cl, 0x20
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes 75 04: jne 0x413448
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 85 C8: test eax, ecx
        __asm _emit 0x85
        __asm _emit 0xc8
        ; Exact mapped bytes 74 04: je 0x41344c
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 83 66 1C 00: and dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 88 00 00 00 02: cmp dword ptr [esi + 0x88], 2
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 0E: jne 0x413463
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 0A: jne 0x413463
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 83 C9 04: or ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        ; Exact mapped bytes 85 C8: test eax, ecx
        __asm _emit 0x85
        __asm _emit 0xc8
        ; Exact mapped bytes 74 03: je 0x413463
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 80 CD 08: or ch, 8
        __asm _emit 0x80
        __asm _emit 0xcd
        __asm _emit 0x08
        ; Exact mapped bytes FF 74 24 10: push dword ptr [esp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 4E 2C: mov dword ptr [esi + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 8D 8E 04 01 00 00: lea ecx, [esi + 0x104]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF A8 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 46 0C: lea eax, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 8E 08 01 00 00: lea ecx, [esi + 0x108]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 60 A8 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 46 10: lea eax, [esi + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 8D 8E 0C 01 00 00: lea ecx, [esi + 0x10c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 51 A8 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
