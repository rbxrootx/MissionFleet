// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 860 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cbe00.

// Ghidra body range 0x587CBE00..0x587CC15C; 860 mapped bytes.
extern "C" __declspec(naked) void FUN_587cbe00_segment_00() {
    __asm {
        // 0x587CBE00: push esi
        __asm _emit 0x56
        // 0x587CBE01: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CBE03: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CBE07: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x587CBE09: je 0x587cc156
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBE0F: cmp dword ptr [esi + 0x214], 4
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x587CBE16: push edi
        __asm _emit 0x57
        // 0x587CBE17: je 0x587cc118
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBE1D: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587CBE20: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBE26: push ebx
        __asm _emit 0x53
        // 0x587CBE27: push ebp
        __asm _emit 0x55
        // 0x587CBE28: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBE2D: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x587CBE2F: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587CBE31: jge 0x587cbe3c
        __asm _emit 0x7D
        __asm _emit 0x09
        // 0x587CBE33: inc eax
        __asm _emit 0x40
        // 0x587CBE34: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBE3A: jmp 0x587cbe46
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587CBE3C: mov dword ptr [esi + 0x88], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBE46: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CBE48: call 0x587cb9b0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CBE4D: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBE53: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CBE58: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBE5A: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBE60: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBE63: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBE65: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBE68: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBE6A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CBE6C: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CBE71: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBE73: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBE76: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587CBE78: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587CBE7B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587CBE7D: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x587CBE7F: mov ecx, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBE85: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CBE8A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBE8C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587CBE8F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBE91: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBE94: push edi
        __asm _emit 0x57
        // 0x587CBE95: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBE97: push eax
        __asm _emit 0x50
        // 0x587CBE98: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CBE9A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x73
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CBE9F: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587CBEA2: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587CBEA5: push ecx
        __asm _emit 0x51
        // 0x587CBEA6: mov ecx, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBEAC: push edx
        __asm _emit 0x52
        // 0x587CBEAD: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x73
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CBEB2: mov eax, dword ptr [esi + 0x1ec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBEB8: and eax, 0x8000001f
        __asm _emit 0x25
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587CBEBD: jns 0x587cbec4
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587CBEBF: dec eax
        __asm _emit 0x48
        // 0x587CBEC0: or eax, 0xffffffe0
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xE0
        // 0x587CBEC3: inc eax
        __asm _emit 0x40
        // 0x587CBEC4: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CBEC7: mov dword ptr [esi + eax*8 + 0xd4], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBECE: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587CBED1: mov dword ptr [esi + eax*8 + 0xd8], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xC6
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBED8: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBEDE: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CBEE3: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBEE5: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBEEB: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBEEE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBEF0: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBEF3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBEF5: push eax
        __asm _emit 0x50
        // 0x587CBEF6: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CBEFB: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBEFD: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587CBF00: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBF03: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587CBF05: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587CBF08: lea edx, [edx + ecx - 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0xD4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CBF0F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CBF15: push edx
        __asm _emit 0x52
        // 0x587CBF16: push eax
        __asm _emit 0x50
        // 0x587CBF17: call 0x587eabc0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CBF1C: mov edi, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF22: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CBF24: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CBF26: je 0x587cbf39
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CBF28: mov ecx, 0x271a
        __asm _emit 0xB9
        __asm _emit 0x1A
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF2D: mov dword ptr [esi + 0x1f8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF33: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x587CBF37: jmp 0x587cbf48
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587CBF39: mov edx, 0x2706
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF3E: mov dword ptr [esi + 0x1f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF44: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x587CBF48: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587CBF4B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CBF4D: je 0x587cbf55
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CBF4F: push edi
        __asm _emit 0x57
        // 0x587CBF50: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x6F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CBF55: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587CBF58: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CBF5A: je 0x587cbf62
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CBF5C: push edi
        __asm _emit 0x57
        // 0x587CBF5D: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x6F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CBF62: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF68: cmp dword ptr [esi + 0x1f8], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF6E: je 0x587cc042
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF74: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x587CBF76: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x6D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CBF7B: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF81: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CBF86: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBF88: mov ecx, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBF8E: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBF91: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587CBF93: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x587CBF96: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x587CBF98: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587CBF9D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBF9F: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587CBFA2: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBFA4: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x587CBFA6: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587CBFA9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBFAC: lea ecx, [eax + edi - 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x38
        __asm _emit 0xD4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CBFB3: push ecx
        __asm _emit 0x51
        // 0x587CBFB4: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBFBA: push edx
        __asm _emit 0x52
        // 0x587CBFBB: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x72
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CBFC0: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x0C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CBFC5: cdq
        __asm _emit 0x99
        // 0x587CBFC6: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBFCB: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CBFCD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CBFCF: jne 0x587cc010
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x587CBFD1: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBFD7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587CBFD9: jle 0x587cbfea
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587CBFDB: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587CBFDE: jle 0x587cbfe8
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587CBFE0: mov dword ptr [esi + 0x200], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBFE6: jmp 0x587cc010
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x587CBFE8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587CBFEA: jge 0x587cbff9
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x587CBFEC: cmp eax, -0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xF6
        // 0x587CBFEF: jge 0x587cbff9
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x587CBFF1: mov dword ptr [esi + 0x200], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBFF7: jmp 0x587cc010
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587CBFF9: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x0C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CBFFE: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587CC003: jns 0x587cc00a
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587CC005: dec eax
        __asm _emit 0x48
        // 0x587CC006: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x587CC009: inc eax
        __asm _emit 0x40
        // 0x587CC00A: mov dword ptr [esi + 0x200], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC010: cmp dword ptr [esi + 0x200], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC016: je 0x587cc02d
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587CC018: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x0C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CC01D: cdq
        __asm _emit 0x99
        // 0x587CC01E: mov ecx, 0x1e
        __asm _emit 0xB9
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC023: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CC025: add dword ptr [esi + 0x1fc], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC02B: jmp 0x587cc079
        __asm _emit 0xEB
        __asm _emit 0x4C
        // 0x587CC02D: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x0C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CC032: cdq
        __asm _emit 0x99
        // 0x587CC033: mov ecx, 0x1e
        __asm _emit 0xB9
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC038: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CC03A: sub dword ptr [esi + 0x1fc], edx
        __asm _emit 0x29
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC040: jmp 0x587cc079
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x587CC042: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC047: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x6C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC04C: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC052: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CC057: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CC059: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CC05C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CC05F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CC061: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CC064: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CC066: push eax
        __asm _emit 0x50
        // 0x587CC067: push ecx
        __asm _emit 0x51
        // 0x587CC068: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC06E: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x72
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC073: mov dword ptr [esi + 0x1fc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC079: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587CC07B: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x587CC07E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CC080: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CC082: mov eax, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC088: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587CC08A: je 0x587cc091
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587CC08C: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587CC08F: jne 0x587cc10e
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x587CC091: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CC097: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x587CC09A: sub eax, dword ptr [ebx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x587CC09D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CC0A3: mov edi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CC0A9: mov ebp, dword ptr [edi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC0AF: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CC0B1: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC0B7: cdq
        __asm _emit 0x99
        // 0x587CC0B8: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587CC0BA: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CC0BD: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587CC0BF: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x587CC0C2: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x587CC0C5: sub ecx, dword ptr [edi + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x587CC0C8: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CC0CA: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC0D0: cdq
        __asm _emit 0x99
        // 0x587CC0D1: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587CC0D3: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CC0D9: push edx
        __asm _emit 0x52
        // 0x587CC0DA: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587CC0DD: add eax, dword ptr [edi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x587CC0E0: push eax
        __asm _emit 0x50
        // 0x587CC0E1: push ecx
        __asm _emit 0x51
        // 0x587CC0E2: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC0E8: call 0x587b7500
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xB4
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587CC0ED: mov eax, dword ptr [esi + 0x1f0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC0F3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CC0F5: jle 0x587cc0fe
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x587CC0F7: dec eax
        __asm _emit 0x48
        // 0x587CC0F8: mov dword ptr [esi + 0x1f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC0FE: cmp dword ptr [esi + 0x214], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587CC105: jne 0x587cc10e
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587CC107: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CC109: call 0x587cb280
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CC10E: inc dword ptr [esi + 0x1ec]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC114: pop ebp
        __asm _emit 0x5D
        // 0x587CC115: pop ebx
        __asm _emit 0x5B
        // 0x587CC116: jmp 0x587cc133
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x587CC118: mov eax, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC11E: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC123: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CC127: mov eax, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC12D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587CC12F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CC133: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x587CC136: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CC138: je 0x587cc155
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587CC13A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC140: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x587CC143: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CC145: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587CC148: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x587CC14B: je 0x587cc158
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587CC14D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CC14F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CC151: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CC153: jne 0x587cc140
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x587CC155: pop edi
        __asm _emit 0x5F
        // 0x587CC156: pop esi
        __asm _emit 0x5E
        // 0x587CC157: ret
        __asm _emit 0xC3
        // 0x587CC158: pop edi
        __asm _emit 0x5F
        // 0x587CC159: pop esi
        __asm _emit 0x5E
        // 0x587CC15A: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
