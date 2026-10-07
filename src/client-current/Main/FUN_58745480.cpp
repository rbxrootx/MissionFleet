// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 86 bytes in 1 exact ranges.
// Source symbol alias: FUN_58745480.

// Ghidra body range 0x58745480..0x587454D6; 86 mapped bytes.
extern "C" __declspec(naked) void FUN_58745480_segment_00() {
    __asm {
        // 0x58745480: push esi
        __asm _emit 0x56
        // 0x58745481: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58745483: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58745485: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874548B: mov eax, dword ptr [edx + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x44
        // 0x5874548E: mov edx, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x50
        // 0x58745491: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58745496: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5874549C: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5874549E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587454A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587454A2: jge 0x587454ad
        __asm _emit 0x7D
        __asm _emit 0x09
        // 0x587454A4: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587454A6: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xED
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587454AB: pop esi
        __asm _emit 0x5E
        // 0x587454AC: ret
        __asm _emit 0xC3
        // 0x587454AD: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587454B3: mov edx, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x50
        // 0x587454B6: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587454BC: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587454BE: jg 0x587454cd
        __asm _emit 0x7F
        __asm _emit 0x0D
        // 0x587454C0: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587454C2: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xED
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587454C7: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587454C9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587454CB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587454CD: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x587454CF: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xED
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587454D4: pop esi
        __asm _emit 0x5E
        // 0x587454D5: ret
        __asm _emit 0xC3
    }
}
