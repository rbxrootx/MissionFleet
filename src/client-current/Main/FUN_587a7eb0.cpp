// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 48 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a7eb0.

// Ghidra body range 0x587A7EB0..0x587A7EE0; 48 mapped bytes.
extern "C" __declspec(naked) void FUN_587a7eb0_segment_00() {
    __asm {
        // 0x587A7EB0: push esi
        __asm _emit 0x56
        // 0x587A7EB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A7EB3: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A7EB6: sub eax, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587A7EB9: push edi
        __asm _emit 0x57
        // 0x587A7EBA: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A7EBE: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587A7EC1: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587A7EC3: jb 0x587a7ed5
        __asm _emit 0x72
        __asm _emit 0x10
        // 0x587A7EC5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x4D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A7ECA: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587A7ECD: mov eax, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x587A7ED0: pop edi
        __asm _emit 0x5F
        // 0x587A7ED1: pop esi
        __asm _emit 0x5E
        // 0x587A7ED2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A7ED5: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587A7ED8: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x587A7EDB: pop edi
        __asm _emit 0x5F
        // 0x587A7EDC: pop esi
        __asm _emit 0x5E
        // 0x587A7EDD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
