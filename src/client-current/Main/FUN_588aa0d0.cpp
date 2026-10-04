// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AA0D0 .. +0x48 bytes.
// Source symbol alias: FUN_588aa0d0.
extern "C" __declspec(naked) void FUN_588aa0d0() {
    __asm {
        // 0x588AA0D0: mov edx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA0D6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588AA0D8: je 0x588aa117
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588AA0DA: mov eax, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA0E0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AA0E2: je 0x588aa117
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x588AA0E4: push esi
        __asm _emit 0x56
        // 0x588AA0E5: lea esi, [eax - 0x47]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0xB9
        // 0x588AA0E8: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x588AA0EA: pop esi
        __asm _emit 0x5E
        // 0x588AA0EB: ja 0x588aa103
        __asm _emit 0x77
        __asm _emit 0x16
        // 0x588AA0ED: add eax, -0x47
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xB9
        // 0x588AA0F0: mov dword ptr [ecx + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA0F6: mov ecx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA0FC: push eax
        __asm _emit 0x50
        // 0x588AA0FD: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x69
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588AA102: ret
        __asm _emit 0xC3
        // 0x588AA103: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588AA105: mov dword ptr [ecx + 0xa4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA10B: mov ecx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA111: push eax
        __asm _emit 0x50
        // 0x588AA112: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x69
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588AA117: ret
        __asm _emit 0xC3
    }
}
