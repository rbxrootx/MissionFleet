// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 1952 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58821E00 .. +0x7A0 bytes.
extern "C" __declspec(naked) void FUN_58821e00_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 A6 37 98 58: push 0x589837a6
        __asm _emit 0x68
        __asm _emit 0xa6
        __asm _emit 0x37
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
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
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
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
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
        ; Exact mapped bytes 8B 44 24 40: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 7C 24 34: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 5C 24 30: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x5c
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
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 4E 13 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x13
        __asm _emit 0x0e
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
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 89 5E 50: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x50
        ; Exact mapped bytes 89 7E 54: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x54
        ; Exact mapped bytes C7 46 58 00 01 00 00: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 56 5C: mov dword ptr [esi + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x5c
        ; Exact mapped bytes 89 54 24 24: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C7 06 44 DB 99 58: mov dword ptr [esi], 0x5899db44
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x44
        __asm _emit 0xdb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 46 64: lea eax, [esi + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes B9 80 00 00 00: mov ecx, 0x80
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 75 F5: jne 0x58821e81
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 86 9A 0C 00 00: mov word ptr [esi + 0xc9a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 04 00 00 00: mov ebp, 4
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 64 0C 00 00: lea eax, [esi + 0xc64]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E 98 0C 00 00: mov word ptr [esi + 0xc98], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 56 60: mov dword ptr [esi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 89 6C 24 38: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 59 10: lea ebx, [ecx + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x59
        __asm _emit 0x10
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 92 AD 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xad
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 2C: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 24 01: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 78: je 0x58821f46
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A8 64 01 00 00: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 18: jle 0x58821ef3
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 7C 14: jl 0x58821ef3
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x58821ef3
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2C 0B: mov ebp, dword ptr [ebx + ecx]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x0b
        ; Exact mapped bytes EB 02: jmp 0x58821ef5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 34: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 44 24 30: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 93 12 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x12
        __asm _emit 0x0e
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
        ; Exact mapped bytes 74 26: je 0x58821f40
        __asm _emit 0x74
        __asm _emit 0x26
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
        ; Exact mapped bytes 8B 6C 24 38: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes EB 02: jmp 0x58821f48
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 3C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 04: sub ebx, 4
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 4D: dec ebp
        __asm _emit 0x4d
        ; Exact mapped bytes 83 FB 08: cmp ebx, 8
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x08
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 6C 24 38: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F 8F 4A FF FF FF: jg 0x58821eb5
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BD 05 00 00 00: mov ebp, 5
        __asm _emit 0xbd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6C 24 38: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C7 44 24 3C 14 00 00 00: mov dword ptr [esp + 0x3c], 0x14
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9E 6C 0C 00 00: lea ebx, [esi + 0xc6c]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 2C 02 00 00 00: mov dword ptr [esp + 0x2c], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x02
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
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 B7 AC 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xac
        __asm _emit 0x15
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
        ; Exact mapped bytes C6 44 24 24 02: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 7C: je 0x58822025
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A8 64 01 00 00: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1C: jle 0x58821fd2
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 7C 18: jl 0x58821fd2
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
        ; Exact mapped bytes 74 0F: je 0x58821fd2
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 2C 01: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x01
        ; Exact mapped bytes EB 02: jmp 0x58821fd4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 34: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 44 24 30: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B4 11 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x0e
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
        ; Exact mapped bytes 74 26: je 0x5882201f
        __asm _emit 0x74
        __asm _emit 0x26
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
        ; Exact mapped bytes 8B 6C 24 38: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes EB 02: jmp 0x58822027
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 83 44 24 3C 04: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x04
        ; Exact mapped bytes 89 3B: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3b
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 6C 24 2C 01: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 6C 24 38: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F 85 4A FF FF FF: jne 0x58821f90
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 64 0C 00 00: mov ecx, dword ptr [esi + 0xc64]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 CA 0C 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 6C 0C 00 00: mov ecx, dword ptr [esi + 0xc6c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 BA 0C 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 68 0C 01 00 00: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DE AB 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xab
        __asm _emit 0x15
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
        ; Exact mapped bytes 8B 5C 24 34: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 6C 24 30: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes C6 44 24 24 03: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 38: je 0x588220c0
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 68 64 64 64 00: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B CA 00 00 00: lea ecx, [ebx + 0xca]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 95 87 01 00 00: lea edx, [ebp + 0x187]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8B B9 00 00 00: lea ecx, [ebx + 0xb9]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x00
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
        ; Exact mapped bytes 8D 55 1F: lea edx, [ebp + 0x1f]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x1f
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D2 EF F3 FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588220c2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 3C: push 0x3c
        __asm _emit 0x6a
        __asm _emit 0x3c
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 28 00: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 0C 00 00: mov dword ptr [esi + 0xc74], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A 6D F2 FF: call 0x58748e40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 0B: cmp dword ptr [eax + 0x170], 0xb
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        ; Exact mapped bytes 7E 14: jle 0x588220f8
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588220f8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 90 94 01 00 00: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 2C: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x2c
        ; Exact mapped bytes EB 02: jmp 0x588220fa
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 78 0C 00 00: mov dword ptr [esi + 0xc78], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 44 AB 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xab
        __asm _emit 0x15
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
        ; Exact mapped bytes C6 44 24 24 04: mov byte ptr [esp + 0x24], 4
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 30: je 0x5882214a
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 97 D9 FF 00: push 0xffd997
        __asm _emit 0x68
        __asm _emit 0x97
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B B4 00 00 00: lea ecx, [ebx + 0xb4]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 95 8E 00 00 00: lea edx, [ebp + 0x8e]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 4B 2D: lea ecx, [ebx + 0x2d]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x2d
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 55 1C: lea edx, [ebp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 88 5E 0E 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882214c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 28 00: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 7C 0C 00 00: mov dword ptr [esi + 0xc7c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 ED AA 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xaa
        __asm _emit 0x15
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
        ; Exact mapped bytes C6 44 24 24 05: mov byte ptr [esp + 0x24], 5
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 30: je 0x588221a1
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 93 B4 00 00 00: lea edx, [ebx + 0xb4]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8D DA 01 00 00: lea ecx, [ebp + 0x1da]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 53 2D: lea edx, [ebx + 0x2d]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x2d
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D 78: lea ecx, [ebp + 0x78]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x78
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 31 5E 0E 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588221a3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 80 0C 00 00: mov dword ptr [esi + 0xc80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 7C 0C 00 00: mov eax, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 5C 0D 00 00 00: mov dword ptr [eax + 0x5c], 0xd
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 7C 0C 00 00: mov eax, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 18: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x18
        ; Exact mapped bytes 81 C1 87 00 00 00: add ecx, 0x87
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 48 20: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 8B BE 7C 0C 00 00: mov edi, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588221ef
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 61 0D 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x588221fc
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 E4 0C 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 7C 0C 00 00: mov eax, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 80 0C 00 00: mov eax, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 5C 0D 00 00 00: mov dword ptr [eax + 0x5c], 0xd
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 0C 00 00: mov eax, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 81 C2 87 00 00 00: add edx, 0x87
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 50 20: mov dword ptr [eax + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x20
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B BE 80 0C 00 00: mov edi, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x0c
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
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5882224c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 04 0D 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x58822259
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 87 0C 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 0C 00 00: mov eax, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DC A9 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa9
        __asm _emit 0x15
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
        ; Exact mapped bytes C6 44 24 24 06: mov byte ptr [esp + 0x24], 6
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x06
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4B: je 0x588222cd
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 68 47 A2 58: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x588222a2
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x588222a2
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588222a4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 C6 00 00 00: lea edx, [ebx + 0xc6]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 9D 01 00 00: lea edx, [ebp + 0x19d]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x9d
        __asm _emit 0x01
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
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
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
        ; Exact mapped bytes E8 D5 BA F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xba
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588222cf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 28 00: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 84 0C 00 00: mov dword ptr [esi + 0xc84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A A9 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa9
        __asm _emit 0x15
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
        ; Exact mapped bytes C6 44 24 24 07: mov byte ptr [esp + 0x24], 7
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x07
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4E: je 0x58822342
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 68 47 A2 58: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x47
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
        ; Exact mapped bytes 7E 17: jle 0x5882231a
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
        ; Exact mapped bytes 74 0E: je 0x5882231a
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
        ; Exact mapped bytes EB 02: jmp 0x5882231c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 4B 0F: lea ecx, [ebx + 0xf]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x0f
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 8D 9D 01 00 00: lea ecx, [ebp + 0x19d]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
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
        ; Exact mapped bytes E8 60 BA F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xba
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58822344
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 28 00: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 88 0C 00 00: mov dword ptr [esi + 0xc88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F5 A8 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa8
        __asm _emit 0x15
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
        ; Exact mapped bytes C6 44 24 24 08: mov byte ptr [esp + 0x24], 8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 54: je 0x588223bd
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 12: cmp dword ptr [ecx + 0x160], 0x12
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        ; Exact mapped bytes 7E 17: jle 0x5882238f
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
        ; Exact mapped bytes 74 0E: je 0x5882238f
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 04 00 00: add ecx, 0x480
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58822391
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 54 24 40: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 83 C2 64: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 53 29: lea edx, [ebx + 0x29]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x29
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 D6 01 00 00: lea edx, [ebp + 0x1d6]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xd6
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 E5 B9 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb9
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588223bf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 28 00: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 8C 0C 00 00: mov dword ptr [esi + 0xc8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7A A8 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa8
        __asm _emit 0x15
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
        ; Exact mapped bytes C6 44 24 24 09: mov byte ptr [esp + 0x24], 9
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x09
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 57: je 0x5882243b
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 13: cmp dword ptr [ecx + 0x160], 0x13
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        ; Exact mapped bytes 7E 17: jle 0x5882240a
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
        ; Exact mapped bytes 74 0E: je 0x5882240a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 04 00 00: add edx, 0x4c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882240c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 40: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 64: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 C3 B2 00 00 00: add ebx, 0xb2
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 81 C5 D6 01 00 00: add ebp, 0x1d6
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
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
        ; Exact mapped bytes E8 67 B9 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb9
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882243d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes C6 44 24 28 00: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 90 0C 00 00: mov dword ptr [esi + 0xc90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF A7 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa7
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 40: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 24 0A: mov byte ptr [esp + 0x24], 0xa
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0a
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x588224ee
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
        ; Exact mapped bytes 83 B8 60 01 00 00 20: cmp dword ptr [eax + 0x160], 0x20
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 7E 17: jle 0x5882248a
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5882248a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 00 08 00 00: add ebp, 0x800
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882248c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 34: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 44 24 30: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 68 83 05 00 00: push 0x583
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 A3 00 00 00: add edx, 0xa3
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 05 D6 01 00 00: add eax, 0x1d6
        __asm _emit 0x05
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 EE 0C 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0x0e
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
        ; Exact mapped bytes 74 2A: je 0x588224f0
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 0C: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 1C: mov edx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 45 20: lea eax, [ebp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x20
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
        ; Exact mapped bytes EB 02: jmp 0x588224f0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE 94 0C 00 00: mov dword ptr [esi + 0xc94], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x0c
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
        ; Exact mapped bytes 8B 8E 94 0C 00 00: mov ecx, dword ptr [esi + 0xc94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 28 00: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes E8 0C 08 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 94 0C 00 00: mov eax, dword ptr [esi + 0xc94]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x0c
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
        ; Exact mapped bytes 8B 86 88 0C 00 00: mov eax, dword ptr [esi + 0xc88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0c
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
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B8 F0 FF 00 00: mov eax, 0xfff0
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 3C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x3c
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E A0 0C 00 00: mov word ptr [esi + 0xca0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 9C 0C 00 00 00 00 00 00: mov dword ptr [esi + 0xc9c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 3B 86 68 0C 00 00: cmp eax, dword ptr [esi + 0xc68]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x58822581
        __asm _emit 0x74
        __asm _emit 0x09
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
        ; Exact mapped bytes 8B 40 38: mov eax, dword ptr [eax + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x38
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 E8: jne 0x58822570
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
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
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
