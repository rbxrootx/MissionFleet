// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 37 bytes in 1 exact ranges.
// Source symbol alias: FUN_58848420.

// Ghidra body range 0x58848420..0x58848445; 37 mapped bytes.
extern "C" __declspec(naked) void FUN_58848420_segment_00() {
    __asm {
        // 0x58848420: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x58848423: movsx ecx, word ptr [ecx + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x89
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884842A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884842C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884842E: jle 0x58848442
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58848430: push esi
        __asm _emit 0x56
        // 0x58848431: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58848435: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58848437: je 0x58848441
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58848439: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5884843C: inc edx
        __asm _emit 0x42
        // 0x5884843D: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5884843F: jl 0x58848435
        __asm _emit 0x7C
        __asm _emit 0xF4
        // 0x58848441: pop esi
        __asm _emit 0x5E
        // 0x58848442: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
