// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58900E80 .. +0x760 bytes.
extern "C" __declspec(naked) void FUN_58900e80() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 E4 F8: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xf8
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 EB A6 98 58: push 0x5898a6eb
        __asm _emit 0x68
        __asm _emit 0xeb
        __asm _emit 0xa6
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
        ; Exact mapped bytes 81 EC 38 01 00 00: sub esp, 0x138
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
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
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
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
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 0A 07 00 00: je 0x589015c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 51 50: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
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
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 8B 51 54: mov edx, dword ptr [ecx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x54
        ; Exact mapped bytes B8 83 BE A0 2F: mov eax, 0x2fa0be83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa0
        __asm _emit 0x2f
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B B1 14 01 00 00: mov esi, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 41 1C: mov eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x1c
        ; Exact mapped bytes 2B 41 14: sub eax, dword ptr [ecx + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 89 7C 24 38: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 83 C2 63: add edx, 0x63
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x63
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
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 41 20: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x20
        ; Exact mapped bytes 2B 41 18: sub eax, dword ptr [ecx + 0x18]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C1 55: add ecx, 0x55
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x55
        ; Exact mapped bytes B8 83 BE A0 2F: mov eax, 0x2fa0be83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa0
        __asm _emit 0x2f
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes C1 EE 1F: shr esi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0x1f
        ; Exact mapped bytes 03 F2: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xf2
        ; Exact mapped bytes 81 B8 60 01 00 00 CB 00 00 00: cmp dword ptr [eax + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 74 24 40: mov dword ptr [esp + 0x40], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 7E 16: jle 0x58900f79
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x58900f79
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 C0 32 00 00: add eax, 0x32c0
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58900f7b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 4C 24 58: lea ecx, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 61 00 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 50 05 01 00: mov eax, dword ptr [ecx + 0x10550]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 50 01 00 00: mov dword ptr [esp + 0x150], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 99 4C 05 01 00: mov ebx, dword ptr [ecx + 0x1054c]
        __asm _emit 0x8b
        __asm _emit 0x99
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F3 AA AA AA AA: xor ebx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 0F AF C3: imul eax, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc3
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C7 44 24 28 00 00 00 00: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 8E E5 05 00 00: jle 0x589015b4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 75 0C: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes EB 04: jmp 0x58900fd8
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 7C 24 38: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 54 24 3C: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 91 48 05 01 00: mov edx, dword ptr [ecx + 0x10548]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF C3: imul eax, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc3
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 83 7C 24 2C 00: cmp dword ptr [esp + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 20 00 00 00 00: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 1C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C7 44 24 30 00 00 00 00: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 8E 05 00 00: jle 0x5890159c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 8D 4A FF: lea ecx, [edx - 1]
        __asm _emit 0x8d
        __asm _emit 0x4a
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 16: jl 0x58901031
        __asm _emit 0x7c
        __asm _emit 0x16
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 7D 10: jge 0x58901031
        __asm _emit 0x7d
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes 80 79 FF 02: cmp byte ptr [ecx - 1], 2
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 1B FF: sbb edi, edi
        __asm _emit 0x1b
        __asm _emit 0xff
        ; Exact mapped bytes F7 DF: neg edi
        __asm _emit 0xf7
        __asm _emit 0xdf
        ; Exact mapped bytes EB 05: jmp 0x58901036
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7C 14: jl 0x5890104e
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 3B 54 24 18: cmp edx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 7D 0E: jge 0x5890104e
        __asm _emit 0x7d
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes 80 39 02: cmp byte ptr [ecx], 2
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x02
        ; Exact mapped bytes 73 03: jae 0x5890104e
        __asm _emit 0x73
        __asm _emit 0x03
        ; Exact mapped bytes 83 C7 02: add edi, 2
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x02
        ; Exact mapped bytes 8D 4A 01: lea ecx, [edx + 1]
        __asm _emit 0x8d
        __asm _emit 0x4a
        __asm _emit 0x01
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 19: jl 0x5890106e
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 7D 0F: jge 0x5890106e
        __asm _emit 0x7d
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes 80 79 01 02: cmp byte ptr [ecx + 1], 2
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x02
        ; Exact mapped bytes 73 03: jae 0x5890106e
        __asm _emit 0x73
        __asm _emit 0x03
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 8D 48 FF: lea ecx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 17: jl 0x5890108c
        __asm _emit 0x7c
        __asm _emit 0x17
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 7D 0D: jge 0x5890108c
        __asm _emit 0x7d
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 80 79 FF 02: cmp byte ptr [ecx - 1], 2
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 73 03: jae 0x5890108c
        __asm _emit 0x73
        __asm _emit 0x03
        ; Exact mapped bytes 83 C7 08: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x08
        ; Exact mapped bytes 8D 48 01: lea ecx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes 89 4C 24 34: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 17: jl 0x589010ae
        __asm _emit 0x7c
        __asm _emit 0x17
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 7D 0D: jge 0x589010ae
        __asm _emit 0x7d
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 80 79 01 02: cmp byte ptr [ecx + 1], 2
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x02
        ; Exact mapped bytes 73 03: jae 0x589010ae
        __asm _emit 0x73
        __asm _emit 0x03
        ; Exact mapped bytes 83 C7 10: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x10
        ; Exact mapped bytes 8D 4C 03 FF: lea ecx, [ebx + eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 18: jl 0x589010ce
        __asm _emit 0x7c
        __asm _emit 0x18
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 7D 0E: jge 0x589010ce
        __asm _emit 0x7d
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 80 7C 0B FF 02: cmp byte ptr [ebx + ecx - 1], 2
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 73 03: jae 0x589010ce
        __asm _emit 0x73
        __asm _emit 0x03
        ; Exact mapped bytes 83 C7 20: add edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x20
        ; Exact mapped bytes 8D 0C 18: lea ecx, [eax + ebx]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x18
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 17: jl 0x589010ec
        __asm _emit 0x7c
        __asm _emit 0x17
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 7D 0D: jge 0x589010ec
        __asm _emit 0x7d
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 80 3C 19 02: cmp byte ptr [ecx + ebx], 2
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x19
        __asm _emit 0x02
        ; Exact mapped bytes 73 03: jae 0x589010ec
        __asm _emit 0x73
        __asm _emit 0x03
        ; Exact mapped bytes 83 C7 40: add edi, 0x40
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x40
        ; Exact mapped bytes 8D 4C 03 01: lea ecx, [ebx + eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x01
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 18: jl 0x5890110c
        __asm _emit 0x7c
        __asm _emit 0x18
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 7D 0E: jge 0x5890110c
        __asm _emit 0x7d
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 80 7C 0B 01 02: cmp byte ptr [ebx + ecx + 1], 2
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x02
        ; Exact mapped bytes 73 03: jae 0x5890110c
        __asm _emit 0x73
        __asm _emit 0x03
        ; Exact mapped bytes 83 EF 80: sub edi, -0x80
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x80
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 80 39 02: cmp byte ptr [ecx], 2
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x02
        ; Exact mapped bytes 0F 82 37 04 00 00: jb 0x58901550
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4F FF: lea ecx, [edi - 1]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xff
        ; Exact mapped bytes 83 F9 7F: cmp ecx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x7f
        ; Exact mapped bytes 0F 87 82 00 00 00: ja 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 89 F4 15 90 58: movzx ecx, byte ptr [ecx + 0x589015f4]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 8D E0 15 90 58: jmp dword ptr [ecx*4 + 0x589015e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8D 0C 58: lea ecx, [eax + ebx*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 38 04 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8D 2E 04 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 58 01: lea ecx, [eax + ebx*2 + 1]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 22 04 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8D 18 04 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 FE: lea ecx, [eax - 2]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfe
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 0D 04 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8D 03 04 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 03 FE: lea eax, [ebx + eax - 2]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0xfe
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8C F7 03 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 44 24 18: cmp eax, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8D ED 03 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 80 3C 58 02: cmp byte ptr [eax + ebx*2], 2
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 73 63: jae 0x589011f6
        __asm _emit 0x73
        __asm _emit 0x63
        ; Exact mapped bytes 80 7C 58 01 02: cmp byte ptr [eax + ebx*2 + 1], 2
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x02
        ; Exact mapped bytes 73 5C: jae 0x589011f6
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact mapped bytes 80 78 FE 02: cmp byte ptr [eax - 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 73 31: jae 0x589011d1
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact mapped bytes 80 7C 03 FE 02: cmp byte ptr [ebx + eax - 2], 2
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 73 2A: jae 0x589011d1
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 00: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 7C 03 00 00: jle 0x58901535
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 6F 03 00 00: je 0x58901535
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 90 01 00 00: mov ecx, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 66 03 00 00: jmp 0x58901537
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 23: cmp dword ptr [eax + 0x164], 0x23
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        ; Exact mapped bytes 7E 49: jle 0x58901228
        __asm _emit 0x7e
        __asm _emit 0x49
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 40: je 0x58901228
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 8C 00 00 00: mov ecx, dword ptr [ecx + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x5890122a
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes 80 78 FE 02: cmp byte ptr [eax - 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 73 AB: jae 0x589011a7
        __asm _emit 0x73
        __asm _emit 0xab
        ; Exact mapped bytes 80 7C 03 FE 02: cmp byte ptr [ebx + eax - 2], 2
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 73 A4: jae 0x589011a7
        __asm _emit 0x73
        __asm _emit 0xa4
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 26: cmp dword ptr [eax + 0x164], 0x26
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        ; Exact mapped bytes 7E 17: jle 0x58901228
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
        ; Exact mapped bytes 74 0E: je 0x58901228
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 98 00 00 00: mov ecx, dword ptr [ecx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5890122a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 8B C4: mov eax, esp
        __asm _emit 0x8b
        __asm _emit 0xc4
        ; Exact mapped bytes 89 10: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 89 50 04: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 89 50 08: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 56 0C: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x0c
        ; Exact mapped bytes 89 50 0C: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 44 24 3C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 01 2B 00 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 12 03 00 00: jmp 0x58901576
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 14 1B: lea edx, [ebx + ebx]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x1b
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 0F 88 05 03 00 00: js 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5C 24 18: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 8D F5 02 00 00: jge 0x58901572
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 FF: add ecx, -1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xff
        ; Exact mapped bytes 0F 88 EC 02 00 00: js 0x58901572
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 8D E4 02 00 00: jge 0x58901572
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 02: lea ecx, [eax + 2]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C D9 02 00 00: jl 0x58901572
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F 8D D1 02 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 03 02: lea eax, [ebx + eax + 2]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x02
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8C C5 02 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 44 24 18: cmp eax, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8D BB 02 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 80 38 02: cmp byte ptr [eax], 2
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 73 47: jae 0x5890130f
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 80 78 FF 02: cmp byte ptr [eax - 1], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 73 41: jae 0x5890130f
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact mapped bytes 80 79 02 02: cmp byte ptr [ecx + 2], 2
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x02
        ; Exact mapped bytes 73 0B: jae 0x589012df
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes 80 7C 0B 02 02: cmp byte ptr [ebx + ecx + 2], 2
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x02
        ; Exact mapped bytes 0F 82 C8 FE FF FF: jb 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 3E: cmp dword ptr [eax + 0x164], 0x3e
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3e
        ; Exact mapped bytes 0F 8E 37 FF FF FF: jle 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2A FF FF FF: je 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
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
        ; Exact mapped bytes E9 1B FF FF FF: jmp 0x5890122a
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 79 02 02: cmp byte ptr [ecx + 2], 2
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x02
        ; Exact mapped bytes 0F 83 8E FE FF FF: jae 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 0B 02 02: cmp byte ptr [ebx + ecx + 2], 2
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x02
        ; Exact mapped bytes 0F 83 83 FE FF FF: jae 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 3A: cmp dword ptr [eax + 0x164], 0x3a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3a
        ; Exact mapped bytes 0F 8E F2 FE FF FF: jle 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E5 FE FF FF: je 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 E8 00 00 00: mov ecx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D6 FE FF FF: jmp 0x5890122a
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 0C 58: lea ecx, [eax + ebx*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 17 02 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F 8D 09 02 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 58 01: lea ecx, [eax + ebx*2 + 1]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C FD 01 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5C 24 18: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 8D ED 01 00 00: jge 0x58901572
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 FE: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 88 E4 01 00 00: js 0x58901572
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 8D DC 01 00 00: jge 0x58901572
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 42 FE: lea eax, [edx - 2]
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0xfe
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8C D1 01 00 00: jl 0x58901572
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 8D C9 01 00 00: jge 0x58901572
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 80 3C 58 02: cmp byte ptr [eax + ebx*2], 2
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 73 49: jae 0x58901400
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact mapped bytes 80 7C 58 01 02: cmp byte ptr [eax + ebx*2 + 1], 2
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x02
        ; Exact mapped bytes 73 42: jae 0x58901400
        __asm _emit 0x73
        __asm _emit 0x42
        ; Exact mapped bytes 80 78 FE 02: cmp byte ptr [eax - 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 73 0C: jae 0x589013d0
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 80 78 FE 02: cmp byte ptr [eax - 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 0F 82 D7 FD FF FF: jb 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 2E: cmp dword ptr [eax + 0x164], 0x2e
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2e
        ; Exact mapped bytes 0F 8E 46 FE FF FF: jle 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 39 FE FF FF: je 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 B8 00 00 00: mov ecx, dword ptr [ecx + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2A FE FF FF: jmp 0x5890122a
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 78 FE 02: cmp byte ptr [eax - 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 0F 83 9D FD FF FF: jae 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 80 78 FE 02: cmp byte ptr [eax - 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 0F 83 91 FD FF FF: jae 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 2B: cmp dword ptr [eax + 0x164], 0x2b
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2b
        ; Exact mapped bytes 0F 8E 00 FE FF FF: jle 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F3 FD FF FF: je 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 AC 00 00 00: mov ecx, dword ptr [ecx + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E4 FD FF FF: jmp 0x5890122a
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 0C 58: lea ecx, [eax + ebx*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 25 01 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8D 1B 01 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 58 FF: lea ecx, [eax + ebx*2 - 1]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 0F 01 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8D 05 01 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 02: lea ecx, [eax + 2]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C FA 00 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8D F0 00 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 18 02: lea eax, [eax + ebx + 2]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x18
        __asm _emit 0x02
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8C E4 00 00 00: jl 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 44 24 18: cmp eax, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8D DA 00 00 00: jge 0x58901576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 80 3C 58 02: cmp byte ptr [eax + ebx*2], 2
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 73 49: jae 0x589014ef
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact mapped bytes 80 7C 58 FF 02: cmp byte ptr [eax + ebx*2 - 1], 2
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 73 42: jae 0x589014ef
        __asm _emit 0x73
        __asm _emit 0x42
        ; Exact mapped bytes 80 78 02 02: cmp byte ptr [eax + 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x02
        ; Exact mapped bytes 73 0C: jae 0x589014bf
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 80 78 02 02: cmp byte ptr [eax + 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x02
        ; Exact mapped bytes 0F 82 E8 FC FF FF: jb 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 34: cmp dword ptr [eax + 0x164], 0x34
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x34
        ; Exact mapped bytes 0F 8E 57 FD FF FF: jle 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 4A FD FF FF: je 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 D0 00 00 00: mov ecx, dword ptr [ecx + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3B FD FF FF: jmp 0x5890122a
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 78 02 02: cmp byte ptr [eax + 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x02
        ; Exact mapped bytes 0F 83 AE FC FF FF: jae 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 80 78 02 02: cmp byte ptr [eax + 2], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x02
        ; Exact mapped bytes 0F 83 A2 FC FF FF: jae 0x589011a7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 37: cmp dword ptr [eax + 0x164], 0x37
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x37
        ; Exact mapped bytes 0F 8E 11 FD FF FF: jle 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 04 FD FF FF: je 0x58901228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 DC 00 00 00: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F5 FC FF FF: jmp 0x5890122a
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 54 24 30: lea edx, [esp + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 82 90 E3 FF: call 0x5873a5d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes EB 26: jmp 0x58901576
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes A1 00 46 A2 58: mov eax, dword ptr [0x58a24600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 01: cmp dword ptr [eax + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E D7: jle 0x58901535
        __asm _emit 0x7e
        __asm _emit 0xd7
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 CE: je 0x58901535
        __asm _emit 0x74
        __asm _emit 0xce
        ; Exact mapped bytes 8B 88 90 01 00 00: mov ecx, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 40: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x40
        ; Exact mapped bytes EB C5: jmp 0x58901537
        __asm _emit 0xeb
        __asm _emit 0xc5
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes FF 44 24 1C: inc dword ptr [esp + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 83 44 24 20 64: add dword ptr [esp + 0x20], 0x64
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x64
        ; Exact mapped bytes 8B 44 24 34: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 3B 4C 24 2C: cmp ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 89 4C 24 30: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 0F 8C 7A FA FF FF: jl 0x58901010
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 83 44 24 24 56: add dword ptr [esp + 0x24], 0x56
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x56
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 3B 44 24 40: cmp eax, dword ptr [esp + 0x40]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F 8C 20 FA FF FF: jl 0x58900fd4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4C 24 44: lea ecx, [esp + 0x44]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C7 84 24 50 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x150], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 D8 58 00 00: call 0x58906ea0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 48 01 00 00: mov ecx, dword ptr [esp + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x48
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
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
