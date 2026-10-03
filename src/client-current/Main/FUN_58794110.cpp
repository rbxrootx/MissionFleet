// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58794110 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58794110() {
    __asm {
        // 0x58794110: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58794114: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58794116: je 0x58794146
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58794118: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5879411C: mov dword ptr [ecx + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794122: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58794126: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879412C: lea eax, [edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794133: xor ax, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x58794137: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879413B: and ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x5879413F: xor word ptr [ecx + 0x70], ax
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x58794143: mov dword ptr [ecx + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x5C
        // 0x58794146: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
