// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5887614B .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5887614b() {
    __asm {
        // 0x5887614B: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5887614D: push ebp
        __asm _emit 0x55
        // 0x5887614E: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58876150: push esi
        __asm _emit 0x56
        // 0x58876151: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58876154: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58876156: je 0x58876179
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x58876158: cmp esi, 0x588c4e78
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x78
        __asm _emit 0x4E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5887615E: je 0x58876179
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58876160: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876166: nop
        __asm _emit 0x90
        // 0x58876167: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58876169: jne 0x58876179
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5887616B: push esi
        __asm _emit 0x56
        // 0x5887616C: call 0x58876c7d
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876171: push esi
        __asm _emit 0x56
        // 0x58876172: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876177: pop ecx
        __asm _emit 0x59
        // 0x58876178: pop ecx
        __asm _emit 0x59
        // 0x58876179: pop esi
        __asm _emit 0x5E
        // 0x5887617A: pop ebp
        __asm _emit 0x5D
        // 0x5887617B: ret
        __asm _emit 0xC3
    }
}
