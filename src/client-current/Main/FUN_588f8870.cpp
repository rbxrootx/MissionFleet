// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F8870 .. +0x627 bytes.
extern "C" __declspec(naked) void FUN_588f8870() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 52 A1 98 58: push 0x5898a152
        __asm _emit 0x68
        __asm _emit 0x52
        __asm _emit 0xa1
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
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
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
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
        ; Exact mapped bytes 8B 44 24 3C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 54 24 34: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 6C 24 30: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 30: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 40 F8 FF FF: call 0x588f8100
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C7 06 0C 21 9A 58: mov dword ptr [esi], 0x589a210c
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x0c
        __asm _emit 0x21
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 89 9E C0 00 00 00: mov dword ptr [esi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E C8 00 00 00: mov dword ptr [esi + 0xc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E CC 00 00 00: mov dword ptr [esi + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E D0 00 00 00: mov dword ptr [esi + 0xd0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E D4 00 00 00: mov dword ptr [esi + 0xd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E D8 00 00 00: mov dword ptr [esi + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E DC 00 00 00: mov dword ptr [esi + 0xdc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E E0 00 00 00: mov dword ptr [esi + 0xe0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E E4 00 00 00: mov dword ptr [esi + 0xe4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E E8 00 00 00: mov dword ptr [esi + 0xe8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E EC 00 00 00: mov dword ptr [esi + 0xec], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E F0 00 00 00: mov dword ptr [esi + 0xf0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E F4 00 00 00: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E F8 00 00 00: mov dword ptr [esi + 0xf8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E FC 00 00 00: mov dword ptr [esi + 0xfc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1E 43 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 01: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 45: je 0x588f8985
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CB 00 00 00: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588f8968
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588f8968
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 C0 32 00 00: add ecx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f896a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 83 C2 42: add edx, 0x42
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x42
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 83 C2 26: add edx, 0x26
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x26
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7D E7 00 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f8987
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 86 C0 00 00 00: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B6 42 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 02: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 25: je 0x588f89cf
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 45 0F: lea eax, [ebp + 0xf]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x0f
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 C1 03: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 DE A7 00 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa7
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes EB 02: jmp 0x588f89d1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 8E D4 00 00 00: mov dword ptr [esi + 0xd4], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3B A3 00 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 D4 00 00 00: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
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
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 53 42 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 03: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 23: je 0x588f8a30
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 45 0F: lea eax, [ebp + 0xf]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x0f
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 C1 03: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 7B A7 00 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa7
        __asm _emit 0x00
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
        ; Exact mapped bytes EB 02: jmp 0x588f8a32
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 BE D8 00 00 00: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B 42 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 04: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 28: je 0x588f8a7d
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 55 0D: lea edx, [ebp + 0xd]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x0d
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 83 C0 05: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x05
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 33 A7 00 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa7
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes EB 02: jmp 0x588f8a7f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 8E CC 00 00 00: mov dword ptr [esi + 0xcc], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8D A2 00 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
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
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 41 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 05: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 26: je 0x588f8af0
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 45 0D: lea eax, [ebp + 0xd]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x0d
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 C1 05: add ecx, 5
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x05
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 BE A6 00 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa6
        __asm _emit 0x00
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
        ; Exact mapped bytes EB 02: jmp 0x588f8af2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes BA FB FF 00 00: mov edx, 0xfffb
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE D0 00 00 00: mov dword ptr [esi + 0xd0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 42 41 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 06: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3A: je 0x588f8b56
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D 34 47 A2 58: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 3D: cmp dword ptr [ecx + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3d
        ; Exact mapped bytes 7E 16: jle 0x588f8b41
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588f8b41
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 F4 00 00 00: mov ecx, dword ptr [ecx + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f8b43
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 3B: push 0x3b
        __asm _emit 0x6a
        __asm _emit 0x3b
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0C 91 E3 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x91
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f8b58
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes B9 FB FF 00 00: mov ecx, 0xfffb
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E4 00 00 00: mov dword ptr [esi + 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
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
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 DC 40 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 07: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 25: je 0x588f8ba9
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 55 0F: lea edx, [ebp + 0xf]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x0f
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 83 C0 03: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 04 A6 00 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa6
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes EB 02: jmp 0x588f8bab
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 8E DC 00 00 00: mov dword ptr [esi + 0xdc], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 61 A1 00 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 DC 00 00 00: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 79 40 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 08: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 23: je 0x588f8c0a
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 55 0F: lea edx, [ebp + 0xf]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x0f
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 83 C0 03: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A1 A5 00 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa5
        __asm _emit 0x00
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
        ; Exact mapped bytes EB 02: jmp 0x588f8c0c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 BE E0 00 00 00: mov dword ptr [esi + 0xe0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 31 40 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 09: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3D: je 0x588f8c6a
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 34 47 A2 58: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 1F: cmp dword ptr [ecx + 0x164], 0x1f
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 7E 13: jle 0x588f8c4f
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588f8c4f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 7C: mov ecx, dword ptr [ecx + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x7c
        ; Exact mapped bytes EB 02: jmp 0x588f8c51
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 7C 24 2C: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 55 3A: lea edx, [ebp + 0x3a]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x3a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 57 02: lea edx, [edi + 2]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F8 8F E3 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x588f8c70
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 7C 24 2C: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 86 F8 00 00 00: mov dword ptr [esi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9A A0 00 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F8 00 00 00: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 B2 3F 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 0A: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 39: je 0x588f8ce5
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 34 47 A2 58: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 1E: cmp dword ptr [ecx + 0x164], 0x1e
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1e
        ; Exact mapped bytes 7E 13: jle 0x588f8cce
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588f8cce
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 91 8C 01 00 00: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4A 78: mov ecx, dword ptr [edx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x78
        ; Exact mapped bytes EB 02: jmp 0x588f8cd0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 55 3A: lea edx, [ebp + 0x3a]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x3a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 57 02: lea edx, [edi + 2]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7D 8F E3 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f8ce7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 86 FC 00 00 00: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 3F 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 0B: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0b
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 39: je 0x588f8d41
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 30 47 A2 58: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 3D: cmp dword ptr [ecx + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3d
        ; Exact mapped bytes 7E 16: jle 0x588f8d2d
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588f8d2d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 F4 00 00 00: mov ecx, dword ptr [ecx + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f8d2f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 55 FA: lea edx, [ebp - 6]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xfa
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 21 8F E3 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f8d43
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 86 EC 00 00 00: mov dword ptr [esi + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA 3E 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 0C: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0c
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 39: je 0x588f8d9d
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 30 47 A2 58: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 3C: cmp dword ptr [ecx + 0x164], 0x3c
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3c
        ; Exact mapped bytes 7E 16: jle 0x588f8d89
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588f8d89
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 F0 00 00 00: mov ecx, dword ptr [ecx + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f8d8b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 55 FA: lea edx, [ebp - 6]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xfa
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 C5 8E E3 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f8d9f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 86 E8 00 00 00: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6B 9F 00 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 92 3E 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 0D: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0d
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3C: je 0x588f8e08
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 30 47 A2 58: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 3F: cmp dword ptr [ecx + 0x164], 0x3f
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3f
        ; Exact mapped bytes 7E 16: jle 0x588f8df1
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588f8df1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 FC 00 00 00: mov ecx, dword ptr [ecx + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f8df3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 55 FA: lea edx, [ebp - 6]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xfa
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 57 0A: lea edx, [edi + 0xa]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x0a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5A 8E E3 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f8e0a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 86 F4 00 00 00: mov dword ptr [esi + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 33 3E 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 0E: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0e
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3C: je 0x588f8e67
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 30 47 A2 58: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 3E: cmp dword ptr [ecx + 0x164], 0x3e
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3e
        ; Exact mapped bytes 7E 16: jle 0x588f8e50
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588f8e50
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 F8 00 00 00: mov ecx, dword ptr [ecx + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f8e52
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 83 C5 FA: add ebp, -6
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0xfa
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 83 C7 0A: add edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x0a
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 FB 8D E3 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f8e69
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 5C 24 24: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 86 F0 00 00 00: mov dword ptr [esi + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A1 9E 00 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
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
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
