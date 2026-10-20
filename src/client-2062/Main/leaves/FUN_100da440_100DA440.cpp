// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DA440 .. +0xCD6 bytes.
extern "C" __declspec(naked) void FUN_100da440_100DA440() {
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
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 84 5E 24: test byte ptr [esi + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes 0F 84 B8 0C 00 00: je 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x0c
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
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 1B: je 0x100da47c
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 84 71 04 00 00: je 0x100da8dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x04
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
        ; Exact mapped bytes 75 E8: jne 0x100da464
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes 66 39 BE 9E 01 00 00: cmp word ptr [esi + 0x19e], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 83 0C 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 3D 02 02 00 00: cmp eax, 0x202
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 C4 09 00 00: ja 0x100dae5b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 78 09 00 00: je 0x100dae15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2D 00 01 00 00: sub eax, 0x100
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 06 06 00 00: je 0x100daaae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2D 00 01 00 00: sub eax, 0x100
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 33 04 00 00: je 0x100da8e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 0F 85 52 0C 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 70 01 00 00: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8A 51 25: mov dl, byte ptr [ecx + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x25
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 05: jne 0x100da4d1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x100da5b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 78: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x78
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 14: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x14
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 33: jl 0x100da52e
        __asm _emit 0x7c
        __asm _emit 0x33
        ; Exact mapped bytes 8B 69 1C: mov ebp, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7D 2A: jge 0x100da52e
        __asm _emit 0x7d
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 69 18: mov ebp, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x18
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 1B: jl 0x100da52e
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 49 20: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7D 12: jge 0x100da52e
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 84 00 00 00: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 43: jmp 0x100da571
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes 8B 4E 7C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 14: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x14
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 42: jl 0x100da582
        __asm _emit 0x7c
        __asm _emit 0x42
        ; Exact mapped bytes 8B 69 1C: mov ebp, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7D 39: jge 0x100da582
        __asm _emit 0x7d
        __asm _emit 0x39
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 69 18: mov ebp, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x18
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 2A: jl 0x100da582
        __asm _emit 0x7c
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 49 20: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7D 21: jge 0x100da582
        __asm _emit 0x7d
        __asm _emit 0x21
        ; Exact mapped bytes 8B 86 84 00 00 00: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 50 24: mov dl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 22 D3: and dl, bl
        __asm _emit 0x22
        __asm _emit 0xd3
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 38: jne 0x100da5b2
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 30: jmp 0x100da5b2
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes 8B 8E 84 00 00 00: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD FE FF 00 00: mov ebp, 0xfffe
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 51 24: mov dl, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 22 D3: and dl, bl
        __asm _emit 0x22
        __asm _emit 0xd3
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 09: jne 0x100da59f
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8E 80 00 00 00: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 51 24: mov dl, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 22 D3: and dl, bl
        __asm _emit 0x22
        __asm _emit 0xd3
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 09: jne 0x100da5b7
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8E 38 01 00 00: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 14: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x14
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 6A: jl 0x100da636
        __asm _emit 0x7c
        __asm _emit 0x6a
        ; Exact mapped bytes 8B 69 1C: mov ebp, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7D 61: jge 0x100da636
        __asm _emit 0x7d
        __asm _emit 0x61
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 69 18: mov ebp, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x18
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 52: jl 0x100da636
        __asm _emit 0x7c
        __asm _emit 0x52
        ; Exact mapped bytes 8B 49 20: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7D 49: jge 0x100da636
        __asm _emit 0x7d
        __asm _emit 0x49
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 70 01 00 00 24: cmp dword ptr [eax + 0x170], 0x24
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        ; Exact mapped bytes 7E 12: jle 0x100da60d
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x100da60d
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 88 90 00 00 00: mov ecx, dword ptr [eax + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100da60f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 96 E0 00 00 00: mov edx, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 4F 13 00 00: call 0x100db980
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x100da6bf
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 3C 01 00 00: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 14: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x14
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 79: jl 0x100da6c4
        __asm _emit 0x7c
        __asm _emit 0x79
        ; Exact mapped bytes 8B 69 1C: mov ebp, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7D 70: jge 0x100da6c4
        __asm _emit 0x7d
        __asm _emit 0x70
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 69 18: mov ebp, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x18
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 61: jl 0x100da6c4
        __asm _emit 0x7c
        __asm _emit 0x61
        ; Exact mapped bytes 8B 49 20: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7D 58: jge 0x100da6c4
        __asm _emit 0x7d
        __asm _emit 0x58
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4A 24: mov cl, byte ptr [edx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes 22 CB: and cl, bl
        __asm _emit 0x22
        __asm _emit 0xcb
        ; Exact mapped bytes 3A CB: cmp cl, bl
        __asm _emit 0x3a
        __asm _emit 0xcb
        ; Exact mapped bytes 75 49: jne 0x100da6c4
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 70 01 00 00 24: cmp dword ptr [eax + 0x170], 0x24
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        ; Exact mapped bytes 7E 12: jle 0x100da69b
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x100da69b
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 88 90 00 00 00: mov ecx, dword ptr [eax + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100da69d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 96 EC 00 00 00: mov edx, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 21 14 00 00: call 0x100dbae0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 96 64 01 00 00: mov edx, dword ptr [esi + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8A 4A 25: mov cl, byte ptr [edx + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x4a
        __asm _emit 0x25
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 04: cmp cl, 4
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 09: je 0x100da6e0
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 80 F9 05: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 64 01 00 00: jne 0x100da844
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 6C 01 00 00: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8A 51 25: mov dl, byte ptr [ecx + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x25
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 0A: jne 0x100da6fc
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8E 40 01 00 00: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 14: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x14
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 0F 8C 91 00 00 00: jl 0x100da7a6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 69 1C: mov ebp, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x100da7a6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 69 18: mov ebp, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x18
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 75: jl 0x100da7a6
        __asm _emit 0x7c
        __asm _emit 0x75
        ; Exact mapped bytes 8B 49 20: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7D 6C: jge 0x100da7a6
        __asm _emit 0x7d
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 8E E0 00 00 00: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4B 97 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 58: jl 0x100da7a1
        __asm _emit 0x7c
        __asm _emit 0x58
        ; Exact mapped bytes 8B 86 E0 00 00 00: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 84 00 00 00: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 48: je 0x100da7a1
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 39 58 08: cmp dword ptr [eax + 8], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 75 43: jne 0x100da7a1
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 86 E8 00 00 00: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 84 00 00 00: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x100da773
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 40 08: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes EB 03: jmp 0x100da776
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 64 01 00 00: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 4C 2C 00 00: call 0x100dd3d0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 6C 01 00 00: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 40 1E FD FF: call 0x100ac5d0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 6C 01 00 00: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 89 9E 74 01 00 00: mov dword ptr [esi + 0x174], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8E 44 01 00 00: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 14: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x14
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 0F 8C 85 00 00 00: jl 0x100da844
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 69 1C: mov ebp, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7D 7C: jge 0x100da844
        __asm _emit 0x7d
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 69 18: mov ebp, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x18
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 6D: jl 0x100da844
        __asm _emit 0x7c
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 49 20: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7D 64: jge 0x100da844
        __asm _emit 0x7d
        __asm _emit 0x64
        ; Exact mapped bytes 8B 8E EC 00 00 00: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A5 96 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 50: jl 0x100da83f
        __asm _emit 0x7c
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 84 00 00 00: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 40: je 0x100da83f
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 39 58 08: cmp dword ptr [eax + 8], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 75 3B: jne 0x100da83f
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 86 F0 00 00 00: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 84 00 00 00: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x100da819
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 40 08: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes EB 03: jmp 0x100da81c
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 6C 01 00 00: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A6 1D FD FF: call 0x100ac5d0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 6C 01 00 00: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes C7 86 74 01 00 00 00 00 00 00: mov dword ptr [esi + 0x174], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8E 58 01 00 00: mov ecx, dword ptr [esi + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 14: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x14
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 3C: jl 0x100da895
        __asm _emit 0x7c
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 69 1C: mov ebp, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7D 33: jge 0x100da895
        __asm _emit 0x7d
        __asm _emit 0x33
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 69 18: mov ebp, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x18
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 24: jl 0x100da895
        __asm _emit 0x7c
        __asm _emit 0x24
        ; Exact mapped bytes 8B 69 20: mov ebp, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x20
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7D 1B: jge 0x100da895
        __asm _emit 0x7d
        __asm _emit 0x1b
        ; Exact mapped bytes 8A 41 24: mov al, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 22 C3: and al, bl
        __asm _emit 0x22
        __asm _emit 0xc3
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 75 5A: jne 0x100da8dd
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 89 9E C4 01 00 00: mov dword ptr [esi + 0x1c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc4
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
        ; Exact mapped bytes 8B 8E 5C 01 00 00: mov ecx, dword ptr [esi + 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 14: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x14
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 33: jl 0x100da8dd
        __asm _emit 0x7c
        __asm _emit 0x33
        ; Exact mapped bytes 8B 69 1C: mov ebp, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7D 2A: jge 0x100da8dd
        __asm _emit 0x7d
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 79 18: mov edi, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x18
        ; Exact mapped bytes 8B 40 08: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 7C 1B: jl 0x100da8dd
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 79 20: mov edi, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x20
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 7D 12: jge 0x100da8dd
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact mapped bytes 8A 51 24: mov dl, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 22 D3: and dl, bl
        __asm _emit 0x22
        __asm _emit 0xd3
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 09: jne 0x100da8dd
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 89 9E C8 01 00 00: mov dword ptr [esi + 0x1c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc8
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
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes BD FE FF 00 00: mov ebp, 0xfffe
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x100da97f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 78: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x78
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
        ; Exact mapped bytes 7C 27: jl 0x100da938
        __asm _emit 0x7c
        __asm _emit 0x27
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
        ; Exact mapped bytes 7D 1E: jge 0x100da938
        __asm _emit 0x7d
        __asm _emit 0x1e
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
        ; Exact mapped bytes 7C 0F: jl 0x100da938
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 78 20: mov edi, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x20
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 7D 06: jge 0x100da938
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes 80 48 24 01: or byte ptr [eax + 0x24], 1
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes EB 04: jmp 0x100da93c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 7C: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7c
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
        ; Exact mapped bytes 7C 27: jl 0x100da97b
        __asm _emit 0x7c
        __asm _emit 0x27
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
        ; Exact mapped bytes 7D 1E: jge 0x100da97b
        __asm _emit 0x7d
        __asm _emit 0x1e
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
        ; Exact mapped bytes 7C 0F: jl 0x100da97b
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 78 20: mov edi, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x20
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 7D 06: jge 0x100da97b
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes 80 48 24 01: or byte ptr [eax + 0x24], 1
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes EB 04: jmp 0x100da97f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 38 01 00 00: mov eax, dword ptr [esi + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
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
        ; Exact mapped bytes 7C 46: jl 0x100da9e0
        __asm _emit 0x7c
        __asm _emit 0x46
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
        ; Exact mapped bytes 7D 3D: jge 0x100da9e0
        __asm _emit 0x7d
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 58 18: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 2E: jl 0x100da9e0
        __asm _emit 0x7c
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 58 20: mov ebx, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x20
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7D 25: jge 0x100da9e0
        __asm _emit 0x7d
        __asm _emit 0x25
        ; Exact mapped bytes 8A 48 24: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 CB: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xcb
        ; Exact mapped bytes 75 2E: jne 0x100da9f5
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 86 38 01 00 00: mov eax, dword ptr [esi + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 0F: jmp 0x100da9ef
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8A 48 24: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 80 E1 01: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 0A: jne 0x100da9f5
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 86 3C 01 00 00: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
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
        ; Exact mapped bytes 7C 53: jl 0x100daa5d
        __asm _emit 0x7c
        __asm _emit 0x53
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
        ; Exact mapped bytes 7D 4A: jge 0x100daa5d
        __asm _emit 0x7d
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 58 18: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 3B: jl 0x100daa5d
        __asm _emit 0x7c
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 58 20: mov ebx, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x20
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7D 32: jge 0x100daa5d
        __asm _emit 0x7d
        __asm _emit 0x32
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4A 24: mov cl, byte ptr [edx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes 22 CB: and cl, bl
        __asm _emit 0x22
        __asm _emit 0xcb
        ; Exact mapped bytes 3A CB: cmp cl, bl
        __asm _emit 0x3a
        __asm _emit 0xcb
        ; Exact mapped bytes 75 1E: jne 0x100daa5d
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 84 58 24: test byte ptr [eax + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 75 2E: jne 0x100daa72
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 8B 86 3C 01 00 00: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 0F: jmp 0x100daa6c
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8A 48 24: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 80 E1 01: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 0A: jne 0x100daa72
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 86 C4 01 00 00: mov eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 14: je 0x100daa90
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 19 0D 00 00: call 0x100db7a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0d
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
        ; Exact mapped bytes 8B 86 C8 01 00 00: mov eax, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x100daaa5
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 EB 0D 00 00: call 0x100db890
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0d
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
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 83 F8 1B: cmp eax, 0x1b
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1b
        ; Exact mapped bytes 75 19: jne 0x100daacf
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 2F 06 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 DF: add eax, -0x21
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xdf
        ; Exact mapped bytes 83 F8 07: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 0F 87 23 06 00 00: ja 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x23
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 18 B1 0D 10: jmp dword ptr [eax*4 + 0x100db118]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x10
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 48 24: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 80 E1 01: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 14: jne 0x100dab15
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes E8 25 4A 02 00: call 0x100ff530
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x4a
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 96 84 00 00 00: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 42 24: mov al, byte ptr [edx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 24 01: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 E4 05 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes E8 FE 49 02 00: call 0x100ff530
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x49
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 8E 80 00 00 00: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 51 24: mov dl, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 80 E2 01: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 75 51: jne 0x100dab9e
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E A4 00 00 00: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 00 D1 1A 10: mov eax, dword ptr [0x101ad100]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B 41 64: sub eax, dword ptr [ecx + 0x64]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 8E A4 05 00 00: jle 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 84 96 05 00 00: je 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 0A: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0a
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C 10: jl 0x100dab8d
        __asm _emit 0x7c
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9D 4B 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4b
        __asm _emit 0x02
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
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes E8 3C 49 02 00: call 0x100ff4d0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x49
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 96 84 00 00 00: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 42 24: mov al, byte ptr [edx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 24 01: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 5B 05 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A8 00 00 00: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 D1 1A 10: mov eax, dword ptr [0x101ad104]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B 41 64: sub eax, dword ptr [ecx + 0x64]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 8E 40 05 00 00: jle 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 84 32 05 00 00: je 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 0A: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0a
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C 10: jl 0x100dabf1
        __asm _emit 0x7c
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 39 4B 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4b
        __asm _emit 0x02
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
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes E8 D8 48 02 00: call 0x100ff4d0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x48
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 96 80 00 00 00: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 42 24: mov al, byte ptr [edx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 24 01: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 75 14: jne 0x100dac25
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes E8 15 49 02 00: call 0x100ff530
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x49
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 8E 84 00 00 00: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 51 24: mov dl, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 80 E2 01: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 D2 04 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes E8 EC 48 02 00: call 0x100ff530
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x48
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 48 24: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 80 E1 01: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 51: jne 0x100dacb0
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 8B 96 A4 00 00 00: mov edx, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 00 D1 1A 10: mov eax, dword ptr [0x101ad100]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B 42 64: sub eax, dword ptr [edx + 0x64]
        __asm _emit 0x2b
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 8E 92 04 00 00: jle 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 84 84 04 00 00: je 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 64: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C 10: jl 0x100dac9f
        __asm _emit 0x7c
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8B 4A 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x02
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
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes E8 2A 48 02 00: call 0x100ff4d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x48
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 86 84 00 00 00: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 48 24: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 80 E1 01: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 47 04 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 A8 00 00 00: mov edx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 D1 1A 10: mov eax, dword ptr [0x101ad104]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B 42 64: sub eax, dword ptr [edx + 0x64]
        __asm _emit 0x2b
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 8E 2C 04 00 00: jle 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 84 1E 04 00 00: je 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 64: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C AA: jl 0x100dac9f
        __asm _emit 0x7c
        __asm _emit 0xaa
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 25 4A 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x4a
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 48 24: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 80 E1 01: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 17: jne 0x100dad2d
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0D 48 02 00: call 0x100ff530
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 96 84 00 00 00: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 42 24: mov al, byte ptr [edx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 24 01: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 CC 03 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E3 47 02 00: call 0x100ff530
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x47
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 8E 80 00 00 00: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 51 24: mov dl, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 80 E2 01: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 75 43: jne 0x100dadab
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 8E A4 00 00 00: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 00 D1 1A 10: mov eax, dword ptr [0x101ad100]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B 41 64: sub eax, dword ptr [ecx + 0x64]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 8E 89 03 00 00: jle 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 84 7B 03 00 00: je 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 E8 03 00 00: add edx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C 66: jl 0x100dae01
        __asm _emit 0x7c
        __asm _emit 0x66
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7F 49 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x49
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 96 84 00 00 00: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 42 24: mov al, byte ptr [edx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 24 01: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 4E 03 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A8 00 00 00: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 D1 1A 10: mov eax, dword ptr [0x101ad104]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B 41 64: sub eax, dword ptr [ecx + 0x64]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 8E 33 03 00 00: jle 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 84 25 03 00 00: je 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 E8 03 00 00: add edx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C 10: jl 0x100dae01
        __asm _emit 0x7c
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 29 49 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x49
        __asm _emit 0x02
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
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C5 46 02 00: call 0x100ff4d0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x46
        __asm _emit 0x02
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
        ; Exact mapped bytes 39 BE C4 01 00 00: cmp dword ptr [esi + 0x1c4], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x100dae36
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 96 58 01 00 00: mov edx, dword ptr [esi + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7A 50: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7a
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 89 BE C4 01 00 00: mov dword ptr [esi + 0x1c4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 39 BE C8 01 00 00: cmp dword ptr [esi + 0x1c8], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CA 02 00 00: je 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 5C 01 00 00: mov eax, dword ptr [esi + 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 78 50: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 89 BE C8 01 00 00: mov dword ptr [esi + 0x1c8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 2D 04 02 00 00: sub eax, 0x204
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E9 01 00 00: je 0x100db04f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 06: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 9D 02 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 1A 01 00 00: jne 0x100daf97
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes C1 E9 10: shr ecx, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x10
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7E 05: jle 0x100dae8d
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 78: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
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
        ; Exact mapped bytes 8B 52 04: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 77: jl 0x100daf1c
        __asm _emit 0x7c
        __asm _emit 0x77
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
        ; Exact mapped bytes 7D 6E: jge 0x100daf1c
        __asm _emit 0x7d
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 58 18: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 8B 52 08: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 59: jl 0x100daf1c
        __asm _emit 0x7c
        __asm _emit 0x59
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
        ; Exact mapped bytes 7D 50: jge 0x100daf1c
        __asm _emit 0x7d
        __asm _emit 0x50
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 45: je 0x100daf15
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 8E A4 00 00 00: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 00 D1 1A 10: mov eax, dword ptr [0x101ad100]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B 41 64: sub eax, dword ptr [ecx + 0x64]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8E AC 00 00 00: jle 0x100daf97
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x100daf97
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C 0B: jl 0x100daf09
        __asm _emit 0x7c
        __asm _emit 0x0b
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1C 48 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x100daf97
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 C0 45 02 00: call 0x100ff4d0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x100daf97
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes EB 76: jmp 0x100daf92
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 8B 46 7C: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
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
        ; Exact mapped bytes 8B 52 04: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 63: jl 0x100daf97
        __asm _emit 0x7c
        __asm _emit 0x63
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
        ; Exact mapped bytes 7D 5A: jge 0x100daf97
        __asm _emit 0x7d
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 58 18: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 8B 52 08: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 45: jl 0x100daf97
        __asm _emit 0x7c
        __asm _emit 0x45
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
        ; Exact mapped bytes 7D 3C: jge 0x100daf97
        __asm _emit 0x7d
        __asm _emit 0x3c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 2E: je 0x100daf8d
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 8E A8 00 00 00: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 D1 1A 10: mov eax, dword ptr [0x101ad104]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B 41 64: sub eax, dword ptr [ecx + 0x64]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 21: jle 0x100daf97
        __asm _emit 0x7e
        __asm _emit 0x21
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 74 17: je 0x100daf97
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C 84: jl 0x100daf09
        __asm _emit 0x7c
        __asm _emit 0x84
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 95 47 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x100daf97
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 99 45 02 00: call 0x100ff530
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 38 01 00 00: mov eax, dword ptr [esi + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
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
        ; Exact mapped bytes 7C 44: jl 0x100daff6
        __asm _emit 0x7c
        __asm _emit 0x44
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
        ; Exact mapped bytes 7D 3B: jge 0x100daff6
        __asm _emit 0x7d
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 58 18: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 2C: jl 0x100daff6
        __asm _emit 0x7c
        __asm _emit 0x2c
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
        ; Exact mapped bytes 7D 23: jge 0x100daff6
        __asm _emit 0x7d
        __asm _emit 0x23
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C1 E9 10: shr ecx, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x10
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7E 05: jle 0x100dafe5
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 33 06 00 00: call 0x100db620
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x06
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
        ; Exact mapped bytes 8B 86 3C 01 00 00: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
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
        ; Exact mapped bytes 7C 3B: jl 0x100db046
        __asm _emit 0x7c
        __asm _emit 0x3b
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
        ; Exact mapped bytes 7D 32: jge 0x100db046
        __asm _emit 0x7d
        __asm _emit 0x32
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
        ; Exact mapped bytes 7C 23: jl 0x100db046
        __asm _emit 0x7c
        __asm _emit 0x23
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
        ; Exact mapped bytes 7D 1A: jge 0x100db046
        __asm _emit 0x7d
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C1 E9 10: shr ecx, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x10
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7E 05: jle 0x100db03e
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 9A 06 00 00: call 0x100db6e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x06
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
        ; Exact mapped bytes 8B 96 64 01 00 00: mov edx, dword ptr [esi + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 42 24 01: test byte ptr [edx + 0x24], 1
        __asm _emit 0xf6
        __asm _emit 0x42
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 AD 00 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 6C 01 00 00: mov eax, dword ptr [esi + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8A 48 25: mov cl, byte ptr [eax + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x25
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x100db10c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 74 01 00 00: mov eax, dword ptr [esi + 0x174]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 74 38: je 0x100db0be
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 40 01 00 00: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
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
        ; Exact mapped bytes 7C 71: jl 0x100db10c
        __asm _emit 0x7c
        __asm _emit 0x71
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
        ; Exact mapped bytes 7D 68: jge 0x100db10c
        __asm _emit 0x7d
        __asm _emit 0x68
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
        ; Exact mapped bytes 7C 59: jl 0x100db10c
        __asm _emit 0x7c
        __asm _emit 0x59
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
        ; Exact mapped bytes 7D 50: jge 0x100db10c
        __asm _emit 0x7d
        __asm _emit 0x50
        ; Exact mapped bytes EB 36: jmp 0x100db0f4
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes 8B 86 44 01 00 00: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
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
        ; Exact mapped bytes 7C 39: jl 0x100db10c
        __asm _emit 0x7c
        __asm _emit 0x39
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
        ; Exact mapped bytes 7D 30: jge 0x100db10c
        __asm _emit 0x7d
        __asm _emit 0x30
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
        ; Exact mapped bytes 7C 21: jl 0x100db10c
        __asm _emit 0x7c
        __asm _emit 0x21
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
        ; Exact mapped bytes 7D 18: jge 0x100db10c
        __asm _emit 0x7d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8E 6C 01 00 00: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 04 2F FD FF: call 0x100ae010
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x2f
        __asm _emit 0xfd
        __asm _emit 0xff
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
    }
}
