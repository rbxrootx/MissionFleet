// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 26 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b99b0.

// Ghidra body range 0x587B99B0..0x587B99CA; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_587b99b0_segment_00() {
    __asm {
        // 0x587B99B0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B99B4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99B8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99BA: push eax
        __asm _emit 0x50
        // 0x587B99BB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99BD: push 0x80011032
        __asm _emit 0x68
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B99C2: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x72
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B99C7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
