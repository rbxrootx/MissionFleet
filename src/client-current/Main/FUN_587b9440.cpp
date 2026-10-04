// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9440 .. +0x60 bytes.
// Source symbol alias: FUN_587b9440.
extern "C" __declspec(naked) void FUN_587b9440() {
    __asm {
        // 0x587B9440: push esi
        __asm _emit 0x56
        // 0x587B9441: push edi
        __asm _emit 0x57
        // 0x587B9442: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9446: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B9448: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B944A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B944C: jne 0x587b947b
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x587B944E: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B9453: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B9459: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B945D: inc eax
        __asm _emit 0x40
        // 0x587B945E: push eax
        __asm _emit 0x50
        // 0x587B945F: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B9463: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B9468: push eax
        __asm _emit 0x50
        // 0x587B9469: push ecx
        __asm _emit 0x51
        // 0x587B946A: push 0x80010fa0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B946F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B9471: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x77
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9476: pop edi
        __asm _emit 0x5F
        // 0x587B9477: pop esi
        __asm _emit 0x5E
        // 0x587B9478: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B947B: push edi
        __asm _emit 0x57
        // 0x587B947C: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B9482: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B9486: inc eax
        __asm _emit 0x40
        // 0x587B9487: push eax
        __asm _emit 0x50
        // 0x587B9488: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B948C: push edi
        __asm _emit 0x57
        // 0x587B948D: push edx
        __asm _emit 0x52
        // 0x587B948E: push eax
        __asm _emit 0x50
        // 0x587B948F: push 0x80010fa0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9494: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B9496: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x77
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B949B: pop edi
        __asm _emit 0x5F
        // 0x587B949C: pop esi
        __asm _emit 0x5E
        // 0x587B949D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
