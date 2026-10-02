// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58873057 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_58873057() {
    __asm {
        // 0x58873057: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58873059: push 0x588ed650
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xD6
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x5887305E: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xF6
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58873063: and dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x58873067: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5887306A: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5887306C: call 0x58863c1c
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x0B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58873071: pop ecx
        __asm _emit 0x59
        // 0x58873072: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x58873076: mov ecx, dword ptr [0x58906040]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5887307C: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5887307F: mov esi, dword ptr [0x58969c38]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58873085: xor esi, dword ptr [0x58906040]
        __asm _emit 0x33
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5887308B: ror esi, cl
        __asm _emit 0xD3
        __asm _emit 0xCE
        // 0x5887308D: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58873090: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58873097: call 0x588730b3
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887309C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5887309E: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x588730A1: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730A8: pop ecx
        __asm _emit 0x59
        // 0x588730A9: pop edi
        __asm _emit 0x5F
        // 0x588730AA: pop esi
        __asm _emit 0x5E
        // 0x588730AB: pop ebx
        __asm _emit 0x5B
        // 0x588730AC: leave
        __asm _emit 0xC9
        // 0x588730AD: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
