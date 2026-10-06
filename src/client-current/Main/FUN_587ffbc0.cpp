// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 1927 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FFBC0 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_587ffbc0_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 24 27 98 58: push 0x58982724
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x27
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 20: lea eax, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 06 80 D1 99 58: mov dword ptr [esi], 0x5899d180
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0xd1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B 86 1C 05 01 00: mov eax, dword ptr [esi + 0x1051c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 04 05 01 00: mov edi, dword ptr [esi + 0x10504]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 28 02 00 00 00: mov dword ptr [esp + 0x28], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 18: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes EB 0B: jmp 0x587ffc20
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FFC20 .. +0x70C bytes.
extern "C" __declspec(naked) void FUN_587ffbc0_segment_01() {
    __asm {
        ; Exact mapped bytes 8B AE 1C 05 01 00: mov ebp, dword ptr [esi + 0x1051c]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 04 05 01 00: mov eax, dword ptr [esi + 0x10504]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 04: je 0x587ffc34
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 74 05: je 0x587ffc39
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 39 D0 17 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd0
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 39 6C 24 1C: cmp dword ptr [esp + 0x1c], ebp
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 74 3F: je 0x587ffc7e
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 75 37: jne 0x587ffc7a
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes E8 2A D0 17 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd0
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B 47 18: cmp eax, dword ptr [edi + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 75 05: jne 0x587ffc58
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 1A D0 17 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd0
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 49 28: mov ecx, dword ptr [ecx + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x28
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 08: je 0x587ffc6b
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 4C 24 18: lea ecx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 2C 84 F4 FF: call 0x587480a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 7C 24 18: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB A6: jmp 0x587ffc20
        __asm _emit 0xeb
        __asm _emit 0xa6
        ; Exact mapped bytes 8B 3F: mov edi, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x3f
        ; Exact mapped bytes EB CC: jmp 0x587ffc4a
        __asm _emit 0xeb
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 8E 48 1C 02 00: mov ecx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffc96
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 48 1C 02 00: mov dword ptr [esi + 0x21c48], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 4C 1C 02 00: mov ecx, dword ptr [esi + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffcae
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 4C 1C 02 00: mov dword ptr [esi + 0x21c4c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 50 1C 02 00: mov ecx, dword ptr [esi + 0x21c50]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffcc6
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 50 1C 02 00: mov dword ptr [esi + 0x21c50], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 7C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7c
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587ffcd8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5E 7C: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 8E 94 0B 01 00: mov ecx, dword ptr [esi + 0x10b94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffcf0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 94 0B 01 00: mov dword ptr [esi + 0x10b94], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 98 0B 01 00: mov ecx, dword ptr [esi + 0x10b98]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffd08
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 98 0B 01 00: mov dword ptr [esi + 0x10b98], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 9C 0B 01 00: mov ecx, dword ptr [esi + 0x10b9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffd20
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 9C 0B 01 00: mov dword ptr [esi + 0x10b9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587ffd32
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5E 60: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 8E 54 0D 02 00: mov ecx, dword ptr [esi + 0x20d54]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffd4a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 54 0D 02 00: mov dword ptr [esi + 0x20d54], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 58 0D 02 00: mov ecx, dword ptr [esi + 0x20d58]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffd62
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 58 0D 02 00: mov dword ptr [esi + 0x20d58], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 18 02 00: mov ecx, dword ptr [esi + 0x218c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffd7a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E C0 18 02 00: mov dword ptr [esi + 0x218c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E BC 18 02 00: mov ecx, dword ptr [esi + 0x218bc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffd92
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E BC 18 02 00: mov dword ptr [esi + 0x218bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F4 0D 02 00: mov ecx, dword ptr [esi + 0x20df4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffdaa
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E F4 0D 02 00: mov dword ptr [esi + 0x20df4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E EC 0D 02 00: mov ecx, dword ptr [esi + 0x20dec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffdc2
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E EC 0D 02 00: mov dword ptr [esi + 0x20dec], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F0 0D 02 00: mov ecx, dword ptr [esi + 0x20df0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffdda
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E F0 0D 02 00: mov dword ptr [esi + 0x20df0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE F8 0D 02 00: lea edi, [esi + 0x20df8]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F D8: mov ecx, dword ptr [edi - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xd8
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587ffdf7
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F D8: mov dword ptr [edi - 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x587ffe07
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 4F 08: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587ffe19
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F 08: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587ffe2b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F 10: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4F 18: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587ffe3d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F 18: mov dword ptr [edi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4F 20: mov ecx, dword ptr [edi + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587ffe4f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F 20: mov dword ptr [edi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x20
        ; Exact mapped bytes 8B 8F D4 FD FE FF: mov ecx, dword ptr [edi - 0x1022c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffe67
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9F D4 FD FE FF: mov dword ptr [edi - 0x1022c], ebx
        __asm _emit 0x89
        __asm _emit 0x9f
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 72 FF FF FF: jne 0x587ffde5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 40 05 01 00: mov ecx, dword ptr [esi + 0x10540]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffe8b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 40 05 01 00: mov dword ptr [esi + 0x10540], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587ffe9d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5E 60: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 8E C0 0B 01 00: mov ecx, dword ptr [esi + 0x10bc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffeb5
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E C0 0B 01 00: mov dword ptr [esi + 0x10bc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C8 0B 01 00: mov ecx, dword ptr [esi + 0x10bc8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ffecd
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E C8 0B 01 00: mov dword ptr [esi + 0x10bc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 64 0B 01 00: lea edi, [esi + 0x10b64]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F F0: mov ecx, dword ptr [edi - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xf0
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587ffeea
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F F0: mov dword ptr [edi - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x587ffefa
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 4F 08: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587fff0c
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F 08: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587fff1e
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F 10: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x10
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 B2: jne 0x587ffed8
        __asm _emit 0x75
        __asm _emit 0xb2
        ; Exact mapped bytes 8B 8E 5C 0B 01 00: mov ecx, dword ptr [esi + 0x10b5c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587fff3e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 5C 0B 01 00: mov dword ptr [esi + 0x10b5c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 7C 0B 01 00: mov ecx, dword ptr [esi + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587fff56
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 7C 0B 01 00: mov dword ptr [esi + 0x10b7c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 60 0B 01 00: mov ecx, dword ptr [esi + 0x10b60]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587fff6e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 60 0B 01 00: mov dword ptr [esi + 0x10b60], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 50 0B 01 00: mov ecx, dword ptr [esi + 0x10b50]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587fff86
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 50 0B 01 00: mov dword ptr [esi + 0x10b50], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 00 01 00 00: lea edi, [esi + 0x100]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 08 00 00 00: mov ebp, 8
        __asm _emit 0xbd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F E0: mov ecx, dword ptr [edi - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xe0
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587fffa3
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F E0: mov dword ptr [edi - 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x587fffb3
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 D6: jne 0x587fff91
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes 8D BE E8 0B 01 00: lea edi, [esi + 0x10be8]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BD 04 00 00 00: mov ebp, 4
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F EC: mov ecx, dword ptr [edi - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xec
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x587fffd8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 5F EC: mov dword ptr [edi - 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0xec
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x587fffe8
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 D6: jne 0x587fffc6
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 8E E4 0B 01 00: mov ecx, dword ptr [esi + 0x10be4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800008
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E E4 0B 01 00: mov dword ptr [esi + 0x10be4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800020
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 24 05 01 00: mov dword ptr [esi + 0x10524], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 9C 0C 02 00: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800038
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 9C 0C 02 00: mov dword ptr [esi + 0x20c9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F8 04 01 00: mov ecx, dword ptr [esi + 0x104f8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800050
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E F8 04 01 00: mov dword ptr [esi + 0x104f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 00 0C 01 00: mov ecx, dword ptr [esi + 0x10c00]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800068
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 00 0C 01 00: mov dword ptr [esi + 0x10c00], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 04 0C 01 00: mov ecx, dword ptr [esi + 0x10c04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800080
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 04 0C 01 00: mov dword ptr [esi + 0x10c04], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 08 0C 01 00: mov ecx, dword ptr [esi + 0x10c08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800098
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 08 0C 01 00: mov dword ptr [esi + 0x10c08], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 30 0D 02 00: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588000b0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 30 0D 02 00: mov dword ptr [esi + 0x20d30], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 34 0D 02 00: mov ecx, dword ptr [esi + 0x20d34]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588000c8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 34 0D 02 00: mov dword ptr [esi + 0x20d34], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 30 0E 02 00: mov ecx, dword ptr [esi + 0x20e30]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588000e0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 30 0E 02 00: mov dword ptr [esi + 0x20e30], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x30
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 34 0E 02 00: mov ecx, dword ptr [esi + 0x20e34]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588000f8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 34 0E 02 00: mov dword ptr [esi + 0x20e34], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 38 0E 02 00: mov ecx, dword ptr [esi + 0x20e38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800110
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 38 0E 02 00: mov dword ptr [esi + 0x20e38], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 88 C0 98 58: call dword ptr [0x5898c088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 38 0D 02 00: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800135
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 38 0D 02 00: mov dword ptr [esi + 0x20d38], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 3C 0D 02 00: mov ecx, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x5880014d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 3C 0D 02 00: mov dword ptr [esi + 0x20d3c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 00 00 00: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800165
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 80 00 00 00: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 60 1C 02 00: mov ecx, dword ptr [esi + 0x21c60]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x5880017d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 60 1C 02 00: mov dword ptr [esi + 0x21c60], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 64 1C 02 00: mov ecx, dword ptr [esi + 0x21c64]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800195
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 64 1C 02 00: mov dword ptr [esi + 0x21c64], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 58 1C 02 00: lea edi, [esi + 0x21c58]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x588001b0
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 E8: jne 0x588001a0
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 8E 54 1C 02 00: mov ecx, dword ptr [esi + 0x21c54]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588001d0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 54 1C 02 00: mov dword ptr [esi + 0x21c54], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E AC 1C 02 00: mov ecx, dword ptr [esi + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588001e8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E AC 1C 02 00: mov dword ptr [esi + 0x21cac], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE B0 1C 02 00: lea edi, [esi + 0x21cb0]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x58800203
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 E8: jne 0x588001f3
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes 8D BE B8 1C 02 00: lea edi, [esi + 0x21cb8]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x58800226
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 E8: jne 0x58800216
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 8E C0 1C 02 00: mov ecx, dword ptr [esi + 0x21cc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800246
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E C0 1C 02 00: mov dword ptr [esi + 0x21cc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C4 1C 02 00: mov ecx, dword ptr [esi + 0x21cc4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x5880025e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E C4 1C 02 00: mov dword ptr [esi + 0x21cc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E D4 1C 02 00: mov ecx, dword ptr [esi + 0x21cd4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800276
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E D4 1C 02 00: mov dword ptr [esi + 0x21cd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E D8 1C 02 00: mov ecx, dword ptr [esi + 0x21cd8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x5880028e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E D8 1C 02 00: mov dword ptr [esi + 0x21cd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E DC 1C 02 00: mov ecx, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588002a6
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E DC 1C 02 00: mov dword ptr [esi + 0x21cdc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E E0 1C 02 00: mov ecx, dword ptr [esi + 0x21ce0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588002be
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E E0 1C 02 00: mov dword ptr [esi + 0x21ce0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 04 1F 02 00: mov ecx, dword ptr [esi + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588002d6
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 04 1F 02 00: mov dword ptr [esi + 0x21f04], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 08 1F 02 00: mov ecx, dword ptr [esi + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588002ee
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 08 1F 02 00: mov dword ptr [esi + 0x21f08], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 24 1D 02 00: mov ecx, dword ptr [esi + 0x21d24]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x58800306
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 24 1D 02 00: mov dword ptr [esi + 0x21d24], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x24
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 04 05 01 00: lea ecx, [esi + 0x10504]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 28 01: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        ; Exact mapped bytes E8 BA 87 F4 FF: call 0x58748ad0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 B4 04 01 00: mov eax, dword ptr [esi + 0x104b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 86 A0 04 01 00 88 BD 99 58: mov dword ptr [esi + 0x104a0], 0x5899bd88
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x88
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 C9 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc9
        __asm _emit 0x17
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880032C .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_587ffbc0_segment_02() {
    __asm {
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 44 24 28 FF FF FF FF: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 D2 28 10 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
