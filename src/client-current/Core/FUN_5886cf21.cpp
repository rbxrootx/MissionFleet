// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886CF21 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5886cf21() {
    __asm {
        // 0x5886CF21: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886CF23: push ebp
        __asm _emit 0x55
        // 0x5886CF24: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886CF26: push esi
        __asm _emit 0x56
        // 0x5886CF27: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5886CF2A: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5886CF2C: cmp eax, dword ptr [0x58969984]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5886CF32: je 0x5886cf4b
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5886CF34: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5886CF37: mov eax, dword ptr [0x58907804]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5886CF3C: test dword ptr [ecx + 0x350], eax
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886CF42: jne 0x5886cf4b
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5886CF44: call 0x58876226
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886CF49: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x5886CF4B: pop esi
        __asm _emit 0x5E
        // 0x5886CF4C: pop ebp
        __asm _emit 0x5D
        // 0x5886CF4D: ret
        __asm _emit 0xC3
    }
}
