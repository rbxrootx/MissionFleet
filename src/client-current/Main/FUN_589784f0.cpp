// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 59 bytes in 1 exact ranges.
// Source symbol alias: FUN_589784f0.

// Ghidra body range 0x589784F0..0x5897852B; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_589784f0_segment_00() {
    __asm {
        // 0x589784F0: push esi
        __asm _emit 0x56
        // 0x589784F1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589784F5: push 0x6c
        __asm _emit 0x6A
        __asm _emit 0x6C
        // 0x589784F7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589784F9: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x589784FC: push esi
        __asm _emit 0x56
        // 0x589784FD: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x589784FF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58978502: mov dword ptr [esi + 0x15c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58978508: mov dword ptr [eax], 0x58978530
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897850E: add eax, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x2C
        // 0x58978511: mov ecx, 4
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58978516: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58978518: pop esi
        __asm _emit 0x5E
        // 0x58978519: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5897851C: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5897851E: mov dword ptr [eax + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x30
        // 0x58978521: mov dword ptr [eax + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x58978524: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58978527: dec ecx
        __asm _emit 0x49
        // 0x58978528: jne 0x58978519
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x5897852A: ret
        __asm _emit 0xC3
    }
}
