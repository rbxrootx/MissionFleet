// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D0BE .. +0x4D bytes.
// Source symbol alias: eh_vector_constructor_iterator.
extern "C" __declspec(naked) void eh_vector_constructor_iterator() {
    __asm {
        // 0x5897D0BE: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5897D0C0: push 0x589b6ed0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x6E
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x5897D0C5: call 0x5897d7bc
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D0CA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5897D0CC: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5897D0CF: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5897D0D2: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5897D0D5: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5897D0D8: cmp eax, dword ptr [ebp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5897D0DB: jge 0x5897d0f0
        __asm _emit 0x7D
        __asm _emit 0x13
        // 0x5897D0DD: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5897D0E0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5897D0E2: call dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5897D0E5: add esi, dword ptr [ebp + 0xc]
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5897D0E8: mov dword ptr [ebp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5897D0EB: inc dword ptr [ebp - 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5897D0EE: jmp 0x5897d0d5
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x5897D0F0: mov dword ptr [ebp - 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D0F7: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897D0FE: call 0x5897d10b
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D103: call 0x5897d801
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D108: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
