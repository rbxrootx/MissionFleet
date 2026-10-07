// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 426 bytes in 1 exact ranges.
// Source symbol alias: FUN_587431b0.

// Ghidra body range 0x587431B0..0x5874335A; 426 mapped bytes.
extern "C" __declspec(naked) void FUN_587431b0_segment_00() {
    __asm {
        // 0x587431B0: push ebx
        __asm _emit 0x53
        // 0x587431B1: push esi
        __asm _emit 0x56
        // 0x587431B2: push edi
        __asm _emit 0x57
        // 0x587431B3: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587431B7: lea eax, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587431BE: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587431C0: lea ebx, [ecx + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0xC1
        // 0x587431C3: mov eax, dword ptr [ebx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x34
        // 0x587431C6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587431C8: jne 0x58743280
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587431CE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587431D0: lea edx, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587431D6: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587431D9: mov eax, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x02
        // 0x587431DC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587431DE: je 0x58743342
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587431E4: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587431E7: mov edx, dword ptr [edx + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587431ED: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587431F2: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587431F4: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587431F7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587431F9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587431FC: lea edx, [edx + eax - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0xF6
        // 0x58743200: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743206: mov eax, 0x134679ad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x79
        __asm _emit 0x46
        __asm _emit 0x13
        // 0x5874320B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5874320D: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58743210: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58743212: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58743215: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58743217: cmp dword ptr [ebx + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x5874321B: jne 0x58743229
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5874321D: cmp esi, 0x64
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x64
        // 0x58743220: jne 0x58743229
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58743222: mov dword ptr [ebx + 0x2c], 3
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743229: mov eax, dword ptr [ebx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x2C
        // 0x5874322C: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5874322F: jne 0x58743254
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x58743231: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58743233: push eax
        __asm _emit 0x50
        // 0x58743234: push edi
        __asm _emit 0x57
        // 0x58743235: push ecx
        __asm _emit 0x51
        // 0x58743236: call 0x58747570
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874323B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874323E: cmp esi, 0x32
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x32
        // 0x58743241: jg 0x58743342
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743247: pop edi
        __asm _emit 0x5F
        // 0x58743248: pop esi
        __asm _emit 0x5E
        // 0x58743249: mov dword ptr [ebx + 0x2c], 2
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743250: pop ebx
        __asm _emit 0x5B
        // 0x58743251: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58743254: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58743257: jne 0x58743342
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874325D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5874325F: push eax
        __asm _emit 0x50
        // 0x58743260: push edi
        __asm _emit 0x57
        // 0x58743261: push edx
        __asm _emit 0x52
        // 0x58743262: call 0x58747570
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743267: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874326A: cmp esi, 0x50
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x50
        // 0x5874326D: jl 0x58743342
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743273: pop edi
        __asm _emit 0x5F
        // 0x58743274: pop esi
        __asm _emit 0x5E
        // 0x58743275: mov dword ptr [ebx + 0x2c], 3
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874327C: pop ebx
        __asm _emit 0x5B
        // 0x5874327D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58743280: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58743283: jne 0x587432f4
        __asm _emit 0x75
        __asm _emit 0x6F
        // 0x58743285: cmp dword ptr [ebx + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58743289: je 0x58743342
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874328F: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x58743291: lea eax, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743297: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5874329A: mov ecx, dword ptr [eax + esi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x30
        // 0x5874329D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874329F: je 0x587432d5
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x587432A1: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587432A4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587432A6: je 0x587432ce
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587432A8: mov edx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587432AE: cmp edx, dword ptr [eax + 0x324]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587432B4: jl 0x587432e2
        __asm _emit 0x7C
        __asm _emit 0x2C
        // 0x587432B6: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587432BB: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587432BD: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587432C0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587432C2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587432C5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587432C7: cmp eax, 0x118
        __asm _emit 0x3D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587432CC: jl 0x587432e2
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587432CE: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x587432D1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587432D3: jne 0x587432a1
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x587432D5: pop edi
        __asm _emit 0x5F
        // 0x587432D6: pop esi
        __asm _emit 0x5E
        // 0x587432D7: mov dword ptr [ebx + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587432DE: pop ebx
        __asm _emit 0x5B
        // 0x587432DF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587432E2: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587432E4: push edi
        __asm _emit 0x57
        // 0x587432E5: push esi
        __asm _emit 0x56
        // 0x587432E6: call 0x58747570
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587432EB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587432EE: pop edi
        __asm _emit 0x5F
        // 0x587432EF: pop esi
        __asm _emit 0x5E
        // 0x587432F0: pop ebx
        __asm _emit 0x5B
        // 0x587432F1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587432F4: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587432F7: jne 0x58743342
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x587432F9: cmp dword ptr [ebx + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587432FD: je 0x58743342
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x587432FF: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x58743301: lea ecx, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743307: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5874330A: mov ecx, dword ptr [ecx + esi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x31
        // 0x5874330D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874330F: je 0x5874333b
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58743311: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58743314: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58743316: je 0x58743334
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58743318: mov edx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874331E: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58743323: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58743325: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58743328: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5874332A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5874332D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5874332F: cmp eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x58743332: jg 0x58743348
        __asm _emit 0x7F
        __asm _emit 0x14
        // 0x58743334: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58743337: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58743339: jne 0x58743311
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x5874333B: mov dword ptr [ebx + 0x34], 4
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743342: pop edi
        __asm _emit 0x5F
        // 0x58743343: pop esi
        __asm _emit 0x5E
        // 0x58743344: pop ebx
        __asm _emit 0x5B
        // 0x58743345: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58743348: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5874334A: push edi
        __asm _emit 0x57
        // 0x5874334B: push esi
        __asm _emit 0x56
        // 0x5874334C: call 0x58747570
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743351: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58743354: pop edi
        __asm _emit 0x5F
        // 0x58743355: pop esi
        __asm _emit 0x5E
        // 0x58743356: pop ebx
        __asm _emit 0x5B
        // 0x58743357: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
