// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887904B .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_5887904b_5887904B() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5D 0C: mov ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 75 08: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 83 E0 03: and eax, 3
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x03
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes BF 00 00 00 80: mov edi, 0x80000000
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes C6 06 00: mov byte ptr [esi], 0
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 74 46: je 0x588790b2
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 21: je 0x58879092
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 15: je 0x5887908b
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes E8 F4 93 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 16 00 00 00: mov dword ptr [eax], 0x16
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 25 7F FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes EB 29: jmp 0x588790b4
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes B8 00 00 00 C0: mov eax, 0xc0000000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc0
        ; Exact mapped bytes EB 22: jmp 0x588790b4
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes F7 C3 00 00 07 00: test ebx, 0x70000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 0F 95 C1: setne cl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc1
        ; Exact mapped bytes F6 C3 08: test bl, 8
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x08
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes 84 C8: test al, cl
        __asm _emit 0x84
        __asm _emit 0xc8
        ; Exact mapped bytes B8 00 00 00 40: mov eax, 0x40000000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes B9 00 00 00 C0: mov ecx, 0xc0000000
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 45 C1: cmovne eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc1
        ; Exact mapped bytes EB 02: jmp 0x588790b4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes E8 1E FF FF FF: call 0x58878fdb
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 89 46 08: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 3E: je 0x58879109
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 35: je 0x58879104
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 2C: je 0x588790ff
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 24: je 0x588790fb
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 83 E8 40: sub eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x40
        ; Exact mapped bytes 74 15: je 0x588790f1
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes E8 8E 93 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 16 00 00 00: mov dword ptr [eax], 0x16
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF 7E FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x5887910b
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 39 7E 04: cmp dword ptr [esi + 4], edi
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes EB 10: jmp 0x5887910b
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes EB 02: jmp 0x58879101
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes EB 07: jmp 0x5887910b
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes EB 02: jmp 0x5887910b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 66 14 00: and dword ptr [esi + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 0C: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes C7 46 10 80 00 00 00: mov dword ptr [esi + 0x10], 0x80
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 DB: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xdb
        ; Exact mapped bytes 79 03: jns 0x58879120
        __asm _emit 0x79
        __asm _emit 0x03
        ; Exact mapped bytes 80 0E 10: or byte ptr [esi], 0x10
        __asm _emit 0x80
        __asm _emit 0x0e
        __asm _emit 0x10
        ; Exact mapped bytes BF 00 80 00 00: mov edi, 0x8000
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DF: test edi, ebx
        __asm _emit 0x85
        __asm _emit 0xdf
        ; Exact mapped bytes 75 1E: jne 0x58879147
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes F7 C3 00 40 07 00: test ebx, 0x74000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x58879144
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8D 45 FC: lea eax, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E0 2B 00 00: call 0x5887bd1a
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 78: jne 0x588791b7
        __asm _emit 0x75
        __asm _emit 0x78
        ; Exact mapped bytes 39 7D FC: cmp dword ptr [ebp - 4], edi
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0xfc
        ; Exact mapped bytes 74 03: je 0x58879147
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 80 0E 80: or byte ptr [esi], 0x80
        __asm _emit 0x80
        __asm _emit 0x0e
        __asm _emit 0x80
        ; Exact mapped bytes B9 00 01 00 00: mov ecx, 0x100
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D9: test ecx, ebx
        __asm _emit 0x85
        __asm _emit 0xd9
        ; Exact mapped bytes 74 15: je 0x58879165
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes A1 80 9C 96 58: mov eax, dword ptr [0x58969c80]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes F7 D0: not eax
        __asm _emit 0xf7
        __asm _emit 0xd0
        ; Exact mapped bytes 23 45 14: and eax, dword ptr [ebp + 0x14]
        __asm _emit 0x23
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 78 07: js 0x58879165
        __asm _emit 0x78
        __asm _emit 0x07
        ; Exact mapped bytes C7 46 10 01 00 00 00: mov dword ptr [esi + 0x10], 1
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 C3 40: test bl, 0x40
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x40
        ; Exact mapped bytes 74 12: je 0x5887917c
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 81 4E 14 00 00 00 04: or dword ptr [esi + 0x14], 0x4000000
        __asm _emit 0x81
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 81 4E 04 00 00 01 00: or dword ptr [esi + 4], 0x10000
        __asm _emit 0x81
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 4E 0C 04: or dword ptr [esi + 0xc], 4
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x04
        ; Exact mapped bytes F7 C3 00 10 00 00: test ebx, 0x1000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 03: je 0x58879187
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 09 4E 10: or dword ptr [esi + 0x10], ecx
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes F7 C3 00 20 00 00: test ebx, 0x2000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x58879196
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 81 4E 14 00 00 00 02: or dword ptr [esi + 0x14], 0x2000000
        __asm _emit 0x81
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes F6 C3 20: test bl, 0x20
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x20
        ; Exact mapped bytes 74 09: je 0x588791a4
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 81 4E 14 00 00 00 08: or dword ptr [esi + 0x14], 0x8000000
        __asm _emit 0x81
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes EB 0C: jmp 0x588791b0
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes F6 C3 10: test bl, 0x10
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x10
        ; Exact mapped bytes 74 07: je 0x588791b0
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 81 4E 14 00 00 00 10: or dword ptr [esi + 0x14], 0x10000000
        __asm _emit 0x81
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 16 7E FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
