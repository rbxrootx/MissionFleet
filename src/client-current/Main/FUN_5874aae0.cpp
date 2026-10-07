// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 157 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874aae0.

// Ghidra body range 0x5874AAE0..0x5874AB7D; 157 mapped bytes.
extern "C" __declspec(naked) void FUN_5874aae0_segment_00() {
    __asm {
        // 0x5874AAE0: push ecx
        __asm _emit 0x51
        // 0x5874AAE1: push esi
        __asm _emit 0x56
        // 0x5874AAE2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874AAE4: cmp word ptr [esi + 0x16a], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x5874AAEC: mov byte ptr [esp + 7], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5874AAF1: mov byte ptr [esp + 6], 0x7d
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x7D
        // 0x5874AAF6: jne 0x5874ab19
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5874AAF8: cmp word ptr [esi + 0x16c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5874AB00: jne 0x5874ab19
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5874AB02: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5874AB04: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AB06: lea eax, [esp + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x5874AB0A: push eax
        __asm _emit 0x50
        // 0x5874AB0B: lea ecx, [esp + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x5874AB0F: push ecx
        __asm _emit 0x51
        // 0x5874AB10: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874AB12: call 0x5874aa70
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874AB17: jmp 0x5874ab28
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5874AB19: lea edx, [esp + 6]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x5874AB1D: push edx
        __asm _emit 0x52
        // 0x5874AB1E: lea eax, [esp + 0xb]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x5874AB22: push eax
        __asm _emit 0x50
        // 0x5874AB23: call 0x5874a9b0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874AB28: mov cl, byte ptr [esi + 0x17a]
        __asm _emit 0x8A
        __asm _emit 0x8E
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AB2E: cmp cl, byte ptr [esp + 6]
        __asm _emit 0x3A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x5874AB32: jbe 0x5874ab50
        __asm _emit 0x76
        __asm _emit 0x1C
        // 0x5874AB34: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AB36: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AB38: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AB3A: push 0x19a
        __asm _emit 0x68
        __asm _emit 0x9A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AB3F: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x0F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874AB44: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AB46: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874AB4B: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874AB4D: pop esi
        __asm _emit 0x5E
        // 0x5874AB4E: pop ecx
        __asm _emit 0x59
        // 0x5874AB4F: ret
        __asm _emit 0xC3
        // 0x5874AB50: mov dl, byte ptr [esi + 0x17b]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AB56: cmp dl, byte ptr [esp + 7]
        __asm _emit 0x3A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x5874AB5A: jae 0x5874ab78
        __asm _emit 0x73
        __asm _emit 0x1C
        // 0x5874AB5C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AB5E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AB60: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AB62: push 0x199
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AB67: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x0F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874AB6C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AB6E: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874AB73: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874AB75: pop esi
        __asm _emit 0x5E
        // 0x5874AB76: pop ecx
        __asm _emit 0x59
        // 0x5874AB77: ret
        __asm _emit 0xC3
        // 0x5874AB78: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5874AB7A: pop esi
        __asm _emit 0x5E
        // 0x5874AB7B: pop ecx
        __asm _emit 0x59
        // 0x5874AB7C: ret
        __asm _emit 0xC3
    }
}
