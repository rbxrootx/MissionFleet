// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 745 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DF6B0 .. +0x1B8 bytes.
extern "C" __declspec(naked) void FUN_588df6b0_segment_00() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 39 70 04: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        ; Exact mapped bytes 75 13: jne 0x588df6d6
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 D8 0A 00 00 00: cmp dword ptr [ecx + 0xad8], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C1 02 00 00: jne 0x588df997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 90 60 00 00: mov eax, dword ptr [esi + 0x6090]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 00 04 00: cmp eax, 0x40000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 5E: jne 0x588df741
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 76 4C: mov esi, dword ptr [esi + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x4c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 A9 02 00 00: je 0x588df997
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 24: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 5C 24 20: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 6C 24 1C: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1D: jge 0x588df724
        __asm _emit 0x7d
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 14: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 76 48: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 E6: jne 0x588df700
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 14: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 76 48: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 ED: jne 0x588df724
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 00 05 00: cmp eax, 0x50000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 F5 01 00 00: jne 0x588df941
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 B1 66 F0 FF: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x66
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes BF AA AA AA AA: mov edi, 0xaaaaaaaa
        __asm _emit 0xbf
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 5F 01: lea ebx, [edi + 1]
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x01
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0E: je 0x588df779
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 89 9E 78 60 00 00: mov dword ptr [esi + 0x6078], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 84 60 00 00: mov dword ptr [esi + 0x6084], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x588df785
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 89 BE 78 60 00 00: mov dword ptr [esi + 0x6078], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 84 60 00 00: mov dword ptr [esi + 0x6084], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 60 00 00: mov eax, dword ptr [esi + 0x6078]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C7: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xc7
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 32: jne 0x588df7c4
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 8B 8E 84 60 00 00: mov ecx, dword ptr [esi + 0x6084]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 CF: xor ecx, edi
        __asm _emit 0x33
        __asm _emit 0xcf
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 26: jne 0x588df7c4
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 0A DA FF FF: call 0x588dd1b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0E: je 0x588df7b8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 89 BE 78 60 00 00: mov dword ptr [esi + 0x6078], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 84 60 00 00: mov dword ptr [esi + 0x6084], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x588df7c4
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 89 9E 78 60 00 00: mov dword ptr [esi + 0x6078], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 84 60 00 00: mov dword ptr [esi + 0x6084], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 78 60 00 00: mov edx, dword ptr [esi + 0x6078]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D7: xor edx, edi
        __asm _emit 0x33
        __asm _emit 0xd7
        ; Exact mapped bytes 83 FA 01: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 75 32: jne 0x588df803
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 8B 86 84 60 00 00: mov eax, dword ptr [esi + 0x6084]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C7: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xc7
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 26: jne 0x588df803
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 9B FA FF FF: call 0x588df280
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0E: je 0x588df7f7
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 89 BE 78 60 00 00: mov dword ptr [esi + 0x6078], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 84 60 00 00: mov dword ptr [esi + 0x6084], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x588df803
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 89 9E 78 60 00 00: mov dword ptr [esi + 0x6078], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 84 60 00 00: mov dword ptr [esi + 0x6084], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 8A 96 54 03 00 00: mov dl, byte ptr [esi + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 90 54 03 00 00: cmp dl, byte ptr [eax + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x588df83c
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 BE 64 01 00 00 03: cmp word ptr [esi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 72 18: jb 0x588df83c
        __asm _emit 0x72
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 34 E2 FF FF: call 0x588dda60
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0C: jne 0x588df83c
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 89 BE 78 60 00 00: mov dword ptr [esi + 0x6078], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 84 60 00 00: mov dword ptr [esi + 0x6084], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 4F 01 00 00: je 0x588df997
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 24: mov ebp, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 7C 24 20: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 39 9E 80 14 00 00: cmp dword ptr [esi + 0x1480], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 8F 00 00 00: jle 0x588df8ed
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 24 04 00 00 00: mov dword ptr [esp + 0x24], 4
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x588df870
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DF870 .. +0x131 bytes.
extern "C" __declspec(naked) void FUN_588df6b0_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 86 7C 14 00 00: mov eax, dword ptr [esi + 0x147c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 25 3F 00 00 80: and eax, 0x8000003f
        __asm _emit 0x25
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588df884
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 C0: or eax, 0xffffffc0
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 8C C6 84 14 00 00: mov ecx, dword ptr [esi + eax*8 + 0x1484]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 C6 88 14 00 00: mov eax, dword ptr [esi + eax*8 + 0x1488]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 11 FC: lea ecx, [ecx + edx - 4]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x11
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 8D 44 10 FC: lea eax, [eax + edx - 4]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 54 24 24: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B C4: mov eax, esp
        __asm _emit 0x8b
        __asm _emit 0xc4
        ; Exact mapped bytes 89 10: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 89 50 04: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 89 50 08: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 89 50 0C: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 68 14 00 00: mov ecx, dword ptr [esi + 0x1468]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 81 44 02 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 44 24 24 04: add dword ptr [esp + 0x24], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 3B 9E 80 14 00 00: cmp ebx, dword ptr [esi + 0x1480]
        __asm _emit 0x3b
        __asm _emit 0x9e
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 83: jl 0x588df870
        __asm _emit 0x7c
        __asm _emit 0x83
        ; Exact mapped bytes 8B 76 4C: mov esi, dword ptr [esi + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x4c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x588df997
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 21: jge 0x588df920
        __asm _emit 0x7d
        __asm _emit 0x21
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 52 14: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 76 48: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 E2: jne 0x588df8f8
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 76 48: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 E9: jne 0x588df920
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 74 4E: je 0x588df997
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 76 4C: mov esi, dword ptr [esi + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x4c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 47: je 0x588df997
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 7C 24 24: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 5C 24 20: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 6C 24 1C: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1D: jge 0x588df984
        __asm _emit 0x7d
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 14: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 76 48: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 E6: jne 0x588df960
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 14: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 76 48: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 ED: jne 0x588df984
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
