// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876D800 .. +0x76 bytes.
// Source symbol alias: FUN_5876d800.
extern "C" __declspec(naked) void FUN_5876d800() {
    __asm {
        // 0x5876D800: push esi
        __asm _emit 0x56
        // 0x5876D801: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876D803: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D809: push -0x2d
        __asm _emit 0x6A
        __asm _emit 0xD3
        // 0x5876D80B: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D810: mov dword ptr [esi + 0x78], 0x18e
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D817: mov dword ptr [esi + 0x80], 0x19f
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D821: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x5A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D826: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D82C: push -0x2d
        __asm _emit 0x6A
        __asm _emit 0xD3
        // 0x5876D82E: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D833: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x5A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D838: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D83E: push -0x2d
        __asm _emit 0x6A
        __asm _emit 0xD3
        // 0x5876D840: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D845: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x5A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D84A: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D850: push -0x2d
        __asm _emit 0x6A
        __asm _emit 0xD3
        // 0x5876D852: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D857: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x5A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D85C: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D862: push -0x6d
        __asm _emit 0x6A
        __asm _emit 0x93
        // 0x5876D864: push 0x450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D869: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x5A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D86E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876D870: pop esi
        __asm _emit 0x5E
        // 0x5876D871: jmp 0x5876d350
        __asm _emit 0xE9
        __asm _emit 0xDA
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
