// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 65 bytes in 1 exact ranges.
// Source symbol alias: FUN_58833680.

// Ghidra body range 0x58833680..0x588336C1; 65 mapped bytes.
extern "C" __declspec(naked) void FUN_58833680_segment_00() {
    __asm {
        // 0x58833680: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58833685: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58833687: jne 0x588336bc
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58833689: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5883368D: cmp ecx, dword ptr [eax + 0x7c]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x7C
        // 0x58833690: jne 0x588336a2
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58833692: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833698: call 0x587b9320
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x5C
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5883369D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883369F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588336A2: cmp ecx, dword ptr [eax + 0x80]
        __asm _emit 0x3B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588336A8: jne 0x588336bc
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588336AA: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588336AD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588336AF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588336B1: push 0xf230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588336B6: push eax
        __asm _emit 0x50
        // 0x588336B7: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588336BA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588336BC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588336BE: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
