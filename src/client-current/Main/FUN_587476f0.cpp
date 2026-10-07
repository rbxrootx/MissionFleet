// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 87 bytes in 1 exact ranges.
// Source symbol alias: FUN_587476f0.

// Ghidra body range 0x587476F0..0x58747747; 87 mapped bytes.
extern "C" __declspec(naked) void FUN_587476f0_segment_00() {
    __asm {
        // 0x587476F0: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587476F4: cmp ecx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587476FA: jl 0x58747741
        __asm _emit 0x7C
        __asm _emit 0x45
        // 0x587476FC: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58747701: mov eax, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58747707: mov edx, dword ptr [eax + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874770D: imul edx, dword ptr [eax + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x90
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747714: sub edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x64
        // 0x58747717: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58747719: jg 0x58747741
        __asm _emit 0x7F
        __asm _emit 0x26
        // 0x5874771B: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5874771F: cmp ecx, 0x1b8
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747725: jl 0x58747741
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x58747727: mov edx, dword ptr [eax + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874772D: imul edx, dword ptr [eax + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x90
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747734: sub edx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874773A: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5874773C: jg 0x58747741
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x5874773E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58747740: ret
        __asm _emit 0xC3
        // 0x58747741: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747746: ret
        __asm _emit 0xC3
    }
}
