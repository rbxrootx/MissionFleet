// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 57 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9cb0.

// Ghidra body range 0x587B9CB0..0x587B9CE9; 57 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9cb0_segment_00() {
    __asm {
        // 0x587B9CB0: push esi
        __asm _emit 0x56
        // 0x587B9CB1: push edi
        __asm _emit 0x57
        // 0x587B9CB2: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B9CB6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9CB8: push edi
        __asm _emit 0x57
        // 0x587B9CB9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B9CBB: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B9CC1: movzx ecx, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9CC6: movzx edx, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B9CCB: push eax
        __asm _emit 0x50
        // 0x587B9CCC: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B9CD0: push edi
        __asm _emit 0x57
        // 0x587B9CD1: shl ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x10
        // 0x587B9CD4: push eax
        __asm _emit 0x50
        // 0x587B9CD5: or ecx, edx
        __asm _emit 0x0B
        __asm _emit 0xCA
        // 0x587B9CD7: push ecx
        __asm _emit 0x51
        // 0x587B9CD8: push 0x8001310a
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9CDD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B9CDF: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x6F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9CE4: pop edi
        __asm _emit 0x5F
        // 0x587B9CE5: pop esi
        __asm _emit 0x5E
        // 0x587B9CE6: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
