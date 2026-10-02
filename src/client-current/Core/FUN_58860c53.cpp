// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860C53 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58860c53() {
    __asm {
        // 0x58860C53: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860C55: push esi
        __asm _emit 0x56
        // 0x58860C56: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58860C58: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x58860C5B: dec eax
        __asm _emit 0x48
        // 0x58860C5C: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860C5F: je 0x58860c8f
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58860C61: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860C64: je 0x58860c89
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58860C66: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860C69: je 0x58860c6f
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58860C6B: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860C6D: pop esi
        __asm _emit 0x5E
        // 0x58860C6E: ret
        __asm _emit 0xC3
        // 0x58860C6F: call 0x58860962
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860C74: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58860C76: je 0x58860c6d
        __asm _emit 0x74
        __asm _emit 0xF5
        // 0x58860C78: cmp dword ptr [esi + 0x40], 9
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x40
        __asm _emit 0x09
        // 0x58860C7C: je 0x58860c6d
        __asm _emit 0x74
        __asm _emit 0xEF
        // 0x58860C7E: cmp byte ptr [esi + 0x2e], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2E
        __asm _emit 0x00
        // 0x58860C82: jne 0x58860c6d
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x58860C84: inc dword ptr [esi + 0x70]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58860C87: pop esi
        __asm _emit 0x5E
        // 0x58860C88: ret
        __asm _emit 0xC3
        // 0x58860C89: pop esi
        __asm _emit 0x5E
        // 0x58860C8A: jmp 0x58860b36
        __asm _emit 0xE9
        __asm _emit 0xA7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860C8F: pop esi
        __asm _emit 0x5E
        // 0x58860C90: jmp 0x58860d42
        __asm _emit 0xE9
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
