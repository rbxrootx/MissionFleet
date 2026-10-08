// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 30 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b92e0.

// Ghidra body range 0x587B92E0..0x587B92FE; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_587b92e0_segment_00() {
    __asm {
        // 0x587B92E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B92E4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B92E7: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587B92E9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B92EB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B92ED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B92EF: push edx
        __asm _emit 0x52
        // 0x587B92F0: push eax
        __asm _emit 0x50
        // 0x587B92F1: push 0x80010f07
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B92F6: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x79
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B92FB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
