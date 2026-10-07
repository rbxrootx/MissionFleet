// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 591 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588201F0 .. +0x24F bytes.
extern "C" __declspec(naked) void FUN_588201f0_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 08 04 00 00: sub esp, 0x408
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 04 04 00 00: mov dword ptr [esp + 0x404], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B BC 24 14 04 00 00: mov edi, dword ptr [esp + 0x414]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 CB FB FF FF: call 0x5881fde0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1E: je 0x58820237
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 C3 01 00 00: push 0x1c3
        __asm _emit 0x68
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C7 B8 F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 00 4B F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x4b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x58820426
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F B7 9E 9A 0C 00 00: movzx ebx, word ptr [esi + 0xc9a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x9e
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 1B: jle 0x58820264
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 8D 4E 64: lea ecx, [esi + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 80 39 00: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 3B: je 0x58820290
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 0F BF AE 9A 0C 00 00: movsx ebp, word ptr [esi + 0xc9a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xae
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 18: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x18
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 7C EC: jl 0x58820250
        __asm _emit 0x7c
        __asm _emit 0xec
        ; Exact mapped bytes B9 80 00 00 00: mov ecx, 0x80
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D9: cmp bx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 0F 85 F8 00 00 00: jne 0x5882036a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 C2 01 00 00: push 0x1c2
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6E B8 F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A7 4A F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x4a
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 94 01 00 00: jmp 0x58820424
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 4C C6 64: lea ecx, [esi + eax*8 + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0xc6
        __asm _emit 0x64
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 01 9E 98 0C 00 00: add word ptr [esi + 0xc98], bx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 98 0C 00 00: movzx eax, word ptr [esi + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 28: jne 0x588202df
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 8E 7C 0C 00 00: mov ecx, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2E 85 0E 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 23 85 0E 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 A1 A2 02 00: call 0x5884a580
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 68 F8 DA 99 58: push 0x5899daf8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xda
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 7C 0C 00 00: mov ecx, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 97 D9 FF 00: push 0xffd997
        __asm _emit 0x68
        __asm _emit 0x97
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 22 C9 98 58: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 85 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4C 24 18: lea ecx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A5 85 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 7C 0C 00 00: mov ecx, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A 85 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2F 85 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 9E 98 0C 00 00: cmp word ptr [esi + 0xc98], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x58820422
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 24 20 04 00 00 00: cmp dword ptr [esp + 0x420], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x58820422
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x58820422
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 14 52: lea edx, [edx + edx*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 44 D6 64: lea eax, [esi + edx*8 + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xd6
        __asm _emit 0x64
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 01 9E 98 0C 00 00: add word ptr [esi + 0xc98], bx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 98 0C 00 00: movzx eax, word ptr [esi + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 01 9E 9A 0C 00 00: add word ptr [esi + 0xc9a], bx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x9e
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 28: jne 0x588203c0
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 8E 7C 0C 00 00: mov ecx, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4D 84 0E 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 42 84 0E 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 C0 A1 02 00: call 0x5884a580
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 68 F8 DA 99 58: push 0x5899daf8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xda
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 7C 0C 00 00: mov ecx, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 97 D9 FF 00: push 0xffd997
        __asm _emit 0x68
        __asm _emit 0x97
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 22 C9 98 58: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 84 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C4 84 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 7C 0C 00 00: mov ecx, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 84 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E 84 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 8C 24 0C 04 00 00: mov ecx, dword ptr [esp + 0x40c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 A4 C7 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc7
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 08 04 00 00: add esp, 0x408
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
