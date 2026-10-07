// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1323 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_5880cca0.

// Ghidra body range 0x5880CCA0..0x5880CCCA; 42 mapped bytes.
extern "C" __declspec(naked) void FUN_5880cca0_segment_00() {
    __asm {
        // 0x5880CCA0: sub esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CCA6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5880CCAB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5880CCAD: mov dword ptr [esp + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CCB4: push ebx
        __asm _emit 0x53
        // 0x5880CCB5: push ebp
        __asm _emit 0x55
        // 0x5880CCB6: push esi
        __asm _emit 0x56
        // 0x5880CCB7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5880CCB9: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CCBE: push edi
        __asm _emit 0x57
        // 0x5880CCBF: lea eax, [esi + 0x3c8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CCC5: lea ebp, [edx - 3]
        __asm _emit 0x8D
        __asm _emit 0x6A
        __asm _emit 0xFD
        // 0x5880CCC8: jmp 0x5880ccd0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x5880CCD0..0x5880D1D1; 1281 mapped bytes.
extern "C" __declspec(naked) void FUN_5880cca0_segment_01() {
    __asm {
        // 0x5880CCD0: mov ecx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xF0
        // 0x5880CCD3: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CCD8: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5880CCDC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5880CCDE: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5880CCE2: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5880CCE5: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5880CCE9: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5880CCEC: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5880CCF0: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5880CCF3: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5880CCF5: jne 0x5880ccd0
        __asm _emit 0x75
        __asm _emit 0xD9
        // 0x5880CCF7: mov eax, dword ptr [esi + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CCFD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5880CCFF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880CD03: mov eax, dword ptr [esi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD09: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5880CD0B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880CD0F: mov eax, dword ptr [esi + 0x42c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD15: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD1A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880CD1E: mov eax, dword ptr [esi + 0x430]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD24: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5880CD26: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880CD2A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5880CD2C: cmp dword ptr [esi + 0xd0], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD32: jle 0x5880cd54
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5880CD34: lea ebx, [esi + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD3A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD40: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5880CD42: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x97
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880CD47: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x5880CD49: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5880CD4C: cmp edi, dword ptr [esi + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD52: jl 0x5880cd40
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x5880CD54: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5880CD56: cmp dword ptr [esi + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5880CD59: jle 0x5880cd72
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5880CD5B: lea ebx, [esi + 0x2d4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD61: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5880CD63: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x97
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880CD68: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x5880CD6A: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5880CD6D: cmp edi, dword ptr [esi + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5880CD70: jl 0x5880cd61
        __asm _emit 0x7C
        __asm _emit 0xEF
        // 0x5880CD72: lea ecx, [esi + 0x374]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD78: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD7D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5880CD80: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5880CD82: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CD87: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5880CD8B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5880CD8E: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5880CD90: jne 0x5880cd80
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x5880CD92: push 0x7f
        __asm _emit 0x6A
        __asm _emit 0x7F
        // 0x5880CD94: push edx
        __asm _emit 0x52
        // 0x5880CD95: lea eax, [esp + 0x1d]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x5880CD99: push eax
        __asm _emit 0x50
        // 0x5880CD9A: mov byte ptr [esp + 0x20], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880CD9E: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xFE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880CDA3: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CDA8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5880CDAB: lea ebx, [edi + 9]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x09
        // 0x5880CDAE: lea edx, [esi + 0x408]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CDB4: mov dword ptr [esp + 0x10], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CDBC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5880CDC0: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CDC5: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CDCB: jle 0x5880cde5
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5880CDCD: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5880CDCF: jl 0x5880cde5
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5880CDD1: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CDD8: je 0x5880cde5
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5880CDDA: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CDE0: mov eax, dword ptr [ebx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x0B
        // 0x5880CDE3: jmp 0x5880cde7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880CDE5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880CDE7: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x5880CDE9: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5880CDEC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880CDEE: je 0x5880ce1f
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5880CDF0: mov ebp, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5880CDF3: mov dword ptr [ecx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x5880CDF6: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x5880CDF9: mov dword ptr [ecx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x5880CDFC: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x5880CDFF: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5880CE02: mov dword ptr [ecx + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x14
        // 0x5880CE05: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x5880CE08: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880CE0B: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x5880CE0E: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x5880CE11: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x5880CE14: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880CE17: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880CE1A: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CE1F: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5880CE22: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5880CE25: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x5880CE27: sub dword ptr [esp + 0x10], ebp
        __asm _emit 0x29
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880CE2B: jne 0x5880cdc0
        __asm _emit 0x75
        __asm _emit 0x93
        // 0x5880CE2D: mov eax, dword ptr [esi + 0x904]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CE33: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880CE37: mov eax, dword ptr [esi + 0x908]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CE3D: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880CE41: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CE46: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880CE4A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880CE4C: push ecx
        __asm _emit 0x51
        // 0x5880CE4D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xFD
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880CE52: mov edx, dword ptr [esi + 0x904]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CE58: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5880CE5B: cmp dword ptr [esi + 0x8dc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CE62: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880CE66: jl 0x5880ce7d
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x5880CE68: mov dword ptr [edx + 0x60], 0x30e030
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0xE0
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5880CE6F: mov eax, dword ptr [esi + 0x8dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CE75: push eax
        __asm _emit 0x50
        // 0x5880CE76: push 0x58998210
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880CE7B: jmp 0x5880ce90
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5880CE7D: mov dword ptr [edx + 0x60], 0x3030e0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xE0
        __asm _emit 0x30
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5880CE84: mov eax, dword ptr [esi + 0x8dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CE8A: push eax
        __asm _emit 0x50
        // 0x5880CE8B: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880CE90: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CE95: push ecx
        __asm _emit 0x51
        // 0x5880CE96: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xEB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5880CE9B: mov eax, dword ptr [esi + 0x904]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CEA1: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5880CEA4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5880CEA7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880CEA9: je 0x5880ced9
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5880CEAB: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880CEAF: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CEB4: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5880CEBA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880CEBC: je 0x5880ced0
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880CEBE: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5880CEC0: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5880CEC2: je 0x5880ced0
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880CEC4: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5880CEC6: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5880CEC8: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x5880CECA: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5880CECC: jne 0x5880ceb4
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5880CECE: jmp 0x5880ced4
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5880CED0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5880CED2: jne 0x5880ced6
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5880CED4: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5880CED6: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CED9: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CEDE: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880CEE2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880CEE4: push edx
        __asm _emit 0x52
        // 0x5880CEE5: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xFD
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880CEEA: mov eax, dword ptr [esi + 0x8e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CEF0: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880CEF6: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5880CEF9: push eax
        __asm _emit 0x50
        // 0x5880CEFA: push 0x5899d6b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880CEFF: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5880CF01: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880CF04: push eax
        __asm _emit 0x50
        // 0x5880CF05: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880CF09: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CF0E: push ecx
        __asm _emit 0x51
        // 0x5880CF0F: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xEB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5880CF14: mov eax, dword ptr [esi + 0x8f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CF1A: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5880CF1D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5880CF20: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880CF22: je 0x5880cf55
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5880CF24: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880CF28: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CF2D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5880CF30: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5880CF36: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880CF38: je 0x5880cf4c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880CF3A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5880CF3C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5880CF3E: je 0x5880cf4c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880CF40: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5880CF42: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5880CF44: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x5880CF46: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5880CF48: jne 0x5880cf30
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5880CF4A: jmp 0x5880cf50
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5880CF4C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5880CF4E: jne 0x5880cf52
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5880CF50: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5880CF52: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CF55: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CF5A: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880CF5E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880CF60: push edx
        __asm _emit 0x52
        // 0x5880CF61: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xFC
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880CF66: mov eax, dword ptr [esi + 0x8e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CF6C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5880CF6F: push eax
        __asm _emit 0x50
        // 0x5880CF70: push 0x5899d690
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880CF75: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5880CF77: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880CF7A: push eax
        __asm _emit 0x50
        // 0x5880CF7B: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880CF7F: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CF84: push ecx
        __asm _emit 0x51
        // 0x5880CF85: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xEA
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5880CF8A: mov eax, dword ptr [esi + 0x8f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CF90: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5880CF93: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5880CF96: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880CF98: je 0x5880cfc8
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5880CF9A: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880CF9E: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CFA3: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5880CFA9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880CFAB: je 0x5880cfbf
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880CFAD: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5880CFAF: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5880CFB1: je 0x5880cfbf
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880CFB3: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5880CFB5: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5880CFB7: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x5880CFB9: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5880CFBB: jne 0x5880cfa3
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5880CFBD: jmp 0x5880cfc3
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5880CFBF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5880CFC1: jne 0x5880cfc5
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5880CFC3: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5880CFC5: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CFC8: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CFCD: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880CFD1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880CFD3: push edx
        __asm _emit 0x52
        // 0x5880CFD4: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xFC
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880CFD9: mov eax, dword ptr [esi + 0x8ec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CFDF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5880CFE2: push eax
        __asm _emit 0x50
        // 0x5880CFE3: push 0x5899d66c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880CFE8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5880CFEA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880CFED: push eax
        __asm _emit 0x50
        // 0x5880CFEE: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880CFF2: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CFF7: push ecx
        __asm _emit 0x51
        // 0x5880CFF8: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xEA
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5880CFFD: mov eax, dword ptr [esi + 0x8fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D003: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5880D006: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5880D009: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880D00B: je 0x5880d03b
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5880D00D: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880D011: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D016: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5880D01C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880D01E: je 0x5880d032
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880D020: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5880D022: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5880D024: je 0x5880d032
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880D026: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5880D028: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5880D02A: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x5880D02C: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5880D02E: jne 0x5880d016
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5880D030: jmp 0x5880d036
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5880D032: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5880D034: jne 0x5880d038
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5880D036: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5880D038: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D03B: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D040: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880D044: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880D046: push edx
        __asm _emit 0x52
        // 0x5880D047: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xFB
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880D04C: mov eax, dword ptr [esi + 0x8f0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D052: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5880D055: push eax
        __asm _emit 0x50
        // 0x5880D056: push 0x5899d648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880D05B: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5880D05D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880D060: push eax
        __asm _emit 0x50
        // 0x5880D061: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880D065: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D06A: push ecx
        __asm _emit 0x51
        // 0x5880D06B: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xE9
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5880D070: mov eax, dword ptr [esi + 0x900]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D076: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5880D079: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5880D07C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880D07E: je 0x5880d0b5
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5880D080: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880D084: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D089: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D090: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5880D096: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880D098: je 0x5880d0ac
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880D09A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5880D09C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5880D09E: je 0x5880d0ac
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880D0A0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5880D0A2: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5880D0A4: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x5880D0A6: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5880D0A8: jne 0x5880d090
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5880D0AA: jmp 0x5880d0b0
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5880D0AC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5880D0AE: jne 0x5880d0b2
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5880D0B0: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5880D0B2: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D0B5: mov eax, dword ptr [esi + 0x8f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D0BB: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880D0BF: mov eax, dword ptr [esi + 0x8f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D0C5: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880D0C9: mov eax, dword ptr [esi + 0x8fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D0CF: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880D0D3: mov eax, dword ptr [esi + 0x900]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D0D9: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5880D0DD: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D0E2: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880D0E6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880D0E8: push edx
        __asm _emit 0x52
        // 0x5880D0E9: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xFB
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880D0EE: mov eax, dword ptr [esi + 0x908]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D0F4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5880D0F7: cmp dword ptr [esi + 0x8e0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D0FE: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880D102: jl 0x5880d119
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x5880D104: mov dword ptr [eax + 0x60], 0x6effff
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x6E
        __asm _emit 0x00
        // 0x5880D10B: mov ecx, dword ptr [esi + 0x8e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D111: push ecx
        __asm _emit 0x51
        // 0x5880D112: push 0x58998210
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880D117: jmp 0x5880d12c
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5880D119: mov dword ptr [eax + 0x60], 0x3030e0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xE0
        __asm _emit 0x30
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5880D120: mov ecx, dword ptr [esi + 0x8e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D126: push ecx
        __asm _emit 0x51
        // 0x5880D127: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880D12C: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D131: push edx
        __asm _emit 0x52
        // 0x5880D132: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xE9
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5880D137: mov eax, dword ptr [esi + 0x908]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D13D: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5880D140: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5880D143: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880D145: je 0x5880d175
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5880D147: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880D14B: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D150: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5880D156: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880D158: je 0x5880d16c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880D15A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5880D15C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5880D15E: je 0x5880d16c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880D160: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5880D162: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5880D164: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x5880D166: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5880D168: jne 0x5880d150
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5880D16A: jmp 0x5880d170
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5880D16C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5880D16E: jne 0x5880d172
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5880D170: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5880D172: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D175: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5880D177: lea edi, [esi + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D17D: lea ebp, [ebx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x20
        // 0x5880D180: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5880D182: cmp dword ptr [ecx + 0x90], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D189: je 0x5880d1a7
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5880D18B: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5880D18E: add ebx, 0x16
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x16
        // 0x5880D191: lea eax, [edx + ebx + 0x9b]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x1A
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D198: push eax
        __asm _emit 0x50
        // 0x5880D199: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x61
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880D19E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5880D1A0: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5880D1A5: jmp 0x5880d1b0
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5880D1A7: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D1AC: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5880D1B0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5880D1B3: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5880D1B6: jne 0x5880d180
        __asm _emit 0x75
        __asm _emit 0xC8
        // 0x5880D1B8: mov ecx, dword ptr [esp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D1BF: pop edi
        __asm _emit 0x5F
        // 0x5880D1C0: pop esi
        __asm _emit 0x5E
        // 0x5880D1C1: pop ebp
        __asm _emit 0x5D
        // 0x5880D1C2: pop ebx
        __asm _emit 0x5B
        // 0x5880D1C3: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5880D1C5: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xFA
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880D1CA: add esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D1D0: ret
        __asm _emit 0xC3
    }
}
