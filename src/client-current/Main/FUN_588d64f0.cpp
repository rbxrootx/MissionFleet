// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D64F0 .. +0xF bytes.
// Source symbol alias: FUN_588d64f0.
extern "C" __declspec(naked) void FUN_588d64f0() {
    __asm {
        // 0x588D64F0: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588D64F2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D64F4: mov dword ptr [eax], 0x589a0fc4
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xC4
        __asm _emit 0x0F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D64FA: mov word ptr [eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D64FE: ret
        __asm _emit 0xC3
    }
}
