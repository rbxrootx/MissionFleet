// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 35 bytes in 1 exact ranges.
// Source symbol alias: FUN_5890a8e0.

// Ghidra body range 0x5890A8E0..0x5890A903; 35 mapped bytes.
extern "C" __declspec(naked) void FUN_5890a8e0_segment_00() {
    __asm {
        // 0x5890A8E0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890A8E2: mov dword ptr [ecx + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A8E8: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A8EE: mov dword ptr [ecx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A8F4: mov dword ptr [ecx + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A8FA: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A900: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5890A902: ret
        __asm _emit 0xC3
    }
}
