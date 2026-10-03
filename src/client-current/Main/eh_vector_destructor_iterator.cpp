// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D05B .. +0x4B bytes.
// Source symbol alias: eh_vector_destructor_iterator.
extern "C" __declspec(naked) void eh_vector_destructor_iterator() {
    __asm {
        // 0x5897D05B: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5897D05D: push 0x589b6eb0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x6E
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x5897D062: call 0x5897d7bc
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D067: and dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x5897D06B: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5897D06E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5897D070: imul eax, dword ptr [ebp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5897D074: add dword ptr [ebp + 8], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5897D077: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5897D07B: dec dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5897D07E: js 0x5897d08b
        __asm _emit 0x78
        __asm _emit 0x0B
        // 0x5897D080: sub dword ptr [ebp + 8], esi
        __asm _emit 0x29
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5897D083: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5897D086: call dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5897D089: jmp 0x5897d07b
        __asm _emit 0xEB
        __asm _emit 0xF0
        // 0x5897D08B: mov dword ptr [ebp - 0x1c], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D092: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897D099: call 0x5897d0a6
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D09E: call 0x5897d801
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D0A3: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
