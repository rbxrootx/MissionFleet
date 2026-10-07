// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 60 bytes in 1 exact ranges.
// Source symbol alias: FUN_58789710.

// Ghidra body range 0x58789710..0x5878974C; 60 mapped bytes.
extern "C" __declspec(naked) void FUN_58789710_segment_00() {
    __asm {
        // 0x58789710: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58789713: push esi
        __asm _emit 0x56
        // 0x58789714: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58789716: je 0x5878973f
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58789718: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5878971C: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58789720: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58789723: cmp esi, dword ptr [ecx + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789729: jne 0x58789739
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5878972B: movzx ecx, byte ptr [ecx + 0x164]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x89
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789732: and ecx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x7F
        // 0x58789735: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58789737: je 0x58789745
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58789739: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5878973B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878973D: jne 0x58789720
        __asm _emit 0x75
        __asm _emit 0xE1
        // 0x5878973F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789741: pop esi
        __asm _emit 0x5E
        // 0x58789742: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58789745: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58789748: pop esi
        __asm _emit 0x5E
        // 0x58789749: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
