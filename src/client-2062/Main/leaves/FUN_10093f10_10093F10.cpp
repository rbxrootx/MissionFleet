// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10093F10 .. +0x700 bytes.
extern "C" __declspec(naked) void FUN_10093f10_10093F10() {
    __asm {
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
        ; Exact mapped bytes F6 46 24 02: test byte ptr [esi + 0x24], 2
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 FE 01 00 00: je 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 3C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1B: je 0x10093f46
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 D1 06 00 00: je 0x10094607
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 3B 41 34: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x34
        ; Exact mapped bytes 75 E8: jne 0x10093f2e
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 3D 03 02 00 00: cmp eax, 0x203
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 24 05 00 00: ja 0x10094478
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 58 03 00 00: je 0x100942b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 01 00 00: cmp eax, 0x100
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 60: je 0x10093fc1
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 3D 01 02 00 00: cmp eax, 0x201
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 B2 01 00 00: jne 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 98 00 00 00: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 8C 93 01 00 00: jl 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 58 1C: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x1c
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 8D 86 01 00 00: jge 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 78 18: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x18
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 8C 73 01 00 00: jl 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 8D 66 01 00 00: jge 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 98 00 00 00: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 8C 3E 01 00 00: jl 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 58 1C: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x1c
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 8D 31 01 00 00: jge 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 78 18: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x18
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 8C 1E 01 00 00: jl 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 8D 11 01 00 00: jge 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 83 C0 DF: add eax, -0x21
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xdf
        ; Exact mapped bytes 83 F8 07: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 0F 87 02 01 00 00: ja 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 10 46 09 10: jmp dword ptr [eax*4 + 0x10094610]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 86 E2 00 00 00: mov ax, word ptr [esi + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 4D: jne 0x1009407c
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8E E6 00 00 00: mov cx, word ptr [esi + 0xe6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8E C6 00 00 00: jle 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E E6 00 00 00: mov word ptr [esi + 0xe6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 89 8E EC 00 00 00: mov dword ptr [esi + 0xec], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 5E 10 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E E8 00 00 00: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 50: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 7D: je 0x1009411e
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 66 8B 86 E4 00 00 00: mov ax, word ptr [esi + 0xe4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 71: jle 0x1009411e
        __asm _emit 0x7e
        __asm _emit 0x71
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E4 00 00 00: mov word ptr [esi + 0xe4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 50: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 96 E8 00 00 00: mov dword ptr [esi + 0xe8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 09 10 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE E2 00 00 00 00: cmp word ptr [esi + 0xe2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 43: jne 0x1009411e
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 39: je 0x1009411e
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 48 54: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x54
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 32: je 0x1009411e
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 8B 8E E6 00 00 00: mov cx, word ptr [esi + 0xe6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 96 DE 00 00 00: movsx edx, word ptr [esi + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x96
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF F9: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
        ; Exact mapped bytes 83 EA 05: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7D 1A: jge 0x1009411e
        __asm _emit 0x7d
        __asm _emit 0x1a
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 66 89 8E E6 00 00 00: mov word ptr [esi + 0xe6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 54: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x54
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 86 EC 00 00 00: mov dword ptr [esi + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B2 0F 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE E2 00 00 00 00: cmp word ptr [esi + 0xe2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 EC: jne 0x1009411e
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 E2: je 0x1009411e
        __asm _emit 0x74
        __asm _emit 0xe2
        ; Exact mapped bytes 66 8B 8E E6 00 00 00: mov cx, word ptr [esi + 0xe6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D1: movsx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd1
        ; Exact mapped bytes 83 EA 05: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 8E 1D 01 00 00: jle 0x1009426e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 05 00 00 00: mov eax, 5
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 EC 00 00 00: mov edx, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 52 50: mov edx, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x50
        ; Exact mapped bytes 89 96 EC 00 00 00: mov dword ptr [esi + 0xec], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 EE: jne 0x10094156
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 83 C1 FB: add ecx, -5
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 8E E6 00 00 00: mov word ptr [esi + 0xe6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 55 0F 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE E2 00 00 00 00: cmp word ptr [esi + 0xe2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 8F: jne 0x1009411e
        __asm _emit 0x75
        __asm _emit 0x8f
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 85: je 0x1009411e
        __asm _emit 0x74
        __asm _emit 0x85
        ; Exact mapped bytes 66 8B 8E E6 00 00 00: mov cx, word ptr [esi + 0xe6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 DE 00 00 00: mov ax, word ptr [esi + 0xde]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        ; Exact mapped bytes 0F BF F9: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
        ; Exact mapped bytes 83 EA 05: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 83 C7 05: add edi, 5
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x05
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7D 1C: jge 0x100941d3
        __asm _emit 0x7d
        __asm _emit 0x1c
        ; Exact mapped bytes B8 05 00 00 00: mov eax, 5
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 EC 00 00 00: mov edx, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 52 54: mov edx, dword ptr [edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x54
        ; Exact mapped bytes 89 96 EC 00 00 00: mov dword ptr [esi + 0xec], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 EE: jne 0x100941bc
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 83 C1 05: add ecx, 5
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x05
        ; Exact mapped bytes EB 98: jmp 0x1009416b
        __asm _emit 0xeb
        __asm _emit 0x98
        ; Exact mapped bytes 83 C0 FB: add eax, -5
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xfb
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 86 E6 00 00 00: mov word ptr [esi + 0xe6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 88 00 00 00: jl 0x1009426e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E EC 00 00 00: mov dword ptr [esi + 0xec], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 EC 00 00 00: mov edx, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 4A 50: mov ecx, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x50
        ; Exact mapped bytes 89 8E EC 00 00 00: mov dword ptr [esi + 0xec], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 EE: jne 0x100941f4
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C1 0E 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE E2 00 00 00 00: cmp word ptr [esi + 0xe2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 F7 FE FF FF: jne 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 56 6C: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x6c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 66 C7 86 E6 00 00 00 00 00: mov word ptr [esi + 0xe6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 EC 00 00 00: mov dword ptr [esi + 0xec], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8E 0E 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE E2 00 00 00 00: cmp word ptr [esi + 0xe2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C4 FE FF FF: jne 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 86 DE 00 00 00: mov ax, word ptr [esi + 0xde]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 2D 05 00: sub ax, 5
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E6 00 00 00: mov word ptr [esi + 0xe6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 79 11: jns 0x1009427f
        __asm _emit 0x79
        __asm _emit 0x11
        ; Exact mapped bytes 8B 46 6C: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x6c
        ; Exact mapped bytes 66 C7 86 E6 00 00 00 00 00: mov word ptr [esi + 0xe6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 90 FE FF FF: jmp 0x1009410f
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E EC 00 00 00: mov dword ptr [esi + 0xec], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 EC 00 00 00: mov edx, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 4A 50: mov ecx, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x50
        ; Exact mapped bytes 89 8E EC 00 00 00: mov dword ptr [esi + 0xec], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 EE: jne 0x1009428d
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 28 0E 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 98 00 00 00: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D D4 92 1C 10: mov ebp, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 78 14: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 8C 4D FE FF FF: jl 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 78 1C: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x1c
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 8D 40 FE FF FF: jge 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 78 18: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x18
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 8C 2D FE FF FF: jl 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 8D 20 FE FF FF: jge 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 86 E2 00 00 00: mov ax, word ptr [esi + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 08: jne 0x10094314
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B BE EC 00 00 00: mov edi, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x10094320
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x10094320
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 8B BE E8 00 00 00: mov edi, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 14 00 00 00 00: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 D7 02 00 00: je 0x10094607
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 6C: mov eax, dword ptr [edi + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 21: jl 0x10094363
        __asm _emit 0x7c
        __asm _emit 0x21
        ; Exact mapped bytes 8B 58 1C: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x1c
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7D 18: jge 0x10094363
        __asm _emit 0x7d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 58 18: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 09: jl 0x10094363
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C 11: jl 0x10094374
        __asm _emit 0x7c
        __asm _emit 0x11
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 7F 54: mov edi, dword ptr [edi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x54
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 7C B4: jl 0x10094328
        __asm _emit 0x7c
        __asm _emit 0xb4
        ; Exact mapped bytes 83 7C 24 14 05: cmp dword ptr [esp + 0x14], 5
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x1009446f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BF 9E 00 00 00 00: cmp word ptr [edi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x10094451
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AF A4 00 00 00: mov ebp, dword ptr [edi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0xaf
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 2B: jne 0x100943c2
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A1 10 00 00: call 0x10095440
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x1009446f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 6E D9 FE FF: call 0x10081d20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8A 45 25: mov al, byte ptr [ebp + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0x25
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 05: cmp al, 5
        __asm _emit 0x3c
        __asm _emit 0x05
        ; Exact mapped bytes 75 11: jne 0x100943de
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8A 45 24: mov al, byte ptr [ebp + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0x24
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 74 12: je 0x100943fc
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 9D DE FE FF: call 0x10082290
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 8C DE FE FF: call 0x10082290
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x10094436
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 8E 8C 00 00 00: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes F7 C1 FC FF FF FF: test ecx, 0xfffffffc
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 18: je 0x10094436
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8E 8C 00 00 00: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 0E: je 0x10094436
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 84 5A 24: test byte ptr [edx + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x24
        ; Exact mapped bytes 75 1E: jne 0x1009444d
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 F2: jne 0x10094428
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 33: je 0x1009446f
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 8C 13 00 00: call 0x100957d0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes EB E7: jmp 0x10094438
        __asm _emit 0xeb
        __asm _emit 0xe7
        ; Exact mapped bytes 8B 8F A4 00 00 00: mov ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 14: je 0x1009446f
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 5F DB FE FF: call 0x10081fc0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 87 A4 00 00 00: mov eax, dword ptr [edi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 61 13 00 00: call 0x100957d0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 2D 04 02 00 00: sub eax, 0x204
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9B FC FF FF: je 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 E8 06: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 92 FC FF FF: jne 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 98 00 00 00: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 8C 73 FC FF FF: jl 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 58 1C: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x1c
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 8D 66 FC FF FF: jge 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 78 18: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x18
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 8C 53 FC FF FF: jl 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 8D 46 FC FF FF: jge 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 10: shr edx, 0x10
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x10
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 02: jle 0x100944ea
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 86 E2 00 00 00: mov ax, word ptr [esi + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x10094580
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 73: je 0x10094577
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 42: je 0x1009454a
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 48 54: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x54
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 68: je 0x10094577
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 66 8B 8E E6 00 00 00: mov cx, word ptr [esi + 0xe6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 96 DE 00 00 00: movsx edx, word ptr [esi + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x96
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF F9: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
        ; Exact mapped bytes 83 EA 05: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7D 50: jge 0x10094577
        __asm _emit 0x7d
        __asm _emit 0x50
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E E6 00 00 00: mov word ptr [esi + 0xe6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 54: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x54
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 86 EC 00 00 00: mov dword ptr [esi + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8F 0B 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 26: je 0x10094577
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 8E E6 00 00 00: mov cx, word ptr [esi + 0xe6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7E 1A: jle 0x10094577
        __asm _emit 0x7e
        __asm _emit 0x1a
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E E6 00 00 00: mov word ptr [esi + 0xe6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 89 8E EC 00 00 00: mov dword ptr [esi + 0xec], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 59 0B 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 94 FB FF FF: jne 0x1009411e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 E8 00 00 00: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 73: je 0x10094607
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 42: je 0x100945da
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 48 54: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x54
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 68: je 0x10094607
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 66 8B 8E E4 00 00 00: mov cx, word ptr [esi + 0xe4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 96 DC 00 00 00: movsx edx, word ptr [esi + 0xdc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x96
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF F9: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
        ; Exact mapped bytes 83 EA 05: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7D 50: jge 0x10094607
        __asm _emit 0x7d
        __asm _emit 0x50
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E E4 00 00 00: mov word ptr [esi + 0xe4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 54: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x54
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 86 E8 00 00 00: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF 0A 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 26: je 0x10094607
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 8E E4 00 00 00: mov cx, word ptr [esi + 0xe4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7E 1A: jle 0x10094607
        __asm _emit 0x7e
        __asm _emit 0x1a
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E E4 00 00 00: mov word ptr [esi + 0xe4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 89 8E E8 00 00 00: mov dword ptr [esi + 0xe8], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C9 0A 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
