// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 31 bytes in 1 exact ranges.
// Source symbol alias: FUN_588c8750.

// Ghidra body range 0x588C8750..0x588C876F; 31 mapped bytes.
extern "C" __declspec(naked) void FUN_588c8750_segment_00() {
    __asm {
        // 0x588C8750: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8755: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588C8759: movzx edx, word ptr [ecx + 0x62]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x62
        // 0x588C875D: movzx eax, word ptr [ecx + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588C8761: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8767: push edx
        __asm _emit 0x52
        // 0x588C8768: push eax
        __asm _emit 0x50
        // 0x588C8769: call 0x587b9690
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x0F
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588C876E: ret
        __asm _emit 0xC3
    }
}
