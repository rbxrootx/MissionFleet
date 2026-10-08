// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 11 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b6a60.

// Ghidra body range 0x587B6A60..0x587B6A6B; 11 mapped bytes.
extern "C" __declspec(naked) void FUN_587b6a60_segment_00() {
    __asm {
        // 0x587B6A60: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587B6A62: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587B6A65: mov byte ptr [ecx + 0x60], 1
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x587B6A69: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
