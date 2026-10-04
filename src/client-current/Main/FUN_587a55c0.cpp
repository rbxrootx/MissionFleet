// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A55C0 .. +0xA5 bytes.
// Source symbol alias: FUN_587a55c0.
extern "C" __declspec(naked) void FUN_587a55c0() {
    __asm {
        // 0x587A55C0: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587A55C2: mov dword ptr [eax], 0x5899993c
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A55C8: mov dword ptr [eax + 0x88], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A55D2: mov ecx, 0x30
        __asm _emit 0xB9
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A55D7: mov word ptr [eax + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A55DE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A55E0: mov dword ptr [eax + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A55E6: mov dword ptr [eax + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A55EC: mov dword ptr [eax + 0x98], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A55F2: mov dword ptr [eax + 0x9c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A55F8: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A55FA: mov word ptr [eax + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A55FE: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A5601: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587A5604: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587A5607: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587A560A: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x587A560D: mov dword ptr [eax + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x587A5610: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x587A5613: mov dword ptr [eax + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587A5616: mov dword ptr [eax + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x587A5619: mov dword ptr [eax + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x2C
        // 0x587A561C: mov dword ptr [eax + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x587A561F: mov dword ptr [eax + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x34
        // 0x587A5622: mov dword ptr [eax + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x38
        // 0x587A5625: mov dword ptr [eax + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x3C
        // 0x587A5628: mov dword ptr [eax + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x40
        // 0x587A562B: mov dword ptr [eax + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x44
        // 0x587A562E: mov dword ptr [eax + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x48
        // 0x587A5631: mov dword ptr [eax + 0x4c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x4C
        // 0x587A5634: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x587A5637: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x587A563A: mov dword ptr [eax + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x58
        // 0x587A563D: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x587A5640: mov dword ptr [eax + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x587A5643: mov dword ptr [eax + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x587A5646: mov dword ptr [eax + 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x68
        // 0x587A5649: mov dword ptr [eax + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x587A564C: mov dword ptr [eax + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x587A564F: mov dword ptr [eax + 0x74], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x587A5652: mov dword ptr [eax + 0x78], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x78
        // 0x587A5655: mov dword ptr [eax + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x7C
        // 0x587A5658: mov dword ptr [eax + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A565E: mov dword ptr [eax + 0x84], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5664: ret
        __asm _emit 0xC3
    }
}
