// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE1A0 .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_100ee1a0_100EE1A0() {
    __asm {
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 4C 24 00: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8A 81 30 03 00 00: mov al, byte ptr [ecx + 0x330]
        __asm _emit 0x8a
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8A 94 08 20 04 00 00: mov dl, byte ptr [eax + ecx + 0x420]
        __asm _emit 0x8a
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x100ee297
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 28: mov ebp, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x100ee28b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8D 04 BF: lea eax, [edi + edi*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xbf
        ; Exact mapped bytes 8D 14 80: lea edx, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x80
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes C1 E2 02: shl edx, 2
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x02
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes C1 FE 05: sar esi, 5
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0x05
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 F1: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 2B DA: sub ebx, edx
        __asm _emit 0x2b
        __asm _emit 0xda
        ; Exact mapped bytes 8D 14 7F: lea edx, [edi + edi*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 3C 97: lea edi, [edi + edx*4]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x97
        ; Exact mapped bytes 8D 14 FF: lea edx, [edi + edi*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xff
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes C1 FE 05: sar esi, 5
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0x05
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 81 24 03 00 00: fild dword ptr [ecx + 0x324]
        __asm _emit 0xdb
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 5C 24 18: fstp qword ptr [esp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F AF D0: imul edx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd0
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F AF C3: imul eax, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc3
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 89 54 24 24: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 4A E5 07 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 30 58 17 10: fmul qword ptr [0x10175830]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes DC 35 D0 65 17 10: fdiv qword ptr [0x101765d0]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DC 5C 24 18: fcomp qword ptr [esp + 0x18]
        __asm _emit 0xdc
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 01: test ah, 1
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x01
        ; Exact mapped bytes 74 0F: je 0x100ee28b
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
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
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 5C 24 24: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8D 04 7F: lea eax, [edi + edi*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 04 87: lea eax, [edi + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x87
        ; Exact mapped bytes 8D 14 C0: lea edx, [eax + eax*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xc0
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 43 04: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes C1 FE 05: sar esi, 5
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0x05
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes C1 EA 1F: shr edx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x1f
        ; Exact mapped bytes 03 F2: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xf2
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 04 BF: lea eax, [edi + edi*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xbf
        ; Exact mapped bytes 8D 14 80: lea edx, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x80
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes C1 E2 02: shl edx, 2
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x02
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes C1 FE 05: sar esi, 5
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0x05
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 03: mov eax, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 15 09 F8 FF: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0xf8
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
