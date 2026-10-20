// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00401735 .. +0x26B bytes.
extern "C" __declspec(naked) void FUN_00401735_00401735() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 76 98 57 00: push 0x579876
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x00
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EC 34: sub esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x34
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 7D C0: lea edi, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xc0
        ; Exact mapped bytes B9 0D 00 00 00: mov ecx, 0xd
        __asm _emit 0xb9
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 CC CC CC CC: mov eax, 0xcccccccc
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 89 4D D0: mov dword ptr [ebp - 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes C7 80 04 01 00 00 01 05 00 00: mov dword ptr [eax + 0x104], 0x501
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 5B: push 0x5b
        __asm _emit 0x6a
        __asm _emit 0x5b
        ; Exact mapped bytes 68 90 02 5A 00: push 0x5a0290
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes 68 F4 1F 00 00: push 0x1ff4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AF B8 0E 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb8
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D EC 00: cmp dword ptr [ebp - 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4017a8
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 DD 14 06 00: call 0x462c80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 CC: mov dword ptr [ebp - 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes EB 07: jmp 0x4017af
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 CC 00 00 00 00: mov dword ptr [ebp - 0x34], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 CC: mov edx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes 89 55 F0: mov dword ptr [ebp - 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 89 88 70 0D 00 00: mov dword ptr [eax + 0xd70], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x70
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 5D: push 0x5d
        __asm _emit 0x6a
        __asm _emit 0x5d
        ; Exact mapped bytes 68 90 02 5A 00: push 0x5a0290
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes 68 20 01 00 00: push 0x120
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5A B8 0E 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb8
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 E4: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes C7 45 FC 01 00 00 00: mov dword ptr [ebp - 4], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D E4 00: cmp dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x401807
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 88 7C 0C 00 00: mov ecx, dword ptr [eax + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 BE E3 00 00: call 0x40fbc0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 C8: mov dword ptr [ebp - 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes EB 07: jmp 0x40180e
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 C8 00 00 00 00: mov dword ptr [ebp - 0x38], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 C8: mov edx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 89 55 E8: mov dword ptr [ebp - 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 89 88 78 0D 00 00: mov dword ptr [eax + 0xd78], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 5E: push 0x5e
        __asm _emit 0x6a
        __asm _emit 0x5e
        ; Exact mapped bytes 68 90 02 5A 00: push 0x5a0290
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 4C: push 0x4c
        __asm _emit 0x6a
        __asm _emit 0x4c
        ; Exact mapped bytes E8 FE B7 0E 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb7
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes C7 45 FC 02 00 00 00: mov dword ptr [ebp - 4], 2
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D DC 00: cmp dword ptr [ebp - 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x40186d
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 82 78 0D 00 00: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 82 7C 0C 00 00: mov eax, dword ptr [edx + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D DC: mov ecx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E8 B8 37 03 00: call 0x435020
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 C4: mov dword ptr [ebp - 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes EB 07: jmp 0x401874
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 C4 00 00 00 00: mov dword ptr [ebp - 0x3c], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D C4: mov ecx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc4
        ; Exact mapped bytes 89 4D E0: mov dword ptr [ebp - 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 89 82 7C 0D 00 00: mov dword ptr [edx + 0xd7c], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 5F: push 0x5f
        __asm _emit 0x6a
        __asm _emit 0x5f
        ; Exact mapped bytes 68 90 02 5A 00: push 0x5a0290
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes 68 30 0C 00 00: push 0xc30
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 95 B7 0E 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb7
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 D4: mov dword ptr [ebp - 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes C7 45 FC 03 00 00 00: mov dword ptr [ebp - 4], 3
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D D4 00: cmp dword ptr [ebp - 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xd4
        __asm _emit 0x00
        ; Exact mapped bytes 74 28: je 0x4018d9
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 91 7C 0D 00 00: mov edx, dword ptr [ecx + 0xd7c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 1C: mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 82 7C 0C 00 00: mov eax, dword ptr [edx + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E8 AC 77 07 00: call 0x479080
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 C0: mov dword ptr [ebp - 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes EB 07: jmp 0x4018e0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 C0 00 00 00 00: mov dword ptr [ebp - 0x40], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D C0: mov ecx, dword ptr [ebp - 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 89 4D D8: mov dword ptr [ebp - 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 D8: mov eax, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 89 82 74 0D 00 00: mov dword ptr [edx + 0xd74], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes C7 81 98 0D 00 00 00 00 00 00: mov dword ptr [ecx + 0xd98], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes C7 82 80 0D 00 00 F0 00 00 00: mov dword ptr [edx + 0xd80], 0xf0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 BE 6E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 89 81 84 0D 00 00: mov dword ptr [ecx + 0xd84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes C7 82 88 0D 00 00 00 00 00 00: mov dword ptr [edx + 0xd88], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes C7 80 A4 0C 00 00 00 00 00 00: mov dword ptr [eax + 0xca4], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes C7 81 A0 0C 00 00 00 00 00 00: mov dword ptr [ecx + 0xca0], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes C7 82 8C 0D 00 00 00 00 00 00: mov dword ptr [edx + 0xd8c], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes C7 80 90 0D 00 00 00 00 00 00: mov dword ptr [eax + 0xd90], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes C7 81 94 0D 00 00 00 00 00 00: mov dword ptr [ecx + 0xd94], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes C7 82 9C 0D 00 00 00 00 00 00: mov dword ptr [edx + 0xd9c], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C4 40: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x40
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 44 6E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
