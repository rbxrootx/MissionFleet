// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E16B0 .. +0x211 bytes.
extern "C" __declspec(naked) void FUN_100e16b0_100E16B0() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 8E 40 01 00 00: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B0 0D 01 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 38 01 00 00: lea edi, [esi + 0x138]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes E8 3E 30 02 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 75 F3: jne 0x100e16cb
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 78 50 05: cmp dword ptr [eax + 0x50], 5
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x100e1789
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 40 01 00 00: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 88 CC 09 00 00: mov ecx, dword ptr [eax + 0x9cc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 BF 01 00 00: je 0x100e18bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 CC 09 00 00: mov ecx, 0x9cc
        __asm _emit 0xb9
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 83 3C 01 00: cmp dword ptr [ecx + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 68: je 0x100e1773
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 8B 0C 07: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x07
        ; Exact mapped bytes 8A 09: mov cl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x09
        ; Exact mapped bytes 83 E1 0F: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 5A: jne 0x100e1773
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 80 4C 0B 00 00: mov eax, dword ptr [eax + 0xb4c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 1F 00 00 00: mov ecx, 0x1f
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D3 E2: shl edx, cl
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 88 54 02 00 00: mov ecx, dword ptr [eax + 0x254]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 85 D1: test ecx, edx
        __asm _emit 0x85
        __asm _emit 0xd1
        ; Exact mapped bytes 74 07: je 0x100e1745
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 68 34 C3 1A 10: push 0x101ac334
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xc3
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes EB 05: jmp 0x100e174a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 68 30 C3 1A 10: push 0x101ac330
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xc3
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8E 38 01 00 00: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5B 25 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 40 01 00 00: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 14 0F: mov edx, dword ptr [edi + ecx]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 8E 3C 01 00 00: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 78: add edx, 0x78
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x78
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 3D 25 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 40 01 00 00: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 83 3C 07 00: cmp dword ptr [edi + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 75 80: jne 0x100e1705
        __asm _emit 0x75
        __asm _emit 0x80
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 86 20 01 00 00: mov eax, dword ptr [esi + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 78 50 05: cmp dword ptr [eax + 0x50], 5
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x100e183a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 40 01 00 00: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 88 CC 09 00 00: mov ecx, dword ptr [eax + 0x9cc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x100e18bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 CC 09 00 00: mov ecx, 0x9cc
        __asm _emit 0xb9
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 83 3C 01 00: cmp dword ptr [ecx + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 68: je 0x100e1824
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 8B 0C 07: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x07
        ; Exact mapped bytes 8A 09: mov cl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x09
        ; Exact mapped bytes 83 E1 0F: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 75 5A: jne 0x100e1824
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 80 4C 0B 00 00: mov eax, dword ptr [eax + 0xb4c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 1F 00 00 00: mov ecx, 0x1f
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D3 E2: shl edx, cl
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 88 54 02 00 00: mov ecx, dword ptr [eax + 0x254]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 85 D1: test ecx, edx
        __asm _emit 0x85
        __asm _emit 0xd1
        ; Exact mapped bytes 74 07: je 0x100e17f6
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 68 34 C3 1A 10: push 0x101ac334
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xc3
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes EB 05: jmp 0x100e17fb
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 68 30 C3 1A 10: push 0x101ac330
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xc3
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8E 38 01 00 00: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AA 24 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 40 01 00 00: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 14 0F: mov edx, dword ptr [edi + ecx]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 8E 3C 01 00 00: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 78: add edx, 0x78
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x78
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 8C 24 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 40 01 00 00: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 83 3C 07 00: cmp dword ptr [edi + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 75 80: jne 0x100e17b6
        __asm _emit 0x75
        __asm _emit 0x80
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 86 24 01 00 00: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 78 50 05: cmp dword ptr [eax + 0x50], 5
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x05
        ; Exact mapped bytes 75 77: jne 0x100e18bd
        __asm _emit 0x75
        __asm _emit 0x77
        ; Exact mapped bytes 8B 86 40 01 00 00: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 1C 00 00 00: mov ebx, 0x1c
        __asm _emit 0xbb
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 3C 0A 00 00: mov ecx, dword ptr [eax + 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 62: je 0x100e18bd
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes B9 3C 0A 00 00: mov ecx, 0xa3c
        __asm _emit 0xb9
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 83 3C 01 00: cmp dword ptr [ecx + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x100e18ab
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0C 07: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x07
        ; Exact mapped bytes 8A 01: mov al, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x01
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 66 3D 0D 00: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 75 35: jne 0x100e18ab
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 8B 8E 38 01 00 00: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 2C C3 1A 10: push 0x101ac32c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes E8 23 24 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 40 01 00 00: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 3C 01 00 00: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 04 17: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x17
        ; Exact mapped bytes 83 C0 78: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x78
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 05 24 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 40 01 00 00: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 83 3C 07 00: cmp dword ptr [edi + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 75 A5: jne 0x100e1862
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
