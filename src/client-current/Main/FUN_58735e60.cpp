// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 200 bytes in 1 exact ranges.
// Source symbol alias: FUN_58735e60.

// Ghidra body range 0x58735E60..0x58735F28; 200 mapped bytes.
extern "C" __declspec(naked) void FUN_58735e60_segment_00() {
    __asm {
        // 0x58735E60: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58735E64: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58735E66: push esi
        __asm _emit 0x56
        // 0x58735E67: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58735E6B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58735E6D: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58735E6F: jne 0x58735e84
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58735E71: push edi
        __asm _emit 0x57
        // 0x58735E72: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x58735E75: cmp edi, dword ptr [esi + 4]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58735E78: pop edi
        __asm _emit 0x5F
        // 0x58735E79: jne 0x58735e84
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58735E7B: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735E80: pop esi
        __asm _emit 0x5E
        // 0x58735E81: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58735E84: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58735E86: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58735E89: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58735E8C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58735E8E: jle 0x58735ecb
        __asm _emit 0x7E
        __asm _emit 0x3B
        // 0x58735E90: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58735E92: jle 0x58735ea2
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x58735E94: push eax
        __asm _emit 0x50
        // 0x58735E95: push ecx
        __asm _emit 0x51
        // 0x58735E96: call 0x587a0740
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xA8
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58735E9B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58735E9E: pop esi
        __asm _emit 0x5E
        // 0x58735E9F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58735EA2: jne 0x58735ead
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58735EA4: mov eax, 0x384
        __asm _emit 0xB8
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735EA9: pop esi
        __asm _emit 0x5E
        // 0x58735EAA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58735EAD: push eax
        __asm _emit 0x50
        // 0x58735EAE: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58735EB0: cdq
        __asm _emit 0x99
        // 0x58735EB1: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58735EB3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735EB5: push eax
        __asm _emit 0x50
        // 0x58735EB6: call 0x587a0740
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58735EBB: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58735EBE: mov ecx, 0x708
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735EC3: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58735EC5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58735EC7: pop esi
        __asm _emit 0x5E
        // 0x58735EC8: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58735ECB: jge 0x58735f17
        __asm _emit 0x7D
        __asm _emit 0x4A
        // 0x58735ECD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58735ECF: jge 0x58735ef0
        __asm _emit 0x7D
        __asm _emit 0x1F
        // 0x58735ED1: cdq
        __asm _emit 0x99
        // 0x58735ED2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58735ED4: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735ED6: push eax
        __asm _emit 0x50
        // 0x58735ED7: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58735ED9: cdq
        __asm _emit 0x99
        // 0x58735EDA: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58735EDC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735EDE: push eax
        __asm _emit 0x50
        // 0x58735EDF: call 0x587a0740
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xA8
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58735EE4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58735EE7: add eax, 0x708
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735EEC: pop esi
        __asm _emit 0x5E
        // 0x58735EED: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58735EF0: jne 0x58735efb
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58735EF2: mov eax, 0xa8c
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735EF7: pop esi
        __asm _emit 0x5E
        // 0x58735EF8: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58735EFB: cdq
        __asm _emit 0x99
        // 0x58735EFC: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58735EFE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735F00: push eax
        __asm _emit 0x50
        // 0x58735F01: push ecx
        __asm _emit 0x51
        // 0x58735F02: call 0x587a0740
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58735F07: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58735F0A: mov edx, 0xe10
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735F0F: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58735F11: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58735F13: pop esi
        __asm _emit 0x5E
        // 0x58735F14: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58735F17: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735F19: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58735F1B: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x58735F1E: pop esi
        __asm _emit 0x5E
        // 0x58735F1F: dec eax
        __asm _emit 0x48
        // 0x58735F20: and eax, 0x708
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735F25: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
