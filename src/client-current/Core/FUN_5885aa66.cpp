// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885AA66 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_5885aa66() {
    __asm {
        // 0x5885AA66: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5885AA68: push 0x588ed240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD2
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x5885AA6D: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x7C
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885AA72: and dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x5885AA76: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885AA79: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885AA7B: call 0x58859d02
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AA80: pop ecx
        __asm _emit 0x59
        // 0x5885AA81: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5885AA85: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885AA88: call 0x5885aac1
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AA8D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885AA8F: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885AA92: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AA99: call 0x5885aab5
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AA9E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885AAA0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5885AAA3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AAAA: pop ecx
        __asm _emit 0x59
        // 0x5885AAAB: pop edi
        __asm _emit 0x5F
        // 0x5885AAAC: pop esi
        __asm _emit 0x5E
        // 0x5885AAAD: pop ebx
        __asm _emit 0x5B
        // 0x5885AAAE: leave
        __asm _emit 0xC9
        // 0x5885AAAF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
