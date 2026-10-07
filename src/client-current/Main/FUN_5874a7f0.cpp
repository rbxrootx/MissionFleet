// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874a7f0.

// Ghidra body range 0x5874A7F0..0x5874A80B; 27 mapped bytes.
extern "C" __declspec(naked) void FUN_5874a7f0_segment_00() {
    __asm {
        // 0x5874A7F0: push esi
        __asm _emit 0x56
        // 0x5874A7F1: push edi
        __asm _emit 0x57
        // 0x5874A7F2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874A7F6: push edi
        __asm _emit 0x57
        // 0x5874A7F7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874A7F9: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x86
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874A7FE: push edi
        __asm _emit 0x57
        // 0x5874A7FF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874A801: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x87
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874A806: pop edi
        __asm _emit 0x5F
        // 0x5874A807: pop esi
        __asm _emit 0x5E
        // 0x5874A808: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
