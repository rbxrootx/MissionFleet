// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588489E0 .. +0x1C bytes.
// Source symbol alias: FUN_588489e0.
extern "C" __declspec(naked) void FUN_588489e0() {
    __asm {
        // 0x588489E0: push esi
        __asm _emit 0x56
        // 0x588489E1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588489E3: call 0x58848610
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588489E8: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588489EB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588489ED: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588489F0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588489F2: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588489F7: push esi
        __asm _emit 0x56
        // 0x588489F8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588489FA: pop esi
        __asm _emit 0x5E
        // 0x588489FB: ret
        __asm _emit 0xC3
    }
}
