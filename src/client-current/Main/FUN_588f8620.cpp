// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F8620 .. +0x1F bytes.
// Source symbol alias: FUN_588f8620.
extern "C" __declspec(naked) void FUN_588f8620() {
    __asm {
        // 0x588F8620: test byte ptr [esp + 4], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x588F8625: push esi
        __asm _emit 0x56
        // 0x588F8626: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F8628: mov dword ptr [esi], 0x589a2104
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F862E: je 0x588f8639
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588F8630: push esi
        __asm _emit 0x56
        // 0x588F8631: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F8636: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F8639: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588F863B: pop esi
        __asm _emit 0x5E
        // 0x588F863C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
