// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848B40 .. +0x4D bytes.
// Source symbol alias: FUN_58848b40.
extern "C" __declspec(naked) void FUN_58848b40() {
    __asm {
        // 0x58848B40: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x58848B43: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58848B45: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848B47: je 0x58848b73
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58848B49: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58848B4D: push esi
        __asm _emit 0x56
        // 0x58848B4E: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58848B52: cmp dword ptr [eax + 0x78], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x78
        // 0x58848B55: jne 0x58848b67
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58848B57: cmp dword ptr [eax + 0x7c], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x7C
        // 0x58848B5A: jne 0x58848b67
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58848B5C: cmp word ptr [eax + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848B64: je 0x58848b67
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x58848B66: inc ecx
        __asm _emit 0x41
        // 0x58848B67: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x58848B6A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848B6C: jne 0x58848b52
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58848B6E: pop esi
        __asm _emit 0x5E
        // 0x58848B6F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58848B71: jne 0x58848b8a
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58848B73: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848B75: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848B77: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848B79: push 0x208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848B7E: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x2F
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58848B83: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58848B85: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xC1
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58848B8A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
