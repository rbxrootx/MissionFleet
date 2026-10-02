// Complete Ghidra body ranges for the selected function.
// 6 discontiguous segments; total 13492 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E05C0 .. +0x31D bytes.
extern "C" __declspec(naked) void FUN_588e05c0_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 7A 97 98 58: push 0x5898977a
        __asm _emit 0x68
        __asm _emit 0x7a
        __asm _emit 0x97
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
        ; Exact mapped bytes 83 EC 3C: sub esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x3c
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
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
        ; Exact mapped bytes 8D 44 24 50: lea eax, [esp + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9C 24 80 00 00 00: mov ebx, dword ptr [esp + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 60: mov eax, dword ptr [esp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 8B 54 24 78: mov edx, dword ptr [esp + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 8B 7C 24 64: mov edi, dword ptr [esp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 8B 6C 24 68: mov ebp, dword ptr [esp + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes 68 F4 01 00 00: push 0x1f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 8C 24 80 00 00 00: mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 7C: mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 84 24 84 00 00 00: mov eax, dword ptr [esp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 74 24 64: mov dword ptr [esp + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes E8 28 36 EE FF: call 0x587c3c60
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x36
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 8E 4C 03 00 00: lea ecx, [esi + 0x34c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes C7 44 24 64 00 00 00 00: mov dword ptr [esp + 0x64], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 06 EC 10 9A 58: mov dword ptr [esi], 0x589a10ec
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xec
        __asm _emit 0x10
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 97 00 00: call 0x588e9e10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 30 74 8D 58: push 0x588d7430
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x74
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 68 10 E0 8D 58: push 0x588de010
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xe0
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8D 86 8C 13 00 00: lea eax, [esi + 0x138c]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C6 44 24 6C 01: mov byte ptr [esp + 0x6c], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x01
        ; Exact mapped bytes E8 47 CA 09 00: call 0x5897d0be
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 4C 14 00 00: lea ecx, [esi + 0x144c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 58 02: mov byte ptr [esp + 0x58], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes E8 29 F7 01 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 89 5E 50: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x50
        ; Exact mapped bytes C7 86 5C 12 00 00 00 00 00 00: mov dword ptr [esi + 0x125c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 C8 63 00 00: lea eax, [esi + 0x63c8]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 40 00 00 00: mov ecx, 0x40
        __asm _emit 0xb9
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 78 20: mov dword ptr [eax + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x20
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 75 F3: jne 0x588e06a6
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8D 9E 4C 03 00 00: lea ebx, [esi + 0x34c]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 30 5E 00 00: call 0x588e64f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 52: jle 0x588e0716
        __asm _emit 0x7e
        __asm _emit 0x52
        ; Exact mapped bytes 8D AE F0 0C 00 00: lea ebp, [esi + 0xcf0]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0xf0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 30: je 0x588e0707
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 D1: movzx edx, cl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd1
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 96 5C 12 00 00: cmp edx, dword ptr [esi + 0x125c]
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x5c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588e0707
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 5C 12 00 00: mov dword ptr [esi + 0x125c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes E8 DE 5D 00 00: call 0x588e64f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 7C BA: jl 0x588e06d0
        __asm _emit 0x7c
        __asm _emit 0xba
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 8C 24 84 00 00 00: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 60: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 89 46 64: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes C6 86 84 00 00 00 00: mov byte ptr [esi + 0x84], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7E 68: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x68
        ; Exact mapped bytes 89 7E 6C: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x6c
        ; Exact mapped bytes 0F B6 42 05: movzx eax, byte ptr [edx + 5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x42
        __asm _emit 0x05
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 83 C1 64: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        ; Exact mapped bytes 89 86 60 60 00 00: mov dword ptr [esi + 0x6060], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E AE 42 00 00: mov word ptr [esi + 0x42ae], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8E 9C 42 00 00: lea ecx, [esi + 0x429c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8D 6C 80 19: lea ebp, [eax + eax*4 + 0x19]
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x80
        __asm _emit 0x19
        ; Exact mapped bytes 03 ED: add ebp, ebp
        __asm _emit 0x03
        __asm _emit 0xed
        ; Exact mapped bytes 03 ED: add ebp, ebp
        __asm _emit 0x03
        __asm _emit 0xed
        ; Exact mapped bytes 66 03 AE AE 42 00 00: add bp, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xae
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 66 89 29: mov word ptr [ecx], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x29
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 7C E4: jl 0x588e0760
        __asm _emit 0x7c
        __asm _emit 0xe4
        ; Exact mapped bytes 66 8B 86 AA 42 00 00: mov ax, word ptr [esi + 0x42aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xaa
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 64: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 66 89 86 AC 42 00 00: mov word ptr [esi + 0x42ac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4A 20: mov ecx, dword ptr [edx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x20
        ; Exact mapped bytes 89 8E 34 13 00 00: mov dword ptr [esi + 0x1334], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 24: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 89 86 38 13 00 00: mov dword ptr [esi + 0x1338], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4A 28: mov cx, word ptr [edx + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x28
        ; Exact mapped bytes 66 89 8E 3C 13 00 00: mov word ptr [esi + 0x133c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 2C: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x2c
        ; Exact mapped bytes 89 86 40 13 00 00: mov dword ptr [esi + 0x1340], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E 38 13 00 00: cmp dword ptr [esi + 0x1338], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x588e07cd
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 83 C2 30: add edx, 0x30
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x30
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8E 44 13 00 00: lea ecx, [esi + 0x1344]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 1C 9E FF FF: call 0x588da5f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 74: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x74
        ; Exact mapped bytes 89 5E 78: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x78
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 84 70 2C 00 00: je 0x588e3458
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E D4 60 00 00: lea ecx, [esi + 0x60d4]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 10 48 A2 58: mov ecx, dword ptr [0x58a24810]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 96 D0 60 00 00: lea edx, [esi + 0x60d0]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B7 50 18: movzx edx, word ptr [eax + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 29 A7 00 00: call 0x588eaf30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 04 02 00 00 0A: cmp word ptr [eax + 0x204], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 86 18 10 00 00: mov eax, dword ptr [esi + 0x1018]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x588e082f
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 0F B7 8E 78 08 00 00: movzx ecx, word ptr [esi + 0x878]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 90 9C 00 00 00: movzx edx, word ptr [eax + 0x9c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 4A: lea eax, [edx + ecx*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x4a
        ; Exact mapped bytes EB 2B: jmp 0x588e085a
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes 0F B7 80 9C 00 00 00: movzx eax, word ptr [eax + 0x9c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 0C C5 00 00 00 00: lea ecx, [eax*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 0F B7 96 78 08 00 00: movzx edx, word ptr [esi + 0x878]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 51: lea eax, [ecx + edx*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x51
        ; Exact mapped bytes 89 86 48 03 00 00: mov dword ptr [esi + 0x348], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 64 14 00 00: mov dword ptr [esi + 0x1464], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 20 63 00 00: mov dword ptr [esi + 0x6320], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x20
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 0B 09 00 00: lea eax, [esi + 0x90b]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 1B 00 00 00: mov edx, 0x1b
        __asm _emit 0xba
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 B8 FF FB FF FF 0B: cmp byte ptr [eax - 0x401], 0xb
        __asm _emit 0x80
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0b
        ; Exact mapped bytes 72 4C: jb 0x588e08cc
        __asm _emit 0x72
        __asm _emit 0x4c
        ; Exact mapped bytes 0F B6 48 FF: movzx ecx, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0xff
        ; Exact mapped bytes 83 C1 11: add ecx, 0x11
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x11
        ; Exact mapped bytes 8B 8C 8E 8C 0E 00 00: mov ecx, dword ptr [esi + ecx*4 + 0xe8c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 3A: je 0x588e08cc
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 66 0F B6 28: movzx bp, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x28
        ; Exact mapped bytes 66 3B 69 06: cmp bp, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x69
        __asm _emit 0x06
        ; Exact mapped bytes 74 05: je 0x588e08a1
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 39 58 19: cmp dword ptr [eax + 0x19], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x19
        ; Exact mapped bytes 74 2B: je 0x588e08cc
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B AE 20 63 00 00: mov ebp, dword ptr [esi + 0x6320]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0x20
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 FD: lea ecx, [eax - 3]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfd
        ; Exact mapped bytes 89 8C AE 24 63 00 00: mov dword ptr [esi + ebp*4 + 0x6324], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0x24
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 BE 20 63 00 00: add dword ptr [esi + 0x6320], edi
        __asm _emit 0x01
        __asm _emit 0xbe
        __asm _emit 0x20
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 88 FF FB FF FF: movzx ecx, byte ptr [eax - 0x401]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FE 84 31 59 14 00 00: inc byte ptr [ecx + esi + 0x1459]
        __asm _emit 0xfe
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x59
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 31 59 14 00 00: lea ecx, [ecx + esi + 0x1459]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0x59
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 A4: jne 0x588e0877
        __asm _emit 0x75
        __asm _emit 0xa4
        ; Exact mapped bytes 89 9E 18 14 00 00: mov dword ptr [esi + 0x1418], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 03: jmp 0x588e08e0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E08E0 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_588e05c0_segment_01() {
    __asm {
        ; Exact mapped bytes 8B AE 0C 10 00 00: mov ebp, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 70 02 00 00: mov edx, dword ptr [ebp + 0x270]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 1F 00 00 00: mov edi, 0x1f
        __asm _emit 0xbf
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes D3 EA: shr edx, cl
        __asm _emit 0xd3
        __asm _emit 0xea
        ; Exact mapped bytes F6 C2 01: test dl, 1
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x588e0902
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes FF 86 18 14 00 00: inc dword ptr [esi + 0x1418]
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 68 02 00 00: mov edx, dword ptr [ebp + 0x268]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes D3 EA: shr edx, cl
        __asm _emit 0xd3
        __asm _emit 0xea
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 80 E2 01: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x01
        ; Exact mapped bytes 88 94 06 FB 01 00 00: mov byte ptr [esi + eax + 0x1fb], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 0C 10 00 00: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 6C 02 00 00: mov edx, dword ptr [ecx + 0x26c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes D3 EA: shr edx, cl
        __asm _emit 0xd3
        __asm _emit 0xea
        ; Exact mapped bytes 80 E2 01: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x01
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 88 94 06 1B 02 00 00: mov byte ptr [esi + eax + 0x21b], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C AA: jl 0x588e08e0
        __asm _emit 0x7c
        __asm _emit 0xaa
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 40 0C: movzx eax, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes C1 E8 0A: shr eax, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 03 86 18 14 00 00: add eax, dword ptr [esi + 0x1418]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 86 1C 14 00 00: mov dword ptr [esi + 0x141c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 97 9F FF FF: call 0x588da8f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 D2 78 FF FF: call 0x588d8230
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8E 1C 41 00 00: lea ecx, [esi + 0x411c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 24: push 0x24
        __asm _emit 0x6a
        __asm _emit 0x24
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F2 83 FF FF: call 0x588d8d60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 54 24 74: mov edx, dword ptr [esp + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 8B 44 24 70: mov eax, dword ptr [esp + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 53 7B FF FF: call 0x588d84d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 0C 01 00 00: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C7 C2 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 04: mov byte ptr [esp + 0x58], 4
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x588e09a7
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5B 8E E6 FF: call 0x58749800
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e09a9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 28 60 00 00: mov dword ptr [esi + 0x6028], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 55 94 FF FF: call 0x588d9e10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 39 9E 1C 14 00 00: cmp dword ptr [esi + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 94 60 00 00: mov dword ptr [esi + 0x6094], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 2A: jle 0x588e09f5
        __asm _emit 0x7e
        __asm _emit 0x2a
        ; Exact mapped bytes 8D BE 7C 01 00 00: lea edi, [esi + 0x17c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 12: je 0x588e09e9
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 96 94 60 00 00: mov edx, dword ptr [esi + 0x6094]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 90 14 01 00 00: mov dword ptr [eax + 0x114], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 90 10 01 00 00: mov dword ptr [eax + 0x110], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 3B 8E 1C 14 00 00: cmp ecx, dword ptr [esi + 0x141c]
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C DC: jl 0x588e09d1
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 39 9E 1C 14 00 00: cmp dword ptr [esi + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 98 60 00 00: mov dword ptr [esi + 0x6098], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 2F: jle 0x588e0a34
        __asm _emit 0x7e
        __asm _emit 0x2f
        ; Exact mapped bytes 8D BE 7C 01 00 00: lea edi, [esi + 0x17c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x588e0a10
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E0A10 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_588e05c0_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 12: je 0x588e0a28
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 8E 98 60 00 00: mov ecx, dword ptr [esi + 0x6098]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 88 1C 01 00 00: mov dword ptr [eax + 0x11c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 88 18 01 00 00: mov dword ptr [eax + 0x118], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 3B 96 1C 14 00 00: cmp edx, dword ptr [esi + 0x141c]
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C DC: jl 0x588e0a10
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes 8D 86 4C 03 00 00: lea eax, [esi + 0x34c]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 1E 93 FF FF: call 0x588d9d60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 B4 00 00 00: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B8 00 00 00: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 BC 00 00 00: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C0 00 00 00: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C4 00 00 00: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C8 00 00 00: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 CC 00 00 00: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D0 00 00 00: mov dword ptr [esi + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D4 00 00 00: mov dword ptr [esi + 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D8 00 00 00: mov dword ptr [esi + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 DC 00 00 00: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E0 00 00 00: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E4 00 00 00: mov dword ptr [esi + 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E8 00 00 00: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 EC 00 00 00: mov dword ptr [esi + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F0 00 00 00: mov dword ptr [esi + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F4 00 00 00: mov dword ptr [esi + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F8 00 00 00: mov dword ptr [esi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 FC 00 00 00: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 00 01 00 00: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 04 01 00 00: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 08 01 00 00: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 0C 01 00 00: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 10 01 00 00: mov dword ptr [esi + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 14 01 00 00: mov dword ptr [esi + 0x114], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 18 01 00 00: mov dword ptr [esi + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 1C 01 00 00: mov dword ptr [esi + 0x11c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 20 01 00 00: mov dword ptr [esi + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 24 01 00 00: mov dword ptr [esi + 0x124], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 28 01 00 00: mov dword ptr [esi + 0x128], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 2C 01 00 00: mov dword ptr [esi + 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 30 01 00 00: mov dword ptr [esi + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 34 01 00 00: mov dword ptr [esi + 0x134], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 38 01 00 00: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 3C 01 00 00: mov dword ptr [esi + 0x13c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 86 40 01 00 00: mov dword ptr [esi + 0x140], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B A2 FF FF: call 0x588dad30
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 74 01 00 00: mov dword ptr [esi + 0x174], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 48 04: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 74 0B: je 0x588e0b47
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8A 50 04: mov dl, byte ptr [eax + 4]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 20: jne 0x588e0b67
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 0F B7 80 80 03 00 00: movzx eax, word ptr [eax + 0x380]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DC 0D 78 11 9A 58: fmul qword ptr [0x589a1178]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F C1 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 01 00 00: mov dword ptr [esi + 0x174], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D AE 08 05 00 00: lea ebp, [esi + 0x508]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 18 1B 00 00 00: mov dword ptr [esp + 0x18], 0x1b
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x588e0b80
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E0B80 .. +0xF5D bytes.
extern "C" __declspec(naked) void FUN_588e05c0_segment_03() {
    __asm {
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 B8 5C 03 00 00 00: cmp byte ptr [eax + 0x35c], 0
        __asm _emit 0x80
        __asm _emit 0xb8
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x588e0bb2
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8A 88 5C 03 00 00: mov cl, byte ptr [eax + 0x35c]
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 4D 03: cmp cl, byte ptr [ebp + 3]
        __asm _emit 0x3a
        __asm _emit 0x4d
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x588e0c7c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 8E 4C 03 00 00: lea ecx, [esi + 0x34c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C6 5B 00 00: call 0x588e6770
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x588e0c7c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7D 02 10: cmp byte ptr [ebp + 2], 0x10
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x10
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x588e0c7c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 05 70 11 9A 58: fld qword ptr [0x589a1170]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 C5 09 00: call 0x5897d180
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes DD 5C 24 20: fstp qword ptr [esp + 0x20]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 0F B7 95 0E 04 00 00: movzx edx, word ptr [ebp + 0x40e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x95
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 1C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 A1 C5 09 00: call 0x5897d180
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes DC 74 24 20: fdiv qword ptr [esp + 0x20]
        __asm _emit 0xdc
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B BE 0C 10 00 00: mov edi, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes D8 D9: fcomp st(1)
        __asm _emit 0xd8
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 41: test ah, 0x41
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x41
        ; Exact mapped bytes 75 19: jne 0x588e0c0d
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 0F B7 87 80 03 00 00: movzx eax, word ptr [edi + 0x380]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DC 0D 78 11 9A 58: fmul qword ptr [0x589a1178]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes EB 17: jmp 0x588e0c24
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes 0F B7 8F 80 03 00 00: movzx ecx, word ptr [edi + 0x380]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DC 0D 78 11 9A 58: fmul qword ptr [0x589a1178]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes E8 77 C0 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 01 00 00: mov dword ptr [esi + 0x174], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 86 74 01 00 00: fild dword ptr [esi + 0x174]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 97 80 03 00 00: movzx edx, word ptr [edi + 0x380]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 1C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DD 05 50 9E 99 58: fld qword ptr [0x58999e50]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x9e
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes DC C9: fmul st(1), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc9
        ; Exact mapped bytes D9 CA: fxch st(2)
        __asm _emit 0xd9
        __asm _emit 0xca
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 41: test ah, 0x41
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x41
        ; Exact mapped bytes 75 1E: jne 0x588e0c75
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 0F B7 87 80 03 00 00: movzx eax, word ptr [edi + 0x380]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes E8 33 C0 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 01 00 00: mov dword ptr [esi + 0x174], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e0c77
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 83 6C 24 18 01: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 F6 FE FF FF: jne 0x588e0b80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 48 04: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 80 F9 09: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x09
        ; Exact mapped bytes 75 1E: jne 0x588e0cbb
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 83 FB 01: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 74 11: je 0x588e0cb3
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes BF 2C 01 00 00: mov edi, 0x12c
        __asm _emit 0xbf
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes EB 2E: jmp 0x588e0ce1
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 8B BE 74 01 00 00: mov edi, dword ptr [esi + 0x174]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x588e0ce1
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 8A 50 04: mov dl, byte ptr [eax + 4]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 07: cmp dl, 7
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x07
        ; Exact mapped bytes 75 1B: jne 0x588e0ce1
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes B9 E0 03 00 00: mov ecx, 0x3e0
        __asm _emit 0xb9
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 60 01 00 00: mov edx, 0x160
        __asm _emit 0xba
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 05: jne 0x588e0ce1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes BF C4 09 00 00: mov edi, 0x9c4
        __asm _emit 0xbf
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 04 02 00 00 0A: cmp word ptr [eax + 0x204], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 74 6F: je 0x588e0d5f
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes 8B 8E CC 0D 00 00: mov ecx, dword ptr [esi + 0xdcc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B D2 56: imul edx, edx, 0x56
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x56
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 50 01 00 00: mov dword ptr [esi + 0x150], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 89 8E 4C 01 00 00: mov dword ptr [esi + 0x14c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 89 8E 48 01 00 00: mov dword ptr [esi + 0x148], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 6B C9 56: imul ecx, ecx, 0x56
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x56
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 60 01 00 00: mov dword ptr [esi + 0x160], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 89 BE 5C 01 00 00: mov dword ptr [esi + 0x15c], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x588e0dfd
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 CC 0D 00 00: mov eax, dword ptr [esi + 0xdcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 0C C5 00 00 00 00: lea ecx, [eax*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B D2 56: imul edx, edx, 0x56
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x56
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 50 01 00 00: mov dword ptr [esi + 0x150], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 89 8E 4C 01 00 00: mov dword ptr [esi + 0x14c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 89 8E 48 01 00 00: mov dword ptr [esi + 0x148], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 0C FD 00 00 00 00: lea ecx, [edi*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B D2 56: imul edx, edx, 0x56
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x56
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 60 01 00 00: mov dword ptr [esi + 0x160], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 89 8E 5C 01 00 00: mov dword ptr [esi + 0x15c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 86 48 01 00 00: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F AF D0: imul edx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd0
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 8E 58 01 00 00: mov dword ptr [esi + 0x158], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0E 07 09 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 48 01 00 00: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 86 44 01 00 00: mov dword ptr [esi + 0x144], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0E BE 09 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 48 01 00 00: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 44 01 00 00: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 90 B9 E8 FF: call 0x5876c7e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 58 01 00 00: mov eax, dword ptr [esi + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F AF C8: imul ecx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 CD 06 09 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 58 01 00 00: mov ecx, dword ptr [esi + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 86 54 01 00 00: mov dword ptr [esi + 0x154], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CD BD 09 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 58 01 00 00: mov eax, dword ptr [esi + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 54 01 00 00: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 4F B9 E8 FF: call 0x5876c7e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 40: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x40
        ; Exact mapped bytes 68 88 00 00 00: push 0x88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B0 BD 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 05: mov byte ptr [esp + 0x58], 5
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x05
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 14: je 0x588e0ec2
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4E 18: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x18
        ; Exact mapped bytes 8B 56 14: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 C0 0F E7 FF: call 0x58751e80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e0ec4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 88 00 00 00: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 24 05 01 00: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 4E 54: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x54
        ; Exact mapped bytes E8 6D 20 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 60 60 00 00: mov eax, dword ptr [esi + 0x6060]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 10 0E 00 00: cmp eax, 0xe10
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 05: jl 0x588e0ef5
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes 05 F0 F1 FF FF: add eax, 0xfffff1f0
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 86 60 60 00 00: mov dword ptr [esi + 0x6060], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 05: jge 0x588e0f04
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 05 10 0E 00 00: add eax, 0xe10
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 60 60 00 00: mov dword ptr [esi + 0x6060], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 32: lea ecx, [eax + 0x32]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x32
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 83 F8 24: cmp eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x24
        ; Exact mapped bytes 89 86 5C 60 00 00: mov dword ptr [esi + 0x605c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 03: jl 0x588e0f2c
        __asm _emit 0x7c
        __asm _emit 0x03
        ; Exact mapped bytes 83 C0 DC: add eax, -0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xdc
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 89 86 5C 60 00 00: mov dword ptr [esi + 0x605c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 15 BD 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 06: mov byte ptr [esp + 0x58], 6
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x06
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 7E 00 00 00: je 0x588e0fcd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 D0 60 00 00: mov eax, dword ptr [esi + 0x60d0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 17: je 0x588e0f70
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 60 01 00 00 00: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0E: jle 0x588e0f70
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 04: je 0x588e0f70
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes EB 02: jmp 0x588e0f72
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 0F B7 86 AE 42 00 00: movzx eax, word ptr [esi + 0x42ae]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 74: mov ecx, dword ptr [esp + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 8B 54 24 70: mov edx, dword ptr [esp + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 10 22 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x588e0fcf
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e0fcf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 5C 60 00 00: mov eax, dword ptr [esi + 0x605c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE D8 60 00 00: mov dword ptr [esi + 0x60d8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 50: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 D8 60 00 00: mov eax, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FB FF 00 00: mov ecx, 0xfffb
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 40 0A 07: test byte ptr [eax + 0xa], 7
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x07
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 0F 86 0F 01 00 00: jbe 0x588e1111
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 9C 42 00 00: lea eax, [esi + 0x429c]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 18 01 00 00 00: mov dword ptr [esp + 0x18], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 28 40 00 00 00: mov dword ptr [esp + 0x28], 0x40
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9E DC 60 00 00: lea ebx, [esi + 0x60dc]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 BC 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 07: mov byte ptr [esp + 0x58], 7
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x07
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x588e10c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 D0 60 00 00: mov eax, dword ptr [esi + 0x60d0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 23: je 0x588e106c
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 39 88 60 01 00 00: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588e106c
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 13: jl 0x588e106c
        __asm _emit 0x7c
        __asm _emit 0x13
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x588e106c
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 54 24 28: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8D 2C 02: lea ebp, [edx + eax]
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x588e106e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 0F B7 00: movzx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 74: mov ecx, dword ptr [esp + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 8B 54 24 70: mov edx, dword ptr [esp + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 14 21 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2A: je 0x588e10ca
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 45 20: lea eax, [ebp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 18: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 1C: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 20: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e10ca
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 83 44 24 28 40: add dword ptr [esp + 0x28], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x40
        ; Exact mapped bytes 83 44 24 1C 02: add dword ptr [esp + 0x1c], 2
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x02
        ; Exact mapped bytes 89 3B: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 86 5C 60 00 00: mov eax, dword ptr [esi + 0x605c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 50: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        ; Exact mapped bytes 8B 03: mov eax, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes B9 FB FF 00 00: mov ecx, 0xfffb
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 50 0A: movzx edx, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 E2 07: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 0F 8C 11 FF FF FF: jl 0x588e1022
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 74: mov eax, dword ptr [esp + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 8B 4C 24 70: mov ecx, dword ptr [esp + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 DE 54 FF FF: call 0x588d6600
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 9E 1C 14 00 00: cmp dword ptr [esi + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 27: jle 0x588e1155
        __asm _emit 0x7e
        __asm _emit 0x27
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 84 86 7C 01 00 00: mov eax, dword ptr [esi + eax*4 + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 0E: je 0x588e1149
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 96 60 60 00 00: mov edx, dword ptr [esi + 0x6060]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F7 08 ED FF: call 0x587b1a40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 0F B7 C7: movzx eax, di
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc7
        ; Exact mapped bytes 3B 86 1C 14 00 00: cmp eax, dword ptr [esi + 0x141c]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C DB: jl 0x588e1130
        __asm _emit 0x7c
        __asm _emit 0xdb
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
        ; Exact mapped bytes 75 13: jne 0x588e1172
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 9C 0C 02 00: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 33: push 0x33
        __asm _emit 0x6a
        __asm _emit 0x33
        ; Exact mapped bytes E8 4E 5C EC FF: call 0x587a6dc0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5c
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8D BE 7C 01 00 00: lea edi, [esi + 0x17c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 20 00 00 00: mov ebp, 0x20
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 39 1F: cmp dword ptr [edi], ebx
        __asm _emit 0x39
        __asm _emit 0x1f
        ; Exact mapped bytes 74 09: je 0x588e118d
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 EB: jne 0x588e1180
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C4 62 FF FF: call 0x588d7460
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 B7 01 00 00: cmp dword ptr [eax + 0x164], 0x1b7
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588e11c3
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e11c3
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 DC 06 00 00: mov eax, dword ptr [ecx + 0x6dc]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e11c5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 7C: push 0x7c
        __asm _emit 0x6a
        __asm _emit 0x7c
        ; Exact mapped bytes 89 86 68 14 00 00: mov dword ptr [esi + 0x1468], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7C BA 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 08: mov byte ptr [esp + 0x58], 8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x588e1222
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 96 D4 60 00 00: mov edx, dword ptr [esi + 0x60d4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 74 12: je 0x588e11fe
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 39 9A 60 01 00 00: cmp dword ptr [edx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0A: jle 0x588e11fe
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 92 90 01 00 00: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 02: jne 0x588e1200
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 66 8B 8E AE 42 00 00: mov cx, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 02: add cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 0F B7 C9: movzx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 20 D2 E9 FF: call 0x5877e440
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd2
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e1224
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 74 14 00 00: mov dword ptr [esi + 0x1474], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 68 F6 FD FF: call 0x588c08a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 96 5C 60 00 00: mov edx, dword ptr [esi + 0x605c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 14 00 00: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 96 D0 E9 FF: call 0x5877e2e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 74 14 00 00: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C6 1A 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 74 14 00 00: mov eax, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE B9 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 09: mov byte ptr [esp + 0x58], 9
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x09
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 7E 00 00 00: je 0x588e1304
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 D4 60 00 00: mov eax, dword ptr [esi + 0x60d4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 18: je 0x588e12a8
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 83 B8 60 01 00 00 01: cmp dword ptr [eax + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0F: jle 0x588e12a8
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 05: je 0x588e12a8
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 C5 40: add ebp, 0x40
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x40
        ; Exact mapped bytes EB 02: jmp 0x588e12aa
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 66 8B 96 AE 42 00 00: mov dx, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 C2 03: add dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x03
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 D5 1E 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588e1306
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e1306
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 5C 60 00 00: mov eax, dword ptr [esi + 0x605c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 70 14 00 00: mov dword ptr [esi + 0x1470], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 50: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 70 14 00 00: mov ecx, dword ptr [esi + 0x1470]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes E8 F6 19 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 70 14 00 00: mov eax, dword ptr [esi + 0x1470]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 39 9E D4 60 00 00: cmp dword ptr [esi + 0x60d4], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 70 14 00 00: mov ecx, dword ptr [esi + 0x1470]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes 24 01: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 66 0F B6 D0: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 03 D2: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes BF FB FF 00 00: mov edi, 0xfffb
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 D2: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 66 23 C7: and ax, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc7
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes E8 E0 B8 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 0A: mov byte ptr [esp + 0x58], 0xa
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x0a
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 1C: je 0x588e139c
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 12 1E 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 5F 54: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x54
        ; Exact mapped bytes EB 02: jmp 0x588e139e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE 6C 14 00 00: mov dword ptr [esi + 0x146c], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x6c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FB FF 00 00: mov ecx, 0xfffb
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E 6C 14 00 00: mov ecx, dword ptr [esi + 0x146c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes E8 5E 19 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 6C 14 00 00: mov eax, dword ptr [esi + 0x146c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 89 9E 9C 60 00 00: mov dword ptr [esi + 0x609c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 78 01 00 00: mov dword ptr [esi + 0x178], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A B8 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 0B: mov byte ptr [esp + 0x58], 0xb
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x0b
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 31: je 0x588e1427
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 66 8B 86 AE 42 00 00: mov ax, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 74: mov ecx, dword ptr [esp + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 8B 54 24 70: mov edx, dword ptr [esp + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 66 83 E8 0A: sub ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 87 1D 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 5F 54: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x54
        ; Exact mapped bytes EB 02: jmp 0x588e1429
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE 78 01 00 00: mov dword ptr [esi + 0x178], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 FB FF 00 00: mov eax, 0xfffb
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E 78 01 00 00: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes E8 D3 18 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 01 00 00: mov eax, dword ptr [esi + 0x178]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB B7 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 0C: mov byte ptr [esp + 0x58], 0xc
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x0c
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x588e14fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 60 01 00 00 CF 00 00 00: cmp dword ptr [eax + 0x160], 0xcf
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588e14a0
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e14a0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 C0 33 00 00: add ebp, 0x33c0
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e14a2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 66 8B 96 AE 42 00 00: mov dx, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 EA 32: sub dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 DD 1C 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588e14fe
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e14fe
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE FC 60 00 00: mov dword ptr [esi + 0x60fc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 60 03: mov byte ptr [esp + 0x60], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        ; Exact mapped bytes E8 78 1D 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E FC 60 00 00: mov ecx, dword ptr [esi + 0x60fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 17 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 FC 60 00 00: mov eax, dword ptr [esi + 0x60fc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 FC 60 00 00: mov eax, dword ptr [esi + 0x60fc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 B7 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 0D: mov byte ptr [esp + 0x58], 0xd
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x0d
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x588e15e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 07: cmp dword ptr [eax + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 7E 16: jle 0x588e1587
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e1587
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 C0 01 00 00: add ebp, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e1589
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 66 8B 96 AE 42 00 00: mov dx, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 EA 32: sub dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 F6 1B 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588e15e5
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e15e5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE 00 61 00 00: mov dword ptr [esi + 0x6100], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 60 03: mov byte ptr [esp + 0x60], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        ; Exact mapped bytes E8 91 1C 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 00 61 00 00: mov ecx, dword ptr [esi + 0x6100]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 11 17 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 00 61 00 00: mov eax, dword ptr [esi + 0x6100]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 00 61 00 00: mov eax, dword ptr [esi + 0x6100]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A B6 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 0E: mov byte ptr [esp + 0x58], 0xe
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x0e
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x588e16cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 60 01 00 00 DF 00 00 00: cmp dword ptr [eax + 0x160], 0xdf
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588e1671
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e1671
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 C0 37 00 00: add ebp, 0x37c0
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e1673
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 66 8B 96 AE 42 00 00: mov dx, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 EA 32: sub dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 0C 1B 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588e16cf
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e16cf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE 04 61 00 00: mov dword ptr [esi + 0x6104], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 60 03: mov byte ptr [esp + 0x60], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        ; Exact mapped bytes E8 A7 1B 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 04 61 00 00: mov ecx, dword ptr [esi + 0x6104]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 16 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 04 61 00 00: mov eax, dword ptr [esi + 0x6104]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 04 61 00 00: mov eax, dword ptr [esi + 0x6104]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 30 B5 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 0F: mov byte ptr [esp + 0x58], 0xf
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x0f
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 23: je 0x588e1751
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 E0 00 00 00: push 0xe0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 1E: push 0x1e
        __asm _emit 0x6a
        __asm _emit 0x1e
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 31 1B E5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1b
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e1753
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 19: add ecx, 0x19
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x19
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 EA 50: sub edx, 0x50
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 60 03: mov byte ptr [esp + 0x60], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 F4 12 00 00: mov dword ptr [esi + 0x12f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1D 1B 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 AE 42 00 00: mov ax, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE F4 12 00 00: mov edi, dword ptr [esi + 0x12f4]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 64: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e1798
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B8 17 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e17a5
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 3B 17 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F4 12 00 00: mov eax, dword ptr [esi + 0x12f4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 93 B4 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 10: mov byte ptr [esp + 0x58], 0x10
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 23: je 0x588e17ee
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 E0 00 00 00: push 0xe0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 1E: push 0x1e
        __asm _emit 0x6a
        __asm _emit 0x1e
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 94 1A E5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e17f0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 19: add ecx, 0x19
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x19
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 24: add edx, 0x24
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 60 03: mov byte ptr [esp + 0x60], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 F8 12 00 00: mov dword ptr [esi + 0x12f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 80 1A 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 AE 42 00 00: mov ax, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE F8 12 00 00: mov edi, dword ptr [esi + 0x12f8]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 64: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e1835
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1B 17 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e1842
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 9E 16 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F8 12 00 00: mov eax, dword ptr [esi + 0x12f8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 10 48 A2 58: mov edx, dword ptr [0x58a24810]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 30 48 00 00: mov eax, dword ptr [edx + 0x4830]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x30
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 86 D0 60 00 00: cmp dword ptr [esi + 0x60d0], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 29: jne 0x588e188e
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 8B 8E D8 60 00 00: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AB 14 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 D8 60 00 00: mov eax, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 70 14 00 00: mov eax, dword ptr [esi + 0x1470]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 68 C0 03 00 00: push 0x3c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B6 B3 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 11: mov byte ptr [esp + 0x58], 0x11
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x11
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x588e18b8
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 9A 4E E7 FF: call 0x58756750
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4e
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e18ba
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 20 60 00 00: mov dword ptr [esi + 0x6020], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 68 C0 03 00 00: push 0x3c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes E8 76 B3 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 12: mov byte ptr [esp + 0x58], 0x12
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x12
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x588e18f8
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5A 4E E7 FF: call 0x58756750
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4e
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e18fa
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 24 60 00 00: mov dword ptr [esi + 0x6024], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA F0 FF 00 00: mov edx, 0xfff0
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 40 06: movzx eax, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 25 FF 01 00 00: and eax, 0x1ff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 89 86 D0 12 00 00: mov dword ptr [esi + 0x12d0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 1E: add eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x1e
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 D4 12 00 00: mov dword ptr [esi + 0x12d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 16 B3 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 13: mov byte ptr [esp + 0x58], 0x13
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x13
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 30: je 0x588e1978
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 D7 AD 83 00: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xd7
        __asm _emit 0xad
        __asm _emit 0x83
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 7A 46: lea edi, [edx + 0x46]
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0x46
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 C1 B0: add ecx, -0x50
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xb0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 54 45 A2 58: mov ecx, dword ptr [0x58a24554]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C2 BA: add edx, -0x46
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0xba
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0A 19 E5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x19
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e197a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 E0 12 00 00: mov dword ptr [esi + 0x12e0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C2 B2 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 14: mov byte ptr [esp + 0x58], 0x14
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 30: je 0x588e19cc
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7E 04: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 E0 E0 E0 00: push 0xe0e0e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xe0
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 4F 46: lea ecx, [edi + 0x46]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x46
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 B0: add edx, -0x50
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0xb0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 54 45 A2 58: mov edx, dword ptr [0x58a24554]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C7 BA: add edi, -0x46
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0xba
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B6 18 E5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x18
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e19ce
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 EC 12 00 00: mov dword ptr [esi + 0x12ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6E B2 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 15: mov byte ptr [esp + 0x58], 0x15
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x15
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 30: je 0x588e1a20
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7E 04: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 D7 AD 83 00: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xd7
        __asm _emit 0xad
        __asm _emit 0x83
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 4F 46: lea ecx, [edi + 0x46]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x46
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 C2: add edx, -0x3e
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0xc2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C7 BA: add edi, -0x46
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0xba
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 62 18 E5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x18
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e1a22
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 E4 12 00 00: mov dword ptr [esi + 0x12e4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1A B2 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 16: mov byte ptr [esp + 0x58], 0x16
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x16
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 30: je 0x588e1a74
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7E 04: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 E0 E0 E0 00: push 0xe0e0e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xe0
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 4F 46: lea ecx, [edi + 0x46]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x46
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 C2: add edx, -0x3e
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0xc2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C7 BA: add edi, -0x46
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0xba
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0E 18 E5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x18
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e1a76
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 E8 12 00 00: mov dword ptr [esi + 0x12e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 38 13 00 00: mov eax, dword ptr [esi + 0x1338]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x588e1b39
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 03 00 00 00: mov ebp, 3
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 03: jne 0x588e1a9c
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 8D 68 07: lea ebp, [eax + 7]
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x07
        ; Exact mapped bytes 8D BE 44 13 00 00: lea edi, [esi + 0x1344]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 8D 4C 45 00: lea ecx, [ebp + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 11 BA: lea eax, [ecx + edx - 0x46]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0xba
        ; Exact mapped bytes 8B 8E EC 12 00 00: mov ecx, dword ptr [esi + 0x12ec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1D 18 02 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 E0 12 00 00: mov eax, dword ptr [esi + 0x12e0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 33: je 0x588e1b03
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 2F: je 0x588e1b03
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes BA 80 00 00 00: mov edx, 0x80
        __asm _emit 0xba
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 03: jmp 0x588e1ae0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E1AE0 .. +0x64D bytes.
extern "C" __declspec(naked) void FUN_588e05c0_segment_04() {
    __asm {
        ; Exact mapped bytes 8D 8A 7E FF FF 7F: lea ecx, [edx + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x588e1afb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 07: mov cl, byte ptr [edi + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x07
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x588e1afb
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x588e1ae0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588e1aff
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 01: jne 0x588e1b00
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 E0 12 00 00: mov eax, dword ptr [esi + 0x12e0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B BE E0 12 00 00: mov edi, dword ptr [esi + 0x12e0]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA E8 03 00 00: mov edx, 0x3e8
        __asm _emit 0xba
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e1b2a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 26 14 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 17: je 0x588e1b48
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A9 13 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x588e1b48
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 86 E0 12 00 00: mov eax, dword ptr [esi + 0x12e0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 EC 12 00 00: mov eax, dword ptr [esi + 0x12ec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 96 A0 03 00 00: lea edx, [esi + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2E: je 0x588e1b89
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 74 2A: je 0x588e1b89
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 8F 7E FF FF 7F: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x588e1b81
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 10: mov cl, byte ptr [eax + edx]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x588e1b81
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x588e1b66
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588e1b85
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 75 01: jne 0x588e1b86
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE E8 12 00 00: mov edi, dword ptr [esi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA E8 03 00 00: mov edx, 0x3e8
        __asm _emit 0xba
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e1ba5
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 AB 13 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e1bb2
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 2E 13 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE EC 12 00 00: mov edi, dword ptr [esi + 0x12ec]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 E8 03 00 00: mov eax, 0x3e8
        __asm _emit 0xb8
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e1bce
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 82 13 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e1bdb
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 05 13 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 E8 12 00 00: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 EC 12 00 00: mov eax, dword ptr [esi + 0x12ec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 53 B0 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 17: mov byte ptr [esp + 0x58], 0x17
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x17
        ; Exact mapped bytes BB B7 06 00 00: mov ebx, 0x6b7
        __asm _emit 0xbb
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x588e1c8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 64 01 00 00: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588e1c3a
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e1c3a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 DC 1A 00 00: mov ebp, dword ptr [ecx + 0x1adc]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0xdc
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e1c3c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 40: sub eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x40
        ; Exact mapped bytes 83 E9 4A: sub ecx, 0x4a
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x4a
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 48 15 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x588e1c90
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 1C: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4F 20: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e1c90
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE FC 12 00 00: mov dword ptr [esi + 0x12fc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA E8 03 00 00: mov edx, 0x3e8
        __asm _emit 0xba
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e1cb1
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 9F 12 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e1cbe
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 22 12 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 89 AF 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 18: mov byte ptr [esp + 0x58], 0x18
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x588e1d53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 64 01 00 00: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588e1cff
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e1cff
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 DC 1A 00 00: mov ebp, dword ptr [eax + 0x1adc]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0xdc
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e1d01
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 50: sub eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x50
        ; Exact mapped bytes 83 E9 4A: sub ecx, 0x4a
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x4a
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 83 14 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2D: je 0x588e1d57
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 89 4F 0C: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 14: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 14: mov dword ptr [edi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4D 04: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 18: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 1C: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 20: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes EB 04: jmp 0x588e1d57
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE 00 13 00 00: mov dword ptr [esi + 0x1300], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E5 AE 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 19: mov byte ptr [esp + 0x58], 0x19
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x19
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 33: je 0x588e1dac
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7E 04: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 FF 7F 7F 00: push 0x7f7fff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4A AC: lea ecx, [edx - 0x54]
        __asm _emit 0x8d
        __asm _emit 0x4a
        __asm _emit 0xac
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4F 46: lea ecx, [edi + 0x46]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x46
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 A0: add edx, -0x60
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0xa0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C7 BA: add edi, -0x46
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0xba
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D6 14 E5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e1dae
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 04 13 00 00: mov dword ptr [esi + 0x1304], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 00 13 00 00: mov eax, dword ptr [esi + 0x1300]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 04 13 00 00: mov eax, dword ptr [esi + 0x1304]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes E8 73 AE 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 1A: mov byte ptr [esp + 0x58], 0x1a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x1a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 39: je 0x588e1e24
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 DF C4 71 00: push 0x71c4df
        __asm _emit 0x68
        __asm _emit 0xdf
        __asm _emit 0xc4
        __asm _emit 0x71
        __asm _emit 0x00
        ; Exact mapped bytes 8D 79 19: lea edi, [ecx + 0x19]
        __asm _emit 0x8d
        __asm _emit 0x79
        __asm _emit 0x19
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D BA C8 00 00 00: lea edi, [edx + 0xc8]
        __asm _emit 0x8d
        __asm _emit 0xba
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 C1 0A: add ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0a
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 C2 38 FF FF FF: add edx, 0xffffff38
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5E 14 E5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e1e26
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 0C 10 00 00: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 30 C0 98 58: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 86 F0 12 00 00: mov dword ptr [esi + 0x12f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes BF E0 03 00 00: mov edi, 0x3e0
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 FA 60: cmp dx, 0x60
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x60
        ; Exact mapped bytes 75 5C: jne 0x588e1eab
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 78 6C: mov edi, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 81 3C 03 00 00: lea eax, [ecx + 0x33c]
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 49 04: movzx ecx, word ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 E1 1F: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 38 C0 98 58: call dword ptr [0x5898c038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 60 11 9A 58: push 0x589a1160
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 54 11 9A 58: push 0x589a1154
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 DA 9B E6 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x9b
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 F0 12 00 00: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 60 FF CC 66 00: mov dword ptr [eax + 0x60], 0x66ccff
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xcc
        __asm _emit 0x66
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 64: mov dword ptr [eax + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x64
        ; Exact mapped bytes 8B 86 F0 12 00 00: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes C7 40 68 99 66 00 00: mov dword ptr [eax + 0x68], 0x6699
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 49 01 00 00: jmp 0x588e1ff4
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes BF C0 00 00 00: mov edi, 0xc0
        __asm _emit 0xbf
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 5C: jne 0x588e1f18
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 78 6C: mov edi, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 81 3C 03 00 00: lea eax, [ecx + 0x33c]
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 49 04: movzx ecx, word ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 E1 1F: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 38 C0 98 58: call dword ptr [0x5898c038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 48 11 9A 58: push 0x589a1148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 54 11 9A 58: push 0x589a1154
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 6D 9B E6 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9b
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 F0 12 00 00: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 60 00 FF FF 00: mov dword ptr [eax + 0x60], 0xffff00
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 64: mov dword ptr [eax + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x64
        ; Exact mapped bytes 8B 86 F0 12 00 00: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes C7 40 68 77 88 99 00: mov dword ptr [eax + 0x68], 0x998877
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x88
        __asm _emit 0x99
        __asm _emit 0x00
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x588e1ff4
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes BF E0 03 00 00: mov edi, 0x3e0
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes BF A0 00 00 00: mov edi, 0xa0
        __asm _emit 0xbf
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 59: jne 0x588e1f87
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes 8B 78 6C: mov edi, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 81 3C 03 00 00: lea eax, [ecx + 0x33c]
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 49 04: movzx ecx, word ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 E1 1F: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 38 C0 98 58: call dword ptr [0x5898c038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 38 11 9A 58: push 0x589a1138
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 54 11 9A 58: push 0x589a1154
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 FB 9A E6 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9a
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 F0 12 00 00: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 60 00 FF 00 00: mov dword ptr [eax + 0x60], 0xff00
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 64: mov dword ptr [eax + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x64
        ; Exact mapped bytes 8B 86 F0 12 00 00: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes C7 40 68 2E 8B 57 00: mov dword ptr [eax + 0x68], 0x578b2e
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x2e
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x00
        ; Exact mapped bytes EB 6D: jmp 0x588e1ff4
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes BF E0 03 00 00: mov edi, 0x3e0
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes BF A0 00 00 00: mov edi, 0xa0
        __asm _emit 0xbf
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 74 57: je 0x588e1ff4
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes BF E0 03 00 00: mov edi, 0x3e0
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes BF C0 00 00 00: mov edi, 0xc0
        __asm _emit 0xbf
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 74 41: je 0x588e1ff4
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes BF E0 03 00 00: mov edi, 0x3e0
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 83 FA 60: cmp dx, 0x60
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x60
        ; Exact mapped bytes 74 2F: je 0x588e1ff4
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 78 6C: mov edi, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 81 3C 03 00 00: lea eax, [ecx + 0x33c]
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 49 04: movzx ecx, word ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 E1 1F: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 38 C0 98 58: call dword ptr [0x5898c038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 1C FC 99 58: push 0x5899fc1c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 6F 9A E6 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9a
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 8B 86 F0 12 00 00: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 06 00 00 00: mov ebx, 6
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 54: mov dword ptr [eax + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x54
        ; Exact mapped bytes 8B BE F0 12 00 00: mov edi, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA E8 03 00 00: mov edx, 0x3e8
        __asm _emit 0xba
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e201e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 32 0F 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e202b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B5 0E 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F0 12 00 00: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 0D AC 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 58 1B: mov byte ptr [esp + 0x58], 0x1b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x1b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 35: je 0x588e2086
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7E 04: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 DF C4 71 00: push 0x71c4df
        __asm _emit 0x68
        __asm _emit 0xdf
        __asm _emit 0xc4
        __asm _emit 0x71
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4A 25: lea ecx, [edx + 0x25]
        __asm _emit 0x8d
        __asm _emit 0x4a
        __asm _emit 0x25
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4F 63: lea ecx, [edi + 0x63]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x63
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 16: add edx, 0x16
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x16
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C7 9D: add edi, -0x63
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x9d
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 FC 11 E5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x11
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e2088
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 08 13 00 00: mov dword ptr [esi + 0x1308], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 78 6C: mov edi, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 88 04 01 00 00: mov ecx, dword ptr [eax + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 18 11 9A 58: push 0x589a1118
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes C6 44 24 60 03: mov byte ptr [esp + 0x60], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A9 99 E6 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x99
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 08 13 00 00: mov eax, dword ptr [esi + 0x1308]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 54: mov dword ptr [eax + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x54
        ; Exact mapped bytes 8B BE 08 13 00 00: mov edi, dword ptr [esi + 0x1308]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes BA E8 03 00 00: mov edx, 0x3e8
        __asm _emit 0xba
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e20df
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 71 0E 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e20ec
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F4 0D 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 08 13 00 00: mov eax, dword ptr [esi + 0x1308]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 70 02 00 00: mov edx, dword ptr [eax + 0x270]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 54 24 1C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8D AE 24 05 00 00: lea ebp, [esi + 0x524]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 18 1B 00 00 00: mov dword ptr [esp + 0x18], 0x1b
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x588e2130
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E2130 .. +0x1959 bytes.
extern "C" __declspec(naked) void FUN_588e05c0_segment_05() {
    __asm {
        ; Exact mapped bytes 66 0F B6 85 E6 03 00 00: movzx ax, byte ptr [ebp + 0x3e6]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 72 74: jb 0x588e21b5
        __asm _emit 0x72
        __asm _emit 0x74
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 0F B7 F8: movzx edi, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C7 11: add edi, 0x11
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x11
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes D3 E2: shl edx, cl
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 79 62: jns 0x588e21b5
        __asm _emit 0x79
        __asm _emit 0x62
        ; Exact mapped bytes 8B 9C BE 8C 0E 00 00: mov ebx, dword ptr [esi + edi*4 + 0xe8c]
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 57: je 0x588e21b5
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 0F B7 84 BE 0C 0E 00 00: movzx eax, word ptr [esi + edi*4 + 0xe0c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 45: jbe 0x588e21b5
        __asm _emit 0x76
        __asm _emit 0x45
        ; Exact mapped bytes 83 7D 00 00: cmp dword ptr [ebp], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x588e2189
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8D 45 E4: lea eax, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8E 4C 03 00 00: lea ecx, [esi + 0x34c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EB 45 00 00: call 0x588e6770
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x588e2194
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 0F B6 4D E7: movzx cx, byte ptr [ebp - 0x19]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4d
        __asm _emit 0xe7
        ; Exact mapped bytes 66 3B 4B 06: cmp cx, word ptr [ebx + 6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4b
        __asm _emit 0x06
        ; Exact mapped bytes 75 21: jne 0x588e21b5
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 0F B6 55 E5: movzx edx, byte ptr [ebp - 0x1b]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0xe5
        ; Exact mapped bytes 83 F2 2A: xor edx, 0x2a
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0x2a
        ; Exact mapped bytes 83 E2 7F: and edx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        ; Exact mapped bytes 3B 53 28: cmp edx, dword ptr [ebx + 0x28]
        __asm _emit 0x3b
        __asm _emit 0x53
        __asm _emit 0x28
        ; Exact mapped bytes 72 12: jb 0x588e21b5
        __asm _emit 0x72
        __asm _emit 0x12
        ; Exact mapped bytes 83 C7 E4: add edi, -0x1c
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0xe4
        ; Exact mapped bytes 78 0D: js 0x588e21b5
        __asm _emit 0x78
        __asm _emit 0x0d
        ; Exact mapped bytes 83 FF 04: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x04
        ; Exact mapped bytes 7D 08: jge 0x588e21b5
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 BC 30 01 00 00 00: mov dword ptr [esp + edi*4 + 0x30], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0xbc
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 83 6C 24 18 01: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x588e2130
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 EC 12 00 00: mov eax, dword ptr [esi + 0x12ec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 68 50: mov ebp, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x50
        ; Exact mapped bytes 8B 7D 00: mov edi, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 40: lea ecx, [esp + 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 9E A0 03 00 00: lea ebx, [esi + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E EC 12 00 00: mov ecx, dword ptr [esi + 0x12ec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 8B 54 24 40: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 83 E8 08: sub eax, 8
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 8D 5C 0A 02: lea ebx, [edx + ecx + 2]
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x02
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 73 02: jae 0x588e2209
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 8D 44 24 30: lea eax, [esp + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 2D 6C 02 00 00: sub eax, 0x26c
        __asm _emit 0x2d
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 0C 13 00 00 00 00 00 00: mov dword ptr [esi + 0x130c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 18 9B 00 00 00: mov dword ptr [esp + 0x18], 0x9b
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 28 6C 02 00 00: mov dword ptr [esp + 0x28], 0x26c
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 44 24 1C 04 00 00 00: mov dword ptr [esp + 0x1c], 4
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 28: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 39 0C 10: cmp dword ptr [eax + edx], ecx
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 0F 85 04 02 00 00: jne 0x588e244e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 FD A9 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 1C: mov byte ptr [esp + 0x58], 0x1c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x1c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 76: je 0x588e22d9
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 9A 00 00 00: cmp dword ptr [eax + 0x164], 0x9a
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588e228b
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e228b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 68 02 00 00: mov ebp, dword ptr [eax + 0x268]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e228d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 50: sub eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 FD 0E 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x588e22db
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 89 4F 0C: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 14: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 14: mov dword ptr [edi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4D 04: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 18: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 1C: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 20: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e22db
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 0C 13 00 00: mov ecx, dword ptr [esi + 0x130c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 8E 10 13 00 00: mov dword ptr [esi + ecx*4 + 0x1310], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 13 00 00: mov edx, dword ptr [esi + 0x130c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 96 10 13 00 00: mov ecx, dword ptr [esi + edx*4 + 0x1310]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes E8 1C 0A 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 0C 13 00 00: mov eax, dword ptr [esi + 0x130c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BC 86 10 13 00 00: mov edi, dword ptr [esi + eax*4 + 0x1310]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 E8 03 00 00: mov ecx, 0x3e8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e2327
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 29 0C 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e2334
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 AC 0B 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 13 00 00: mov edx, dword ptr [esi + 0x130c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 96 10 13 00 00: mov eax, dword ptr [esi + edx*4 + 0x1310]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 FD A8 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 1D: mov byte ptr [esp + 0x58], 0x1d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x1d
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 7B 00 00 00: je 0x588e23e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1C: jle 0x588e2394
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 18: jl 0x588e2394
        __asm _emit 0x7c
        __asm _emit 0x18
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x588e2394
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 2C 10: mov ebp, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x588e2396
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 50: sub eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 F4 0D 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x588e23e4
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 89 4F 0C: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 14: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 14: mov dword ptr [edi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4D 04: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 18: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 1C: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 20: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e23e4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 0C 13 00 00: mov ecx, dword ptr [esi + 0x130c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 8E 20 13 00 00: mov dword ptr [esi + ecx*4 + 0x1320], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 13 00 00: mov edx, dword ptr [esi + 0x130c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BC 96 20 13 00 00: mov edi, dword ptr [esi + edx*4 + 0x1320]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 E8 03 00 00: mov eax, 0x3e8
        __asm _emit 0xb8
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e2419
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 37 0B 02 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e2426
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 BA 0A 02 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 0C 13 00 00: mov ecx, dword ptr [esi + 0x130c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 8E 20 13 00 00: mov eax, dword ptr [esi + ecx*4 + 0x1320]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 C3 14: add ebx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x14
        ; Exact mapped bytes FF 86 0C 13 00 00: inc dword ptr [esi + 0x130c]
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 44 24 28 04: add dword ptr [esp + 0x28], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x04
        ; Exact mapped bytes 01 4C 24 18: add dword ptr [esp + 0x18], ecx
        __asm _emit 0x01
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 29 4C 24 1C: sub dword ptr [esp + 0x1c], ecx
        __asm _emit 0x29
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 0F 85 DC FD FF FF: jne 0x588e223d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 E6 A7 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes C6 44 24 58 1E: mov byte ptr [esp + 0x58], 0x1e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x1e
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 28: je 0x588e24a4
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 4D: sub eax, 0x4d
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x4d
        ; Exact mapped bytes 83 E9 63: sub ecx, 0x63
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x63
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 07 0D 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x588e24a6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE A8 12 00 00: mov dword ptr [esi + 0x12a8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 A7 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 1F: mov byte ptr [esp + 0x58], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x1f
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 28: je 0x588e24f2
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 4D: sub eax, 0x4d
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x4d
        ; Exact mapped bytes 83 E9 63: sub ecx, 0x63
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x63
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B9 0C 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x588e24f4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 40 13 00 00: mov eax, dword ptr [esi + 0x1340]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE AC 12 00 00: mov dword ptr [esi + 0x12ac], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x588e2603
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 5A: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5a
        ; Exact mapped bytes 7E 16: jle 0x588e2531
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e2531
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 68 01 00 00: mov eax, dword ptr [eax + 0x168]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e2533
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E A8 12 00 00: mov ecx, dword ptr [esi + 0x12a8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x588e2568
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 59: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        ; Exact mapped bytes 7E 16: jle 0x588e258c
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e258c
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 64 01 00 00: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e258e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E AC 12 00 00: mov ecx, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x588e25c3
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8E A8 12 00 00: mov ecx, dword ptr [esi + 0x12a8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 4D 07 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E AC 12 00 00: mov ecx, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3D 07 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 A8 12 00 00: mov eax, dword ptr [esi + 0x12a8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 AC 12 00 00: mov eax, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes E9 9C 02 00 00: jmp 0x588e289f
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 BE 34 13 00 00 80 00 00 00: cmp dword ptr [esi + 0x1334], 0x80
        __asm _emit 0x81
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 86 00 00 00: ja 0x588e2699
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E 38 04 00 00: cmp dword ptr [esi + 0x438], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 7A 00 00 00: jne 0x588e2699
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 47 A2 58: mov ecx, dword ptr [0x58a24774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588e2644
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 7C 13: jl 0x588e2644
        __asm _emit 0x7c
        __asm _emit 0x13
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588e2644
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x588e2646
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 47 50: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 29: je 0x588e2676
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 48 14: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 8D 4F 14: lea ecx, [edi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 86 A8 12 00 00: mov eax, dword ptr [esi + 0x12a8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 AC 12 00 00: mov eax, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes E9 06 02 00 00: jmp 0x588e289f
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x588e27b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 39 59 04: cmp dword ptr [ecx + 4], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 7E 00 00 00: je 0x588e272f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 39 82 64 01 00 00: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 73: jbe 0x588e272f
        __asm _emit 0x76
        __asm _emit 0x73
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2E 39 E7 FF: call 0x58755ff0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E AC 12 00 00: mov ecx, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x588e26f7
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 83 E9 5E: sub ecx, 0x5e
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x5e
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E AC 12 00 00: mov ecx, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D7 0B 02 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E AC 12 00 00: mov ecx, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EA 53: sub edx, 0x53
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 45 0C 02 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 A8 12 00 00: mov eax, dword ptr [esi + 0x12a8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x588e2890
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 5A: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5a
        ; Exact mapped bytes 7E 16: jle 0x588e2753
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e2753
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 68 01 00 00: mov eax, dword ptr [edx + 0x168]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e2755
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E A8 12 00 00: mov ecx, dword ptr [esi + 0x12a8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x588e278a
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 59: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        ; Exact mapped bytes 0F 8E 9C 00 00 00: jle 0x588e2838
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x588e2838
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 64 01 00 00: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x588e283a
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 5A: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5a
        ; Exact mapped bytes 7E 16: jle 0x588e27dd
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e27dd
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 68 01 00 00: mov eax, dword ptr [ecx + 0x168]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e27df
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E A8 12 00 00: mov ecx, dword ptr [esi + 0x12a8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x588e2814
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 59: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        ; Exact mapped bytes 7E 16: jle 0x588e2838
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e2838
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 64 01 00 00: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e283a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E AC 12 00 00: mov ecx, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 29: je 0x588e2870
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8E A8 12 00 00: mov ecx, dword ptr [esi + 0x12a8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 A0 04 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E AC 12 00 00: mov ecx, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 90 04 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 AC 12 00 00: mov eax, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 A8 A3 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 20: mov byte ptr [esp + 0x58], 0x20
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x20
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 76: je 0x588e292e
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 64 01 00 00: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 12: jle 0x588e28d7
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x588e28d7
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2A: mov ebp, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x2a
        ; Exact mapped bytes EB 02: jmp 0x588e28d9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 3E: sub eax, 0x3e
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x3e
        ; Exact mapped bytes 83 E9 61: sub ecx, 0x61
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x61
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A8 08 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2D: je 0x588e2932
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 04: jmp 0x588e2932
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE B0 12 00 00: mov dword ptr [esi + 0x12b0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0A A3 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 21: mov byte ptr [esp + 0x58], 0x21
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x21
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 75: je 0x588e29cb
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 60 01 00 00: cmp dword ptr [eax + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 10: jle 0x588e2973
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x588e2973
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e2975
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 3E: sub eax, 0x3e
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x3e
        ; Exact mapped bytes 83 E9 61: sub ecx, 0x61
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x61
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 0E 08 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588e29cd
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e29cd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E B0 12 00 00: mov ecx, dword ptr [esi + 0x12b0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE B4 12 00 00: mov dword ptr [esi + 0x12b4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 38 03 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 B0 12 00 00: mov eax, dword ptr [esi + 0x12b0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FB FF 00 00: mov ecx, 0xfffb
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 35 A2 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa2
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 22: mov byte ptr [esp + 0x58], 0x22
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x22
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 28: je 0x588e2a53
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 52: sub eax, 0x52
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x52
        ; Exact mapped bytes 83 E9 75: sub ecx, 0x75
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x75
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 58 07 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x588e2a55
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE D8 12 00 00: mov dword ptr [esi + 0x12d8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E7 A1 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 23: mov byte ptr [esp + 0x58], 0x23
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x23
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 28: je 0x588e2aa1
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 52: sub eax, 0x52
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x52
        ; Exact mapped bytes 83 E9 75: sub ecx, 0x75
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x75
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 0A 07 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x588e2aa3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E D8 12 00 00: mov ecx, dword ptr [esi + 0x12d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE DC 12 00 00: mov dword ptr [esi + 0x12dc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 02 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 D8 12 00 00: mov eax, dword ptr [esi + 0x12d8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 DC 12 00 00: mov eax, dword ptr [esi + 0x12dc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 DC 12 00 00: mov eax, dword ptr [esi + 0x12dc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FB FF 00 00: mov edx, 0xfffb
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D AE 69 04 00 00: lea ebp, [esi + 0x469]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 8D 78 20: lea edi, [eax + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x20
        ; Exact mapped bytes 0F B6 11: movzx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x11
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7E 02: jle 0x588e2b04
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 83 C1 20: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E9: jne 0x588e2af5
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 83 F8 11: cmp eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x11
        ; Exact mapped bytes 7D 0E: jge 0x588e2b1f
        __asm _emit 0x7d
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x588e2bf1
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 18: cmp eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x18
        ; Exact mapped bytes 7D 12: jge 0x588e2b36
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 01 00 00 00: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x588e2bf1
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 1F: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1f
        ; Exact mapped bytes 7D 12: jge 0x588e2b4d
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 02 00 00 00: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x588e2bf1
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 26: cmp eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x26
        ; Exact mapped bytes 7D 12: jge 0x588e2b64
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 03 00 00 00: mov dword ptr [eax + 0x50], 3
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x588e2bf1
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 2F: cmp eax, 0x2f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2f
        ; Exact mapped bytes 7D 12: jge 0x588e2b7b
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 04 00 00 00: mov dword ptr [eax + 0x50], 4
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 76 00 00 00: jmp 0x588e2bf1
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 38: cmp eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x38
        ; Exact mapped bytes 7D 0F: jge 0x588e2b8f
        __asm _emit 0x7d
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 05 00 00 00: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 62: jmp 0x588e2bf1
        __asm _emit 0xeb
        __asm _emit 0x62
        ; Exact mapped bytes 83 F8 41: cmp eax, 0x41
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x41
        ; Exact mapped bytes 7D 0F: jge 0x588e2ba3
        __asm _emit 0x7d
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 06 00 00 00: mov dword ptr [eax + 0x50], 6
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4E: jmp 0x588e2bf1
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 83 F8 4C: cmp eax, 0x4c
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4c
        ; Exact mapped bytes 7D 0F: jge 0x588e2bb7
        __asm _emit 0x7d
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 07 00 00 00: mov dword ptr [eax + 0x50], 7
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x588e2bf1
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 83 F8 57: cmp eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x57
        ; Exact mapped bytes 7D 0F: jge 0x588e2bcb
        __asm _emit 0x7d
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 08 00 00 00: mov dword ptr [eax + 0x50], 8
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x588e2bf1
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 83 F8 62: cmp eax, 0x62
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x62
        ; Exact mapped bytes 7D 0F: jge 0x588e2bdf
        __asm _emit 0x7d
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 09 00 00 00: mov dword ptr [eax + 0x50], 9
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x588e2bf1
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 83 F8 7D: cmp eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7d
        ; Exact mapped bytes 7F 0D: jg 0x588e2bf1
        __asm _emit 0x7f
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 86 B4 12 00 00: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 0A 00 00 00: mov dword ptr [eax + 0x50], 0xa
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 45 00: movzx eax, byte ptr [ebp]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 0F 8C 8D 00 00 00: jl 0x588e2c90
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 6E: cmp eax, 0x6e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x6e
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x588e2c99
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 14: cmp dword ptr [eax + 0x164], 0x14
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        ; Exact mapped bytes 7E 13: jle 0x588e2c2d
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588e2c2d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 50: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x588e2c2f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E D8 12 00 00: mov ecx, dword ptr [esi + 0x12d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x588e2c64
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 15: cmp dword ptr [eax + 0x164], 0x15
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        ; Exact mapped bytes 0F 8E CE 01 00 00: jle 0x588e2e44
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C2 01 00 00: je 0x588e2e44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 54: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x588e2e46
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 6E: cmp eax, 0x6e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x6e
        ; Exact mapped bytes 0F 8C 8D 00 00 00: jl 0x588e2d26
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 78: cmp eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x78
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x588e2d2f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 16: cmp dword ptr [eax + 0x164], 0x16
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        ; Exact mapped bytes 7E 13: jle 0x588e2cc3
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588e2cc3
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 58: mov eax, dword ptr [ecx + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x58
        ; Exact mapped bytes EB 02: jmp 0x588e2cc5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E D8 12 00 00: mov ecx, dword ptr [esi + 0x12d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x588e2cfa
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 17: cmp dword ptr [eax + 0x164], 0x17
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        ; Exact mapped bytes 0F 8E 38 01 00 00: jle 0x588e2e44
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x588e2e44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 5C: mov eax, dword ptr [ecx + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x5c
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x588e2e46
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 78: cmp eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x78
        ; Exact mapped bytes 0F 8C 8D 00 00 00: jl 0x588e2dbc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 7D: cmp eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7d
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x588e2dc5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 18: cmp dword ptr [eax + 0x164], 0x18
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        ; Exact mapped bytes 7E 13: jle 0x588e2d59
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588e2d59
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 60: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes EB 02: jmp 0x588e2d5b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E D8 12 00 00: mov ecx, dword ptr [esi + 0x12d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x588e2d90
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 19: cmp dword ptr [eax + 0x164], 0x19
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        ; Exact mapped bytes 0F 8E A2 00 00 00: jle 0x588e2e44
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x588e2e44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 64: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x588e2e46
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 7D: cmp eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7d
        ; Exact mapped bytes 0F 8C B7 00 00 00: jl 0x588e2e7c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 20: cmp dword ptr [eax + 0x164], 0x20
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 7E 16: jle 0x588e2de9
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e2de9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 80 00 00 00: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e2deb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E D8 12 00 00: mov ecx, dword ptr [esi + 0x12d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x588e2e20
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 70 47 A2 58: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 21: cmp dword ptr [eax + 0x164], 0x21
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x21
        ; Exact mapped bytes 7E 16: jle 0x588e2e44
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e2e44
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 84 00 00 00: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e2e46
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E DC 12 00 00: mov ecx, dword ptr [esi + 0x12dc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 29: je 0x588e2e7c
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8D AE 2C 65 00 00: lea ebp, [esi + 0x652c]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x2c
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 C3 9D 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 24: mov byte ptr [esp + 0x58], 0x24
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 2F: je 0x588e2ecc
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 78: sub eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x78
        ; Exact mapped bytes 8D 4C 19 AB: lea ecx, [ecx + ebx - 0x55]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x19
        __asm _emit 0xab
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 E3 02 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e2ece
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 7D E8: mov dword ptr [ebp - 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 6E 9D 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 25: mov byte ptr [esp + 0x58], 0x25
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x25
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 46: je 0x588e2f36
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 22: cmp dword ptr [ecx + 0x160], 0x22
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        ; Exact mapped bytes 7E 17: jle 0x588e2f16
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e2f16
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 80 08 00 00: add edx, 0x880
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e2f18
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 83 E9 73: sub ecx, 0x73
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x73
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 8D 4C 19 BF: lea ecx, [ecx + ebx - 0x41]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x19
        __asm _emit 0xbf
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 CE 41 02 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x588e2f38
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 7D 00: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA E8 03 00 00: mov edx, 0x3e8
        __asm _emit 0xba
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e2f56
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 FA FF 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e2f63
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 7D FF 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B0 FD 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 83 C3 2F: add ebx, 0x2f
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x2f
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 81 FB 1A 01 00 00: cmp ebx, 0x11a
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C ED FE FF FF: jl 0x588e2e84
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 88 10 01 00 00: mov ecx, dword ptr [eax + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F7 3E FF FF: call 0x588d6ea0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 89 9E 58 13 00 00: mov dword ptr [esi + 0x1358], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 5C 13 00 00: mov dword ptr [esi + 0x135c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x5c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 60 13 00 00: mov dword ptr [esi + 0x1360], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 64 13 00 00: mov dword ptr [esi + 0x1364], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9E 68 13 00 00: mov byte ptr [esi + 0x1368], bl
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7E 9C 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 26: mov byte ptr [esp + 0x58], 0x26
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x26
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 7C 00 00 00: je 0x588e3062
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 0B 07 00 00: cmp dword ptr [eax + 0x164], 0x70b
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588e300d
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e300d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 2C 1C 00 00: mov ebp, dword ptr [edx + 0x1c2c]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x2c
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e300f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 53: sub eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x53
        ; Exact mapped bytes 83 E9 5C: sub ecx, 0x5c
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x5c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 74 01 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588e3064
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e3064
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE B8 12 00 00: mov dword ptr [esi + 0x12b8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D8 9B 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 27: mov byte ptr [esp + 0x58], 0x27
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x27
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 7C 00 00 00: je 0x588e3108
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 0C 07 00 00: cmp dword ptr [eax + 0x164], 0x70c
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588e30b3
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e30b3
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 30 1C 00 00: mov ebp, dword ptr [eax + 0x1c30]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x30
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e30b5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 53: sub eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x53
        ; Exact mapped bytes 83 E9 5C: sub ecx, 0x5c
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x5c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 CE 00 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588e310a
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 89 4F 0C: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 14: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 14: mov dword ptr [edi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4D 04: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 18: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 1C: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 20: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e310a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE BC 12 00 00: mov dword ptr [esi + 0x12bc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF FB 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 26 9B 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 28: mov byte ptr [esp + 0x58], 0x28
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x28
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 7C 00 00 00: je 0x588e31ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 DC 09 00 00: cmp dword ptr [eax + 0x164], 0x9dc
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588e3165
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e3165
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 70 27 00 00: mov ebp, dword ptr [ecx + 0x2770]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x70
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e3167
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 53: sub eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x53
        ; Exact mapped bytes 83 E9 5C: sub ecx, 0x5c
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x5c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 1C 00 02 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588e31bc
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 1C: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4F 20: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e31bc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE C0 12 00 00: mov dword ptr [esi + 0x12c0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 80 9A 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 29: mov byte ptr [esp + 0x58], 0x29
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x29
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 7C 00 00 00: je 0x588e3260
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 DD 09 00 00: cmp dword ptr [eax + 0x164], 0x9dd
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588e320b
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e320b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 74 27 00 00: mov ebp, dword ptr [edx + 0x2774]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x74
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588e320d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 53: sub eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x53
        ; Exact mapped bytes 83 E9 5C: sub ecx, 0x5c
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x5c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 76 FF 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588e3262
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588e3262
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE C4 12 00 00: mov dword ptr [esi + 0x12c4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A7 FA 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 CE 99 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 2A: mov byte ptr [esp + 0x58], 0x2a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x2a
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 28: je 0x588e32ba
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 64: sub eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x64
        ; Exact mapped bytes 83 E9 3C: sub ecx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x3c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 F1 FE 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x588e32bc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE C8 12 00 00: mov dword ptr [esi + 0x12c8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 80 99 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 2B: mov byte ptr [esp + 0x58], 0x2b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x2b
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 28: je 0x588e3308
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 64: sub eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x64
        ; Exact mapped bytes 83 E9 3C: sub ecx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x3c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A3 FE 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x588e330a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 5C 03: mov byte ptr [esp + 0x5c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x03
        ; Exact mapped bytes 89 BE CC 12 00 00: mov dword ptr [esi + 0x12cc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF F9 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 8D 8E 4C 14 00 00: lea ecx, [esi + 0x144c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 02 F5 E6 FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf5
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE 6C 60 00 00: mov dword ptr [esi + 0x606c], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x6c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 70 60 00 00: mov dword ptr [esi + 0x6070], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E C8 60 00 00: mov dword ptr [esi + 0x60c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 7C: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x7c
        ; Exact mapped bytes 0F B7 41 02: movzx eax, word ptr [ecx + 2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x41
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 86 52 03 00 00: mov word ptr [esi + 0x352], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 0C 01 00 00: mov eax, dword ptr [ecx + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 63: je 0x588e33c4
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 87 A8 FF FF: call 0x588ddbf0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 E4 12 00 00: mov eax, dword ptr [esi + 0x12e4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8D 0C 40: lea ecx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x40
        ; Exact mapped bytes 8D 44 4A BD: lea eax, [edx + ecx*2 - 0x43]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0xbd
        ; Exact mapped bytes 8B 8E E8 12 00 00: mov ecx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 51 FF 01 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE E4 12 00 00: mov edi, dword ptr [esi + 0x12e4]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 E8 03 00 00: mov ecx, 0x3e8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e33ab
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A5 FB 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588e33b8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 28 FB 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 E4 12 00 00: mov eax, dword ptr [esi + 0x12e4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes EB 0F: jmp 0x588e33d3
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 86 E4 12 00 00: mov eax, dword ptr [esi + 0x12e4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E8 12 00 00: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C2 06: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x06
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2F: je 0x588e3416
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 74 2B: je 0x588e3416
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 8F 7E FF FF 7F: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x588e340d
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 02: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x588e340d
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 03 C5: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xc5
        ; Exact mapped bytes 2B FD: sub edi, ebp
        __asm _emit 0x2b
        __asm _emit 0xfd
        ; Exact mapped bytes 75 E7: jne 0x588e33f2
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588e3411
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 75 02: jne 0x588e3413
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 18 63 00 00: mov dword ptr [esi + 0x6318], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 1C 63 00 00: mov dword ptr [esi + 0x631c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x1c
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 44 03 00 00 FF FF FF FF: mov dword ptr [esi + 0x344], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9E C4 60 00 00: mov dword ptr [esi + 0x60c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 8C 12 00 00: mov dword ptr [esi + 0x128c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 90 12 00 00: mov dword ptr [esi + 0x1290], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 94 12 00 00: mov dword ptr [esi + 0x1294], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 98 12 00 00: mov dword ptr [esi + 0x1298], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 9C 12 00 00: mov dword ptr [esi + 0x129c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A0 12 00 00: mov dword ptr [esi + 0x12a0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 37: jmp 0x588e348f
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 5C 60 00 00: mov dword ptr [esi + 0x605c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 88 00 00 00: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 48 03 00 00: mov dword ptr [esi + 0x348], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 18 14 00 00: mov dword ptr [esi + 0x1418], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 01 00 00: mov dword ptr [esi + 0x174], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 6C 60 00 00: mov dword ptr [esi + 0x606c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 70 60 00 00: mov dword ptr [esi + 0x6070], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C8 60 00 00: mov dword ptr [esi + 0x60c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 7C: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 89 9E A4 12 00 00: mov dword ptr [esi + 0x12a4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A4 63 00 00: mov dword ptr [esi + 0x63a4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A8 63 00 00: mov dword ptr [esi + 0x63a8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E AC 63 00 00: mov dword ptr [esi + 0x63ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E B0 63 00 00: mov dword ptr [esi + 0x63b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E B4 63 00 00: mov dword ptr [esi + 0x63b4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E FC 64 00 00: mov dword ptr [esi + 0x64fc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 04 01 00 00: mov eax, dword ptr [edx + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 00 65 00 00: mov dword ptr [esi + 0x6500], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 AA AA AA AA: mov eax, 0xaaaaaaaa
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 86 04 65 00 00: mov dword ptr [esi + 0x6504], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 08 65 00 00: mov dword ptr [esi + 0x6508], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 44 65 00 00: mov dword ptr [esi + 0x6544], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x44
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 48 66 00 00: mov dword ptr [esi + 0x6648], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 4C 66 00 00: mov dword ptr [esi + 0x664c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 50 66 00 00: mov dword ptr [esi + 0x6650], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x50
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E B8 63 00 00: mov dword ptr [esi + 0x63b8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E BC 63 00 00: mov dword ptr [esi + 0x63bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xbc
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E C0 63 00 00: mov dword ptr [esi + 0x63c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 C4 18 02 00: cmp dword ptr [eax + 0x218c4], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x588e354f
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 B9 04 02 00 00 0F: cmp word ptr [ecx + 0x204], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 74 2E: je 0x588e354f
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 39 98 C8 18 02 00: cmp dword ptr [eax + 0x218c8], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xc8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2B 05 00 00: je 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 4C 03 00 00: lea ecx, [esi + 0x34c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 38 30 00 00: call 0x588e6570
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 18 05 00 00: je 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 B8 63 00 00 01 00 00 00: mov dword ptr [esi + 0x63b8], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 09 05 00 00: jmp 0x588e3a58
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE 54 03 00 00 00: cmp byte ptr [esi + 0x354], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588e3566
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 B9 04 02 00 00 0F: cmp word ptr [ecx + 0x204], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 F2 04 00 00: jne 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 4C 03 00 00: lea edi, [esi + 0x34c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 FD 2F 00 00: call 0x588e6570
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 46 02 00 00: je 0x588e37c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 05 38 EB 99 58: fld qword ptr [0x5899eb38]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes DD 05 10 11 9A 58: fld qword ptr [0x589a1110]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 89 6C 24 18: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DD 05 20 EB 99 58: fld qword ptr [0x5899eb20]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 9E 7C 04 00 00: lea ebx, [esi + 0x47c]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 1C 20 00 00 00: mov dword ptr [esp + 0x1c], 0x20
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7B EE 09: cmp byte ptr [ebx - 0x12], 9
        __asm _emit 0x80
        __asm _emit 0x7b
        __asm _emit 0xee
        __asm _emit 0x09
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x588e3659
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3B: mov edi, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x3b
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 FF 03 00 00: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7D 06: jge 0x588e35cd
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 CB: fmul st(3)
        __asm _emit 0xd8
        __asm _emit 0xcb
        ; Exact mapped bytes E8 CC 96 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 81 F2 00 A8 02 00: xor edx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 0A: shr edx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 81 E2 FF 03 00 00: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 20: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7D 06: jge 0x588e35fb
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 CA: fmul st(2)
        __asm _emit 0xd8
        __asm _emit 0xca
        ; Exact mapped bytes E8 9E 96 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 81 F7 00 00 A0 0A: xor edi, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa0
        __asm _emit 0x0a
        ; Exact mapped bytes C1 EF 14: shr edi, 0x14
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x14
        ; Exact mapped bytes 81 E7 FF 03 00 00: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 7D 06: jge 0x588e3627
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes E8 72 96 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F B7 43 FA: movzx eax, word ptr [ebx - 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x43
        __asm _emit 0xfa
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 03 4C 24 28: add ecx, dword ptr [esp + 0x28]
        __asm _emit 0x03
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF C1: imul eax, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4B F0: mov ecx, dword ptr [ebx - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0xf0
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F1: div ecx
        __asm _emit 0xf7
        __asm _emit 0xf1
        ; Exact mapped bytes 03 E8: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xe8
        ; Exact mapped bytes FF 44 24 18: inc dword ptr [esp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 C3 20: add ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x20
        ; Exact mapped bytes 83 6C 24 1C 01: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 3A FF FF FF: jne 0x588e35a1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DD DA: fstp st(2)
        __asm _emit 0xdd
        __asm _emit 0xda
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8E DF 03 00 00: jle 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 77 6F: ja 0x588e36ee
        __asm _emit 0x77
        __asm _emit 0x6f
        ; Exact mapped bytes FF 24 85 8C 3A 8E 58: jmp dword ptr [eax*4 + 0x588e3a8c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x3a
        __asm _emit 0x8e
        __asm _emit 0x58
        ; Exact mapped bytes 6B ED 64: imul ebp, ebp, 0x64
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x64
        ; Exact mapped bytes EB 66: jmp 0x588e36f1
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes 6B ED 51: imul ebp, ebp, 0x51
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x51
        ; Exact mapped bytes EB 61: jmp 0x588e36f1
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes 8D 4C ED 00: lea ecx, [ebp + ebp*8]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0x00
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes EB 55: jmp 0x588e36f8
        __asm _emit 0xeb
        __asm _emit 0x55
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C1 E1 05: shl ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        ; Exact mapped bytes 03 CD: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xcd
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes EB 43: jmp 0x588e36f8
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C1 E1 05: shl ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        ; Exact mapped bytes 2B CD: sub ecx, ebp
        __asm _emit 0x2b
        __asm _emit 0xcd
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes EB 31: jmp 0x588e36f8
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 6B ED 3A: imul ebp, ebp, 0x3a
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x3a
        ; Exact mapped bytes EB 25: jmp 0x588e36f1
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8D 0C ED 00 00 00 00: lea ecx, [ebp*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CD: sub ecx, ebp
        __asm _emit 0x2b
        __asm _emit 0xcd
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes EB 14: jmp 0x588e36f8
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 6B ED 36: imul ebp, ebp, 0x36
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x36
        ; Exact mapped bytes EB 08: jmp 0x588e36f1
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 6B ED 34: imul ebp, ebp, 0x34
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x34
        ; Exact mapped bytes EB 03: jmp 0x588e36f1
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 6B ED 32: imul ebp, ebp, 0x32
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x32
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 ED: imul ebp
        __asm _emit 0xf7
        __asm _emit 0xed
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 07: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 03: sar eax, 3
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8E 41 03 00 00: jle 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 B8 63 00 00 01 00 00 00: mov dword ptr [esi + 0x63b8], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D 9E C8 63 00 00: lea ebx, [esi + 0x63c8]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 10 01 00 00: push 0x110
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1B 95 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x95
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 2C: mov byte ptr [esp + 0x58], 0x2c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x2c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 51: je 0x588e3796
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 0F BF 46 26: movsx eax, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B AA 24 05 01 00: mov ebp, dword ptr [edx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 44 82 BA: lea eax, [edx + eax*4 - 0x46]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x82
        __asm _emit 0xba
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 81 E2 01 00 00 80: and edx, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 79 05: jns 0x588e3782
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 83 CA FE: or edx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xfe
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 6B D2 32: imul edx, edx, 0x32
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x32
        ; Exact mapped bytes 8D 54 02 E7: lea edx, [edx + eax - 0x19]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0xe7
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 7C F0 E9 FF: call 0x58782810
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf0
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588e3798
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 FF 08: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x08
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 7C 81: jl 0x588e3729
        __asm _emit 0x7c
        __asm _emit 0x81
        ; Exact mapped bytes C7 86 E8 64 00 00 7D 00 00 00: mov dword ptr [esi + 0x64e8], 0x7d
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 EC 64 00 00 00 00 00 00: mov dword ptr [esi + 0x64ec], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 97 02 00 00: jmp 0x588e3a58
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 48 04: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 08: cmp cl, 8
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x08
        ; Exact mapped bytes 74 2E: je 0x588e3800
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes BA BA 0B 00 00: mov edx, 0xbba
        __asm _emit 0xba
        __asm _emit 0xba
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 90 5E 03 00 00: cmp word ptr [eax + 0x35e], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x588e3800
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes B9 CB 0B 00 00: mov ecx, 0xbcb
        __asm _emit 0xb9
        __asm _emit 0xcb
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 88 5E 03 00 00: cmp word ptr [eax + 0x35e], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x588e3800
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes BA BD 0B 00 00: mov edx, 0xbbd
        __asm _emit 0xba
        __asm _emit 0xbd
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 90 5E 03 00 00: cmp word ptr [eax + 0x35e], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 58 02 00 00: jne 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE 67 14 00 00 00: cmp byte ptr [esi + 0x1467], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x67
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 4B 02 00 00: jbe 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 08 0F 00 00 00: cmp dword ptr [esi + 0xf08], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 3E 02 00 00: je 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 AF 2D 00 00: call 0x588e65d0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 2F 02 00 00: je 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 05 38 EB 99 58: fld qword ptr [0x5899eb38]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes DD 05 10 11 9A 58: fld qword ptr [0x589a1110]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 89 6C 24 18: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DD 05 20 EB 99 58: fld qword ptr [0x5899eb20]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 9E 7C 04 00 00: lea ebx, [esi + 0x47c]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 1C 20 00 00 00: mov dword ptr [esp + 0x1c], 0x20
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7B EE 0A: cmp byte ptr [ebx - 0x12], 0xa
        __asm _emit 0x80
        __asm _emit 0x7b
        __asm _emit 0xee
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x588e391c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3B: mov edi, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x3b
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 25 FF 03 00 00: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x588e3879
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 CB: fmul st(3)
        __asm _emit 0xd8
        __asm _emit 0xcb
        ; Exact mapped bytes E8 20 94 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 81 F1 00 A8 02 00: xor ecx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C1 E9 0A: shr ecx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 81 E1 FF 03 00 00: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7D 06: jge 0x588e38a7
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 CA: fmul st(2)
        __asm _emit 0xd8
        __asm _emit 0xca
        ; Exact mapped bytes E8 F2 93 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 81 F7 00 00 A0 0A: xor edi, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa0
        __asm _emit 0x0a
        ; Exact mapped bytes C1 EF 14: shr edi, 0x14
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x14
        ; Exact mapped bytes 81 E7 FF 03 00 00: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 7D 06: jge 0x588e38d3
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes E8 C6 93 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 4B FA: movzx ecx, word ptr [ebx - 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4b
        __asm _emit 0xfa
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 03 44 24 28: add eax, dword ptr [esp + 0x28]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF C1: imul eax, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4B F0: mov ecx, dword ptr [ebx - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0xf0
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F1: div ecx
        __asm _emit 0xf7
        __asm _emit 0xf1
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 03 CD: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xcd
        ; Exact mapped bytes 6B C9 0D: imul ecx, ecx, 0xd
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x0d
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes FF 44 24 18: inc dword ptr [esp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C3 20: add ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x20
        ; Exact mapped bytes 83 6C 24 1C 01: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 25 FF FF FF: jne 0x588e384f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DD DA: fstp st(2)
        __asm _emit 0xdd
        __asm _emit 0xda
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8E 1C 01 00 00: jle 0x588e3a58
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 77 68: ja 0x588e39aa
        __asm _emit 0x77
        __asm _emit 0x68
        ; Exact mapped bytes FF 24 85 B0 3A 8E 58: jmp dword ptr [eax*4 + 0x588e3ab0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x3a
        __asm _emit 0x8e
        __asm _emit 0x58
        ; Exact mapped bytes 6B ED 64: imul ebp, ebp, 0x64
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x64
        ; Exact mapped bytes EB 5F: jmp 0x588e39ad
        __asm _emit 0xeb
        __asm _emit 0x5f
        ; Exact mapped bytes 6B ED 51: imul ebp, ebp, 0x51
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x51
        ; Exact mapped bytes EB 5A: jmp 0x588e39ad
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes 8D 6C ED 00: lea ebp, [ebp + ebp*8]
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0x00
        ; Exact mapped bytes 03 ED: add ebp, ebp
        __asm _emit 0x03
        __asm _emit 0xed
        ; Exact mapped bytes 03 ED: add ebp, ebp
        __asm _emit 0x03
        __asm _emit 0xed
        ; Exact mapped bytes 03 ED: add ebp, ebp
        __asm _emit 0x03
        __asm _emit 0xed
        ; Exact mapped bytes EB 4E: jmp 0x588e39ad
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C1 E1 05: shl ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        ; Exact mapped bytes 03 CD: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xcd
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes EB 43: jmp 0x588e39b4
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C1 E1 05: shl ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        ; Exact mapped bytes 2B CD: sub ecx, ebp
        __asm _emit 0x2b
        __asm _emit 0xcd
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes EB 31: jmp 0x588e39b4
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 6B ED 3A: imul ebp, ebp, 0x3a
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x3a
        ; Exact mapped bytes EB 25: jmp 0x588e39ad
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8D 0C ED 00 00 00 00: lea ecx, [ebp*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CD: sub ecx, ebp
        __asm _emit 0x2b
        __asm _emit 0xcd
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes EB 14: jmp 0x588e39b4
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 6B ED 36: imul ebp, ebp, 0x36
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x36
        ; Exact mapped bytes EB 08: jmp 0x588e39ad
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 6B ED 34: imul ebp, ebp, 0x34
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x34
        ; Exact mapped bytes EB 03: jmp 0x588e39ad
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 6B ED 32: imul ebp, ebp, 0x32
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x32
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 ED: imul ebp
        __asm _emit 0xf7
        __asm _emit 0xed
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes C1 FD 02: sar ebp, 2
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0x02
        ; Exact mapped bytes C7 86 BC 63 00 00 01 00 00 00: mov dword ptr [esi + 0x63bc], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9E E8 63 00 00: lea ebx, [esi + 0x63e8]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 18 40 00 00 00: mov dword ptr [esp + 0x18], 0x40
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A4 00 00 00: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5A 92 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 24 58 2D: mov byte ptr [esp + 0x58], 0x2d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x2d
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1E: je 0x588e3a22
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 24 05 01 00: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 42 C2 E9 FF: call 0x5877fc60
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc2
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x588e3a24
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 3B: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA F5 01 00 00: mov edx, 0x1f5
        __asm _emit 0xba
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 58 03: mov byte ptr [esp + 0x58], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e3a41
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 0F F5 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588e3a4e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 92 F4 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 6C 24 18 01: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        ; Exact mapped bytes 75 92: jne 0x588e39ea
        __asm _emit 0x75
        __asm _emit 0x92
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 C4 63 00 00: mov dword ptr [esi + 0x63c4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 30 13 00 00: mov dword ptr [esi + 0x1330], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 4C 24 50: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
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
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 57 91 09 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 48: add esp, 0x48
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x48
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
