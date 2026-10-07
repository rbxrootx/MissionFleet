// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BAB60 .. +0x55 bytes.
// Source symbol alias: FUN_587bab60.
extern "C" __declspec(naked) void FUN_587bab60() {
    __asm {
        // 0x587BAB60: push esi
        __asm _emit 0x56
        // 0x587BAB61: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BAB63: cmp dword ptr [esi + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAB6A: jne 0x587babb3
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x587BAB6C: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BAB71: mov ecx, dword ptr [eax + 0x784]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAB77: mov dword ptr [eax + 0x788], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAB7D: mov dword ptr [eax + 0x780], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAB87: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BAB8D: movzx eax, word ptr [edx + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x60
        // 0x587BAB91: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAB93: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAB95: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAB97: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x587BAB9A: push eax
        __asm _emit 0x50
        // 0x587BAB9B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAB9D: push 0x80010014
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BABA2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587BABA4: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x60
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BABA9: mov dword ptr [esi + 0x134], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587BABB3: pop esi
        __asm _emit 0x5E
        // 0x587BABB4: ret
        __asm _emit 0xC3
    }
}
