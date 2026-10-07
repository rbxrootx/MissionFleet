// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 28 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743140.

// Ghidra body range 0x58743140..0x5874315C; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_58743140_segment_00() {
    __asm {
        // 0x58743140: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58743144: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58743147: cmp byte ptr [ecx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5874314B: jne 0x5874315b
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5874314D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58743150: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58743152: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58743155: cmp byte ptr [ecx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743159: je 0x58743150
        __asm _emit 0x74
        __asm _emit 0xF5
        // 0x5874315B: ret
        __asm _emit 0xC3
    }
}
