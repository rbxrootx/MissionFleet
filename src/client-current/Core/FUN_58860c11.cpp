// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860C11 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58860c11() {
    __asm {
        // 0x58860C11: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860C13: push esi
        __asm _emit 0x56
        // 0x58860C14: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58860C16: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58860C19: dec eax
        __asm _emit 0x48
        // 0x58860C1A: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860C1D: je 0x58860c4d
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58860C1F: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860C22: je 0x58860c47
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58860C24: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860C27: je 0x58860c2d
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58860C29: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860C2B: pop esi
        __asm _emit 0x5E
        // 0x58860C2C: ret
        __asm _emit 0xC3
        // 0x58860C2D: call 0x588608ee
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860C32: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58860C34: je 0x58860c2b
        __asm _emit 0x74
        __asm _emit 0xF5
        // 0x58860C36: cmp dword ptr [esi + 0x38], 9
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x38
        __asm _emit 0x09
        // 0x58860C3A: je 0x58860c2b
        __asm _emit 0x74
        __asm _emit 0xEF
        // 0x58860C3C: cmp byte ptr [esi + 0x26], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x58860C40: jne 0x58860c2b
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x58860C42: inc dword ptr [esi + 0x68]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58860C45: pop esi
        __asm _emit 0x5E
        // 0x58860C46: ret
        __asm _emit 0xC3
        // 0x58860C47: pop esi
        __asm _emit 0x5E
        // 0x58860C48: jmp 0x58860b00
        __asm _emit 0xE9
        __asm _emit 0xB3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860C4D: pop esi
        __asm _emit 0x5E
        // 0x58860C4E: jmp 0x58860d25
        __asm _emit 0xE9
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
