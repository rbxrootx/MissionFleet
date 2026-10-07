// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1699 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e8c00.

// Ghidra body range 0x587E8C00..0x587E92A3; 1699 mapped bytes.
extern "C" __declspec(naked) void FUN_587e8c00_segment_00() {
    __asm {
        // 0x587E8C00: sub esp, 0x40c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C06: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587E8C0B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587E8C0D: mov dword ptr [esp + 0x408], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C14: mov edx, dword ptr [esp + 0x410]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C1B: push ebx
        __asm _emit 0x53
        // 0x587E8C1C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E8C1E: shr eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x587E8C21: push ebp
        __asm _emit 0x55
        // 0x587E8C22: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587E8C24: push esi
        __asm _emit 0x56
        // 0x587E8C25: mov esi, dword ptr [esp + 0x424]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C2C: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587E8C2F: push edi
        __asm _emit 0x57
        // 0x587E8C30: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587E8C32: and ebx, 0xff00
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C38: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E8C3A: or ecx, ebx
        __asm _emit 0x0B
        __asm _emit 0xCB
        // 0x587E8C3C: shl ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x10
        // 0x587E8C3F: lea ebp, [esi + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x30
        // 0x587E8C42: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E8C46: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587E8C49: jne 0x587e8d35
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C4F: cmp dword ptr [edi + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C56: jne 0x587e9288
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C5C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E8C62: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587E8C65: movzx eax, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C6C: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587E8C6F: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587E8C71: jne 0x587e9288
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8C77: push esi
        __asm _emit 0x56
        // 0x587E8C78: call 0x5878a190
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x15
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587E8C7D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E8C81: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E8C83: je 0x587e8cd8
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x587E8C85: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E8C87: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xDA
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587E8C8C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E8C8E: je 0x587e8cd8
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x587E8C90: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E8C95: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587E8C98: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E8C9C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587E8C9F: sub ecx, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587E8CA2: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587E8CA5: sub ebx, dword ptr [edx + 4]
        __asm _emit 0x2B
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x587E8CA8: imul ecx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC9
        // 0x587E8CAB: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587E8CAD: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587E8CAF: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x587E8CB4: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587E8CB6: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x587E8CB8: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587E8CBA: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587E8CBD: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587E8CBF: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x587E8CC1: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x587E8CC4: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587E8CC6: cmp ecx, 0x9c400
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587E8CCC: jge 0x587e8cd8
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x587E8CCE: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E8CD2: push ebp
        __asm _emit 0x55
        // 0x587E8CD3: call 0x588d6d50
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xE0
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587E8CD8: push ebp
        __asm _emit 0x55
        // 0x587E8CD9: push esi
        __asm _emit 0x56
        // 0x587E8CDA: push 0x5899bfc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8CDF: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8CE5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8CE8: push eax
        __asm _emit 0x50
        // 0x587E8CE9: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E8CED: push eax
        __asm _emit 0x50
        // 0x587E8CEE: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8CF4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E8CF7: push 0xa0a0ee
        __asm _emit 0x68
        __asm _emit 0xEE
        __asm _emit 0xA0
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x587E8CFC: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E8D00: push ecx
        __asm _emit 0x51
        // 0x587E8D01: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E8D07: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E8D0C: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E8D12: mov dword ptr [edi + 0x6c], 0xa0a0ee
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0xEE
        __asm _emit 0xA0
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x587E8D19: mov edx, dword ptr [esp + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8D20: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E8D24: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E8D26: push esi
        __asm _emit 0x56
        // 0x587E8D27: push edx
        __asm _emit 0x52
        // 0x587E8D28: mov dword ptr [edi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8D2F: push eax
        __asm _emit 0x50
        // 0x587E8D30: jmp 0x587e927d
        __asm _emit 0xE9
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8D35: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587E8D38: jne 0x587e8e3b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8D3E: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E8D43: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x587E8D46: push eax
        __asm _emit 0x50
        // 0x587E8D47: push esi
        __asm _emit 0x56
        // 0x587E8D48: call dword ptr [0x5898c138]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8D4E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E8D50: jne 0x587e8dbf
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x587E8D52: cmp ebx, 0x800
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8D58: jne 0x587e8d78
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587E8D5A: push ebp
        __asm _emit 0x55
        // 0x587E8D5B: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E8D5F: push 0x5899bfb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8D64: push ecx
        __asm _emit 0x51
        // 0x587E8D65: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8D6B: mov ebx, 0xa0bec8
        __asm _emit 0xBB
        __asm _emit 0xC8
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x587E8D70: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E8D73: jmp 0x587e8e05
        __asm _emit 0xE9
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8D78: lea ebx, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x587E8D7B: push ebx
        __asm _emit 0x53
        // 0x587E8D7C: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8D82: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E8D84: je 0x587e8d9e
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587E8D86: push ebp
        __asm _emit 0x55
        // 0x587E8D87: push ebx
        __asm _emit 0x53
        // 0x587E8D88: push 0x5899bf9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8D8D: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8D93: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8D96: push eax
        __asm _emit 0x50
        // 0x587E8D97: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E8D9B: push edx
        __asm _emit 0x52
        // 0x587E8D9C: jmp 0x587e8df7
        __asm _emit 0xEB
        __asm _emit 0x59
        // 0x587E8D9E: push 0x5899bf78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8DA3: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8DA9: push eax
        __asm _emit 0x50
        // 0x587E8DAA: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E8DAE: push eax
        __asm _emit 0x50
        // 0x587E8DAF: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8DB5: mov ebx, 0xffff
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8DBA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E8DBD: jmp 0x587e8e05
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x587E8DBF: push ebp
        __asm _emit 0x55
        // 0x587E8DC0: cmp ebx, 0x800
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8DC6: jne 0x587e8de2
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587E8DC8: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E8DCC: push 0x5899bf70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8DD1: push edx
        __asm _emit 0x52
        // 0x587E8DD2: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8DD8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E8DDB: mov ebx, 0xa0bec8
        __asm _emit 0xBB
        __asm _emit 0xC8
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x587E8DE0: jmp 0x587e8e05
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x587E8DE2: push esi
        __asm _emit 0x56
        // 0x587E8DE3: push 0x5899bf54
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8DE8: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8DEE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8DF1: push eax
        __asm _emit 0x50
        // 0x587E8DF2: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E8DF6: push eax
        __asm _emit 0x50
        // 0x587E8DF7: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8DFD: mov ebx, 0xffff
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8E02: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E8E05: push ebx
        __asm _emit 0x53
        // 0x587E8E06: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E8E0A: push ecx
        __asm _emit 0x51
        // 0x587E8E0B: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E8E11: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x2F
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E8E16: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E8E1C: mov edx, dword ptr [esp + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8E23: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E8E27: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E8E29: push esi
        __asm _emit 0x56
        // 0x587E8E2A: push edx
        __asm _emit 0x52
        // 0x587E8E2B: mov dword ptr [edi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8E32: mov dword ptr [edi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x6C
        // 0x587E8E35: push eax
        __asm _emit 0x50
        // 0x587E8E36: jmp 0x587e927d
        __asm _emit 0xE9
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8E3B: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587E8E3E: je 0x587e8e53
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587E8E40: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587E8E43: je 0x587e8e53
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587E8E45: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587E8E48: je 0x587e8e53
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587E8E4A: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587E8E4D: jne 0x587e9288
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8E53: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E8E59: push esi
        __asm _emit 0x56
        // 0x587E8E5A: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8E62: call 0x5878a190
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x13
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587E8E67: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E8E69: jne 0x587e8e73
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587E8E6B: mov dword ptr [esp + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8E73: cmp byte ptr [esi], 0
        __asm _emit 0x80
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587E8E76: je 0x587e8ec1
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x587E8E78: push 0x5899bf48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8E7D: push esi
        __asm _emit 0x56
        // 0x587E8E7E: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8E84: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E8E86: je 0x587e8ec1
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x587E8E88: push 0x5899bf48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8E8D: push esi
        __asm _emit 0x56
        // 0x587E8E8E: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8E94: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E8E96: je 0x587e8ec1
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587E8E98: mov ecx, dword ptr [esp + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8E9F: and ecx, 0xffff0000
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E8EA5: cmp ecx, 0x10000
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8EAB: jne 0x587e8ec1
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587E8EAD: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E8EB2: je 0x587e8ec1
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587E8EB4: cmp dword ptr [edi + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8EBB: je 0x587e9288
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8EC1: cmp ebx, 0x800
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8EC7: jne 0x587e8f03
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x587E8EC9: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E8ECF: push 0xa0bec8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x587E8ED4: push ebp
        __asm _emit 0x55
        // 0x587E8ED5: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x2E
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E8EDA: mov edx, dword ptr [esp + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8EE1: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E8EE7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E8EE9: push esi
        __asm _emit 0x56
        // 0x587E8EEA: push edx
        __asm _emit 0x52
        // 0x587E8EEB: mov dword ptr [edi + 0x6c], 0xa0bec8
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0xC8
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x587E8EF2: mov dword ptr [edi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8EF9: push 0x8020000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x08
        // 0x587E8EFE: jmp 0x587e927d
        __asm _emit 0xE9
        __asm _emit 0x7A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8F03: cmp ebx, 0x2000
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8F09: jne 0x587e8f9e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8F0F: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8F15: push 0x5899bf2c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8F1A: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587E8F1C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8F1F: push eax
        __asm _emit 0x50
        // 0x587E8F20: push esi
        __asm _emit 0x56
        // 0x587E8F21: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8F27: push ebp
        __asm _emit 0x55
        // 0x587E8F28: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E8F2A: jne 0x587e8f46
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587E8F2C: push 0x5899bf2c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8F31: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587E8F33: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8F36: push eax
        __asm _emit 0x50
        // 0x587E8F37: push 0x5899bf24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8F3C: lea eax, [esp + 0x224]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8F43: push eax
        __asm _emit 0x50
        // 0x587E8F44: jmp 0x587e8f54
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587E8F46: push esi
        __asm _emit 0x56
        // 0x587E8F47: push 0x5899bf24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8F4C: lea ecx, [esp + 0x224]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8F53: push ecx
        __asm _emit 0x51
        // 0x587E8F54: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8F5A: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E8F60: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E8F63: push 0x1aee92
        __asm _emit 0x68
        __asm _emit 0x92
        __asm _emit 0xEE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587E8F68: lea edx, [esp + 0x21c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8F6F: push edx
        __asm _emit 0x52
        // 0x587E8F70: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x2E
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E8F75: mov eax, dword ptr [esp + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8F7C: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E8F82: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E8F86: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E8F88: push esi
        __asm _emit 0x56
        // 0x587E8F89: push eax
        __asm _emit 0x50
        // 0x587E8F8A: mov dword ptr [edi + 0x6c], 0x1aee92
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0x92
        __asm _emit 0xEE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587E8F91: mov dword ptr [edi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8F98: push ecx
        __asm _emit 0x51
        // 0x587E8F99: jmp 0x587e927d
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8F9E: cmp ebx, 0x4000
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8FA4: jne 0x587e901e
        __asm _emit 0x75
        __asm _emit 0x78
        // 0x587E8FA6: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8FAC: push 0x5899bf2c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8FB1: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587E8FB3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8FB6: push eax
        __asm _emit 0x50
        // 0x587E8FB7: push esi
        __asm _emit 0x56
        // 0x587E8FB8: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8FBE: push ebp
        __asm _emit 0x55
        // 0x587E8FBF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E8FC1: jne 0x587e8fdd
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587E8FC3: push 0x5899bf2c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8FC8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587E8FCA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8FCD: push eax
        __asm _emit 0x50
        // 0x587E8FCE: push 0x5899bf24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8FD3: lea edx, [esp + 0x224]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8FDA: push edx
        __asm _emit 0x52
        // 0x587E8FDB: jmp 0x587e8feb
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587E8FDD: push esi
        __asm _emit 0x56
        // 0x587E8FDE: push 0x5899bf24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8FE3: lea eax, [esp + 0x224]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8FEA: push eax
        __asm _emit 0x50
        // 0x587E8FEB: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8FF1: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E8FF4: push 0x1aee92
        __asm _emit 0x68
        __asm _emit 0x92
        __asm _emit 0xEE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587E8FF9: lea ecx, [esp + 0x21c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9000: push ecx
        __asm _emit 0x51
        // 0x587E9001: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9007: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x2D
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E900C: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9012: mov dword ptr [edi + 0x6c], 0x1aee92
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0x92
        __asm _emit 0xEE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587E9019: jmp 0x587e8d19
        __asm _emit 0xE9
        __asm _emit 0xFB
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E901E: cmp ebx, 0x8000
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9024: je 0x587e9288
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E902A: cmp dword ptr [edi + 0x37c], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x7C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9031: jne 0x587e9288
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9037: mov ebx, dword ptr [esp + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E903E: shr ebx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587E9041: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E9045: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x587E9048: jne 0x587e90b5
        __asm _emit 0x75
        __asm _emit 0x6B
        // 0x587E904A: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9050: push esi
        __asm _emit 0x56
        // 0x587E9051: call 0x5878a190
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x11
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587E9056: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E905A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E905C: je 0x587e90b5
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x587E905E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E9060: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xD6
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587E9065: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E9067: je 0x587e90b5
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x587E9069: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E906F: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587E9072: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587E9075: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E9079: sub ecx, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587E907C: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587E907F: sub ebx, dword ptr [edx + 4]
        __asm _emit 0x2B
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x587E9082: imul ecx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC9
        // 0x587E9085: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587E9087: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587E9089: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x587E908E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587E9090: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587E9092: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587E9095: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x587E9097: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E9099: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E909C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E909E: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587E90A0: cmp eax, 0x9c400
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587E90A5: jge 0x587e90b1
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x587E90A7: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E90AB: push ebp
        __asm _emit 0x55
        // 0x587E90AC: call 0x588d6d50
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xDC
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587E90B1: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E90B5: lea eax, [ebx - 1]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0xFF
        // 0x587E90B8: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587E90BB: ja 0x587e926d
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E90C1: jmp dword ptr [eax*4 + 0x587e92a4]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x92
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587E90C8: push ebp
        __asm _emit 0x55
        // 0x587E90C9: push esi
        __asm _emit 0x56
        // 0x587E90CA: push 0x5899bf0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E90CF: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E90D5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E90D8: push eax
        __asm _emit 0x50
        // 0x587E90D9: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E90DD: push edx
        __asm _emit 0x52
        // 0x587E90DE: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E90E4: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E90E9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E90EC: cmp dword ptr [eax + 0x638], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E90F3: je 0x587e926d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E90F9: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587E90FE: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E9102: push ecx
        __asm _emit 0x51
        // 0x587E9103: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9109: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x2C
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E910E: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9114: mov dword ptr [edi + 0x6c], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587E911B: jmp 0x587e9266
        __asm _emit 0xE9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9120: push ebp
        __asm _emit 0x55
        // 0x587E9121: push esi
        __asm _emit 0x56
        // 0x587E9122: push 0x5899bef0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E9127: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E912D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E9130: push eax
        __asm _emit 0x50
        // 0x587E9131: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E9135: push edx
        __asm _emit 0x52
        // 0x587E9136: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E913C: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9141: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E9144: cmp dword ptr [eax + 0x63c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E914B: je 0x587e926d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9151: push 0xffcc66
        __asm _emit 0x68
        __asm _emit 0x66
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587E9156: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E915A: push ecx
        __asm _emit 0x51
        // 0x587E915B: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9161: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x2C
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E9166: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E916C: mov dword ptr [edi + 0x6c], 0xffcc66
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0x66
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587E9173: jmp 0x587e9266
        __asm _emit 0xE9
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9178: push ebp
        __asm _emit 0x55
        // 0x587E9179: push esi
        __asm _emit 0x56
        // 0x587E917A: push 0x5899bed0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E917F: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E9185: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E9188: push eax
        __asm _emit 0x50
        // 0x587E9189: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E918D: push edx
        __asm _emit 0x52
        // 0x587E918E: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E9194: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9199: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E919C: cmp dword ptr [eax + 0x644], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E91A3: je 0x587e926d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E91A9: push 0x993399
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x33
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x587E91AE: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E91B2: push ecx
        __asm _emit 0x51
        // 0x587E91B3: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E91B9: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x2B
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E91BE: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E91C4: mov dword ptr [edi + 0x6c], 0x993399
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0x99
        __asm _emit 0x33
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x587E91CB: jmp 0x587e9266
        __asm _emit 0xE9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E91D0: push ebp
        __asm _emit 0x55
        // 0x587E91D1: push esi
        __asm _emit 0x56
        // 0x587E91D2: push 0x5899beac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E91D7: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E91DD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E91E0: push eax
        __asm _emit 0x50
        // 0x587E91E1: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E91E5: push edx
        __asm _emit 0x52
        // 0x587E91E6: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E91EC: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E91F1: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E91F4: cmp dword ptr [eax + 0x640], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E91FB: je 0x587e926d
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x587E91FD: push 0xf89a9a
        __asm _emit 0x68
        __asm _emit 0x9A
        __asm _emit 0x9A
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x587E9202: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E9206: push ecx
        __asm _emit 0x51
        // 0x587E9207: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E920D: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x2B
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E9212: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9218: mov dword ptr [edi + 0x6c], 0xf89a9a
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0x9A
        __asm _emit 0x9A
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x587E921F: jmp 0x587e9266
        __asm _emit 0xEB
        __asm _emit 0x45
        // 0x587E9221: push ebp
        __asm _emit 0x55
        // 0x587E9222: push esi
        __asm _emit 0x56
        // 0x587E9223: lea edx, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587E9226: push edx
        __asm _emit 0x52
        // 0x587E9227: push 0x5899be88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E922C: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E9232: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E9235: push eax
        __asm _emit 0x50
        // 0x587E9236: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587E923A: push eax
        __asm _emit 0x50
        // 0x587E923B: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E9241: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587E9244: push 0xcc66cc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x66
        __asm _emit 0xCC
        __asm _emit 0x00
        // 0x587E9249: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E924D: push ecx
        __asm _emit 0x51
        // 0x587E924E: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9254: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x2B
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E9259: mov edi, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E925F: mov dword ptr [edi + 0x6c], 0xcc66cc
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0xCC
        __asm _emit 0x66
        __asm _emit 0xCC
        __asm _emit 0x00
        // 0x587E9266: mov dword ptr [edi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E926D: mov edx, dword ptr [esp + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9274: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E9276: push esi
        __asm _emit 0x56
        // 0x587E9277: push edx
        __asm _emit 0x52
        // 0x587E9278: push 0x20000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E927D: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9283: call 0x58893e80
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xAB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587E9288: mov ecx, dword ptr [esp + 0x418]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E928F: pop edi
        __asm _emit 0x5F
        // 0x587E9290: pop esi
        __asm _emit 0x5E
        // 0x587E9291: pop ebp
        __asm _emit 0x5D
        // 0x587E9292: pop ebx
        __asm _emit 0x5B
        // 0x587E9293: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587E9295: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x39
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E929A: add esp, 0x40c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E92A0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
