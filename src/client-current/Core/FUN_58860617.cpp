// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860617 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58860617() {
    __asm {
        // 0x58860617: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5886061A: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5886061D: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58860620: push esi
        __asm _emit 0x56
        // 0x58860621: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x58860624: adc esi, 0
        __asm _emit 0x83
        __asm _emit 0xD6
        __asm _emit 0x00
        // 0x58860627: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5886062A: or eax, dword ptr [ecx + 0xc]
        __asm _emit 0x0B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5886062D: mov dword ptr [ecx + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x58860630: je 0x5886063e
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58860632: cmp esi, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58860635: ja 0x58860652
        __asm _emit 0x77
        __asm _emit 0x1B
        // 0x58860637: jb 0x5886063e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58860639: cmp edx, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5886063C: ja 0x58860652
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x5886063E: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x58860640: push dword ptr [esi]
        __asm _emit 0xFF
        __asm _emit 0x36
        // 0x58860642: call 0x5885a0c8
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x9A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860647: pop ecx
        __asm _emit 0x59
        // 0x58860648: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5886064B: je 0x58860652
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5886064D: inc dword ptr [esi + 4]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58860650: pop esi
        __asm _emit 0x5E
        // 0x58860651: ret
        __asm _emit 0xC3
        // 0x58860652: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860654: pop esi
        __asm _emit 0x5E
        // 0x58860655: ret
        __asm _emit 0xC3
    }
}
