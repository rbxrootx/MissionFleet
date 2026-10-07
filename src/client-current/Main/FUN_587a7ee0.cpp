// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 48 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a7ee0.

// Ghidra body range 0x587A7EE0..0x587A7F10; 48 mapped bytes.
extern "C" __declspec(naked) void FUN_587a7ee0_segment_00() {
    __asm {
        // 0x587A7EE0: push esi
        __asm _emit 0x56
        // 0x587A7EE1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A7EE3: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587A7EE6: sub eax, dword ptr [esi + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A7EE9: push edi
        __asm _emit 0x57
        // 0x587A7EEA: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A7EEE: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587A7EF1: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587A7EF3: jb 0x587a7f05
        __asm _emit 0x72
        __asm _emit 0x10
        // 0x587A7EF5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x4D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A7EFA: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587A7EFD: mov eax, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x587A7F00: pop edi
        __asm _emit 0x5F
        // 0x587A7F01: pop esi
        __asm _emit 0x5E
        // 0x587A7F02: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A7F05: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587A7F08: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x587A7F0B: pop edi
        __asm _emit 0x5F
        // 0x587A7F0C: pop esi
        __asm _emit 0x5E
        // 0x587A7F0D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
