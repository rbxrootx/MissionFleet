// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D8F40 .. +0x4A bytes.
// Source symbol alias: FUN_587d8f40.
extern "C" __declspec(naked) void FUN_587d8f40() {
    __asm {
        // 0x587D8F40: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D8F44: cmp al, 0xff
        __asm _emit 0x3C
        __asm _emit 0xFF
        // 0x587D8F46: jne 0x587d8f4d
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587D8F48: mov dl, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x61
        // 0x587D8F4B: jmp 0x587d8f4f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D8F4D: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x587D8F4F: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D8F55: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x587D8F58: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D8F5A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D8F5C: je 0x587d8f87
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D8F5E: push esi
        __asm _emit 0x56
        // 0x587D8F5F: nop
        __asm _emit 0x90
        // 0x587D8F60: mov esi, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8F66: cmp byte ptr [esi + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8F6C: jne 0x587d8f76
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587D8F6E: cmp dword ptr [ecx + 0xec], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8F74: je 0x587d8f84
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D8F76: mov ecx, dword ptr [ecx + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8F7C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D8F7E: jne 0x587d8f60
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587D8F80: pop esi
        __asm _emit 0x5E
        // 0x587D8F81: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D8F84: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D8F86: pop esi
        __asm _emit 0x5E
        // 0x587D8F87: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
