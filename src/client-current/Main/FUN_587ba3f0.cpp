// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA3F0 .. +0x3A bytes.
// Source symbol alias: FUN_587ba3f0.
extern "C" __declspec(naked) void FUN_587ba3f0() {
    __asm {
        // 0x587BA3F0: push esi
        __asm _emit 0x56
        // 0x587BA3F1: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587BA3F3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BA3F5: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x71
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA3FA: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587BA3FE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587BA400: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BA403: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA405: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587BA407: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587BA409: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587BA40C: push eax
        __asm _emit 0x50
        // 0x587BA40D: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587BA410: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x587BA413: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA415: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA417: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587BA41A: push 0x80010a03
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA41F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587BA421: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x68
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA426: pop esi
        __asm _emit 0x5E
        // 0x587BA427: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
