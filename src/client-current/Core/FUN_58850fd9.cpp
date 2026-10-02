// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58850FD9 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58850fd9() {
    __asm {
        // 0x58850FD9: push 0x17
        __asm _emit 0x6A
        __asm _emit 0x17
        // 0x58850FDB: call dword ptr [0x588943b8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58850FE1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58850FE3: je 0x58850fea
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58850FE5: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58850FE7: pop ecx
        __asm _emit 0x59
        // 0x58850FE8: int 0x29
        __asm _emit 0xCD
        __asm _emit 0x29
        // 0x58850FEA: push esi
        __asm _emit 0x56
        // 0x58850FEB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58850FED: mov esi, 0xc0000417
        __asm _emit 0xBE
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x58850FF2: push esi
        __asm _emit 0x56
        // 0x58850FF3: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58850FF5: call 0x58850daf
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850FFA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58850FFD: push esi
        __asm _emit 0x56
        // 0x58850FFE: call dword ptr [0x58894254]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58851004: push eax
        __asm _emit 0x50
        // 0x58851005: call dword ptr [0x588943b4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5885100B: pop esi
        __asm _emit 0x5E
        // 0x5885100C: ret
        __asm _emit 0xC3
    }
}
