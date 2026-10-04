// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9760 .. +0x58 bytes.
// Source symbol alias: FUN_587b9760.
extern "C" __declspec(naked) void FUN_587b9760() {
    __asm {
        // 0x587B9760: movzx eax, word ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9765: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9769: push esi
        __asm _emit 0x56
        // 0x587B976A: movzx esi, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B976F: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B9774: xor esi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B977A: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x587B977D: or eax, esi
        __asm _emit 0x0B
        __asm _emit 0xC6
        // 0x587B977F: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B9783: shl edx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x10
        // 0x587B9786: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B9788: jne 0x587b979d
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587B978A: push esi
        __asm _emit 0x56
        // 0x587B978B: push esi
        __asm _emit 0x56
        // 0x587B978C: push esi
        __asm _emit 0x56
        // 0x587B978D: push eax
        __asm _emit 0x50
        // 0x587B978E: push edx
        __asm _emit 0x52
        // 0x587B978F: push 0x80020400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587B9794: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x74
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9799: pop esi
        __asm _emit 0x5E
        // 0x587B979A: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B979D: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587B97A0: jne 0x587b97b4
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587B97A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B97A4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B97A6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B97A8: push eax
        __asm _emit 0x50
        // 0x587B97A9: push edx
        __asm _emit 0x52
        // 0x587B97AA: push 0x80020700
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587B97AF: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x74
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B97B4: pop esi
        __asm _emit 0x5E
        // 0x587B97B5: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
