// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 1321 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DD520 .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_588dd520_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F B7 86 64 01 00 00: movzx eax, word ptr [esi + 0x164]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 51: jne 0x588dd580
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 8B 46 28: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x28
        ; Exact mapped bytes 3D F0 00 00 00: cmp eax, 0xf0
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1D: jge 0x588dd556
        __asm _emit 0x7d
        __asm _emit 0x1d
        ; Exact mapped bytes 83 C0 10: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9E 57 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 28: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x28
        ; Exact mapped bytes 8B 8E 74 14 00 00: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8F 57 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA 04 00 00: jmp 0x588dda30
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 80 57 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 14 00 00: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 70 57 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 74 14 00 00: mov eax, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes E9 B0 04 00 00: jmp 0x588dda30
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 6C 01 00 00: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E 68 01 00 00: sub ecx, dword ptr [esi + 0x168]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x588dd64b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 80 00 00 00: mov eax, 0x80
        __asm _emit 0xb8
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 0F B7 C8: movzx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E D8 60 00 00: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 70 01 00 00: mov word ptr [esi + 0x170], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 28 57 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 10 00 00: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes F6 42 0A 07: test byte ptr [edx + 0xa], 7
        __asm _emit 0xf6
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x07
        ; Exact mapped bytes 76 2E: jbe 0x588dd5f4
        __asm _emit 0x76
        __asm _emit 0x2e
        ; Exact mapped bytes 8D 9E DC 60 00 00: lea ebx, [esi + 0x60dc]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 70 01 00 00: movzx eax, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 01 57 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 0C 10 00 00: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 51 0A: movzx edx, word ptr [ecx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x51
        __asm _emit 0x0a
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 E2 07: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7C DC: jl 0x588dd5d0
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes BB 8C FE FF FF: mov ebx, 0xfffffe8c
        __asm _emit 0xbb
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D BE 7C 01 00 00: lea edi, [esi + 0x17c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B DE: sub ebx, esi
        __asm _emit 0x2b
        __asm _emit 0xde
        ; Exact mapped bytes BD 20 00 00 00: mov ebp, 0x20
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 32: je 0x588dd63e
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 70 04: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        ; Exact mapped bytes 75 1B: jne 0x588dd631
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 0F B7 8E 70 01 00 00: movzx ecx, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 9C 0C 02 00: mov eax, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0C 38: mov ecx, dword ptr [eax + edi]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x38
        ; Exact mapped bytes EB 08: jmp 0x588dd639
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 0F B7 96 70 01 00 00: movzx edx, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A2 56 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 C0: jne 0x588dd606
        __asm _emit 0x75
        __asm _emit 0xc0
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x588dd700
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x588dd723
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 09 6A: lea eax, [ecx + ecx + 0x6a]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x6a
        ; Exact mapped bytes 0F B7 C8: movzx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E D8 60 00 00: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 70 01 00 00: mov word ptr [esi + 0x170], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 56 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 10 00 00: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes F6 42 0A 07: test byte ptr [edx + 0xa], 7
        __asm _emit 0xf6
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x07
        ; Exact mapped bytes 76 2A: jbe 0x588dd6a7
        __asm _emit 0x76
        __asm _emit 0x2a
        ; Exact mapped bytes 8D 9E DC 60 00 00: lea ebx, [esi + 0x60dc]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 70 01 00 00: movzx eax, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 4E 56 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 0C 10 00 00: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 51 0A: movzx edx, word ptr [ecx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x51
        __asm _emit 0x0a
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 E2 07: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7C DC: jl 0x588dd683
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes BB 8C FE FF FF: mov ebx, 0xfffffe8c
        __asm _emit 0xbb
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D BE 7C 01 00 00: lea edi, [esi + 0x17c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B DE: sub ebx, esi
        __asm _emit 0x2b
        __asm _emit 0xde
        ; Exact mapped bytes BD 20 00 00 00: mov ebp, 0x20
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 32: je 0x588dd6f8
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 70 04: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        ; Exact mapped bytes 75 1B: jne 0x588dd6eb
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 0F B7 8E 70 01 00 00: movzx ecx, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 9C 0C 02 00: mov eax, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0C 18: mov ecx, dword ptr [eax + ebx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x18
        ; Exact mapped bytes EB 08: jmp 0x588dd6f3
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 0F B7 96 70 01 00 00: movzx edx, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 E8 55 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 C0: jne 0x588dd6c0
        __asm _emit 0x75
        __asm _emit 0xc0
        ; Exact mapped bytes 0F B7 86 70 01 00 00: movzx eax, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 14 00 00: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CD 55 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 74 14 00 00: mov eax, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes E9 0A 03 00 00: jmp 0x588dda2d
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x588dd7f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes B9 06 FF FF FF: mov ecx, 0xffffff06
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 66 89 86 72 01 00 00: mov word ptr [esi + 0x172], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 09: jge 0x588dd751
        __asm _emit 0x7d
        __asm _emit 0x09
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 96 72 01 00 00: mov word ptr [esi + 0x172], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 86 72 01 00 00: movsx eax, word ptr [esi + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E D8 60 00 00: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BC 55 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 0C 10 00 00: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes F6 41 0A 07: test byte ptr [ecx + 0xa], 7
        __asm _emit 0xf6
        __asm _emit 0x41
        __asm _emit 0x0a
        __asm _emit 0x07
        ; Exact mapped bytes 76 32: jbe 0x588dd7a4
        __asm _emit 0x76
        __asm _emit 0x32
        ; Exact mapped bytes 8D 9E DC 60 00 00: lea ebx, [esi + 0x60dc]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x588dd780
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DD780 .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_588dd520_segment_01() {
    __asm {
        ; Exact mapped bytes 0F BF 96 72 01 00 00: movsx edx, word ptr [esi + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x96
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 91 55 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 48 0A: movzx ecx, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 E1 07: and ecx, 7
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7C DC: jl 0x588dd780
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes BB 8C FE FF FF: mov ebx, 0xfffffe8c
        __asm _emit 0xbb
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D BE 7C 01 00 00: lea edi, [esi + 0x17c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B DE: sub ebx, esi
        __asm _emit 0x2b
        __asm _emit 0xde
        ; Exact mapped bytes BD 20 00 00 00: mov ebp, 0x20
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 29: je 0x588dd7e5
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 0F BF 86 72 01 00 00: movsx eax, word ptr [esi + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 39 72 04: cmp dword ptr [edx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x72
        __asm _emit 0x04
        ; Exact mapped bytes 75 11: jne 0x588dd7e0
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 9C 0C 02 00: mov edx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0C 1A: mov ecx, dword ptr [edx + ebx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x1a
        ; Exact mapped bytes E8 3B 55 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 C9: jne 0x588dd7b6
        __asm _emit 0x75
        __asm _emit 0xc9
        ; Exact mapped bytes E9 3B 02 00 00: jmp 0x588dda2d
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x588dd8b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 89 06 FF FF FF: lea eax, [ecx + ecx*4 - 0xfa]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 86 72 01 00 00: mov word ptr [esi + 0x172], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 09: jle 0x588dd818
        __asm _emit 0x7e
        __asm _emit 0x09
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 89 8E 72 01 00 00: mov word ptr [esi + 0x172], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 96 72 01 00 00: movsx edx, word ptr [esi + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x96
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E D8 60 00 00: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 F5 54 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes F6 40 0A 07: test byte ptr [eax + 0xa], 7
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x07
        ; Exact mapped bytes 76 2B: jbe 0x588dd864
        __asm _emit 0x76
        __asm _emit 0x2b
        ; Exact mapped bytes 8D 9E DC 60 00 00: lea ebx, [esi + 0x60dc]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 0F BF 8E 72 01 00 00: movsx ecx, word ptr [esi + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes E8 D1 54 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 10 00 00: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 42 0A: movzx eax, word ptr [edx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x0a
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 E0 07: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 7C DC: jl 0x588dd840
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes BB 8C FE FF FF: mov ebx, 0xfffffe8c
        __asm _emit 0xbb
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D BE 7C 01 00 00: lea edi, [esi + 0x17c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B DE: sub ebx, esi
        __asm _emit 0x2b
        __asm _emit 0xde
        ; Exact mapped bytes BD 20 00 00 00: mov ebp, 0x20
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 29: je 0x588dd8a5
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 0F BF 86 72 01 00 00: movsx eax, word ptr [esi + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 39 72 04: cmp dword ptr [edx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x72
        __asm _emit 0x04
        ; Exact mapped bytes 75 11: jne 0x588dd8a0
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 9C 0C 02 00: mov edx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0C 1A: mov ecx, dword ptr [edx + ebx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x1a
        ; Exact mapped bytes E8 7B 54 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 C9: jne 0x588dd876
        __asm _emit 0x75
        __asm _emit 0xc9
        ; Exact mapped bytes E9 7B 01 00 00: jmp 0x588dda2d
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x588dd975
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 14 00 00: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 3D E5 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3d
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes B9 6A 00 00 00: mov ecx, 0x6a
        __asm _emit 0xb9
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E 70 01 00 00: mov word ptr [esi + 0x170], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E D8 60 00 00: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF 53 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 10 00 00: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes F6 42 0A 07: test byte ptr [edx + 0xa], 7
        __asm _emit 0xf6
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x07
        ; Exact mapped bytes 76 2A: jbe 0x588dd919
        __asm _emit 0x76
        __asm _emit 0x2a
        ; Exact mapped bytes 8D 9E DC 60 00 00: lea ebx, [esi + 0x60dc]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 70 01 00 00: movzx eax, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DC 53 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 0C 10 00 00: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 51 0A: movzx edx, word ptr [ecx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x51
        __asm _emit 0x0a
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 E2 07: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7C DC: jl 0x588dd8f5
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes BB 8C FE FF FF: mov ebx, 0xfffffe8c
        __asm _emit 0xbb
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D BE 7C 01 00 00: lea edi, [esi + 0x17c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B DE: sub ebx, esi
        __asm _emit 0x2b
        __asm _emit 0xde
        ; Exact mapped bytes BD 20 00 00 00: mov ebp, 0x20
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x588dd930
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DD930 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_588dd520_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 32: je 0x588dd968
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 70 04: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        ; Exact mapped bytes 75 1B: jne 0x588dd95b
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 0F B7 8E 70 01 00 00: movzx ecx, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 9C 0C 02 00: mov eax, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0C 18: mov ecx, dword ptr [eax + ebx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x18
        ; Exact mapped bytes EB 08: jmp 0x588dd963
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 0F B7 96 70 01 00 00: movzx edx, word ptr [esi + 0x170]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 78 53 02 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 C0: jne 0x588dd930
        __asm _emit 0x75
        __asm _emit 0xc0
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x588dda2d
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x588dda2d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 14 00 00: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 64 3C E5 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E D8 60 00 00: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 06 FF FF FF: mov eax, 0xffffff06
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 66 89 86 72 01 00 00: mov word ptr [esi + 0x172], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7C 53 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 0C 10 00 00: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes F6 41 0A 07: test byte ptr [ecx + 0xa], 7
        __asm _emit 0xf6
        __asm _emit 0x41
        __asm _emit 0x0a
        __asm _emit 0x07
        ; Exact mapped bytes 76 32: jbe 0x588dd9e4
        __asm _emit 0x76
        __asm _emit 0x32
        ; Exact mapped bytes 8D 9E DC 60 00 00: lea ebx, [esi + 0x60dc]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x588dd9c0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DD9C0 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_588dd520_segment_03() {
    __asm {
        ; Exact mapped bytes 0F BF 96 72 01 00 00: movsx edx, word ptr [esi + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x96
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 51 53 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 48 0A: movzx ecx, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 E1 07: and ecx, 7
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7C DC: jl 0x588dd9c0
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes BB 8C FE FF FF: mov ebx, 0xfffffe8c
        __asm _emit 0xbb
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D BE 7C 01 00 00: lea edi, [esi + 0x17c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B DE: sub ebx, esi
        __asm _emit 0x2b
        __asm _emit 0xde
        ; Exact mapped bytes BD 20 00 00 00: mov ebp, 0x20
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 29: je 0x588dda25
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 0F BF 86 72 01 00 00: movsx eax, word ptr [esi + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 39 72 04: cmp dword ptr [edx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x72
        __asm _emit 0x04
        ; Exact mapped bytes 75 11: jne 0x588dda20
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 9C 0C 02 00: mov edx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0C 1A: mov ecx, dword ptr [edx + ebx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x1a
        ; Exact mapped bytes E8 FB 52 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 C9: jne 0x588dd9f6
        __asm _emit 0x75
        __asm _emit 0xc9
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 66 83 BE 64 01 00 00 03: cmp word ptr [esi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 77 1C: ja 0x588dda56
        __asm _emit 0x77
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 46 2C: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 83 F8 F0: cmp eax, -0x10
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xf0
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 7D 0B: jge 0x588dda4f
        __asm _emit 0x7d
        __asm _emit 0x0b
        ; Exact mapped bytes 83 C0 10: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D3 52 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 CA 52 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
