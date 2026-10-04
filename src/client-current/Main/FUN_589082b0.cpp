// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589082B0 .. +0x27 bytes.
// Source symbol alias: FUN_589082b0.
extern "C" __declspec(naked) void FUN_589082b0() {
    __asm {
        // 0x589082B0: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x589082B3: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589082B7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589082B9: jle 0x589082cc
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x589082BB: jmp 0x589082c0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x589082BD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x589082C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589082C2: je 0x589082d7
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x589082C4: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x589082C7: dec ecx
        __asm _emit 0x49
        // 0x589082C8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589082CA: jg 0x589082c0
        __asm _emit 0x7F
        __asm _emit 0xF4
        // 0x589082CC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589082CE: je 0x589082d7
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x589082D0: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589082D4: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
    }
}
