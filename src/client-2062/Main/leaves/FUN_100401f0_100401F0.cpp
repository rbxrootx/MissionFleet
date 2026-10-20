// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100401F0 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_100401f0_100401F0() {
    __asm {
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 89 4C 24 00: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 8B 88 B8 5C 00 00: mov ecx, dword ptr [eax + 0x5cb8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 79 04: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 08: mov ebp, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x08
        ; Exact mapped bytes 8A 4C 24 14: mov cl, byte ptr [esp + 0x14]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x100402b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 08 10 00 00: mov ecx, dword ptr [eax + 0x1008]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 0C 00 00 00 00: mov dword ptr [esp + 0xc], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8E 82 00 00 00: jle 0x100402b1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4C B1 08: mov ecx, dword ptr [ecx + esi*4 + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0xb1
        __asm _emit 0x08
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 50: je 0x1004028f
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 98 40 5C 00 00: mov ebx, dword ptr [eax + 0x5c40]
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x40
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 14 F6: lea edx, [esi + esi*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xf6
        ; Exact mapped bytes 8D 14 93: lea edx, [ebx + edx*4]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x93
        ; Exact mapped bytes 8B DD: mov ebx, ebp
        __asm _emit 0x8b
        __asm _emit 0xdd
        ; Exact mapped bytes 2B 9C B0 80 18 00 00: sub ebx, dword ptr [eax + esi*4 + 0x1880]
        __asm _emit 0x2b
        __asm _emit 0x9c
        __asm _emit 0xb0
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 9C D0 04 19 00 00: sub ebx, dword ptr [eax + edx*8 + 0x1904]
        __asm _emit 0x2b
        __asm _emit 0x9c
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 D0 00 19 00 00: mov eax, dword ptr [eax + edx*8 + 0x1900]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 65 EA 0B 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes F6 44 24 1C 01: test byte ptr [esp + 0x1c], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
        ; Exact mapped bytes 74 1D: je 0x1004028f
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 82 44 5C 00 00: mov eax, dword ptr [edx + 0x5c44]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x44
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C B1 08: mov ecx, dword ptr [ecx + esi*4 + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0xb1
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 41 36 00 00: call 0x100438d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 81 E6 FF FF 00 00: and esi, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B B0 08 10 00 00: cmp esi, dword ptr [eax + 0x1008]
        __asm _emit 0x3b
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 84: jl 0x10040233
        __asm _emit 0x7c
        __asm _emit 0x84
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
