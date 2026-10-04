// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AA120 .. +0x53 bytes.
// Source symbol alias: FUN_588aa120.
extern "C" __declspec(naked) void FUN_588aa120() {
    __asm {
        // 0x588AA120: cmp dword ptr [ecx + 0xa0], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA127: je 0x588aa172
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x588AA129: mov edx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA12F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588AA131: je 0x588aa172
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x588AA133: push ebx
        __asm _emit 0x53
        // 0x588AA134: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588AA136: push esi
        __asm _emit 0x56
        // 0x588AA137: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x588AA13A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA140: mov bl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x18
        // 0x588AA142: inc eax
        __asm _emit 0x40
        // 0x588AA143: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x588AA145: jne 0x588aa140
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588AA147: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588AA149: lea esi, [edx + 0x545]
        __asm _emit 0x8D
        __asm _emit 0xB2
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA14F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588AA151: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588AA153: pop esi
        __asm _emit 0x5E
        // 0x588AA154: pop ebx
        __asm _emit 0x5B
        // 0x588AA155: jb 0x588aa160
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x588AA157: add edx, 0x47
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x47
        // 0x588AA15A: mov dword ptr [ecx + 0xa4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA160: mov edx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA166: mov ecx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA16C: push edx
        __asm _emit 0x52
        // 0x588AA16D: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x69
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588AA172: ret
        __asm _emit 0xC3
    }
}
