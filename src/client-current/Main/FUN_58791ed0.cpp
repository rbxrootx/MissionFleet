// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 81 bytes in 1 exact ranges.
// Source symbol alias: FUN_58791ed0.

// Ghidra body range 0x58791ED0..0x58791F21; 81 mapped bytes.
extern "C" __declspec(naked) void FUN_58791ed0_segment_00() {
    __asm {
        // 0x58791ED0: push esi
        __asm _emit 0x56
        // 0x58791ED1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58791ED3: push edi
        __asm _emit 0x57
        // 0x58791ED4: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58791ED8: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58791EDA: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58791EDD: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58791EE0: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58791EE3: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58791EE5: jne 0x58791eee
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58791EE7: pop edi
        __asm _emit 0x5F
        // 0x58791EE8: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58791EEA: pop esi
        __asm _emit 0x5E
        // 0x58791EEB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58791EEE: cmp edi, 0x9249249
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x58791EF4: jbe 0x58791efb
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58791EF6: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x47
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58791EFB: push eax
        __asm _emit 0x50
        // 0x58791EFC: push edi
        __asm _emit 0x57
        // 0x58791EFD: call 0x5878d5f0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xB6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791F02: lea ecx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791F09: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58791F0B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58791F0E: lea edx, [eax + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x88
        // 0x58791F11: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58791F14: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58791F17: pop edi
        __asm _emit 0x5F
        // 0x58791F18: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58791F1B: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58791F1D: pop esi
        __asm _emit 0x5E
        // 0x58791F1E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
