// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5879D450 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5879d450() {
    __asm {
        // 0x5879D450: push edi
        __asm _emit 0x57
        // 0x5879D451: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5879D453: cmp dword ptr [edi + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D45A: je 0x5879d475
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5879D45C: push esi
        __asm _emit 0x56
        // 0x5879D45D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5879D45F: nop
        __asm _emit 0x90
        // 0x5879D460: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5879D462: call 0x5879d3f0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879D467: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879D469: je 0x5879d474
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5879D46B: inc esi
        __asm _emit 0x46
        // 0x5879D46C: cmp esi, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D472: jl 0x5879d460
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x5879D474: pop esi
        __asm _emit 0x5E
        // 0x5879D475: pop edi
        __asm _emit 0x5F
        // 0x5879D476: ret
        __asm _emit 0xC3
    }
}
