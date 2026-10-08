// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 360 bytes in 1 exact ranges.
// Source symbol alias: FUN_58811960.

// Ghidra body range 0x58811960..0x58811AC8; 360 mapped bytes.
extern "C" __declspec(naked) void FUN_58811960_segment_00() {
    __asm {
        // 0x58811960: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811965: push esi
        __asm _emit 0x56
        // 0x58811966: mov esi, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881196C: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811972: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811978: cdq
        __asm _emit 0x99
        // 0x58811979: idiv dword ptr [esi + 0xb8]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881197F: pop esi
        __asm _emit 0x5E
        // 0x58811980: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811987: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58811989: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5881198B: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5881198D: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58811992: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58811994: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58811997: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58811999: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5881199C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5881199E: mov edx, 0x1c
        __asm _emit 0xBA
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588119A3: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588119A5: mov eax, dword ptr [ecx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588119AB: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588119AE: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588119B4: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588119B7: movzx eax, word ptr [eax + 0x164]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588119BE: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588119C1: je 0x58811a68
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588119C7: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588119CB: je 0x58811a68
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588119D1: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588119D5: je 0x58811a35
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x588119D7: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588119DB: je 0x58811a35
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x588119DD: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588119E1: je 0x58811a35
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588119E3: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588119E7: je 0x588119f3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588119E9: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588119ED: jne 0x58811ac7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588119F3: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588119F8: cmp dword ptr [eax + 0x164], 0x8e
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A02: jle 0x58811a26
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x58811A04: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A0B: je 0x58811a26
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58811A0D: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A13: mov eax, dword ptr [edx + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A19: mov ecx, dword ptr [ecx + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A1F: push eax
        __asm _emit 0x50
        // 0x58811A20: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xFC
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58811A25: ret
        __asm _emit 0xC3
        // 0x58811A26: mov ecx, dword ptr [ecx + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A2C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58811A2E: push eax
        __asm _emit 0x50
        // 0x58811A2F: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xFC
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58811A34: ret
        __asm _emit 0xC3
        // 0x58811A35: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811A3A: cmp dword ptr [eax + 0x164], 0x8d
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A44: jle 0x58811a26
        __asm _emit 0x7E
        __asm _emit 0xE0
        // 0x58811A46: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A4D: je 0x58811a26
        __asm _emit 0x74
        __asm _emit 0xD7
        // 0x58811A4F: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A55: mov eax, dword ptr [eax + 0x234]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A5B: mov ecx, dword ptr [ecx + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A61: push eax
        __asm _emit 0x50
        // 0x58811A62: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xFC
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58811A67: ret
        __asm _emit 0xC3
        // 0x58811A68: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811A6D: cmp dword ptr [eax + 0x164], 0x8c
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A77: jle 0x58811a90
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58811A79: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A80: je 0x58811a90
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58811A82: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A88: mov eax, dword ptr [edx + 0x230]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A8E: jmp 0x58811a92
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58811A90: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58811A92: mov ecx, dword ptr [ecx + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811A98: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58811A9B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58811A9D: je 0x58811ac7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58811A9F: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58811AA2: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58811AA5: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58811AA8: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58811AAB: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58811AAE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58811AB0: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58811AB3: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58811AB5: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58811AB8: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58811ABB: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58811ABE: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58811AC1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58811AC4: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58811AC7: ret
        __asm _emit 0xC3
    }
}
