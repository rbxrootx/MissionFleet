// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 66 bytes in 1 exact ranges.
// Source symbol alias: FUN_588dd370.

// Ghidra body range 0x588DD370..0x588DD3B2; 66 mapped bytes.
extern "C" __declspec(naked) void FUN_588dd370_segment_00() {
    __asm {
        // 0x588DD370: mov eax, dword ptr [ecx + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD376: push esi
        __asm _emit 0x56
        // 0x588DD377: mov dword ptr [ecx + 0x1330], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD381: mov esi, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x6C
        // 0x588DD384: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DD386: push esi
        __asm _emit 0x56
        // 0x588DD387: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DD38D: movzx ecx, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588DD392: inc eax
        __asm _emit 0x40
        // 0x588DD393: push eax
        __asm _emit 0x50
        // 0x588DD394: push esi
        __asm _emit 0x56
        // 0x588DD395: or ecx, 0x10000
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DD39B: push ecx
        __asm _emit 0x51
        // 0x588DD39C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD3A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DD3A4: push 0x80012101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588DD3A9: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588DD3AE: pop esi
        __asm _emit 0x5E
        // 0x588DD3AF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
