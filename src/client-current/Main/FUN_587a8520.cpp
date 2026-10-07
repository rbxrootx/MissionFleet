// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A8520 .. +0x3F bytes.
// Source symbol alias: FUN_587a8520.
extern "C" __declspec(naked) void FUN_587a8520() {
    __asm {
        // 0x587A8520: push esi
        __asm _emit 0x56
        // 0x587A8521: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A8523: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A8525: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A8528: push edi
        __asm _emit 0x57
        // 0x587A8529: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A852D: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x587A852F: mov dword ptr [edi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587A8532: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A8534: jne 0x587a8541
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587A8536: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x47
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A853B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A853D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A853F: je 0x587a8545
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A8541: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587A8543: jmp 0x587a8547
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A8545: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8547: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587A854A: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587A854D: jb 0x587a8554
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A854F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x47
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8554: add dword ptr [esi + 4], 4
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x04
        // 0x587A8558: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587A855A: pop edi
        __asm _emit 0x5F
        // 0x587A855B: pop esi
        __asm _emit 0x5E
        // 0x587A855C: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
