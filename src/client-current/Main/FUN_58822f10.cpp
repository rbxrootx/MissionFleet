// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58822F10 .. +0x1F4 bytes.
// Source symbol alias: FUN_58822f10.
extern "C" __declspec(naked) void FUN_58822f10() {
    __asm {
        // 0x58822F10: push esi
        __asm _emit 0x56
        // 0x58822F11: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58822F13: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58822F17: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58822F19: je 0x588230fe
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822F1F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58822F23: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822F28: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58822F2B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822F30: push edi
        __asm _emit 0x57
        // 0x58822F31: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58822F34: je 0x58822f4b
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58822F36: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58822F3A: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58822F3D: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822F42: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58822F45: jne 0x588230e1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822F4B: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58822F4E: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58822F51: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58822F53: jne 0x58822f5d
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58822F55: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58822F58: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58822F5B: je 0x58822fdc
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x58822F5D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58822F5F: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58822F62: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58822F65: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x58822F68: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x58822F6B: ja 0x58822f92
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x58822F6D: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58822F70: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58822F73: ja 0x58822f89
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x58822F75: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58822F77: jge 0x58822f7e
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58822F79: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58822F7C: jmp 0x58822f9d
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58822F7E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58822F80: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58822F82: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x58822F85: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58822F87: jmp 0x58822f9d
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58822F89: cdq
        __asm _emit 0x99
        // 0x58822F8A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58822F8C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58822F8E: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x58822F90: jmp 0x58822f9d
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58822F92: cdq
        __asm _emit 0x99
        // 0x58822F93: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58822F96: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58822F98: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58822F9A: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58822F9D: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x58822FA0: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x58822FA3: ja 0x58822fc8
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x58822FA5: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x58822FA8: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58822FAB: ja 0x58822fbf
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x58822FAD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58822FAF: jge 0x58822fb6
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58822FB1: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58822FB4: jmp 0x58822fd3
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x58822FB6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58822FB8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58822FBA: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x58822FBD: jmp 0x58822fd3
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58822FBF: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58822FC1: cdq
        __asm _emit 0x99
        // 0x58822FC2: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58822FC4: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58822FC6: jmp 0x58822fd3
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58822FC8: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58822FCA: cdq
        __asm _emit 0x99
        // 0x58822FCB: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58822FCE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58822FD0: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58822FD3: push eax
        __asm _emit 0x50
        // 0x58822FD4: push edi
        __asm _emit 0x57
        // 0x58822FD5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58822FD7: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xFE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58822FDC: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58822FDF: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x58822FE2: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58822FE4: je 0x58823010
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58822FE6: jle 0x58822ff9
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58822FE8: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58822FEA: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58822FEC: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58822FEF: jg 0x58822ff4
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58822FF1: push eax
        __asm _emit 0x50
        // 0x58822FF2: jmp 0x58823009
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58822FF4: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x58822FF7: jmp 0x58823008
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58822FF9: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58822FFB: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58822FFD: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58823000: jg 0x58823005
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58823002: push eax
        __asm _emit 0x50
        // 0x58823003: jmp 0x58823009
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58823005: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x58823008: push ecx
        __asm _emit 0x51
        // 0x58823009: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882300B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xFD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58823010: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58823013: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58823016: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58823018: je 0x58823044
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5882301A: jle 0x5882302d
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5882301C: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5882301E: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58823020: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58823023: jg 0x58823028
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58823025: push eax
        __asm _emit 0x50
        // 0x58823026: jmp 0x5882303d
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58823028: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x5882302B: jmp 0x5882303c
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5882302D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5882302F: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58823031: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58823034: jg 0x58823039
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58823036: push eax
        __asm _emit 0x50
        // 0x58823037: jmp 0x5882303d
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58823039: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x5882303C: push ecx
        __asm _emit 0x51
        // 0x5882303D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882303F: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xFC
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58823044: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58823047: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5882304A: jne 0x588230e1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823050: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58823053: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58823056: jne 0x588230e1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882305C: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x5882305F: cmp edx, dword ptr [esi + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x58823062: jne 0x588230e1
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x58823064: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58823067: cmp eax, dword ptr [esi + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x5882306A: jne 0x588230e1
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x5882306C: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58823070: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823075: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58823078: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882307D: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58823080: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58823084: jne 0x588230a1
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58823086: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882308B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5882308E: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823093: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58823096: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5882309A: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5882309F: jmp 0x588230e1
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x588230A1: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588230A4: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588230A9: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588230AC: jne 0x588230e1
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588230AE: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588230B2: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588230B7: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588230BA: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588230BF: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588230C2: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588230C6: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588230CB: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588230CF: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588230D4: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588230D8: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588230DD: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588230E1: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588230E4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588230E6: je 0x588230fd
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588230E8: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588230EB: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588230ED: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588230F0: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588230F3: je 0x58823100
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588230F5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588230F7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588230F9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588230FB: jne 0x588230e8
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588230FD: pop edi
        __asm _emit 0x5F
        // 0x588230FE: pop esi
        __asm _emit 0x5E
        // 0x588230FF: ret
        __asm _emit 0xC3
        // 0x58823100: pop edi
        __asm _emit 0x5F
        // 0x58823101: pop esi
        __asm _emit 0x5E
        // 0x58823102: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
