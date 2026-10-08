// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 382 bytes in 1 exact ranges.
// Source symbol alias: FUN_5875ec90.

// Ghidra body range 0x5875EC90..0x5875EE0E; 382 mapped bytes.
extern "C" __declspec(naked) void FUN_5875ec90_segment_00() {
    __asm {
        // 0x5875EC90: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875EC94: push ebx
        __asm _emit 0x53
        // 0x5875EC95: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875EC99: push ebp
        __asm _emit 0x55
        // 0x5875EC9A: mov ebp, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875EC9E: push esi
        __asm _emit 0x56
        // 0x5875EC9F: push edi
        __asm _emit 0x57
        // 0x5875ECA0: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875ECA4: push eax
        __asm _emit 0x50
        // 0x5875ECA5: push ebx
        __asm _emit 0x53
        // 0x5875ECA6: push ebp
        __asm _emit 0x55
        // 0x5875ECA7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875ECA9: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875ECAD: push edi
        __asm _emit 0x57
        // 0x5875ECAE: push ecx
        __asm _emit 0x51
        // 0x5875ECAF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875ECB1: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x5D
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875ECB6: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875ECBA: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875ECBE: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5875ECC1: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875ECC5: mov dword ptr [esi + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5875ECC8: mov dx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5875ECCD: mov dword ptr [esi], 0x5898da1c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x1C
        __asm _emit 0xDA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875ECD3: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ECD8: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5875ECDC: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5875ECE0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875ECE2: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x5875ECE5: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x5875ECE8: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5875ECEB: mov dword ptr [esi + 0x74], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x74
        // 0x5875ECEE: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x5875ECF1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5875ECF3: mov dword ptr [esi + 0x84], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ECF9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5875ECFC: mov dword ptr [esi + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED02: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875ED05: mov dword ptr [esi + 0x8c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED0B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5875ED0E: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED14: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED1A: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5875ED1F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875ED21: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5875ED24: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875ED26: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875ED29: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875ED2B: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED31: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED37: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5875ED3C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875ED3E: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5875ED41: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875ED43: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875ED46: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875ED48: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED4E: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED54: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5875ED59: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875ED5B: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5875ED5E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875ED60: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875ED63: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875ED65: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED6B: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED71: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5875ED76: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875ED78: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5875ED7B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875ED7D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875ED80: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875ED82: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED88: mov dword ptr [esi + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ED8E: mov dword ptr [esi + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5875ED91: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5875ED94: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5875ED96: je 0x5875edbf
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5875ED98: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5875ED9B: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5875ED9E: mov eax, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x5875EDA1: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5875EDA4: mov edx, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5875EDA7: lea eax, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5875EDAA: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5875EDAD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5875EDB0: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5875EDB3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875EDB6: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5875EDB9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5875EDBC: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5875EDBF: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875EDC3: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EDC8: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5875EDCC: mov eax, 0xbfff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EDD1: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5875EDD5: mov dword ptr [esi + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5875EDD8: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5875EDDA: jne 0x5875ede1
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5875EDDC: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EDE1: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875EDE5: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x5875EDE7: jne 0x5875edee
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5875EDE9: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EDEE: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5875EDF1: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5875EDF4: movzx eax, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5875EDF8: cdq
        __asm _emit 0x99
        // 0x5875EDF9: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5875EDFB: pop edi
        __asm _emit 0x5F
        // 0x5875EDFC: cdq
        __asm _emit 0x99
        // 0x5875EDFD: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x5875EDFF: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5875EE02: dec eax
        __asm _emit 0x48
        // 0x5875EE03: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5875EE06: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875EE08: pop esi
        __asm _emit 0x5E
        // 0x5875EE09: pop ebp
        __asm _emit 0x5D
        // 0x5875EE0A: pop ebx
        __asm _emit 0x5B
        // 0x5875EE0B: ret 0x30
        __asm _emit 0xC2
        __asm _emit 0x30
        __asm _emit 0x00
    }
}
