// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 98 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874aa70.

// Ghidra body range 0x5874AA70..0x5874AAD2; 98 mapped bytes.
extern "C" __declspec(naked) void FUN_5874aa70_segment_00() {
    __asm {
        // 0x5874AA70: movzx ecx, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874AA75: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874AA7A: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5874AA7C: push esi
        __asm _emit 0x56
        // 0x5874AA7D: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5874AA81: push edi
        __asm _emit 0x57
        // 0x5874AA82: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874AA86: mov byte ptr [esi], 0
        __asm _emit 0xC6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5874AA89: mov byte ptr [edi], 0x7d
        __asm _emit 0xC6
        __asm _emit 0x07
        __asm _emit 0x7D
        // 0x5874AA8C: jge 0x5874aacd
        __asm _emit 0x7D
        __asm _emit 0x3F
        // 0x5874AA8E: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5874AA90: lea edx, [ecx*4 + 0x9a4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AA97: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AA99: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AAA0: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874AAA5: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x5874AAA8: mov eax, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x02
        // 0x5874AAAB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874AAAD: je 0x5874aac5
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5874AAAF: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x5E
        // 0x5874AAB3: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5874AAB7: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x5874AAB9: cmp al, byte ptr [esi]
        __asm _emit 0x3A
        __asm _emit 0x06
        // 0x5874AABB: jbe 0x5874aabf
        __asm _emit 0x76
        __asm _emit 0x02
        // 0x5874AABD: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x5874AABF: cmp al, byte ptr [edi]
        __asm _emit 0x3A
        __asm _emit 0x07
        // 0x5874AAC1: jae 0x5874aac5
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5874AAC3: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5874AAC5: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5874AAC8: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5874AACB: jne 0x5874aaa0
        __asm _emit 0x75
        __asm _emit 0xD3
        // 0x5874AACD: pop edi
        __asm _emit 0x5F
        // 0x5874AACE: pop esi
        __asm _emit 0x5E
        // 0x5874AACF: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
