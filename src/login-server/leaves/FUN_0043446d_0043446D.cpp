// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043446D .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_0043446d_0043446D() {
    __asm {
        ; Exact mapped bytes B8 CB AB 43 00: mov eax, 0x43abcb
        __asm _emit 0xb8
        __asm _emit 0xcb
        __asm _emit 0xab
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E8 91 B1 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5D 08: mov ebx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 03: mov eax, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 4E 10: lea ecx, [esi + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes 89 75 F0: mov dword ptr [ebp - 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 83 4E 0C FF: or dword ptr [esi + 0xc], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 89 4E 14: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes F7 D1: not ecx
        __asm _emit 0xf7
        __asm _emit 0xd1
        ; Exact mapped bytes 84 C8: test al, cl
        __asm _emit 0x84
        __asm _emit 0xc8
        ; Exact mapped bytes 89 7D FC: mov dword ptr [ebp - 4], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0xfc
        ; Exact mapped bytes 89 5E 20: mov dword ptr [esi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x20
        ; Exact mapped bytes 89 7E 38: mov dword ptr [esi + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x38
        ; Exact mapped bytes 89 7E 34: mov dword ptr [esi + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x34
        ; Exact mapped bytes 89 3E: mov dword ptr [esi], edi
        __asm _emit 0x89
        __asm _emit 0x3e
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 74 09: je 0x4344bd
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes C7 46 3C 10 00 00 00: mov dword ptr [esi + 0x3c], 0x10
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x3c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x4344c4
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 46 3C 40 00 00 00: mov dword ptr [esi + 0x3c], 0x40
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x3c
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 89 46 18: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        ; Exact mapped bytes 89 4E 2C: mov dword ptr [esi + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes B8 80 00 00 00: mov eax, 0x80
        __asm _emit 0xb8
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 40 89 00 00 00: mov dword ptr [esi + 0x40], 0x89
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 7E 08: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes 7D 08: jge 0x4344eb
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 89 46 1C: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1c
        ; Exact mapped bytes 89 7E 2C: mov dword ptr [esi + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x2c
        ; Exact mapped bytes EB 03: jmp 0x4344ee
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 89 4E 1C: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 46 1C: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x1c
        ; Exact mapped bytes 39 7E 2C: cmp dword ptr [esi + 0x2c], edi
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x2c
        ; Exact mapped bytes 89 45 10: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 75 27: jne 0x434520
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 03: mov eax, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 89 46 08: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 75 11: jne 0x43451d
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes FF 76 1C: push dword ptr [esi + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x1c
        ; Exact mapped bytes E8 D8 93 FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 89 46 2C: mov dword ptr [esi + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 89 7E 18: mov dword ptr [esi + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes EB 03: jmp 0x434520
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 89 7D 10: mov dword ptr [ebp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x10
        ; Exact mapped bytes 8B 46 2C: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes F6 46 14 01: test byte ptr [esi + 0x14], 1
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 89 4E 28: mov dword ptr [esi + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x28
        ; Exact mapped bytes 74 02: je 0x434533
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 89 46 24: mov dword ptr [esi + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
