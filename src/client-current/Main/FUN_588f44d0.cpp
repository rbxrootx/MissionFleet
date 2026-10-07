// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 33 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f44d0.

// Ghidra body range 0x588F44D0..0x588F44F1; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_588f44d0_segment_00() {
    __asm {
        // 0x588F44D0: push esi
        __asm _emit 0x56
        // 0x588F44D1: push edi
        __asm _emit 0x57
        // 0x588F44D2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F44D6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F44D8: push edi
        __asm _emit 0x57
        // 0x588F44D9: lea ecx, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588F44DC: call 0x5877b130
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x6C
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588F44E1: push edi
        __asm _emit 0x57
        // 0x588F44E2: lea ecx, [esi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x588F44E5: call 0x5877b130
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x6C
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588F44EA: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588F44EC: pop edi
        __asm _emit 0x5F
        // 0x588F44ED: pop esi
        __asm _emit 0x5E
        // 0x588F44EE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
