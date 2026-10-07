// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 29 bytes in 1 exact ranges.
// Source symbol alias: FUN_587c7090.

// Ghidra body range 0x587C7090..0x587C70AD; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587c7090_segment_00() {
    __asm {
        // 0x587C7090: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587C7094: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587C7098: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587C709C: push eax
        __asm _emit 0x50
        // 0x587C709D: push ecx
        __asm _emit 0x51
        // 0x587C709E: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C70A3: push edx
        __asm _emit 0x52
        // 0x587C70A4: call 0x5897cfe4
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C70A9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587C70AC: ret
        __asm _emit 0xC3
    }
}
