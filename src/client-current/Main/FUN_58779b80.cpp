// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 172 bytes in 1 exact ranges.
// Source symbol alias: FUN_58779b80.

// Ghidra body range 0x58779B80..0x58779C2C; 172 mapped bytes.
extern "C" __declspec(naked) void FUN_58779b80_segment_00() {
    __asm {
        // 0x58779B80: mov edx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779B86: push ebx
        __asm _emit 0x53
        // 0x58779B87: push ebp
        __asm _emit 0x55
        // 0x58779B88: push esi
        __asm _emit 0x56
        // 0x58779B89: push edi
        __asm _emit 0x57
        // 0x58779B8A: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58779B8D: je 0x58779c1b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779B93: movzx eax, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x5E
        // 0x58779B97: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58779B9A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58779B9C: shl esi, 4
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x04
        // 0x58779B9F: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x58779BA1: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58779BA3: lea eax, [edx + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xF2
        // 0x58779BA6: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779BAC: mov ebx, dword ptr [eax + 0x589cfd10]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x10
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58779BB2: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779BB7: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58779BB9: jb 0x58779c1b
        __asm _emit 0x72
        __asm _emit 0x60
        // 0x58779BBB: movzx eax, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x5E
        // 0x58779BBF: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58779BC1: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58779BC4: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58779BC6: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x58779BC9: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58779BCB: mov eax, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779BD1: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x58779BD3: lea edx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xD0
        // 0x58779BD6: imul edx, edx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779BDC: shr esi, 4
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x04
        // 0x58779BDF: xor esi, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF6
        __asm _emit 0xAA
        // 0x58779BE2: and esi, 0xff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779BE8: add edx, 0x589cfd14
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58779BEE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58779BF0: movzx eax, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x02
        // 0x58779BF3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58779BF5: and ecx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x3F
        // 0x58779BF8: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58779BFA: shl ebp, 4
        __asm _emit 0xC1
        __asm _emit 0xE5
        __asm _emit 0x04
        // 0x58779BFD: sub ebp, ecx
        __asm _emit 0x2B
        __asm _emit 0xE9
        // 0x58779BFF: shr eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x58779C02: lea ecx, [eax + ebp*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xE8
        // 0x58779C05: imul ecx, ecx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779C0B: cmp esi, dword ptr [ecx + 0x589cfcf4]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0xF4
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58779C11: je 0x58779c22
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58779C13: inc edi
        __asm _emit 0x47
        // 0x58779C14: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x58779C17: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58779C19: jbe 0x58779bf0
        __asm _emit 0x76
        __asm _emit 0xD5
        // 0x58779C1B: pop edi
        __asm _emit 0x5F
        // 0x58779C1C: pop esi
        __asm _emit 0x5E
        // 0x58779C1D: pop ebp
        __asm _emit 0x5D
        // 0x58779C1E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58779C20: pop ebx
        __asm _emit 0x5B
        // 0x58779C21: ret
        __asm _emit 0xC3
        // 0x58779C22: pop edi
        __asm _emit 0x5F
        // 0x58779C23: pop esi
        __asm _emit 0x5E
        // 0x58779C24: pop ebp
        __asm _emit 0x5D
        // 0x58779C25: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779C2A: pop ebx
        __asm _emit 0x5B
        // 0x58779C2B: ret
        __asm _emit 0xC3
    }
}
