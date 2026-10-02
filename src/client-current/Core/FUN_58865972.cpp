// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58865972 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58865972() {
    __asm {
        // 0x58865972: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58865974: push 0x588ed350
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xD3
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x58865979: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xCD
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5886597E: and dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x58865982: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58865985: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58865987: call 0x58863c1c
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886598C: pop ecx
        __asm _emit 0x59
        // 0x5886598D: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x58865991: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x58865994: call 0x58865b3b
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58865999: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5886599B: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5886599E: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588659A5: call 0x588659c1
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588659AA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588659AC: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x588659AF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588659B6: pop ecx
        __asm _emit 0x59
        // 0x588659B7: pop edi
        __asm _emit 0x5F
        // 0x588659B8: pop esi
        __asm _emit 0x5E
        // 0x588659B9: pop ebx
        __asm _emit 0x5B
        // 0x588659BA: leave
        __asm _emit 0xC9
        // 0x588659BB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
