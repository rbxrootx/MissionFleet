// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778130 .. +0x9F bytes.
// Source symbol alias: FUN_58778130.
extern "C" __declspec(naked) void FUN_58778130() {
    __asm {
        // 0x58778130: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778132: push esi
        __asm _emit 0x56
        // 0x58778133: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58778135: mov dword ptr [esi], 0x58996500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877813B: mov dword ptr [esi + 0xef4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778145: mov dword ptr [esi + 0xe28], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877814B: mov dword ptr [esi + 0xe2c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778151: mov dword ptr [esi + 0xe30], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778157: mov dword ptr [esi + 0xe34], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877815D: mov dword ptr [esi + 0xe38], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778163: mov dword ptr [esi + 0xe3c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778169: mov dword ptr [esi + 0xe40], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877816F: mov dword ptr [esi + 0xe44], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778175: mov dword ptr [esi + 0xe48], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877817B: mov dword ptr [esi + 0xe4c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778181: mov dword ptr [esi + 0xe50], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778187: mov dword ptr [esi + 0xe54], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877818D: mov dword ptr [esi + 0xe58], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778193: mov dword ptr [esi + 0xe5c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778199: mov dword ptr [esi + 0xe60], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877819F: mov dword ptr [esi + 0xe64], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587781A5: push 0xcc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587781AA: mov dword ptr [esi + 0xe68], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587781B0: lea eax, [esi + 0x168]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587781B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587781B8: push eax
        __asm _emit 0x50
        // 0x587781B9: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x4A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587781BE: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587781C1: mov dword ptr [esi + 0xef8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587781CB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587781CD: pop esi
        __asm _emit 0x5E
        // 0x587781CE: ret
        __asm _emit 0xC3
    }
}
