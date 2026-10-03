// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58794050 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_58794050() {
    __asm {
        // 0x58794050: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58794052: push 0x5897f488
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58794057: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879405D: push eax
        __asm _emit 0x50
        // 0x5879405E: push ecx
        __asm _emit 0x51
        // 0x5879405F: push esi
        __asm _emit 0x56
        // 0x58794060: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58794065: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58794067: push eax
        __asm _emit 0x50
        // 0x58794068: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5879406C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794072: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58794074: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58794078: mov dword ptr [esi], 0x58997cd0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD0
        __asm _emit 0x7C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879407E: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794084: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879408C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5879408E: je 0x587940a2
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58794090: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58794092: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58794094: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58794096: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58794098: mov dword ptr [esi + 0xb4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587940A2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587940A4: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587940AC: call 0x589038a0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xF7
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587940B1: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587940B5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587940BC: pop ecx
        __asm _emit 0x59
        // 0x587940BD: pop esi
        __asm _emit 0x5E
        // 0x587940BE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587940C1: ret
        __asm _emit 0xC3
    }
}
