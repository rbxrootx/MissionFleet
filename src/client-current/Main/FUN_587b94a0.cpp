// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B94A0 .. +0x32 bytes.
// Source symbol alias: FUN_587b94a0.
extern "C" __declspec(naked) void FUN_587b94a0() {
    __asm {
        // 0x587B94A0: push esi
        __asm _emit 0x56
        // 0x587B94A1: push edi
        __asm _emit 0x57
        // 0x587B94A2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B94A6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B94A8: push edi
        __asm _emit 0x57
        // 0x587B94A9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B94AB: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B94B1: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B94B7: inc eax
        __asm _emit 0x40
        // 0x587B94B8: push eax
        __asm _emit 0x50
        // 0x587B94B9: mov eax, dword ptr [0x58a0b4a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B94BE: push edi
        __asm _emit 0x57
        // 0x587B94BF: push eax
        __asm _emit 0x50
        // 0x587B94C0: push ecx
        __asm _emit 0x51
        // 0x587B94C1: push 0x80010f13
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B94C6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B94C8: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x77
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B94CD: pop edi
        __asm _emit 0x5F
        // 0x587B94CE: pop esi
        __asm _emit 0x5E
        // 0x587B94CF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
