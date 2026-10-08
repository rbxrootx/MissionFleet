// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 55 bytes in 1 exact ranges.
// Source symbol alias: FUN_58824630.

// Ghidra body range 0x58824630..0x58824667; 55 mapped bytes.
extern "C" __declspec(naked) void FUN_58824630_segment_00() {
    __asm {
        // 0x58824630: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58824634: mov byte ptr [ecx + 0x60], al
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x58824637: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x5882463A: dec eax
        __asm _emit 0x48
        // 0x5882463B: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5882463E: ja 0x58824664
        __asm _emit 0x77
        __asm _emit 0x24
        // 0x58824640: jmp dword ptr [eax*4 + 0x58824668]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0x82
        __asm _emit 0x58
        // 0x58824647: call 0x58827b90
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882464C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882464F: call 0x58828b60
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58824654: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58824657: call 0x58828130
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882465C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882465F: call 0x58826f20
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58824664: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
