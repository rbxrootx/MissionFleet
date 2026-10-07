// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5A70 .. +0x35 bytes.
// Source symbol alias: FUN_587e5a70.
extern "C" __declspec(naked) void FUN_587e5a70() {
    __asm {
        // 0x587E5A70: cmp byte ptr [ecx + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5A77: jne 0x587e5aa2
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x587E5A79: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E5A7D: mov dl, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E5A81: push eax
        __asm _emit 0x50
        // 0x587E5A82: mov dword ptr [ecx + 0x20c94], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E5A88: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E5A8C: mov byte ptr [ecx + 0x10484], dl
        __asm _emit 0x88
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5A92: push eax
        __asm _emit 0x50
        // 0x587E5A93: add ecx, 0x20c14
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x14
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E5A99: push ecx
        __asm _emit 0x51
        // 0x587E5A9A: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x72
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E5A9F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E5AA2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
