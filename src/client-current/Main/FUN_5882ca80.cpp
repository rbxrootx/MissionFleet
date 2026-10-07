// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 301 bytes in 2 exact ranges.
// Source symbol alias: FUN_5882ca80.

// Ghidra body range 0x5882CA80..0x5882CAD8; 88 mapped bytes.
extern "C" __declspec(naked) void FUN_5882ca80_segment_00() {
    __asm {
        // 0x5882CA80: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5882CA83: push ebx
        __asm _emit 0x53
        // 0x5882CA84: push esi
        __asm _emit 0x56
        // 0x5882CA85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882CA87: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA8D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5882CA8F: mov byte ptr [esi + 0x18c], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA95: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5882CA97: je 0x5882cbaf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA9D: push ebp
        __asm _emit 0x55
        // 0x5882CA9E: push edi
        __asm _emit 0x57
        // 0x5882CA9F: call 0x58786480
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x99
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CAA4: mov edx, dword ptr [esi + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CAAA: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882CAAE: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882CAB3: mov edi, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x6C
        // 0x5882CAB6: lea ecx, [edi + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xBF
        // 0x5882CAB9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5882CABB: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5882CABD: push ecx
        __asm _emit 0x51
        // 0x5882CABE: push ebx
        __asm _emit 0x53
        // 0x5882CABF: push edx
        __asm _emit 0x52
        // 0x5882CAC0: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5882CAC4: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882CAC9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5882CACC: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5882CACE: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5882CAD0: jbe 0x5882cbad
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CAD6: jmp 0x5882cae0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5882CAE0..0x5882CBB5; 213 mapped bytes.
extern "C" __declspec(naked) void FUN_5882ca80_segment_01() {
    __asm {
        // 0x5882CAE0: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882CAE6: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882CAEA: mov byte ptr [esp + 0x10], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x05
        // 0x5882CAEF: mov word ptr [esp + 0x12], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5882CAF4: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882CAF8: push edi
        __asm _emit 0x57
        // 0x5882CAF9: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xC2
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882CAFE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5882CB00: je 0x5882cba2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB06: movzx ecx, word ptr [eax + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x06
        // 0x5882CB0A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882CB0E: shr edx, 8
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5882CB11: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5882CB13: jne 0x5882cba2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB19: cmp dword ptr [eax + 0x70], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x70
        // 0x5882CB1C: jbe 0x5882cba2
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB22: mov ecx, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x68
        // 0x5882CB25: test ecx, 0x100000
        __asm _emit 0xF7
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5882CB2B: jne 0x5882cb32
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5882CB2D: test cl, 0x10
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x5882CB30: je 0x5882cba2
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x5882CB32: movzx ecx, byte ptr [esi + 0x18c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB39: mov edx, dword ptr [esi + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB3F: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x5882CB42: mov dword ptr [edx + ecx*4], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x8A
        // 0x5882CB45: movzx ecx, byte ptr [esi + 0x18c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB4C: mov eax, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x70
        // 0x5882CB4F: mov edx, dword ptr [esi + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB55: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x5882CB58: mov dword ptr [edx + ecx*4 + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5882CB5C: movzx eax, byte ptr [esi + 0x18c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB63: mov edx, dword ptr [esi + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB69: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5882CB6C: mov dword ptr [edx + ecx*4 + 4], 0x1869f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x9F
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5882CB74: movzx eax, byte ptr [esi + 0x18c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB7B: mov ecx, dword ptr [esi + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB81: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5882CB84: mov dword ptr [ecx + eax*4 + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x81
        __asm _emit 0x0C
        // 0x5882CB88: movzx eax, byte ptr [esi + 0x18c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB8F: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5882CB92: mov eax, dword ptr [esi + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CB98: mov dword ptr [eax + edx*4 + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x90
        __asm _emit 0x10
        // 0x5882CB9C: inc byte ptr [esi + 0x18c]
        __asm _emit 0xFE
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CBA2: inc ebp
        __asm _emit 0x45
        // 0x5882CBA3: cmp ebp, dword ptr [esp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882CBA7: jb 0x5882cae0
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x33
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882CBAD: pop edi
        __asm _emit 0x5F
        // 0x5882CBAE: pop ebp
        __asm _emit 0x5D
        // 0x5882CBAF: pop esi
        __asm _emit 0x5E
        // 0x5882CBB0: pop ebx
        __asm _emit 0x5B
        // 0x5882CBB1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5882CBB4: ret
        __asm _emit 0xC3
    }
}
