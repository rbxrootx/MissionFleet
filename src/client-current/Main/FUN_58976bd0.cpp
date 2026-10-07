// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 28 bytes in 1 exact ranges.
// Source symbol alias: FUN_58976bd0.

// Ghidra body range 0x58976BD0..0x58976BEC; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_58976bd0_segment_00() {
    __asm {
        // 0x58976BD0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58976BD4: push 0x82
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58976BD9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58976BDB: push eax
        __asm _emit 0x50
        // 0x58976BDC: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58976BDF: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x58976BE1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58976BE4: mov byte ptr [eax + 0x80], 0
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58976BEB: ret
        __asm _emit 0xC3
    }
}
