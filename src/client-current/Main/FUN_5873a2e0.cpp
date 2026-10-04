// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873A2E0 .. +0x13 bytes.
// Source symbol alias: FUN_5873a2e0.
// Direct callers: 0x587E0090 (2 sites), 0x587E3080 (2), and 0x588B1580 (1).
// Unpacks two DWORDs from the input record and forwards them to 0x58903290,
// preserving ECX. That callee writes receiver +4/+8 and conditionally propagates
// deltas through linked objects; see docs/current-main-pair-update-thunk.md.
extern "C" __declspec(naked) void FUN_5873a2e0() {
    __asm {
        // 0x5873A2E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5873A2E4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873A2E7: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5873A2E9: push edx
        __asm _emit 0x52
        // 0x5873A2EA: push eax
        __asm _emit 0x50
        // 0x5873A2EB: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873A2F0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
