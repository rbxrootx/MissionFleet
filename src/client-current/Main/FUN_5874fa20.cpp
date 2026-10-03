// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874FA20 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_5874fa20() {
    __asm {
        // 0x5874FA20: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5874FA23: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FA25: je 0x5874fa39
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5874FA27: movzx edx, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5874FA2B: imul edx, dword ptr [eax + 8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874FA2F: dec edx
        __asm _emit 0x4A
        // 0x5874FA30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874FA32: cmp dword ptr [ecx + 0x50], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x5874FA35: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x5874FA38: ret
        __asm _emit 0xC3
        // 0x5874FA39: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874FA3B: ret
        __asm _emit 0xC3
    }
}
