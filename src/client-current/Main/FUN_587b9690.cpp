// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 54 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9690.

// Ghidra body range 0x587B9690..0x587B96C6; 54 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9690_segment_00() {
    __asm {
        // 0x587B9690: push esi
        __asm _emit 0x56
        // 0x587B9691: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B9693: cmp dword ptr [esi + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B969A: jne 0x587b96c2
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x587B969C: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B96A0: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B96A4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B96A6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B96A8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B96AA: push eax
        __asm _emit 0x50
        // 0x587B96AB: push ecx
        __asm _emit 0x51
        // 0x587B96AC: push 0x800100a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B96B1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B96B3: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x75
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B96B8: mov dword ptr [esi + 0x134], 0x20000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587B96C2: pop esi
        __asm _emit 0x5E
        // 0x587B96C3: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
