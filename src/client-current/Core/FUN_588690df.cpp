// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588690DF .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_588690df() {
    __asm {
        // 0x588690DF: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588690E1: push ebp
        __asm _emit 0x55
        // 0x588690E2: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588690E4: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588690E7: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588690E9: pop eax
        __asm _emit 0x58
        // 0x588690EA: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x588690ED: lea ecx, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x588690F0: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x588690F3: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x588690F6: push eax
        __asm _emit 0x50
        // 0x588690F7: lea eax, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFF
        // 0x588690FA: push eax
        __asm _emit 0x50
        // 0x588690FB: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x588690FE: push eax
        __asm _emit 0x50
        // 0x588690FF: call 0x58868dab
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58869104: leave
        __asm _emit 0xC9
        // 0x58869105: ret
        __asm _emit 0xC3
    }
}
