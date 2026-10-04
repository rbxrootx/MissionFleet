// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589714F6 .. +0x37 bytes.
// Source symbol alias: FUN_589714f6.
extern "C" __declspec(naked) void FUN_589714f6() {
    __asm {
        // 0x589714F6: push 0x44
        __asm _emit 0x6A
        __asm _emit 0x44
        // 0x589714F8: mov eax, 0x5898acab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAC
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589714FD: call 0x5897d540
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58971502: push 0x589a2f04
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x2F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58971507: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5897150A: call 0x58735430
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x3F
        __asm _emit 0xDC
        __asm _emit 0xFF
        // 0x5897150F: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x58971513: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x58971516: push eax
        __asm _emit 0x50
        // 0x58971517: lea ecx, [ebp - 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x5897151A: call 0x58743b80
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x26
        __asm _emit 0xDD
        __asm _emit 0xFF
        // 0x5897151F: push 0x589ac270
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xC2
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58971524: lea eax, [ebp - 0x50]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x58971527: push eax
        __asm _emit 0x50
        // 0x58971528: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
