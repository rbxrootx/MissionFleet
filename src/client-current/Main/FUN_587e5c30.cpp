// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 69 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e5c30.

// Ghidra body range 0x587E5C30..0x587E5C75; 69 mapped bytes.
extern "C" __declspec(naked) void FUN_587e5c30_segment_00() {
    __asm {
        // 0x587E5C30: mov eax, 0x7d000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587E5C35: cdq
        __asm _emit 0x99
        // 0x587E5C36: push esi
        __asm _emit 0x56
        // 0x587E5C37: mov esi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5C3D: mov dword ptr [ecx + 0x10534], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5C47: idiv dword ptr [esi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5C4D: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587E5C51: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587E5C53: mov dword ptr [ecx + 0x10538], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5C59: mov eax, 0x5dc00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587E5C5E: cdq
        __asm _emit 0x99
        // 0x587E5C5F: idiv dword ptr [esi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5C65: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E5C69: pop esi
        __asm _emit 0x5E
        // 0x587E5C6A: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587E5C6C: mov dword ptr [ecx + 0x1053c], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5C72: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
