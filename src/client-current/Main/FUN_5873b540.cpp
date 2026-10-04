// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873B540 .. +0x156 bytes.
// Source symbol alias: FUN_5873b540.
extern "C" __declspec(naked) void FUN_5873b540() {
    __asm {
        // 0x5873B540: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5873B543: push ebp
        __asm _emit 0x55
        // 0x5873B544: push edi
        __asm _emit 0x57
        // 0x5873B545: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873B547: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5873B549: mov dword ptr [esp + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873B54D: cmp dword ptr [edi + 0x4cc], ebp
        __asm _emit 0x39
        __asm _emit 0xAF
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B553: je 0x5873b68e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B559: mov edx, dword ptr [edi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B55F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5873B561: je 0x5873b68e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B567: cmp dword ptr [edi + 0x4dc], -1
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5873B56E: je 0x5873b68e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B574: mov ecx, dword ptr [edi + 0x4dc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B57A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873B57C: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B582: sar eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5873B585: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5873B588: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873B58C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873B58E: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5873B591: cmp dword ptr [ecx + edx + 0x1398], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x11
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B598: je 0x5873b68e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B59E: add eax, 0x139
        __asm _emit 0x05
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B5A3: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5873B5A6: mov eax, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x10
        // 0x5873B5A9: push ebx
        __asm _emit 0x53
        // 0x5873B5AA: mov ebx, 0x5f5e100
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0xE1
        __asm _emit 0xF5
        __asm _emit 0x05
        // 0x5873B5AF: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873B5B3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B5B5: je 0x5873b685
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B5BB: push esi
        __asm _emit 0x56
        // 0x5873B5BC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873B5C0: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x5873B5C3: cmp dword ptr [esi + 0x460], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B5CA: jne 0x5873b66c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B5D0: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873B5D4: cmp dword ptr [esi + 0x78], edx
        __asm _emit 0x39
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x5873B5D7: jne 0x5873b66c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B5DD: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5873B5E0: sub eax, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873B5E3: cdq
        __asm _emit 0x99
        // 0x5873B5E4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873B5E6: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x5873B5E8: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x5873B5EA: mov edx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B5F0: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873B5F5: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873B5F7: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873B5FA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873B5FC: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873B5FF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873B601: mov edx, dword ptr [edi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B607: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5873B609: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873B60E: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873B610: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873B613: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873B615: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873B618: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873B61A: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5873B61C: imul edx, edx, 0xc8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B622: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873B627: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873B629: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873B62C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873B62E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873B631: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873B633: cdq
        __asm _emit 0x99
        // 0x5873B634: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5873B636: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873B638: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873B63A: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873B63D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873B63F: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5873B642: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873B644: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873B648: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873B64C: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x16
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873B651: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x16
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873B656: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873B658: jge 0x5873b664
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x5873B65A: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x5873B65C: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873B65E: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873B662: jmp 0x5873b668
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5873B664: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873B668: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873B66C: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5873B66F: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873B673: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B675: jne 0x5873b5c0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873B67B: pop esi
        __asm _emit 0x5E
        // 0x5873B67C: pop ebx
        __asm _emit 0x5B
        // 0x5873B67D: pop edi
        __asm _emit 0x5F
        // 0x5873B67E: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5873B680: pop ebp
        __asm _emit 0x5D
        // 0x5873B681: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873B684: ret
        __asm _emit 0xC3
        // 0x5873B685: pop ebx
        __asm _emit 0x5B
        // 0x5873B686: pop edi
        __asm _emit 0x5F
        // 0x5873B687: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5873B689: pop ebp
        __asm _emit 0x5D
        // 0x5873B68A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873B68D: ret
        __asm _emit 0xC3
        // 0x5873B68E: pop edi
        __asm _emit 0x5F
        // 0x5873B68F: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5873B691: pop ebp
        __asm _emit 0x5D
        // 0x5873B692: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873B695: ret
        __asm _emit 0xC3
    }
}
