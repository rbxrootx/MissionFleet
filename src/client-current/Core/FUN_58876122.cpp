// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58876122 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58876122() {
    __asm {
        // 0x58876122: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58876124: push ebp
        __asm _emit 0x55
        // 0x58876125: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58876127: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5887612A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887612C: je 0x58876144
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5887612E: cmp ecx, 0x588c4e78
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x78
        __asm _emit 0x4E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x58876134: je 0x58876144
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58876136: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58876138: inc eax
        __asm _emit 0x40
        // 0x58876139: lock xadd dword ptr [ecx + 0xb0], eax
        __asm _emit 0xF0
        __asm _emit 0x0F
        __asm _emit 0xC1
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876141: inc eax
        __asm _emit 0x40
        // 0x58876142: pop ebp
        __asm _emit 0x5D
        // 0x58876143: ret
        __asm _emit 0xC3
        // 0x58876144: mov eax, 0x7fffffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58876149: pop ebp
        __asm _emit 0x5D
        // 0x5887614A: ret
        __asm _emit 0xC3
    }
}
