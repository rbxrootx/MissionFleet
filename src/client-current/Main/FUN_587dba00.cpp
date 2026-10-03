// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587DBA00 .. +0x312D bytes.
extern "C" __declspec(naked) void FUN_587dba00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 4A 23 98 58: push 0x5898234a
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0x23
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
        ; Exact mapped bytes 81 EC 10 01 00 00: sub esp, 0x110
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8D 84 24 24 01 00 00: lea eax, [esp + 0x124]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 89 B4 24 20 01 00 00: mov dword ptr [esp + 0x120], esi
        __asm _emit 0x89
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 24 48 01 00 00: mov eax, dword ptr [esp + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 44 01 00 00: mov ecx, dword ptr [esp + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 94 24 40 01 00 00: mov edx, dword ptr [esp + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AC 24 3C 01 00 00: mov ebp, dword ptr [esp + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BC 24 38 01 00 00: mov edi, dword ptr [esp + 0x138]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 84 24 38 01 00 00: mov eax, dword ptr [esp + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 33 77 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x77
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes C7 06 00 C5 98 58: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 7E 50: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x50
        ; Exact mapped bytes 89 6E 54: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x54
        ; Exact mapped bytes C7 46 58 00 01 00 00: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 5C: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x5c
        ; Exact mapped bytes 68 98 01 00 00: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 30 01 00 00: mov dword ptr [esp + 0x130], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 06 24 B8 99 58: mov dword ptr [esi], 0x5899b824
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 11 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x11
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 01: mov byte ptr [esp + 0x12c], 1
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 11: je 0x587dbac5
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 4C BB 99 58: push 0x5899bb4c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0xbb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AD 82 11 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dbac7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 98 01 00 00: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 C4 46 A2 58: mov dword ptr [0x58a246c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 11 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x11
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 02: mov byte ptr [esp + 0x12c], 2
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 11: je 0x587dbb01
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 38 BB 99 58: push 0x5899bb38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xbb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 71 82 11 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dbb03
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 98 01 00 00: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 C8 46 A2 58: mov dword ptr [0x58a246c8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 11 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x11
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 03: mov byte ptr [esp + 0x12c], 3
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 11: je 0x587dbb3d
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 24 BB 99 58: push 0x5899bb24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xbb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 35 82 11 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dbb3f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 40 01 00 00: push 0x140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 B4 46 A2 58: mov dword ptr [0x58a246b4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 10 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x10
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 04: mov byte ptr [esp + 0x12c], 4
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 16: je 0x587dbb7e
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 AC FE FF FF: push 0xfffffeac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D6 20 11 00: call 0x588edc50
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dbb80
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes B9 26 04 00 00: mov ecx, 0x426
        __asm _emit 0xb9
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE AC 0D 00 00: mov dword ptr [esi + 0xdac], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x0d
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
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dbba3
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 AD 73 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x73
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dbbb0
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 30 73 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x73
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 AC 0D 00 00: mov eax, dword ptr [esi + 0xdac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x0d
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
        ; Exact mapped bytes 68 D0 04 00 00: push 0x4d0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 85 10 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 05: mov byte ptr [esp + 0x12c], 5
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 14: je 0x587dbbf0
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 68 25 02 00 00: push 0x225
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 20 03 00 00: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 02 5A 11 00: call 0x588f15f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dbbf2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 BC 0D 00 00: mov dword ptr [esi + 0xdbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes BA FF E5 00 00: mov edx, 0xe5ff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes BA 00 05 00 00: mov edx, 0x500
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B BE BC 0D 00 00: mov edi, dword ptr [esi + 0xdbc]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 28 04 00 00: mov eax, 0x428
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dbc33
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1D 73 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x73
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dbc40
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A0 72 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x72
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 BC 0D 00 00: mov eax, dword ptr [esi + 0xdbc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x0d
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
        ; Exact mapped bytes 68 A0 00 00 00: push 0xa0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F5 0F 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0f
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 06: mov byte ptr [esp + 0x12c], 6
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 5B: je 0x587dbcc7
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D D4 46 A2 58: mov ecx, dword ptr [0x58a246d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 01: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 13: jle 0x587dbc8e
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dbc8e
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 40: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x40
        ; Exact mapped bytes EB 02: jmp 0x587dbc90
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B BC 24 48 01 00 00: mov edi, dword ptr [esp + 0x148]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 2C 01 00 00: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8D 97 E8 03 00 00: lea edx, [edi + 0x3e8]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 59 01 00 00: lea edx, [ebp + 0x159]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 94 24 48 01 00 00: mov edx, dword ptr [esp + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 08 02 00 00: add edx, 0x208
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 FB 1C F9 FF: call 0x5876d9c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x587dbcd0
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B BC 24 48 01 00 00: mov edi, dword ptr [esp + 0x148]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 44 10 00 00: mov dword ptr [esi + 0x1044], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x10
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
        ; Exact mapped bytes 8B 8E 44 10 00 00: mov ecx, dword ptr [esi + 0x1044]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2A 70 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 68 A4 00 00 00: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E 0F 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x0f
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 07: mov byte ptr [esp + 0x12c], 7
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 61: je 0x587dbd74
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D D4 46 A2 58: mov ecx, dword ptr [0x58a246d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 48: cmp dword ptr [ecx + 0x164], 0x48
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x48
        ; Exact mapped bytes 7E 16: jle 0x587dbd38
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dbd38
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 8C 01 00 00: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 20 01 00 00: mov ecx, dword ptr [edx + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dbd3a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 44 10 00 00: mov edx, dword ptr [esi + 0x1044]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes 68 2C 01 00 00: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8D 97 4C 04 00 00: lea edx, [edi + 0x44c]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 B3 01 00 00: lea edx, [ebp + 0x1b3]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 94 24 54 01 00 00: mov edx, dword ptr [esp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 5E 01 00 00: add edx, 0x15e
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7E 20 F9 FF: call 0x5876ddf0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x20
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dbd76
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 48 10 00 00: mov dword ptr [esi + 0x1048], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x10
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
        ; Exact mapped bytes 8B 8E 48 10 00 00: mov ecx, dword ptr [esi + 0x1048]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 84 6F 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 68 A4 00 00 00: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A8 0E 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0e
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 08: mov byte ptr [esp + 0x12c], 8
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 61: je 0x587dbe1a
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D D4 46 A2 58: mov ecx, dword ptr [0x58a246d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 49: cmp dword ptr [ecx + 0x164], 0x49
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x49
        ; Exact mapped bytes 7E 16: jle 0x587dbdde
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dbdde
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 8C 01 00 00: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 24 01 00 00: mov ecx, dword ptr [edx + 0x124]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dbde0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 44 10 00 00: mov edx, dword ptr [esi + 0x1044]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 94 24 40 01 00 00: mov edx, dword ptr [esp + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes 68 2C 01 00 00: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 81 C7 E8 03 00 00: add edi, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 81 C5 B3 01 00 00: add ebp, 0x1b3
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 81 C2 5E 01 00 00: add edx, 0x15e
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D8 1F F9 FF: call 0x5876ddf0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x1f
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dbe1c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 4C 10 00 00: mov dword ptr [esi + 0x104c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x10
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
        ; Exact mapped bytes 8B 8E 4C 10 00 00: mov ecx, dword ptr [esi + 0x104c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DE 6E 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 4C 10 00 00: mov eax, dword ptr [esi + 0x104c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 01 00 00: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 78 FF FE FF FF: mov dword ptr [eax + 0x78], 0xfffffeff
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F5 0D 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0d
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 09: mov byte ptr [esp + 0x12c], 9
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 11: je 0x587dbe7d
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 08 BB 99 58: push 0x5899bb08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F5 7E 11 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7e
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dbe7f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 04 03 00 00: push 0x304
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A0 00 00 00: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B8 0D 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 0A: mov byte ptr [esp + 0x12c], 0xa
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1A: je 0x587dbec3
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 70 FE FF FF: push 0xfffffe70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 E3 00 00 00: push 0xe3
        __asm _emit 0x68
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F1 DF FB FF: call 0x58799eb0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dbec5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE B0 0D 00 00: mov dword ptr [esi + 0xdb0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA 38 2B 00 00: mov edx, 0x2b38
        __asm _emit 0xba
        __asm _emit 0x38
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dbee8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 68 70 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dbef5
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 EB 6F 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 B0 0D 00 00: mov eax, dword ptr [esi + 0xdb0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes BA FF E5 00 00: mov edx, 0xe5ff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes BA 00 05 00 00: mov edx, 0x500
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 A0 00 00 00: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B0 0D 00 00: mov ecx, dword ptr [esi + 0xdb0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 68: mov dword ptr [ecx + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        ; Exact mapped bytes 8B 86 B0 0D 00 00: mov eax, dword ptr [esi + 0xdb0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x0d
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
        ; Exact mapped bytes 68 A0 01 00 00: push 0x1a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 0D 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 0B: mov byte ptr [esp + 0x12c], 0xb
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1A: je 0x587dbf68
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 25 02 00 00: push 0x225
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 CC 60 09 00: call 0x58872030
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dbf6a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE B4 0D 00 00: mov dword ptr [esi + 0xdb4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA 28 04 00 00: mov edx, 0x428
        __asm _emit 0xba
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dbf8d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C3 6F 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dbf9a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 46 6F 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BD 0C 00 00 00: mov ebp, 0xc
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 A8 70 01 00 00: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x587dbfbf
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 98 94 01 00 00: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dbfbf
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 30: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x30
        ; Exact mapped bytes EB 02: jmp 0x587dbfc1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E B4 0D 00 00: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 A2 A0 FD FF: call 0x587b6070
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 68 A8 00 00 00: push 0xa8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 76 0C 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 0C: mov byte ptr [esp + 0x12c], 0xc
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1A: je 0x587dc005
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 4A 01 00 00: push 0x14a
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 84 03 00 00: push 0x384
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 4F 6B 0D 00: call 0x588b2b50
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dc007
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes B9 5A 04 00 00: mov ecx, 0x45a
        __asm _emit 0xb9
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE B8 0D 00 00: mov dword ptr [esi + 0xdb8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x0d
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
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dc02a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 26 6F 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dc037
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A9 6E 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A8 70 01 00 00: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x587dc057
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 98 94 01 00 00: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dc057
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 90 94 01 00 00: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 30: mov eax, dword ptr [edx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x30
        ; Exact mapped bytes EB 02: jmp 0x587dc059
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E B8 0D 00 00: mov ecx, dword ptr [esi + 0xdb8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 0A A0 FD FF: call 0x587b6070
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 B8 0D 00 00: mov eax, dword ptr [esi + 0xdb8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x0d
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
        ; Exact mapped bytes 68 CC 00 00 00: push 0xcc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CF 0B 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0b
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 0D: mov byte ptr [esp + 0x12c], 0xd
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 18: je 0x587dc0aa
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 68 5A 04 00 00: push 0x45a
        __asm _emit 0x68
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes 68 20 03 00 00: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 DA D4 09 00: call 0x58879580
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dc0ac
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE C0 0D 00 00: mov dword ptr [esi + 0xdc0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA FA 13 00 00: mov edx, 0x13fa
        __asm _emit 0xba
        __asm _emit 0xfa
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dc0cf
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 81 6E 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x6e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dc0dc
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 04 6E 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x6e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C0 0D 00 00: mov eax, dword ptr [esi + 0xdc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x0d
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
        ; Exact mapped bytes 68 BC 01 00 00: push 0x1bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 0B 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 0E: mov byte ptr [esp + 0x12c], 0xe
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0e
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1B: je 0x587dc123
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 68 1C 06 00 00: push 0x61c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 86 00 00 00: push 0x86
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 E1 B7 03 00: call 0x58817900
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dc125
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE C8 0D 00 00: mov dword ptr [esi + 0xdc8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA 38 2B 00 00: mov edx, 0x2b38
        __asm _emit 0xba
        __asm _emit 0x38
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dc148
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 08 6E 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dc155
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 8B 6D 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6d
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C8 0D 00 00: mov eax, dword ptr [esi + 0xdc8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x0d
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
        ; Exact mapped bytes 68 94 00 00 00: push 0x94
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E0 0A 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 0F: mov byte ptr [esp + 0x12c], 0xf
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1E: je 0x587dc19f
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 1C 06 00 00: push 0x61c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 03 00 00: push 0x300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 85 E8 0D 00: call 0x588baa20
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dc1a1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE A8 0D 00 00: mov dword ptr [esi + 0xda8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA 8C 04 00 00: mov edx, 0x48c
        __asm _emit 0xba
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dc1c4
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 8C 6D 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x6d
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dc1d1
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 0F 6D 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6d
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 A8 0D 00 00: mov eax, dword ptr [esi + 0xda8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x0d
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
        ; Exact mapped bytes 68 84 06 00 00: push 0x684
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 64 0A 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 10: mov byte ptr [esp + 0x12c], 0x10
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 12: je 0x587dc20f
        __asm _emit 0x74
        __asm _emit 0x12
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
        ; Exact mapped bytes E8 A5 60 07 00: call 0x588522b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dc211
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE CC 0D 00 00: mov dword ptr [esi + 0xdcc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA 20 2F 00 00: mov edx, 0x2f20
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dc234
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1C 6D 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x6d
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dc241
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 9F 6C 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 89 9E D8 0D 00 00: mov dword ptr [esi + 0xdd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 00 0A 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 11: mov byte ptr [esp + 0x12c], 0x11
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 41: je 0x587dc2a2
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 0A: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 16: jle 0x587dc286
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc286
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 02 00 00: add ecx, 0x280
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc288
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 28 04 00 00: push 0x428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 30 01 00 00: push 0x130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 D8 00 00 00: push 0xd8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 90 87 F5 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc2a4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 DC 0D 00 00: mov dword ptr [esi + 0xddc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 09 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 12: mov byte ptr [esp + 0x12c], 0x12
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 41: je 0x587dc30c
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 0B: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        ; Exact mapped bytes 7E 16: jle 0x587dc2f0
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc2f0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 02 00 00: add edx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc2f2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 68 28 04 00 00: push 0x428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 30 01 00 00: push 0x130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 D8 00 00 00: push 0xd8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 26 87 F5 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc30e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D BE E0 0D 00 00: lea edi, [esi + 0xde0]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 2A 09 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 13: mov byte ptr [esp + 0x12c], 0x13
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x587dc377
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A9 60 01 00 00: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587dc35b
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc35b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 00 03 00 00: add ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc35d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 28 04 00 00: push 0x428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 28 02 00 00: push 0x228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 BB 86 F5 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc379
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E4 0D 00 00: mov dword ptr [esi + 0xde4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C1 08 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 14: mov byte ptr [esp + 0x12c], 0x14
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 41: je 0x587dc3e1
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 0D: cmp dword ptr [ecx + 0x160], 0xd
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 7E 16: jle 0x587dc3c5
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc3c5
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 40 03 00 00: add edx, 0x340
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc3c7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 68 28 04 00 00: push 0x428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 28 02 00 00: push 0x228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 51 86 F5 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc3e3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E8 0D 00 00: mov dword ptr [esi + 0xde8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 57 08 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 15: mov byte ptr [esp + 0x12c], 0x15
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3E: je 0x587dc448
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 0E: cmp dword ptr [ecx + 0x160], 0xe
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0e
        ; Exact mapped bytes 7E 16: jle 0x587dc42f
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc42f
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 03 00 00: add ecx, 0x380
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc431
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 28 04 00 00: push 0x428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 26 02 00 00: push 0x226
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 78: push 0x78
        __asm _emit 0x6a
        __asm _emit 0x78
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 EA 85 F5 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc44a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 EC 0D 00 00: mov dword ptr [esi + 0xdec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F0 07 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x07
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 16: mov byte ptr [esp + 0x12c], 0x16
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3E: je 0x587dc4af
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 0F: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 7E 16: jle 0x587dc496
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc496
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 03 00 00: add edx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc498
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 68 28 04 00 00: push 0x428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 26 02 00 00: push 0x226
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 78: push 0x78
        __asm _emit 0x6a
        __asm _emit 0x78
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 83 85 F5 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc4b1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F0 0D 00 00: mov dword ptr [esi + 0xdf0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 89 07 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 17: mov byte ptr [esp + 0x12c], 0x17
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 41: je 0x587dc519
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 10: cmp dword ptr [ecx + 0x160], 0x10
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 7E 16: jle 0x587dc4fd
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc4fd
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 00 04 00 00: add ecx, 0x400
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc4ff
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 28 04 00 00: push 0x428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 02 00 00: push 0x2b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 18 02 00 00: push 0x218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 19 85 F5 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc51b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F4 0D 00 00: mov dword ptr [esi + 0xdf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1F 07 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 18: mov byte ptr [esp + 0x12c], 0x18
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 41: je 0x587dc583
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 11: cmp dword ptr [ecx + 0x160], 0x11
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        ; Exact mapped bytes 7E 16: jle 0x587dc567
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc567
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 40 04 00 00: add edx, 0x440
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc569
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 68 28 04 00 00: push 0x428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 02 00 00: push 0x2b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 18 02 00 00: push 0x218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AF 84 F5 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc585
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F8 0D 00 00: mov dword ptr [esi + 0xdf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B EF: mov ebp, edi
        __asm _emit 0x8b
        __asm _emit 0xef
        ; Exact mapped bytes C7 44 24 14 04 00 00 00: mov dword ptr [esp + 0x14], 4
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 FC: mov eax, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xfc
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
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 5F 67 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x67
        __asm _emit 0x12
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
        ; Exact mapped bytes E8 52 67 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x67
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 08: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x08
        ; Exact mapped bytes 83 C5 08: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x08
        ; Exact mapped bytes 83 6C 24 14 01: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 75 C5: jne 0x587dc5a0
        __asm _emit 0x75
        __asm _emit 0xc5
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 6C 06 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 19: mov byte ptr [esp + 0x12c], 0x19
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1A: je 0x587dc60f
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 F0 00 00 00: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 54 01 00 00: push 0x154
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 15 0A 0D 00: call 0x588ad020
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dc611
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE D0 0D 00 00: mov dword ptr [esi + 0xdd0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 D8 3A 00 00: mov eax, 0x3ad8
        __asm _emit 0xb8
        __asm _emit 0xd8
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dc634
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1C 69 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x69
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dc641
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 9F 68 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 00 00 00: push 0xe8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 06 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 1A: mov byte ptr [esp + 0x12c], 0x1a
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 16: je 0x587dc674
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 36 03 00 00: push 0x336
        __asm _emit 0x68
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 20 20 07 00: call 0x5884e690
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dc676
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes B9 D4 2A 00 00: mov ecx, 0x2ad4
        __asm _emit 0xb9
        __asm _emit 0xd4
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE D4 0D 00 00: mov dword ptr [esi + 0xdd4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x0d
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
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dc699
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B7 68 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dc6a6
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 3A 68 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9E 40 10 00 00: mov byte ptr [esi + 0x1040], bl
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 98 05 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 1B: mov byte ptr [esp + 0x12c], 0x1b
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1b
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 66: je 0x587dc72f
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 99 60 01 00 00: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 10: jle 0x587dc6e7
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x587dc6e7
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B B9 90 01 00 00: mov edi, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc6e9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 70 01 00 00 19: cmp dword ptr [ecx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        ; Exact mapped bytes 7E 13: jle 0x587dc70b
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 99 94 01 00 00: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dc70b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 91 94 01 00 00: mov edx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 52 64: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x64
        ; Exact mapped bytes EB 02: jmp 0x587dc70d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 21 01 00 00: push 0x121
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 0C 02 00 00: push 0x20c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 3F 01 00 00: push 0x13f
        __asm _emit 0x68
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 73 16 F8 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc731
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 90 05 00 00: mov dword ptr [esi + 0x590], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 01: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x587dc760
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dc760
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 40: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x40
        ; Exact mapped bytes EB 02: jmp 0x587dc762
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B4 15 F8 FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D8 04 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 1C: mov byte ptr [esp + 0x12c], 0x1c
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1c
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 6A: je 0x587dc7f3
        __asm _emit 0x74
        __asm _emit 0x6a
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 02: cmp dword ptr [ecx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 7E 13: jle 0x587dc7ab
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dc7ab
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EA 80: sub edx, -0x80
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x80
        ; Exact mapped bytes EB 02: jmp 0x587dc7ad
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 70 01 00 00 17: cmp dword ptr [ecx + 0x170], 0x17
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        ; Exact mapped bytes 7E 13: jle 0x587dc7cf
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 99 94 01 00 00: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dc7cf
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 89 94 01 00 00: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 5C: mov ecx, dword ptr [ecx + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x5c
        ; Exact mapped bytes EB 02: jmp 0x587dc7d1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 21 01 00 00: push 0x121
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 94 01 00 00: push 0x194
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 7D 02 00 00: push 0x27d
        __asm _emit 0x68
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AF 15 F8 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc7f5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 8C 05 00 00: mov dword ptr [esi + 0x58c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 03: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587dc827
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc827
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 00 00 00: add edx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc829
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 ED 14 F8 FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x14
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 14 04 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 1D: mov byte ptr [esp + 0x12c], 0x1d
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1d
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 74: je 0x587dc8c3
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 4A 01 00 00: cmp dword ptr [eax + 0x164], 0x14a
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587dc876
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc876
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 28 05 00 00: mov ebp, dword ptr [eax + 0x528]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc878
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 1C 06 00 00: push 0x61c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 11: push 0x11
        __asm _emit 0x6a
        __asm _emit 0x11
        ; Exact mapped bytes 68 D4 00 00 00: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 12 69 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x69
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dc8c5
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x587dc8c5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE D4 04 00 00: mov dword ptr [esi + 0x4d4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 75 03 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 1E: mov byte ptr [esp + 0x12c], 0x1e
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1e
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 74: je 0x587dc962
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 49 01 00 00: cmp dword ptr [eax + 0x164], 0x149
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587dc915
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc915
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 24 05 00 00: mov ebp, dword ptr [eax + 0x524]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc917
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 1C 06 00 00: push 0x61c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 11: push 0x11
        __asm _emit 0x6a
        __asm _emit 0x11
        ; Exact mapped bytes 68 D4 00 00 00: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 73 68 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x68
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dc964
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x587dc964
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE D8 04 00 00: mov dword ptr [esi + 0x4d8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D3 02 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 1F: mov byte ptr [esp + 0x12c], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 4C: je 0x587dc9da
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 3C: cmp dword ptr [ecx + 0x160], 0x3c
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3c
        ; Exact mapped bytes 7E 16: jle 0x587dc9b3
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dc9b3
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 00 0F 00 00: add ecx, 0xf00
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dc9b5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 1C 06 00 00: push 0x61c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 46: push 0x46
        __asm _emit 0x6a
        __asm _emit 0x46
        ; Exact mapped bytes 68 F9 00 00 00: push 0xf9
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 C8 13 F8 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x13
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dc9dc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 DC 04 00 00: mov dword ptr [esi + 0x4dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 E0 04 00 00: lea eax, [esi + 0x4e0]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 22 00 00 00: mov ebp, 0x22
        __asm _emit 0xbd
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 4F 02 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 20: mov byte ptr [esp + 0x12c], 0x20
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2B: je 0x587dca3d
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 68 C8 00 00 00: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 F4 01 00 00: push 0x1f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 68 E6 00 00 00: push 0xe6
        __asm _emit 0x68
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 47 68 F5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dca3f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 3A: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 1C 06 00 00: mov eax, 0x61c
        __asm _emit 0xb8
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dca62
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 EE 64 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dca6f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 71 64 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 83 44 24 1C 04: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x04
        ; Exact mapped bytes 83 C5 0A: add ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x0a
        ; Exact mapped bytes 83 FD 54: cmp ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x54
        ; Exact mapped bytes 0F 8C 78 FF FF FF: jl 0x587dc9f8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E D8 04 00 00: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 90 62 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x62
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 D8 04 00 00: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D4 04 00 00: mov eax, dword ptr [esi + 0x4d4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 DC 04 00 00: mov eax, dword ptr [esi + 0x4dc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x04
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
        ; Exact mapped bytes 8D 86 E0 04 00 00: lea eax, [esi + 0x4e0]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 05 00 00 00: mov edx, 5
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 F3: jne 0x587dcac3
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 89 BE 00 05 00 00: mov dword ptr [esi + 0x500], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 01 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 21: mov byte ptr [esp + 0x12c], 0x21
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x21
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 74: je 0x587dcb66
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 3F: cmp dword ptr [eax + 0x164], 0x3f
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3f
        ; Exact mapped bytes 7E 16: jle 0x587dcb16
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dcb16
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA FC 00 00 00: mov ebp, dword ptr [edx + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dcb18
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 80 06 00 00: push 0x680
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 25 02 00 00: push 0x225
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 48 01 00 00: push 0x148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 6F 66 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dcb68
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x587dcb68
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE F4 04 00 00: mov dword ptr [esi + 0x4f4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D2 00 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 22: mov byte ptr [esp + 0x12c], 0x22
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 75: je 0x587dcc06
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 40: cmp dword ptr [eax + 0x164], 0x40
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 7E 16: jle 0x587dcbb5
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dcbb5
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 00 01 00 00: mov ebp, dword ptr [ecx + 0x100]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dcbb7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 1C 06 00 00: push 0x61c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 25 02 00 00: push 0x225
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 48 01 00 00: push 0x148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 D0 65 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x65
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2B: je 0x587dcc08
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
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x587dcc08
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 94 00 00 00: push 0x94
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE F8 04 00 00: mov dword ptr [esi + 0x4f8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2A 00 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x1a
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 23: mov byte ptr [esp + 0x12c], 0x23
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 30: je 0x587dcc67
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 68 D5 02 00 00: push 0x2d5
        __asm _emit 0x68
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 12 02 00 00: push 0x212
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 71 02 00 00: push 0x271
        __asm _emit 0x68
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 53 01 00 00: push 0x153
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 22: push 0x22
        __asm _emit 0x6a
        __asm _emit 0x22
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 4D D4 10 00: call 0x588ea0b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587dcc69
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 94 24 48 01 00 00: mov edx, dword ptr [esp + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE FC 04 00 00: mov dword ptr [esi + 0x4fc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 81 C2 A4 06 00 00: add edx, 0x6a4
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587dcc94
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 BC 62 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x62
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dcca1
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 3F 62 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x62
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F8 04 00 00: mov ecx, dword ptr [esi + 0x4f8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 6F 60 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x60
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F8 04 00 00: mov eax, dword ptr [esi + 0x4f8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F4 04 00 00: mov eax, dword ptr [esi + 0x4f4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 FC 04 00 00: mov eax, dword ptr [esi + 0x4fc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 75 FF 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 24: mov byte ptr [esp + 0x12c], 0x24
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 6D: je 0x587dcd59
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 2B: cmp dword ptr [ecx + 0x160], 0x2b
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2b
        ; Exact mapped bytes 7E 16: jle 0x587dcd11
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dcd11
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 0A 00 00: add edx, 0xac0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dcd13
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 70 01 00 00 19: cmp dword ptr [ecx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        ; Exact mapped bytes 7E 13: jle 0x587dcd35
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 99 94 01 00 00: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dcd35
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 89 94 01 00 00: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 64: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x64
        ; Exact mapped bytes EB 02: jmp 0x587dcd37
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 21 01 00 00: push 0x121
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FB 01 00 00: push 0x1fb
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 3B 02 00 00: push 0x23b
        __asm _emit 0x68
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 49 10 F8 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dcd5b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 88 05 00 00: mov dword ptr [esi + 0x588], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DF FE 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 25: mov byte ptr [esp + 0x12c], 0x25
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 7D: je 0x587dce01
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 2C: cmp dword ptr [eax + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2c
        ; Exact mapped bytes 7E 16: jle 0x587dcda8
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dcda8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 00 0B 00 00: add ebp, 0xb00
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dcdaa
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 88 05 00 00: mov eax, dword ptr [esi + 0x588]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 21 01 00 00: push 0x121
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 FB 01 00 00: push 0x1fb
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 3B 02 00 00: push 0x23b
        __asm _emit 0x68
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 D7 63 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x63
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dce03
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
        ; Exact mapped bytes EB 02: jmp 0x587dce03
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
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 94 05 00 00: mov dword ptr [esi + 0x594], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 04 5F 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 94 05 00 00: mov eax, dword ptr [esi + 0x594]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B 86 94 05 00 00: mov eax, dword ptr [esi + 0x594]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
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
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 0D FE 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 26: mov byte ptr [esp + 0x12c], 0x26
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 7F 00 00 00: je 0x587dced9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 88 05 00 00: mov eax, dword ptr [esi + 0x588]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B8 46 A2 58: mov edx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 BA 64 01 00 00 15 01 00 00: cmp dword ptr [edx + 0x164], 0x115
        __asm _emit 0x81
        __asm _emit 0xba
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 7E 16: jle 0x587dce8e
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 9A 8C 01 00 00: cmp dword ptr [edx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dce8e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 92 8C 01 00 00: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 54 04 00 00: mov ebp, dword ptr [edx + 0x454]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dce90
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 26 01 00 00: push 0x126
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C1 03: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 FC 62 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x62
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dcedb
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x587dcedb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE CC 05 00 00: mov dword ptr [esi + 0x5cc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E CC 05 00 00: mov ecx, dword ptr [esi + 0x5cc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1F 5E 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 46 FD 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 27: mov byte ptr [esp + 0x12c], 0x27
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x27
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 79: je 0x587dcf96
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 86 8C 05 00 00: mov eax, dword ptr [esi + 0x58c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B8 46 A2 58: mov edx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 BA 64 01 00 00 13: cmp dword ptr [edx + 0x164], 0x13
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 7E 13: jle 0x587dcf4b
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 9A 8C 01 00 00: cmp dword ptr [edx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dcf4b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 92 8C 01 00 00: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6A 4C: mov ebp, dword ptr [edx + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x6a
        __asm _emit 0x4c
        ; Exact mapped bytes EB 02: jmp 0x587dcf4d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 26 01 00 00: push 0x126
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C1 03: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 3F 62 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x62
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dcf98
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x587dcf98
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE C4 05 00 00: mov dword ptr [esi + 0x5c4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E C4 05 00 00: mov ecx, dword ptr [esi + 0x5c4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 5D 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5d
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C4 05 00 00: mov eax, dword ptr [esi + 0x5c4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x05
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
        ; Exact mapped bytes E8 7A FC 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 28: mov byte ptr [esp + 0x12c], 0x28
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 7A: je 0x587dd063
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 86 90 05 00 00: mov eax, dword ptr [esi + 0x590]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B8 46 A2 58: mov edx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 BA 64 01 00 00 0C: cmp dword ptr [edx + 0x164], 0xc
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 7E 13: jle 0x587dd017
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 9A 8C 01 00 00: cmp dword ptr [edx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587dd017
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 92 8C 01 00 00: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6A 30: mov ebp, dword ptr [edx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes EB 02: jmp 0x587dd019
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 26 01 00 00: push 0x126
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C1 05: add ecx, 5
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x05
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 72 61 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x61
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dd065
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x587dd065
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE C8 05 00 00: mov dword ptr [esi + 0x5c8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E C8 05 00 00: mov ecx, dword ptr [esi + 0x5c8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 95 5C 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C8 05 00 00: mov eax, dword ptr [esi + 0x5c8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x05
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
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AA FB 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 29: mov byte ptr [esp + 0x12c], 0x29
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x29
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 4F: je 0x587dd106
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 03: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 7E 16: jle 0x587dd0dc
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dd0dc
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 C0 00 00 00: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dd0de
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 27 04 00 00: push 0x427
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A8 00 00 00: push 0xa8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 9D 00 00 00: push 0x9d
        __asm _emit 0x68
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 9C 0C F8 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dd108
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 98 05 00 00: mov dword ptr [esi + 0x598], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF 5B 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5b
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 98 05 00 00: mov eax, dword ptr [esi + 0x598]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x05
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
        ; Exact mapped bytes B8 34 00 00 00: mov eax, 0x34
        __asm _emit 0xb8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes 89 5C 24 50: mov dword ptr [esp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 89 44 24 50: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 89 5C 24 60: mov dword ptr [esp + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 89 44 24 60: mov dword ptr [esp + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 89 5C 24 34: mov dword ptr [esp + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 5C 24 44: mov dword ptr [esp + 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes BA 36 00 00 00: mov edx, 0x36
        __asm _emit 0xba
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 39 00 00 00: mov eax, 0x39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 35 00 00 00: mov ecx, 0x35
        __asm _emit 0xb9
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 78: mov dword ptr [esp + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 89 9C 24 80 00 00 00: mov dword ptr [esp + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 4C: mov dword ptr [esp + 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 89 BC 24 A0 00 00 00: mov dword ptr [esp + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 37 00 00 00: mov edi, 0x37
        __asm _emit 0xbf
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 78: mov dword ptr [esp + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 89 84 24 80 00 00 00: mov dword ptr [esp + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 0B 00 00 00: mov eax, 0xb
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 5C: mov dword ptr [esp + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 89 5C 24 64: mov dword ptr [esp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 89 5C 24 40: mov dword ptr [esp + 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 5C 24 48: mov dword ptr [esp + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 89 54 24 5C: mov dword ptr [esp + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 89 54 24 64: mov dword ptr [esp + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes BD 38 00 00 00: mov ebp, 0x38
        __asm _emit 0xbd
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 40: mov dword ptr [esp + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 54 24 48: mov dword ptr [esp + 0x48], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes BA 44 00 00 00: mov edx, 0x44
        __asm _emit 0xba
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 54: mov dword ptr [esp + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 89 5C 24 58: mov dword ptr [esp + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 89 9C 24 A4 00 00 00: mov dword ptr [esp + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 B4 00 00 00: mov dword ptr [esp + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 38: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 5C 24 3C: mov dword ptr [esp + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 5C 24 6C: mov dword ptr [esp + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x6c
        ; Exact mapped bytes 89 5C 24 7C: mov dword ptr [esp + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes 89 4C 24 54: mov dword ptr [esp + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 89 4C 24 58: mov dword ptr [esp + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 89 BC 24 A4 00 00 00: mov dword ptr [esp + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 24 B4 00 00 00: mov dword ptr [esp + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 38: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 4C 24 3C: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 7C 24 6C: mov dword ptr [esp + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x6c
        ; Exact mapped bytes 89 7C 24 7C: mov dword ptr [esp + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes 89 84 24 E8 00 00 00: mov dword ptr [esp + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 04 01 00 00: mov dword ptr [esp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 41 00 00 00: mov ecx, 0x41
        __asm _emit 0xb9
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 40 00 00 00: mov edi, 0x40
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 43 00 00 00: mov eax, 0x43
        __asm _emit 0xb8
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 A8 00 00 00: mov dword ptr [esp + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 AC 00 00 00: mov dword ptr [esp + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 B0 00 00 00: mov dword ptr [esp + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 B8 00 00 00: mov dword ptr [esp + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 70: mov dword ptr [esp + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 89 5C 24 74: mov dword ptr [esp + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 89 94 24 0C 01 00 00: mov dword ptr [esp + 0x10c], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 10 01 00 00: mov dword ptr [esp + 0x110], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AC 24 A8 00 00 00: mov dword ptr [esp + 0xa8], ebp
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AC 24 AC 00 00 00: mov dword ptr [esp + 0xac], ebp
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 24 B0 00 00 00 39 00 00 00: mov dword ptr [esp + 0xb0], 0x39
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 24 B8 00 00 00 39 00 00 00: mov dword ptr [esp + 0xb8], 0x39
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 30 FF FF FF FF: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 44 24 68 FF FF FF FF: mov dword ptr [esp + 0x68], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 6C 24 70: mov dword ptr [esp + 0x70], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 89 6C 24 74: mov dword ptr [esp + 0x74], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 89 BC 24 EC 00 00 00: mov dword ptr [esp + 0xec], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 08 01 00 00: mov dword ptr [esp + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 F0 00 00 00: mov dword ptr [esp + 0xf0], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 F4 00 00 00: mov dword ptr [esp + 0xf4], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 42 00 00 00: mov edx, 0x42
        __asm _emit 0xba
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 45 00 00 00: mov ecx, 0x45
        __asm _emit 0xb9
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 00 00 00: push 0xb8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 FC 00 00 00: mov dword ptr [esp + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 18 01 00 00: mov dword ptr [esp + 0x118], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 24 00 01 00 00: mov dword ptr [esp + 0x100], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 1C 01 00 00: mov dword ptr [esp + 0x11c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 04 01 00 00: mov dword ptr [esp + 0x104], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 20 01 00 00: mov dword ptr [esp + 0x120], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 61 F9 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 2A: mov byte ptr [esp + 0x12c], 0x2a
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1D: je 0x587dd31d
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 24 02 00 00: push 0x224
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 79: push 0x79
        __asm _emit 0x6a
        __asm _emit 0x79
        ; Exact mapped bytes 68 C0 01 00 00: push 0x1c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 15: push 0x15
        __asm _emit 0x6a
        __asm _emit 0x15
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F5 2C F7 FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dd31f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 54 24 30: lea edx, [esp + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 86 9C 05 00 00: mov dword ptr [esi + 0x59c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4C 24 50: lea ecx, [esp + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 B8 46 A2 58: mov edx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 9C 24 40 01 00 00: mov byte ptr [esp + 0x140], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E 2E F7 FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 9C 05 00 00: mov eax, dword ptr [esi + 0x59c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 00 00 00: push 0xb8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B8 B4 00 00 00: mov dword ptr [eax + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 F8 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf8
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 2B: mov byte ptr [esp + 0x12c], 0x2b
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2b
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 23: je 0x587dd3a3
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 C8 02 00 00: push 0x2c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 12 01 00 00: push 0x112
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 64 02 00 00: push 0x264
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 AE 00 00 00: push 0xae
        __asm _emit 0x68
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 6F 2C F7 FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dd3a5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 4C 24 68: lea ecx, [esp + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 86 A0 05 00 00: mov dword ptr [esi + 0x5a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 A4 00 00 00: lea edx, [esp + 0xa4]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 9C 24 40 01 00 00: mov byte ptr [esp + 0x140], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C5 2D F7 FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2d
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 A0 05 00 00: mov eax, dword ptr [esi + 0x5a0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 00 00 00: push 0xb8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B8 B4 00 00 00: mov dword ptr [eax + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5D F8 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 2C: mov byte ptr [esp + 0x12c], 0x2c
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2c
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 23: je 0x587dd427
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 64 03 00 00: push 0x364
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 00 00 00: push 0x98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 03 00 00: push 0x300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 EB 2B F7 FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dd429
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A DE: push -0x22
        __asm _emit 0x6a
        __asm _emit 0xde
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A4 05 00 00: mov dword ptr [esi + 0x5a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 21 5A 12 00: call 0x58902e60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5a
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A4 05 00 00: mov ecx, dword ptr [esi + 0x5a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A D8: push -0x28
        __asm _emit 0x6a
        __asm _emit 0xd8
        ; Exact mapped bytes E8 14 5A 12 00: call 0x58902e60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5a
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 E8 00 00 00: lea edx, [esp + 0xe8]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E A4 05 00 00: mov ecx, dword ptr [esi + 0x5a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2A 2D F7 FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x2d
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 A4 05 00 00: mov eax, dword ptr [esi + 0x5a4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 00 00 00: push 0xb8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B8 B4 00 00 00: mov dword ptr [eax + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C2 F7 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf7
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 2D: mov byte ptr [esp + 0x12c], 0x2d
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2d
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 23: je 0x587dd4c2
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 01 00 00: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 0E 04 00 00: push 0x40e
        __asm _emit 0x68
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 34 01 00 00: push 0x134
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 AA 03 00 00: push 0x3aa
        __asm _emit 0x68
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 50 2B F7 FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dd4c4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8C 24 04 01 00 00: lea ecx, [esp + 0x104]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 89 86 A8 05 00 00: mov dword ptr [esi + 0x5a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 9C 24 40 01 00 00: mov byte ptr [esp + 0x140], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A8 2C F7 FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 A8 05 00 00: mov eax, dword ptr [esi + 0x5a8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 89 B8 B4 00 00 00: mov dword ptr [eax + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 43 F7 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 2E: mov byte ptr [esp + 0x12c], 0x2e
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2e
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 74: je 0x587dd594
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 81 01 00 00: cmp dword ptr [eax + 0x164], 0x181
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587dd547
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dd547
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 04 06 00 00: mov ebp, dword ptr [edx + 0x604]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dd549
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 E9 03 00 00: push 0x3e9
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 79: push 0x79
        __asm _emit 0x6a
        __asm _emit 0x79
        ; Exact mapped bytes 68 97 02 00 00: push 0x297
        __asm _emit 0x68
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 41 5C 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5c
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dd596
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x587dd596
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE AC 05 00 00: mov dword ptr [esi + 0x5ac], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A4 F6 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf6
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 2F: mov byte ptr [esp + 0x12c], 0x2f
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2f
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 78: je 0x587dd637
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 81 01 00 00: cmp dword ptr [eax + 0x164], 0x181
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587dd5e6
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dd5e6
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 04 06 00 00: mov ebp, dword ptr [ecx + 0x604]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dd5e8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 E9 03 00 00: push 0x3e9
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 7B 01 00 00: push 0x17b
        __asm _emit 0x68
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 50 03 00 00: push 0x350
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 9F 5B 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x5b
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2B: je 0x587dd639
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
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x587dd639
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE B0 05 00 00: mov dword ptr [esi + 0x5b0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 F6 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf6
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 30: mov byte ptr [esp + 0x12c], 0x30
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x30
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 74: je 0x587dd6d6
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 82 01 00 00: cmp dword ptr [eax + 0x164], 0x182
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587dd689
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dd689
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 08 06 00 00: mov ebp, dword ptr [eax + 0x608]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dd68b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
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
        ; Exact mapped bytes 6A 79: push 0x79
        __asm _emit 0x6a
        __asm _emit 0x79
        ; Exact mapped bytes 68 97 02 00 00: push 0x297
        __asm _emit 0x68
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 FF 5A 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5a
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dd6d8
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x587dd6d8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE B4 05 00 00: mov dword ptr [esi + 0x5b4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 F5 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 31: mov byte ptr [esp + 0x12c], 0x31
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x31
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 77: je 0x587dd778
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 82 01 00 00: cmp dword ptr [eax + 0x164], 0x182
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587dd728
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587dd728
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 08 06 00 00: mov ebp, dword ptr [eax + 0x608]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587dd72a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
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
        ; Exact mapped bytes 68 7B 01 00 00: push 0x17b
        __asm _emit 0x68
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 50 03 00 00: push 0x350
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 5D 5A 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x5a
        __asm _emit 0x12
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
        ; Exact mapped bytes 74 2A: je 0x587dd77a
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x587dd77a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E AC 05 00 00: mov ecx, dword ptr [esi + 0x5ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE B8 05 00 00: mov dword ptr [esi + 0x5b8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 89 55 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 AC 05 00 00: mov eax, dword ptr [esi + 0x5ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B 8E B0 05 00 00: mov ecx, dword ptr [esi + 0x5b0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A 55 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x55
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 B0 05 00 00: mov eax, dword ptr [esi + 0x5b0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B 8E B4 05 00 00: mov ecx, dword ptr [esi + 0x5b4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 4B 55 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x55
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 B4 05 00 00: mov eax, dword ptr [esi + 0x5b4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B 8E B8 05 00 00: mov ecx, dword ptr [esi + 0x5b8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 2C 55 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x55
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 B8 05 00 00: mov eax, dword ptr [esi + 0x5b8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x05
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
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 44 F4 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 32: mov byte ptr [esp + 0x12c], 0x32
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2D: je 0x587dd84a
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 68 B4 00 00 00: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 3E 03 00 00: push 0x33e
        __asm _emit 0x68
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 82 00 00 00: push 0x82
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A8 02 00 00: push 0x2a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 38 5A F5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5a
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dd84c
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
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 BC 05 00 00: mov dword ptr [esi + 0x5bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BB 54 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 BC 05 00 00: mov eax, dword ptr [esi + 0x5bc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 30 C0 98 58: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 E8 BA 99 58: push 0x5899bae8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C7 40 68 01 01 01 00: mov dword ptr [eax + 0x68], 0x10101
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 8E BC 05 00 00: mov ecx, dword ptr [esi + 0x5bc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 33: je 0x587dd8c2
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2F: je 0x587dd8c2
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8D 87 7E FF FF 7F: lea eax, [edi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 11: je 0x587dd8bb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 04 0A: mov al, byte ptr [edx + ecx]
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x0a
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 74 0A: je 0x587dd8bb
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 01: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x587dd8a0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587dd8bf
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 75 01: jne 0x587dd8c0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 88 19: mov byte ptr [ecx], bl
        __asm _emit 0x88
        __asm _emit 0x19
        ; Exact mapped bytes 8B 86 BC 05 00 00: mov eax, dword ptr [esi + 0x5bc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B BE BC 05 00 00: mov edi, dword ptr [esi + 0x5bc]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA EA 03 00 00: mov edx, 0x3ea
        __asm _emit 0xba
        __asm _emit 0xea
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
        ; Exact mapped bytes 74 06: je 0x587dd8ed
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 63 56 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x56
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dd8fa
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 E6 55 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x55
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 4D F3 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf3
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 33: mov byte ptr [esp + 0x12c], 0x33
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2D: je 0x587dd941
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 68 B6 01 00 00: push 0x1b6
        __asm _emit 0x68
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 F7 03 00 00: push 0x3f7
        __asm _emit 0x68
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 84 01 00 00: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 61 03 00 00: push 0x361
        __asm _emit 0x68
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 41 59 F5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x59
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dd943
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
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C0 05 00 00: mov dword ptr [esi + 0x5c0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C4 53 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x53
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C0 05 00 00: mov eax, dword ptr [esi + 0x5c0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 BA 99 58: push 0x5899bae8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C7 40 68 01 01 01 00: mov dword ptr [eax + 0x68], 0x10101
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 8E C0 05 00 00: mov ecx, dword ptr [esi + 0x5c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 32: je 0x587dd9b2
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2E: je 0x587dd9b2
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8D 87 7E FF FF 7F: lea eax, [edi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 11: je 0x587dd9ab
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 04 0A: mov al, byte ptr [edx + ecx]
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x0a
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 74 0A: je 0x587dd9ab
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 01: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x587dd990
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587dd9af
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 75 01: jne 0x587dd9b0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 88 19: mov byte ptr [ecx], bl
        __asm _emit 0x88
        __asm _emit 0x19
        ; Exact mapped bytes 8B 86 C0 05 00 00: mov eax, dword ptr [esi + 0x5c0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B BE C0 05 00 00: mov edi, dword ptr [esi + 0x5c0]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA EA 03 00 00: mov edx, 0x3ea
        __asm _emit 0xba
        __asm _emit 0xea
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
        ; Exact mapped bytes 74 06: je 0x587dd9dd
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 73 55 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x55
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587dd9ea
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F6 54 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes B8 06 00 00 00: mov eax, 6
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 3A 00 00 00: mov ecx, 0x3a
        __asm _emit 0xb9
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 3B 00 00 00: mov edx, 0x3b
        __asm _emit 0xba
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes 89 9C 24 88 00 00 00: mov dword ptr [esp + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 8C 00 00 00: mov dword ptr [esp + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 90 00 00 00: mov dword ptr [esp + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 94 00 00 00: mov dword ptr [esp + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 98 00 00 00: mov dword ptr [esp + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 9C 00 00 00: mov dword ptr [esp + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 C4 00 00 00: mov dword ptr [esp + 0xc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 C8 00 00 00: mov dword ptr [esp + 0xc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 CC 00 00 00: mov dword ptr [esp + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 D0 00 00 00: mov dword ptr [esp + 0xd0], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 D4 00 00 00: mov dword ptr [esp + 0xd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 D8 00 00 00: mov dword ptr [esp + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 00 00 00: push 0xb8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 24 88 00 00 00: mov dword ptr [esp + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 8C 00 00 00: mov dword ptr [esp + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 90 00 00 00: mov dword ptr [esp + 0x90], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 94 00 00 00: mov dword ptr [esp + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 98 00 00 00: mov dword ptr [esp + 0x98], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 9C 00 00 00: mov dword ptr [esp + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 A0 00 00 00: mov dword ptr [esp + 0xa0], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 24 C4 00 00 00: mov dword ptr [esp + 0xc4], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 C8 00 00 00: mov dword ptr [esp + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 CC 00 00 00: mov dword ptr [esp + 0xcc], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 D0 00 00 00: mov dword ptr [esp + 0xd0], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 D4 00 00 00: mov dword ptr [esp + 0xd4], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 D8 00 00 00: mov dword ptr [esp + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 DC 00 00 00: mov dword ptr [esp + 0xdc], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 92 F1 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf1
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 34: mov byte ptr [esp + 0x12c], 0x34
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x34
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 20: je 0x587ddaef
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 68 08 01 00 00: push 0x108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B2 02 00 00: push 0x2b2
        __asm _emit 0x68
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A6 00 00 00: push 0xa6
        __asm _emit 0x68
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 4E 02 00 00: push 0x24e
        __asm _emit 0x68
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 42: push 0x42
        __asm _emit 0x6a
        __asm _emit 0x42
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 23 25 F7 FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x25
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587ddaf1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8C 24 C0 00 00 00: lea ecx, [esp + 0xc0]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 86 D0 05 00 00: mov dword ptr [esi + 0x5d0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 88 00 00 00: lea edx, [esp + 0x88]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 9C 24 40 01 00 00: mov byte ptr [esp + 0x140], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 76 26 F7 FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 D0 05 00 00: mov eax, dword ptr [esi + 0x5d0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 80 B4 00 00 00 01 00 00 00: mov dword ptr [eax + 0xb4], 1
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0A F1 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf1
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 35: mov byte ptr [esp + 0x12c], 0x35
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x35
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x587ddb97
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 33: cmp dword ptr [ecx + 0x160], 0x33
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        ; Exact mapped bytes 7E 16: jle 0x587ddb7c
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587ddb7c
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 C0 0C 00 00: add ecx, 0xcc0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587ddb7e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 FE 00 00 00: push 0xfe
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 1A 02 00 00: push 0x21a
        __asm _emit 0x68
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0D: push 0xd
        __asm _emit 0x6a
        __asm _emit 0x0d
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0B 02 F8 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587ddb99
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F8 05 00 00: mov dword ptr [esi + 0x5f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A1 F0 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 36: mov byte ptr [esp + 0x12c], 0x36
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x36
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3B: je 0x587ddbfb
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 8C 24 3C 01 00 00: mov ecx, dword ptr [esp + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 91 4F 02 00 00: lea edx, [ecx + 0x24f]
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 94 24 48 01 00 00: mov edx, dword ptr [esp + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7A 64: lea edi, [edx + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0x64
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 81 C1 3B 02 00 00: add ecx, 0x23b
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C2 38: add edx, 0x38
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x38
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
        ; Exact mapped bytes E8 89 56 F5 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x587ddbfd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE F4 05 00 00: mov dword ptr [esi + 0x5f4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA 50 27 00 00: mov edx, 0x2750
        __asm _emit 0xba
        __asm _emit 0x50
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 06: je 0x587ddc20
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 30 53 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x53
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x587ddc2d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B3 52 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x52
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 6A 5C: push 0x5c
        __asm _emit 0x6a
        __asm _emit 0x5c
        ; Exact mapped bytes E8 1A F0 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf0
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 37: mov byte ptr [esp + 0x12c], 0x37
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x37
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 41: je 0x587ddc88
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 29: cmp dword ptr [ecx + 0x164], 0x29
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x29
        ; Exact mapped bytes 7E 16: jle 0x587ddc6c
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587ddc6c
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 A4 00 00 00: mov edx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587ddc6e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 68 C4 03 00 00: push 0x3c4
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 65 01 00 00: push 0x165
        __asm _emit 0x68
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 BB 01 00 00: push 0x1bb
        __asm _emit 0x68
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 9A 03 13 00: call 0x5890e020
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587ddc8a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 78 04 00 00: mov dword ptr [esi + 0x478], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7D 50 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x50
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 04 00 00: mov eax, dword ptr [esi + 0x478]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x04
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
        ; Exact mapped bytes 8B 86 78 04 00 00: mov eax, dword ptr [esi + 0x478]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x04
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
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 83 EF 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 38: mov byte ptr [esp + 0x12c], 0x38
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x38
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 19: je 0x587ddcf7
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 6A 4A: push 0x4a
        __asm _emit 0x6a
        __asm _emit 0x4a
        ; Exact mapped bytes 68 BC 01 00 00: push 0x1bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1B 08 F9 FF: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587ddcf9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B4 00 00 00: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 35 EF 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xef
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 39: mov byte ptr [esp + 0x12c], 0x39
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x39
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 19: je 0x587ddd45
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 6A 4F: push 0x4f
        __asm _emit 0x6a
        __asm _emit 0x4f
        ; Exact mapped bytes 68 BC 01 00 00: push 0x1bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 CD 07 F9 FF: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x07
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587ddd47
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
        ; Exact mapped bytes 89 86 B8 00 00 00: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
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
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EA EE 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xee
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 3A: mov byte ptr [esp + 0x12c], 0x3a
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3a
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 34: je 0x587dddad
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 86 B8 00 00 00: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 26: mov dx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 0A: add dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0a
        ; Exact mapped bytes 0F B7 CA: movzx ecx, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xca
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 FC FF FF: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 01 54 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x12
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
        ; Exact mapped bytes EB 02: jmp 0x587dddaf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 40 03 00 00: mov dword ptr [esi + 0x340], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 88 EE 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xee
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 3B: mov byte ptr [esp + 0x12c], 0x3b
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3b
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 29: je 0x587dde02
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 96 B8 00 00 00: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4A 26: mov cx, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 0A: add cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0a
        ; Exact mapped bytes 0F B7 C9: movzx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 20 03 00 00: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 10 07 F9 FF: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587dde04
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 44 03 00 00: mov dword ptr [esi + 0x344], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF BF 00 00: mov edx, 0xbfff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 44 03 00 00: mov eax, dword ptr [esi + 0x344]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x03
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
        ; Exact mapped bytes 8B 8E 44 03 00 00: mov ecx, dword ptr [esi + 0x344]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AB 4E 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x4e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 EE 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xee
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 3C: mov byte ptr [esp + 0x12c], 0x3c
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3c
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 24: je 0x587dde75
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 BC 01 00 00: push 0x1bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 39 53 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x53
        __asm _emit 0x12
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
        ; Exact mapped bytes EB 02: jmp 0x587dde77
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE BC 00 00 00: mov dword ptr [esi + 0xbc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C0 ED 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xed
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 3D: mov byte ptr [esp + 0x12c], 0x3d
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3d
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 19: je 0x587ddeba
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 68 BC 01 00 00: push 0x1bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 58 06 F9 FF: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587ddebc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 50 03 00 00: mov dword ptr [esi + 0x350], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x03
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
        ; Exact mapped bytes 8B 86 50 03 00 00: mov eax, dword ptr [esi + 0x350]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x03
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
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 63 ED 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 3E: mov byte ptr [esp + 0x12c], 0x3e
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3e
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 19: je 0x587ddf17
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 68 BC 01 00 00: push 0x1bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 FB 05 F9 FF: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587ddf19
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 54 03 00 00: mov dword ptr [esi + 0x354], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
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
        ; Exact mapped bytes 8B 86 54 03 00 00: mov eax, dword ptr [esi + 0x354]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
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
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 09 ED 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xed
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 3F: mov byte ptr [esp + 0x12c], 0x3f
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3f
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 2A: je 0x587ddf84
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 86 B8 00 00 00: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 FC FF FF: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 2A 52 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x52
        __asm _emit 0x12
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
        ; Exact mapped bytes EB 02: jmp 0x587ddf86
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE 58 04 00 00: mov dword ptr [esi + 0x458], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA F0 FF 00 00: mov edx, 0xfff0
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE C0 02 00 00: lea edi, [esi + 0x2c0]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 14 20 00 00 00: mov dword ptr [esp + 0x14], 0x20
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 D9 9B FF FF: call 0x587d7b90
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 89 87 44 02 00 00: mov dword ptr [edi + 0x244], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8A EC 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xec
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 20: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 84 24 2C 01 00 00 40: mov byte ptr [esp + 0x12c], 0x40
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 37: je 0x587de010
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 86 B8 00 00 00: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 09: add cx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x09
        ; Exact mapped bytes 0F B7 C9: movzx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 FC FF FF: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 A1 51 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x51
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 00 74 CA 98 58: mov dword ptr [ebp], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5D 50: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x50
        ; Exact mapped bytes 89 5D 54: mov dword ptr [ebp + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x54
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes EB 02: jmp 0x587de012
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
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 0F: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0f
        ; Exact mapped bytes E8 FB 4C 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x4c
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
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
        ; Exact mapped bytes E8 17 EC 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xec
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 20: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 84 24 2C 01 00 00 41: mov byte ptr [esp + 0x12c], 0x41
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 39: je 0x587de085
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 86 B8 00 00 00: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 83 C0 26: add eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 14: add ax, 0x14
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x14
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
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 FC FF FF: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 2A 51 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x51
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 00 74 CA 98 58: mov dword ptr [ebp], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5D 50: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x50
        ; Exact mapped bytes 89 5D 54: mov dword ptr [ebp + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x54
        ; Exact mapped bytes EB 02: jmp 0x587de087
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 6A 5C: push 0x5c
        __asm _emit 0x6a
        __asm _emit 0x5c
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6F 80: mov dword ptr [edi - 0x80], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x80
        ; Exact mapped bytes E8 B6 EB 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 42: mov byte ptr [esp + 0x12c], 0x42
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x42
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2A: je 0x587de0d5
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 96 B8 00 00 00: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4A 26: mov cx, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x26
        ; Exact mapped bytes 83 C2 26: add edx, 0x26
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 3E: add cx, 0x3e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x3e
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 FC FF FF: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 4D FF 12 00: call 0x5890e020
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587de0d7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 87 00 FE FF FF: mov dword ptr [edi - 0x200], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 30 4C 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x4c
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 00 FE FF FF: mov eax, dword ptr [edi - 0x200]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 8B 87 00 FE FF FF: mov eax, dword ptr [edi - 0x200]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 39 EB 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 20: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 84 24 2C 01 00 00 43: mov byte ptr [esp + 0x12c], 0x43
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x43
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 28: je 0x587de152
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 87 00 FE FF FF: mov eax, dword ptr [edi - 0x200]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 30 02 00 00: push 0x230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 AF FC FF FF: push 0xfffffcaf
        __asm _emit 0x68
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 5A 50 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x50
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 00 5C C5 98 58: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5D 50: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x587de154
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AF 00 FF FF FF: mov dword ptr [edi - 0x100], ebp
        __asm _emit 0x89
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 B3 4B 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4b
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 00 FF FF FF: mov eax, dword ptr [edi - 0x100]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 CB EA 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 20: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 84 24 2C 01 00 00 44: mov byte ptr [esp + 0x12c], 0x44
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x44
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x587de1c2
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 87 00 FE FF FF: mov eax, dword ptr [edi - 0x200]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 30 02 00 00: push 0x230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 AF FC FF FF: push 0xfffffcaf
        __asm _emit 0x68
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 EC 4F 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x4f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 00 5C C5 98 58: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5D 50: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes EB 02: jmp 0x587de1c4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8F 80 FE FF FF: mov dword ptr [edi - 0x180], ecx
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 45 4B 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4b
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 80 FE FF FF: mov eax, dword ptr [edi - 0x180]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 5D EA 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xea
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 20: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 84 24 2C 01 00 00 45: mov byte ptr [esp + 0x12c], 0x45
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x45
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 3F: je 0x587de245
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 86 B8 00 00 00: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 54 03 00 00: mov ecx, dword ptr [esi + 0x354]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 26: add eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 09: add ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x09
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
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 FC FF FF: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 6C 4F 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x4f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 00 74 CA 98 58: mov dword ptr [ebp], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5D 50: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x50
        ; Exact mapped bytes 89 5D 54: mov dword ptr [ebp + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x54
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes EB 02: jmp 0x587de247
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
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8F 18 01 00 00: mov dword ptr [edi + 0x118], ecx
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C2 4A 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4a
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 18 01 00 00: mov eax, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x18
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
        ; Exact mapped bytes 8B 87 18 01 00 00: mov eax, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x01
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
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB E9 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 20: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 84 24 2C 01 00 00 46: mov byte ptr [esp + 0x12c], 0x46
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x46
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 3D: je 0x587de2d5
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 86 B8 00 00 00: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8F 18 01 00 00: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 26: add eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 14: add ax, 0x14
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x14
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
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 FC FF FF: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 DA 4E 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x4e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 00 74 CA 98 58: mov dword ptr [ebp], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5D 50: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x50
        ; Exact mapped bytes 89 5D 54: mov dword ptr [ebp + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x54
        ; Exact mapped bytes EB 02: jmp 0x587de2d7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 89 AF 98 00 00 00: mov dword ptr [edi + 0x98], ebp
        __asm _emit 0x89
        __asm _emit 0xaf
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4D 24: and word ptr [ebp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0x24
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 6C 24 14 01: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 B5 FC FF FF: jne 0x587ddfb0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C E9 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 47: mov byte ptr [esp + 0x12c], 0x47
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x47
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 1C: je 0x587de333
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
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 7B 4E 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4e
        __asm _emit 0x12
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
        ; Exact mapped bytes EB 02: jmp 0x587de335
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 5C 04 00 00: mov dword ptr [esi + 0x45c], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 E9 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 48: mov byte ptr [esp + 0x12c], 0x48
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x48
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 1E: je 0x587de37c
        __asm _emit 0x74
        __asm _emit 0x1e
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
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 34 4E 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x4e
        __asm _emit 0x12
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
        ; Exact mapped bytes EB 02: jmp 0x587de37e
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
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 60 04 00 00: mov dword ptr [esi + 0x460], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B 49 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 E8 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe8
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 49: mov byte ptr [esp + 0x12c], 0x49
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x49
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 1C: je 0x587de3cd
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
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 E1 4D 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4d
        __asm _emit 0x12
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
        ; Exact mapped bytes EB 02: jmp 0x587de3cf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 64 04 00 00: mov dword ptr [esi + 0x464], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6B E8 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe8
        __asm _emit 0x19
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
        ; Exact mapped bytes C6 84 24 2C 01 00 00 4A: mov byte ptr [esp + 0x12c], 0x4a
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4a
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 1C: je 0x587de414
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
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 9A 4D 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4d
        __asm _emit 0x12
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
        ; Exact mapped bytes EB 02: jmp 0x587de416
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 68 04 00 00: mov dword ptr [esi + 0x468], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 14 DC 00 00 00: mov dword ptr [esp + 0x14], 0xdc
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D AE 74 05 00 00: lea ebp, [esi + 0x574]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 20 70 03 00 00: mov dword ptr [esp + 0x20], 0x370
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x70
        __asm _emit 0x03
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
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 07 E8 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 18: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 4B: mov byte ptr [esp + 0x12c], 0x4b
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4b
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587de4e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 F4 00 00 00: cmp dword ptr [eax + 0x164], 0xf4
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1A: jle 0x587de48b
        __asm _emit 0x7e
        __asm _emit 0x1a
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587de48b
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 D0 03 00 00: mov eax, dword ptr [edx + 0x3d0]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes EB 04: jmp 0x587de48f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 89 5C 24 1C: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 68 1A 04 00 00: push 0x41a
        __asm _emit 0x68
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 FC FF FF: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 F5 4C 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4c
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 47 50: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 26: je 0x587de4e2
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 48 10: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 89 4F 0C: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes EB 02: jmp 0x587de4e8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D 70: mov dword ptr [ebp + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x70
        ; Exact mapped bytes E8 24 48 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 70: mov eax, dword ptr [ebp + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x70
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
        ; Exact mapped bytes E8 3F E7 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe7
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 18: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 4C: mov byte ptr [esp + 0x12c], 0x4c
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4c
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x587de5b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1F: jle 0x587de558
        __asm _emit 0x7e
        __asm _emit 0x1f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 7C 1B: jl 0x587de558
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x587de558
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0C 10: mov ecx, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes EB 04: jmp 0x587de55c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 89 5C 24 1C: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 68 4C 04 00 00: push 0x44c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 58 02 00 00: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 FC FF FF: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 28 4C 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4c
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 47 50: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2A: je 0x587de5b3
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x587de5b3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 83 44 24 14 02: add dword ptr [esp + 0x14], 2
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        ; Exact mapped bytes 83 C0 08: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x08
        ; Exact mapped bytes 89 7D 60: mov dword ptr [ebp + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x60
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 3D 90 03 00 00: cmp eax, 0x390
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 0F 8C 65 FE FF FF: jl 0x587de440
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 AE 95 FF FF: call 0x587d7b90
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 86 84 05 00 00: mov dword ptr [esi + 0x584], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 08: cmp dword ptr [eax + 0x170], 8
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 13: jle 0x587de609
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 98 94 01 00 00: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587de609
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 20: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x587de60b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 C8 03 00 00: push 0x3c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 9C 00 00 00: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 33 E6 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe6
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 28 10 00 00: mov dword ptr [esi + 0x1028], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A4 00 00 00: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E AC 00 00 00: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E B0 00 00 00: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 7C 04 00 00: mov dword ptr [esi + 0x47c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 80 04 00 00: mov dword ptr [esi + 0x480], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 88 0D 00 00: mov dword ptr [esi + 0xd88], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 8C 0D 00 00: mov dword ptr [esi + 0xd8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 90 0D 00 00: mov dword ptr [esi + 0xd90], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 94 0D 00 00: mov dword ptr [esi + 0xd94], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 98 0D 00 00: mov dword ptr [esi + 0xd98], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 9C 0D 00 00: mov dword ptr [esi + 0xd9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A4 0D 00 00: mov dword ptr [esi + 0xda4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A0 0D 00 00: mov dword ptr [esi + 0xda0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 84 0D 00 00: mov dword ptr [esi + 0xd84], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 14 0D 00 00 FF FF FF FF: mov dword ptr [esi + 0xd14], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 86 04 06 00 00 CE FF FF FF: mov dword ptr [esi + 0x604], 0xffffffce
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 86 0C 06 00 00 32 00 00 00: mov dword ptr [esi + 0x60c], 0x32
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 08 06 00 00 E2 FF FF FF: mov dword ptr [esi + 0x608], 0xffffffe2
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 86 10 06 00 00 1E 00 00 00: mov dword ptr [esi + 0x610], 0x1e
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 78 0D 00 00: mov dword ptr [esi + 0xd78], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 10 0E 00 00: mov dword ptr [esi + 0xe10], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 CA FF: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 96 22 0E 00 00: mov word ptr [esi + 0xe22], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 24 0E 00 00: mov dword ptr [esi + 0xe24], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x24
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 70 04 00 00: mov dword ptr [esi + 0x470], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 74 04 00 00: mov dword ptr [esi + 0x474], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B9 FF E5 00 00: mov ecx, 0xe5ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 8C 24 40 01 00 00: mov ecx, dword ptr [esp + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 00 05 00 00: mov edx, 0x500
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 84 24 38 01 00 00: mov eax, dword ptr [esp + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 DC 00 00 00: lea edx, [esp + 0xdc]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 46 50: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        ; Exact mapped bytes 89 4E 54: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x54
        ; Exact mapped bytes C7 46 58 00 01 00 00: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 5C: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x5c
        ; Exact mapped bytes C7 84 24 E0 00 00 00 01 00 00 00: mov dword ptr [esp + 0xe0], 1
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 E4 00 00 00: mov dword ptr [esp + 0xe4], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 E8 00 00 00: mov dword ptr [esp + 0xe8], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 80 C0 98 58: call dword ptr [0x5898c080]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 C0 C0 C0 00: push 0xc0c0c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0xc0
        __asm _emit 0xc0
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 FC 05 00 00: mov dword ptr [esi + 0x5fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 7C C0 98 58: call dword ptr [0x5898c07c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 86 00 06 00 00: mov dword ptr [esi + 0x600], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 0C 0E 00 00: mov dword ptr [esi + 0xe0c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 14 0E 00 00: mov dword ptr [esi + 0xe14], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 18 0E 00 00: mov dword ptr [esi + 0xe18], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 1C 0E 00 00: mov dword ptr [esi + 0xe1c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 1D 34 90 9C 58: cmp dword ptr [0x589c9034], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 89 5E 64: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x64
        ; Exact mapped bytes 74 42: je 0x587de7af
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes E8 DA E4 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe4
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 4D: mov byte ptr [esp + 0x12c], 0x4d
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4d
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1A: je 0x587de7a1
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D F8 8F 9C 58: mov ecx, dword ptr [0x589c8ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x8f
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5B BC 12 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 68: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes EB 40: jmp 0x587de7e1
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 68: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes EB 32: jmp 0x587de7e1
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes A1 10 47 A2 58: mov eax, dword ptr [0x58a24710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 26: je 0x587de7de
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 83 B8 70 01 00 00 02: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 7E 16: jle 0x587de7d7
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 94 01 00 00: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587de7d7
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 94 01 00 00: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 89 46 68: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes EB 0A: jmp 0x587de7e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 46 68: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes EB 03: jmp 0x587de7e1
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 89 5E 68: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x68
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes E8 66 E4 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe4
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 4E: mov byte ptr [esp + 0x12c], 0x4e
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4e
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x587de80b
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 0C 90 9C 58: mov ecx, dword ptr [0x589c900c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 E7 BB 12 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587de80d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 6C: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6c
        ; Exact mapped bytes E8 30 E4 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe4
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 4F: mov byte ptr [esp + 0x12c], 0x4f
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4f
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x587de841
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 10 90 9C 58: mov edx, dword ptr [0x589c9010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B1 BB 12 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587de843
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 70: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes E8 FA E3 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe3
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 50: mov byte ptr [esp + 0x12c], 0x50
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x50
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x587de877
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 14 90 9C 58: mov ecx, dword ptr [0x589c9014]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7B BB 12 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587de879
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 74: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes E8 C4 E3 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 51: mov byte ptr [esp + 0x12c], 0x51
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x51
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x587de8ad
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 18 90 9C 58: mov edx, dword ptr [0x589c9018]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 45 BB 12 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587de8af
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 78: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes E8 8E E3 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 52: mov byte ptr [esp + 0x12c], 0x52
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x52
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x587de8e3
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 20 90 9C 58: mov ecx, dword ptr [0x589c9020]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0F BB 12 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587de8e5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 7C: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes E8 58 E3 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe3
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 53: mov byte ptr [esp + 0x12c], 0x53
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x53
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x587de919
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 24 90 9C 58: mov edx, dword ptr [0x589c9024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D9 BA 12 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xba
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587de91b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 80 00 00 00: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1F E3 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe3
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 54: mov byte ptr [esp + 0x12c], 0x54
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x54
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x587de952
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 28 90 9C 58: mov ecx, dword ptr [0x589c9028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A0 BA 12 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xba
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587de954
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 88 9C 24 30 01 00 00: mov byte ptr [esp + 0x130], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 84 00 00 00: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E6 E2 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 55: mov byte ptr [esp + 0x12c], 0x55
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x55
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x587de98b
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 2C 90 9C 58: mov edx, dword ptr [0x589c902c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 67 BA 12 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xba
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587de98d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 88 00 00 00: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D AE 8C 00 00 00: lea ebp, [esi + 0x8c]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes E8 A5 E2 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe2
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 56: mov byte ptr [esp + 0x12c], 0x56
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x56
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 39: je 0x587de9f5
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 15 D0 48 A2 58: mov edx, dword ptr [0x58a248d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 BA 70 01 00 00: cmp dword ptr [edx + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xba
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1F: jle 0x587de9e9
        __asm _emit 0x7e
        __asm _emit 0x1f
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7C 1B: jl 0x587de9e9
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 39 9A 94 01 00 00: cmp dword ptr [edx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x587de9e9
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 8A 94 01 00 00: mov ecx, dword ptr [edx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 B9: mov edx, dword ptr [ecx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0xb9
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 69 89 FD FF: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x587de9f7
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5D 89 FD FF: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587de9f7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 45 00: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 88 9C 24 2C 01 00 00: mov byte ptr [esp + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 04: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x04
        ; Exact mapped bytes 75 98: jne 0x587de9a2
        __asm _emit 0x75
        __asm _emit 0x98
        ; Exact mapped bytes 8D 54 24 24: lea edx, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 3F 00 0F 00: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 58 72 99 58: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 68 02 00 00 80: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes C7 84 24 D0 00 00 00 80 00 00 00: mov dword ptr [esp + 0xd0], 0x80
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 3C A9 00 00 00: mov dword ptr [esp + 0x3c], 0xa9
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 08 C0 98 58: call dword ptr [0x5898c008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 10 C0 98 58: mov edi, dword ptr [0x5898c010]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 23: je 0x587dea65
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8D 44 24 2C: lea eax, [esp + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 28: lea ecx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 3F 00 0F 00: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 22 C9 98 58: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 58 72 99 58: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 68 02 00 00 80: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8D 94 24 BC 00 00 00: lea edx, [esp + 0xbc]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 28: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8D 44 24 2C: lea eax, [esp + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 34: lea ecx, [esp + 0x34]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 18 72 99 58: push 0x58997218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 04 C0 98 58: call dword ptr [0x5898c004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3D: je 0x587deac9
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8D 44 24 2C: lea eax, [esp + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 28: lea ecx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 3F 00 0F 00: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 18 72 99 58: push 0x58997218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 58 72 99 58: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 68 02 00 00 80: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 54 24 2C: lea edx, [esp + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 18 72 99 58: push 0x58997218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 0C C0 98 58: call dword ptr [0x5898c00c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 00 C0 98 58: call dword ptr [0x5898c000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 9E 50 10 00 00: mov dword ptr [esi + 0x1050], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 6C: push 0x6c
        __asm _emit 0x6a
        __asm _emit 0x6c
        ; Exact mapped bytes 89 9E 2C 10 00 00: mov dword ptr [esi + 0x102c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x2c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 67 E1 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe1
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C6 84 24 2C 01 00 00 57: mov byte ptr [esp + 0x12c], 0x57
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x57
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 0F: je 0x587deb09
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1F E4 F8 FF: call 0x5876cf20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe4
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 89 86 A8 00 00 00: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x587deb0f
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 89 9E A8 00 00 00: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 8C 24 24 01 00 00: mov ecx, dword ptr [esp + 0x124]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 81 C4 1C 01 00 00: add esp, 0x11c
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
