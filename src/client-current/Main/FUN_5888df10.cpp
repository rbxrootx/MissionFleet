// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 921 bytes in 2 exact ranges.
// Source symbol alias: FUN_5888df10.

// Ghidra body range 0x5888DF10..0x5888E0F9; 489 mapped bytes.
extern "C" __declspec(naked) void FUN_5888df10_segment_00() {
    __asm {
        // 0x5888DF10: push ebx
        __asm _emit 0x53
        // 0x5888DF11: push ebp
        __asm _emit 0x55
        // 0x5888DF12: push esi
        __asm _emit 0x56
        // 0x5888DF13: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888DF15: mov eax, dword ptr [esi + 0x600]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF1B: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF20: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888DF24: mov eax, dword ptr [esi + 0x604]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF2A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5888DF2C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888DF30: mov eax, dword ptr [esi + 0x608]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF36: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888DF3A: mov eax, dword ptr [esi + 0x60c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF40: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888DF44: mov eax, dword ptr [esi + 0x610]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF4A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888DF4E: mov eax, dword ptr [esi + 0x614]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF54: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888DF58: mov eax, dword ptr [esi + 0x618]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF5E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888DF62: mov eax, dword ptr [esi + 0x61c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF68: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888DF6C: mov eax, dword ptr [esi + 0x624]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF72: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888DF76: mov eax, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF7C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888DF80: mov eax, dword ptr [esi + 0x62c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF86: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888DF8A: mov eax, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF90: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888DF94: push edi
        __asm _emit 0x57
        // 0x5888DF95: lea edi, [esi + 0x608]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DF9B: mov eax, dword ptr [esi + 0x620]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DFA1: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888DFA5: lea ebx, [esi + 0x610]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DFAB: lea ebp, [esi + 0x618]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DFB1: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x5888DFB5: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5888DFB8: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5888DFBB: jne 0x5888dfca
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5888DFBD: mov ecx, dword ptr [esi + 0x620]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DFC3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5888DFC5: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5888DFC8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5888DFCA: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5888DFD1: je 0x5888e204
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DFD7: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5888DFDE: je 0x5888e0f2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DFE4: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DFE9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DFF0: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5888DFF3: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5888DFF6: sub ecx, 0x82
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888DFFC: push ecx
        __asm _emit 0x51
        // 0x5888DFFD: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5888DFFF: add edx, 0x2a3
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xA3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E005: push edx
        __asm _emit 0x52
        // 0x5888E006: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E00B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888E00E: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5888E011: jne 0x5888dff0
        __asm _emit 0x75
        __asm _emit 0xDD
        // 0x5888E013: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x5888E015: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E01A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E020: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5888E023: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5888E026: sub eax, 0x82
        __asm _emit 0x2D
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E02B: add ecx, 0x2e9
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E031: push eax
        __asm _emit 0x50
        // 0x5888E032: push ecx
        __asm _emit 0x51
        // 0x5888E033: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5888E035: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E03A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888E03D: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5888E040: jne 0x5888e020
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x5888E042: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5888E045: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5888E048: mov ecx, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E04E: sub edx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x7D
        // 0x5888E051: push edx
        __asm _emit 0x52
        // 0x5888E052: add eax, 0x2ab
        __asm _emit 0x05
        __asm _emit 0xAB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E057: push eax
        __asm _emit 0x50
        // 0x5888E058: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E05D: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5888E060: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5888E063: sub ecx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x7D
        // 0x5888E066: push ecx
        __asm _emit 0x51
        // 0x5888E067: mov ecx, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E06D: add edx, 0x2f3
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xF3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E073: push edx
        __asm _emit 0x52
        // 0x5888E074: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E079: cmp dword ptr [esi + 0x10c], 2
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5888E080: jne 0x5888e0bf
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x5888E082: mov ecx, dword ptr [esi + 0x608]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E088: mov eax, 0xf
        __asm _emit 0xB8
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E08D: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E091: mov ecx, dword ptr [esi + 0x60c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E097: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E09B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5888E09D: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E0A1: mov ecx, dword ptr [esi + 0x614]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0A7: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E0AB: mov ecx, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0B1: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E0B5: mov ecx, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0BB: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E0BF: mov ecx, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0C5: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0CA: mov dword ptr [esi + 0x638], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0D0: mov dword ptr [esi + 0x63c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0D6: mov dword ptr [esi + 0x644], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0DC: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0E1: pop edi
        __asm _emit 0x5F
        // 0x5888E0E2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5888E0E5: mov edx, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0EB: pop esi
        __asm _emit 0x5E
        // 0x5888E0EC: pop ebp
        __asm _emit 0x5D
        // 0x5888E0ED: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5888E0F0: pop ebx
        __asm _emit 0x5B
        // 0x5888E0F1: ret
        __asm _emit 0xC3
        // 0x5888E0F2: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E0F7: jmp 0x5888e100
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5888E100..0x5888E2B0; 432 mapped bytes.
extern "C" __declspec(naked) void FUN_5888df10_segment_01() {
    __asm {
        // 0x5888E100: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5888E103: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5888E106: sub eax, 0x82
        __asm _emit 0x2D
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E10B: add ecx, 0x28a
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x8A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E111: push eax
        __asm _emit 0x50
        // 0x5888E112: push ecx
        __asm _emit 0x51
        // 0x5888E113: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5888E115: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E11A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888E11D: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5888E120: jne 0x5888e100
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x5888E122: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x5888E124: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E129: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E130: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5888E133: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5888E136: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5888E138: sub edx, 0x82
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E13E: push edx
        __asm _emit 0x52
        // 0x5888E13F: add eax, 0x2d0
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E144: push eax
        __asm _emit 0x50
        // 0x5888E145: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E14A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888E14D: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5888E150: jne 0x5888e130
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x5888E152: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5888E155: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5888E158: sub ecx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x7D
        // 0x5888E15B: push ecx
        __asm _emit 0x51
        // 0x5888E15C: mov ecx, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E162: add edx, 0x292
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E168: push edx
        __asm _emit 0x52
        // 0x5888E169: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E16E: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5888E171: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5888E174: sub eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x7D
        // 0x5888E177: add ecx, 0x2da
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xDA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E17D: push eax
        __asm _emit 0x50
        // 0x5888E17E: push ecx
        __asm _emit 0x51
        // 0x5888E17F: mov ecx, dword ptr [esi + 0x62c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E185: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E18A: cmp dword ptr [esi + 0x10c], 2
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5888E191: jne 0x5888e1d1
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x5888E193: mov ecx, dword ptr [esi + 0x608]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E199: mov eax, 0xf
        __asm _emit 0xB8
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E19E: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E1A2: mov ecx, dword ptr [esi + 0x60c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1A8: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E1AC: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5888E1AF: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E1B3: mov ecx, dword ptr [esi + 0x61c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1B9: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E1BD: mov ecx, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1C3: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E1C7: mov ecx, dword ptr [esi + 0x62c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1CD: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E1D1: mov edx, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1D7: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1DC: mov dword ptr [esi + 0x638], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1E2: mov dword ptr [esi + 0x63c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1E8: mov dword ptr [esi + 0x640], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1EE: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1F3: pop edi
        __asm _emit 0x5F
        // 0x5888E1F4: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5888E1F7: mov ecx, dword ptr [esi + 0x62c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E1FD: pop esi
        __asm _emit 0x5E
        // 0x5888E1FE: pop ebp
        __asm _emit 0x5D
        // 0x5888E1FF: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5888E202: pop ebx
        __asm _emit 0x5B
        // 0x5888E203: ret
        __asm _emit 0xC3
        // 0x5888E204: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5888E20B: je 0x5888e2a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E211: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x5888E213: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E218: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5888E21B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5888E21E: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5888E220: sub edx, 0x82
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E226: push edx
        __asm _emit 0x52
        // 0x5888E227: add eax, 0x2e9
        __asm _emit 0x05
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E22C: push eax
        __asm _emit 0x50
        // 0x5888E22D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E232: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888E235: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5888E238: jne 0x5888e218
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x5888E23A: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5888E23D: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5888E240: sub ecx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x7D
        // 0x5888E243: push ecx
        __asm _emit 0x51
        // 0x5888E244: mov ecx, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E24A: add edx, 0x2f3
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xF3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E250: push edx
        __asm _emit 0x52
        // 0x5888E251: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888E256: cmp dword ptr [esi + 0x10c], 2
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5888E25D: jne 0x5888e27e
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5888E25F: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x5888E261: mov eax, 0xf
        __asm _emit 0xB8
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E266: or word ptr [ebx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x5888E26A: mov ecx, dword ptr [esi + 0x614]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E270: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E274: mov ecx, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E27A: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888E27E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E283: mov dword ptr [esi + 0x638], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E289: mov dword ptr [esi + 0x644], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E28F: mov eax, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E295: pop edi
        __asm _emit 0x5F
        // 0x5888E296: pop esi
        __asm _emit 0x5E
        // 0x5888E297: pop ebp
        __asm _emit 0x5D
        // 0x5888E298: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E29F: pop ebx
        __asm _emit 0x5B
        // 0x5888E2A0: ret
        __asm _emit 0xC3
        // 0x5888E2A1: pop edi
        __asm _emit 0x5F
        // 0x5888E2A2: mov dword ptr [esi + 0x638], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E2AC: pop esi
        __asm _emit 0x5E
        // 0x5888E2AD: pop ebp
        __asm _emit 0x5D
        // 0x5888E2AE: pop ebx
        __asm _emit 0x5B
        // 0x5888E2AF: ret
        __asm _emit 0xC3
    }
}
