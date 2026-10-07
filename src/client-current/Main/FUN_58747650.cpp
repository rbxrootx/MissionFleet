// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 147 bytes in 1 exact ranges.
// Source symbol alias: FUN_58747650.

// Ghidra body range 0x58747650..0x587476E3; 147 mapped bytes.
extern "C" __declspec(naked) void FUN_58747650_segment_00() {
    __asm {
        // 0x58747650: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58747654: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747658: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874765C: push esi
        __asm _emit 0x56
        // 0x5874765D: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747661: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58747663: jne 0x5874766d
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58747665: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58747667: jne 0x5874766d
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58747669: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874766B: pop esi
        __asm _emit 0x5E
        // 0x5874766C: ret
        __asm _emit 0xC3
        // 0x5874766D: push edx
        __asm _emit 0x52
        // 0x5874766E: push ecx
        __asm _emit 0x51
        // 0x5874766F: push esi
        __asm _emit 0x56
        // 0x58747670: push eax
        __asm _emit 0x50
        // 0x58747671: call 0x587472c0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747676: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58747678: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x5874767D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5874767F: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58747681: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x58747684: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58747686: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58747689: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5874768B: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747691: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58747694: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58747696: jns 0x5874769e
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x58747698: add ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874769E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587476A0: cdq
        __asm _emit 0x99
        // 0x587476A1: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587476A3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587476A5: mov edx, 0xe10
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587476AA: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587476AC: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587476AE: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587476B0: jl 0x587476b4
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x587476B2: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587476B4: lea eax, [ecx - 0x708]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587476BA: cdq
        __asm _emit 0x99
        // 0x587476BB: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587476BD: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587476BF: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587476C4: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587476C6: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587476C8: jl 0x587476cc
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x587476CA: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587476CC: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587476D0: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x587476D2: jle 0x587476dc
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587476D4: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587476D6: jle 0x587476dc
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587476D8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587476DA: pop esi
        __asm _emit 0x5E
        // 0x587476DB: ret
        __asm _emit 0xC3
        // 0x587476DC: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587476E1: pop esi
        __asm _emit 0x5E
        // 0x587476E2: ret
        __asm _emit 0xC3
    }
}
