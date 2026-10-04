// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E7660 .. +0x51 bytes.
// Source symbol alias: FUN_588e7660.
extern "C" __declspec(naked) void FUN_588e7660() {
    __asm {
        // 0x588E7660: mov eax, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7666: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588E7669: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588E766C: cmp cl, 8
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x588E766F: jne 0x588e76a9
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588E7671: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E7675: test dword ptr [ecx + 0xb4], 0x3800
        __asm _emit 0xF7
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E767F: je 0x588e76a9
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588E7681: movzx edx, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x5E
        // 0x588E7685: movzx eax, word ptr [eax + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0E
        // 0x588E7689: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x588E768C: xor edx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x588E768F: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7695: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588E7698: add edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0F
        // 0x588E769B: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E76A0: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588E76A2: jl 0x588e76a9
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x588E76A4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E76A6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E76A9: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E76AE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
