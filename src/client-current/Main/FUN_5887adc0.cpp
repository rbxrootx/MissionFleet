// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 165 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887adc0.

// Ghidra body range 0x5887ADC0..0x5887AE65; 165 mapped bytes.
extern "C" __declspec(naked) void FUN_5887adc0_segment_00() {
    __asm {
        // 0x5887ADC0: push esi
        __asm _emit 0x56
        // 0x5887ADC1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5887ADC3: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887ADC9: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887ADCF: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887ADD5: sub edx, 4
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x5887ADD8: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5887ADDA: jge 0x5887ae63
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887ADE0: inc eax
        __asm _emit 0x40
        // 0x5887ADE1: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887ADE7: call 0x589086f0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xD9
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887ADEC: mov edx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887ADF2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5887ADF4: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887ADF9: cmp dword ptr [esi + 0x8c], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887ADFF: jne 0x5887ae06
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5887AE01: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5887AE04: jmp 0x5887ae09
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5887AE06: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5887AE09: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AE0F: push edi
        __asm _emit 0x57
        // 0x5887AE10: mov edi, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AE16: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5887AE19: cmp edx, dword ptr [edi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x97
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AE1F: jge 0x5887ae2c
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x5887AE21: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AE27: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5887AE2A: jmp 0x5887ae35
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5887AE2C: mov edx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AE32: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5887AE35: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AE3B: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AE41: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887AE46: imul eax, eax, 0x52
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x52
        // 0x5887AE49: cdq
        __asm _emit 0x99
        // 0x5887AE4A: add edi, -4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xFC
        // 0x5887AE4D: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5887AE4F: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5887AE52: lea edx, [eax + ecx + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x58
        // 0x5887AE56: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AE5C: push edx
        __asm _emit 0x52
        // 0x5887AE5D: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887AE62: pop edi
        __asm _emit 0x5F
        // 0x5887AE63: pop esi
        __asm _emit 0x5E
        // 0x5887AE64: ret
        __asm _emit 0xC3
    }
}
