// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E7B0 .. +0x21B bytes.
extern "C" __declspec(naked) void FUN_0040e7b0_0040E7B0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 81 EC E0 03 00 00: sub esp, 0x3e0
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D BD 20 FC FF FF: lea edi, [ebp - 0x3e0]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B9 F8 00 00 00: mov ecx, 0xf8
        __asm _emit 0xb9
        __asm _emit 0xf8
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
        ; Exact mapped bytes 68 A4 37 63 00: push 0x6337a4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x37
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 FD 2F FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 68 E0 37 63 00: push 0x6337e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x37
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 F0 2F FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 8C: lea eax, [ebp - 0x74]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x8c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CB 70 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B 91 B8 00 00 00: mov edx, dword ptr [ecx + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 8C: mov dword ptr [ebp - 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8c
        ; Exact mapped bytes C7 45 94 03 00 00 00: mov dword ptr [ebp - 0x6c], 3
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 88 C4 00 00 00: mov ecx, dword ptr [eax + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D B0: mov dword ptr [ebp - 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes C7 45 B8 03 00 00 00: mov dword ptr [ebp - 0x48], 3
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B 82 B4 00 00 00: mov eax, dword ptr [edx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes C7 45 AC 03 00 00 00: mov dword ptr [ebp - 0x54], 3
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 79 01 00 00: je 0x40e9b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 4C 68 00: mov edx, dword ptr [0x684cb4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes A1 B0 4C 68 00: mov eax, dword ptr [0x684cb0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 55 8C: lea edx, [ebp - 0x74]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x8c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B FC: mov edi, esp
        __asm _emit 0x8b
        __asm _emit 0xfc
        ; Exact mapped bytes FF 15 08 B8 68 00: call dword ptr [0x68b808]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B FC: cmp edi, esp
        __asm _emit 0x3b
        __asm _emit 0xfc
        ; Exact mapped bytes E8 88 65 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B FC: mov edi, esp
        __asm _emit 0x8b
        __asm _emit 0xfc
        ; Exact mapped bytes FF 15 F0 B7 68 00: call dword ptr [0x68b7f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B FC: cmp edi, esp
        __asm _emit 0x3b
        __asm _emit 0xfc
        ; Exact mapped bytes E8 78 65 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 4C 01 00 00: push 0x14c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 AC 4C 68 00: call dword ptr [0x684cac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 65 65 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 05: jne 0x40e894
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x40e9b7
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D A4 00: cmp dword ptr [ebp - 0x5c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa4
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x40e89f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x40e9b7
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 8C: mov ecx, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 D0 37 63 00: push 0x6337d0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x37
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 24 2F FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 95 74 FD FF FF: lea edx, [ebp - 0x28c]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 95 70 FD FF FF: mov dword ptr [ebp - 0x290], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 70 FD FF FF: mov eax, dword ptr [ebp - 0x290]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 18 02 00 00: mov dword ptr [eax], 0x218
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 70 FD FF FF: mov ecx, dword ptr [ebp - 0x290]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 41 10 00 02 00 00: mov dword ptr [ecx + 0x10], 0x200
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 6C FD FF FF 00 00 00 00: mov dword ptr [ebp - 0x294], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 95 70 FD FF FF: mov edx, dword ptr [ebp - 0x290]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 85 6C FD FF FF: lea eax, [ebp - 0x294]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 8C: mov ecx, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B FC: mov edi, esp
        __asm _emit 0x8b
        __asm _emit 0xfc
        ; Exact mapped bytes FF 15 F0 B7 68 00: call dword ptr [0x68b7f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B FC: cmp edi, esp
        __asm _emit 0x3b
        __asm _emit 0xfc
        ; Exact mapped bytes E8 EA 64 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 B8 4C 68 00: call dword ptr [0x684cb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 DC 64 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 20: je 0x40e938
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 95 6C FD FF FF: mov edx, dword ptr [ebp - 0x294]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 70 FD FF FF: mov eax, dword ptr [ebp - 0x290]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C0 14: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 C4 37 63 00: push 0x6337c4
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x37
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 A2 2E FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB 7A: jmp 0x40e9b2
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes 8A 0D 5C 31 63 00: mov cl, byte ptr [0x63315c]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x31
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 88 8D 68 FC FF FF: mov byte ptr [ebp - 0x398], cl
        __asm _emit 0x88
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B9 40 00 00 00: mov ecx, 0x40
        __asm _emit 0xb9
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D BD 69 FC FF FF: lea edi, [ebp - 0x397]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        ; Exact mapped bytes C7 85 64 FC FF FF 00 00 00 00: mov dword ptr [ebp - 0x39c], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 60 FC FF FF 00 00 00 00: mov dword ptr [ebp - 0x3a0], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 95 60 FC FF FF: lea edx, [ebp - 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 85 64 FC FF FF: lea eax, [ebp - 0x39c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 68 FC FF FF: lea ecx, [ebp - 0x398]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 8C: mov edx, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x8c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 2E 2A FF FF: call 0x4013bb
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 8D 85 68 FC FF FF: lea eax, [ebp - 0x398]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 60 FC FF FF: mov ecx, dword ptr [ebp - 0x3a0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 64 FC FF FF: mov edx, dword ptr [ebp - 0x39c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 B4 37 63 00: push 0x6337b4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x37
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 26 2E FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes E9 7A FE FF FF: jmp 0x40e831
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 81 C4 E0 03 00 00: add esp, 0x3e0
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 29 64 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x64
        __asm _emit 0x05
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
