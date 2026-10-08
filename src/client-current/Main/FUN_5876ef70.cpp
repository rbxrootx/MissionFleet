// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 659 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876ef70.

// Ghidra body range 0x5876EF70..0x5876F203; 659 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ef70_segment_00() {
    __asm {
        // 0x5876EF70: sub esp, 0x404
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EF76: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5876EF7B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5876EF7D: mov dword ptr [esp + 0x400], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EF84: push esi
        __asm _emit 0x56
        // 0x5876EF85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876EF87: mov al, byte ptr [esi + 0x78]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876EF8A: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876EF8D: push edi
        __asm _emit 0x57
        // 0x5876EF8E: movzx edi, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xF8
        // 0x5876EF91: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5876EF93: imul ecx, ecx, 0x418
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EF99: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5876EF9B: cmp dword ptr [ecx - 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x5876EF9F: jne 0x5876efbe
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5876EFA1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5876EFA3: cmp al, byte ptr [esi + 0x79]
        __asm _emit 0x3A
        __asm _emit 0x46
        __asm _emit 0x79
        // 0x5876EFA6: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x5876EFA9: add ecx, 0xfffffbe8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876EFAF: push edx
        __asm _emit 0x52
        // 0x5876EFB0: push ecx
        __asm _emit 0x51
        // 0x5876EFB1: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5876EFB4: call 0x58770c20
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EFB9: jmp 0x5876f1ea
        __asm _emit 0xE9
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EFBE: push ebx
        __asm _emit 0x53
        // 0x5876EFBF: movzx ebx, byte ptr [esi + 0x7a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x5E
        __asm _emit 0x7A
        // 0x5876EFC3: sub ebx, 2
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5876EFC6: je 0x5876f154
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EFCC: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5876EFCF: jne 0x5876f1e9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EFD5: sub edi, 2
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x02
        // 0x5876EFD8: je 0x5876f0c4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EFDE: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5876EFE1: jne 0x5876f1e9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EFE7: mov ebx, dword ptr [edx + 0x414]
        __asm _emit 0x8B
        __asm _emit 0x9A
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EFED: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5876EFEF: je 0x5876f1e2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xED
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EFF5: mov ax, word ptr [ebx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x5E
        // 0x5876EFF9: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5876EFFD: push ebp
        __asm _emit 0x55
        // 0x5876EFFE: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5876F002: jne 0x5876f00b
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F004: push 0x58995da0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x5D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F009: jmp 0x5876f037
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5876F00B: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5876F00F: jne 0x5876f018
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F011: push 0x58995d78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x5D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F016: jmp 0x5876f037
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5876F018: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5876F01C: jne 0x5876f025
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F01E: push 0x58995d50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x5D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F023: jmp 0x5876f037
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5876F025: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5876F029: jne 0x5876f032
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F02B: push 0x58995d28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x5D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F030: jmp 0x5876f037
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5876F032: push 0x58995d00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x5D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F037: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876F03D: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5876F03F: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5876F041: mov ax, word ptr [ebx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x5E
        // 0x5876F045: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5876F049: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F04C: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5876F050: jne 0x5876f059
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F052: push 0x58995cd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F057: jmp 0x5876f085
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5876F059: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5876F05D: jne 0x5876f066
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F05F: push 0x58995cb0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F064: jmp 0x5876f085
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5876F066: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5876F06A: jne 0x5876f073
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F06C: push 0x58995c88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F071: jmp 0x5876f085
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5876F073: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5876F077: jne 0x5876f080
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F079: push 0x58995c60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F07E: jmp 0x5876f085
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5876F080: push 0x58995c38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F085: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5876F087: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F08A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F08D: push ebp
        __asm _emit 0x55
        // 0x5876F08E: push eax
        __asm _emit 0x50
        // 0x5876F08F: movzx eax, byte ptr [esi + 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876F093: imul eax, eax, 0x418
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F099: lea edx, [eax + ecx - 0x418]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F0A0: push edx
        __asm _emit 0x52
        // 0x5876F0A1: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876F0A5: push eax
        __asm _emit 0x50
        // 0x5876F0A6: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876F0AC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5876F0AF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5876F0B1: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876F0B5: push ecx
        __asm _emit 0x51
        // 0x5876F0B6: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5876F0B9: call 0x58770c20
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F0BE: pop ebp
        __asm _emit 0x5D
        // 0x5876F0BF: jmp 0x5876f1e9
        __asm _emit 0xE9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F0C4: mov edx, dword ptr [edx + 0x414]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F0CA: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F0CC: je 0x5876f1e2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F0D2: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x5E
        // 0x5876F0D6: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5876F0DA: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5876F0DE: jne 0x5876f0e7
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F0E0: push 0x58995cd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F0E5: jmp 0x5876f113
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5876F0E7: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5876F0EB: jne 0x5876f0f4
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F0ED: push 0x58995cb0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F0F2: jmp 0x5876f113
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5876F0F4: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5876F0F8: jne 0x5876f101
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F0FA: push 0x58995c88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F0FF: jmp 0x5876f113
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5876F101: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5876F105: jne 0x5876f10e
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F107: push 0x58995c60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F10C: jmp 0x5876f113
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5876F10E: push 0x58995c38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F113: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876F119: movzx edx, byte ptr [esi + 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x5876F11D: imul edx, edx, 0x418
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F123: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F126: push eax
        __asm _emit 0x50
        // 0x5876F127: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F12A: lea ecx, [edx + eax - 0x418]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F131: push ecx
        __asm _emit 0x51
        // 0x5876F132: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876F136: push edx
        __asm _emit 0x52
        // 0x5876F137: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876F13D: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5876F140: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5876F143: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876F145: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876F149: push eax
        __asm _emit 0x50
        // 0x5876F14A: call 0x58770c20
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F14F: jmp 0x5876f1e9
        __asm _emit 0xE9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F154: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5876F156: jne 0x5876f1e9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F15C: mov ecx, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0xFC
        // 0x5876F15F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876F161: je 0x5876f1e2
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x5876F163: mov ax, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x5E
        // 0x5876F167: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5876F16B: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5876F16F: jne 0x5876f178
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F171: push 0x58995cd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F176: jmp 0x5876f1a4
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5876F178: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5876F17C: jne 0x5876f185
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F17E: push 0x58995cb0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F183: jmp 0x5876f1a4
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5876F185: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5876F189: jne 0x5876f192
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F18B: push 0x58995c88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F190: jmp 0x5876f1a4
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5876F192: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5876F196: jne 0x5876f19f
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F198: push 0x58995c60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F19D: jmp 0x5876f1a4
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5876F19F: push 0x58995c38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F1A4: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876F1AA: movzx ecx, byte ptr [esi + 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5876F1AE: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876F1B1: imul ecx, ecx, 0x418
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F1B7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F1BA: push eax
        __asm _emit 0x50
        // 0x5876F1BB: lea eax, [ecx + edx - 0x418]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F1C2: push eax
        __asm _emit 0x50
        // 0x5876F1C3: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876F1C7: push ecx
        __asm _emit 0x51
        // 0x5876F1C8: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876F1CE: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5876F1D1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5876F1D4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876F1D6: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876F1DA: push edx
        __asm _emit 0x52
        // 0x5876F1DB: call 0x58770c20
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F1E0: jmp 0x5876f1e9
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5876F1E2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876F1E4: call 0x5876ee10
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F1E9: pop ebx
        __asm _emit 0x5B
        // 0x5876F1EA: mov ecx, dword ptr [esp + 0x408]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F1F1: pop edi
        __asm _emit 0x5F
        // 0x5876F1F2: pop esi
        __asm _emit 0x5E
        // 0x5876F1F3: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5876F1F5: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xD9
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5876F1FA: add esp, 0x404
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F200: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
