// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E75E0 .. +0x60 bytes.
// Source symbol alias: FUN_588e75e0.
extern "C" __declspec(naked) void FUN_588e75e0() {
    __asm {
        // 0x588E75E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E75E4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E75E6: je 0x588e7638
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x588E75E8: mov ecx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E75EE: movzx ecx, byte ptr [ecx + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E75F5: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x588E75F8: ja 0x588e7638
        __asm _emit 0x77
        __asm _emit 0x3E
        // 0x588E75FA: movzx edx, byte ptr [ecx + 0x588e764c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0x4C
        __asm _emit 0x76
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588E7601: jmp dword ptr [edx*4 + 0x588e7640]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0x76
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588E7608: mov eax, dword ptr [eax + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E760E: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E7611: je 0x588e7618
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588E7613: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588E7616: jne 0x588e7638
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x588E7618: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E761A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E761D: mov eax, dword ptr [eax + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7623: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E7626: jne 0x588e7638
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588E7628: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E762A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E762D: mov eax, dword ptr [eax + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7633: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E7636: jne 0x588e7613
        __asm _emit 0x75
        __asm _emit 0xDB
        // 0x588E7638: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E763D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
