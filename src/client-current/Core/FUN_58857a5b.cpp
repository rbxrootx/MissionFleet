// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58857A5B .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58857a5b() {
    __asm {
        // 0x58857A5B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58857A5D: call dword ptr [0x588942ac]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58857A63: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58857A65: je 0x58857a9a
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58857A67: mov ecx, 0x5a4d
        __asm _emit 0xB9
        __asm _emit 0x4D
        __asm _emit 0x5A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A6C: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        // 0x58857A6F: jne 0x58857a9a
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58857A71: mov ecx, dword ptr [eax + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x3C
        // 0x58857A74: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58857A76: cmp dword ptr [ecx], 0x4550
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A7C: jne 0x58857a9a
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58857A7E: mov eax, 0x10b
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A83: cmp word ptr [ecx + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x58857A87: jne 0x58857a9a
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58857A89: cmp dword ptr [ecx + 0x74], 0xe
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58857A8D: jbe 0x58857a9a
        __asm _emit 0x76
        __asm _emit 0x0B
        // 0x58857A8F: cmp dword ptr [ecx + 0xe8], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A96: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x58857A99: ret
        __asm _emit 0xC3
        // 0x58857A9A: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58857A9C: ret
        __asm _emit 0xC3
    }
}
