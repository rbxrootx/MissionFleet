// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589714BE .. +0x37 bytes.
// Source symbol alias: FUN_589714be.
extern "C" __declspec(naked) void FUN_589714be() {
    __asm {
        // 0x589714BE: push 0x44
        __asm _emit 0x6A
        __asm _emit 0x44
        // 0x589714C0: mov eax, 0x5898acab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAC
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589714C5: call 0x5897d540
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589714CA: push 0x589a2ef4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589714CF: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x589714D2: call 0x58735430
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x3F
        __asm _emit 0xDC
        __asm _emit 0xFF
        // 0x589714D7: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x589714DB: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x589714DE: push eax
        __asm _emit 0x50
        // 0x589714DF: lea ecx, [ebp - 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x589714E2: call 0x587353d0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x3E
        __asm _emit 0xDC
        __asm _emit 0xFF
        // 0x589714E7: push 0x589abea8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xBE
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589714EC: lea eax, [ebp - 0x50]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x589714EF: push eax
        __asm _emit 0x50
        // 0x589714F0: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
