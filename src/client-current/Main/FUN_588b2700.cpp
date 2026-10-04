// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588B2700 .. +0x2D bytes.
// Source symbol alias: FUN_588b2700.
extern "C" __declspec(naked) void FUN_588b2700() {
    __asm {
        // 0x588B2700: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B2705: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B2707: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588B2709: je 0x588b271c
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588B270B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B270D: mov edx, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2713: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x18
        // 0x588B2716: push edx
        __asm _emit 0x52
        // 0x588B2717: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B2719: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B271C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B271E: mov eax, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2724: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x588B2727: push eax
        __asm _emit 0x50
        // 0x588B2728: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B272A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
