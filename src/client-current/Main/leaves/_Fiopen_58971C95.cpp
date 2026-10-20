// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971C95 .. +0xB8 bytes.
extern "C" __declspec(naked) void _Fiopen_58971C95() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes 83 E3 04: and ebx, 4
        __asm _emit 0x83
        __asm _emit 0xe3
        __asm _emit 0x04
        ; Exact mapped bytes 81 E7 80 00 00 00: and edi, 0x80
        __asm _emit 0x81
        __asm _emit 0xe7
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 C2 40: test dl, 0x40
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x40
        ; Exact mapped bytes 74 03: je 0x58971cb5
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 83 CA 01: or edx, 1
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        ; Exact mapped bytes F6 C2 08: test dl, 8
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x08
        ; Exact mapped bytes 74 03: je 0x58971cbd
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 83 CA 02: or edx, 2
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 81 E2 3B FF FF FF: and edx, 0xffffff3b
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 74 0C: je 0x58971cd8
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0C 85 34 2F 9A 58: mov ecx, dword ptr [eax*4 + 0x589a2f34]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F0: jne 0x58971cc8
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes C1 E6 02: shl esi, 2
        __asm _emit 0xc1
        __asm _emit 0xe6
        __asm _emit 0x02
        ; Exact mapped bytes 83 BE 30 2F 9A 58 00: cmp dword ptr [esi + 0x589a2f30], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x30
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x58971cea
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 5E: jmp 0x58971d48
        __asm _emit 0xeb
        __asm _emit 0x5e
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 25: je 0x58971d13
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes F6 C2 01: test dl, 1
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 74 20: je 0x58971d13
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 68 2C 2F 9A 58: push 0x589a2f2c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 BB B8 00 00: call 0x5897d5be
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x58971d13
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2E B1 00 00: call 0x5897ce3e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes EB D3: jmp 0x58971ce6
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B B6 1C E5 9C 58: mov esi, dword ptr [esi + 0x589ce51c]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0x1c
        __asm _emit 0xe5
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 99 B8 00 00: call 0x5897d5be
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 B8: je 0x58971ce6
        __asm _emit 0x74
        __asm _emit 0xb8
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 14: je 0x58971d46
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 8A B2 00 00: call 0x5897cfc6
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 03: je 0x58971d46
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes EB C5: jmp 0x58971d0b
        __asm _emit 0xeb
        __asm _emit 0xc5
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
