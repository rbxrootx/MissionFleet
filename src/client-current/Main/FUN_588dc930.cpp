// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 86 bytes in 1 exact ranges.
// Source symbol alias: FUN_588dc930.

// Ghidra body range 0x588DC930..0x588DC986; 86 mapped bytes.
extern "C" __declspec(naked) void FUN_588dc930_segment_00() {
    __asm {
        // 0x588DC930: push esi
        __asm _emit 0x56
        // 0x588DC931: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x588DC934: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DC936: cmp esi, 0x40
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x40
        // 0x588DC939: jl 0x588dc97f
        __asm _emit 0x7C
        __asm _emit 0x44
        // 0x588DC93B: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC941: mov edx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DC947: push edi
        __asm _emit 0x57
        // 0x588DC948: mov edi, dword ptr [edx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC94E: imul edi, dword ptr [edx + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xBA
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC955: sub edi, 0x96
        __asm _emit 0x81
        __asm _emit 0xEF
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC95B: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x588DC95D: pop edi
        __asm _emit 0x5F
        // 0x588DC95E: jg 0x588dc97f
        __asm _emit 0x7F
        __asm _emit 0x1F
        // 0x588DC960: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588DC963: cmp ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x40
        // 0x588DC966: jl 0x588dc97f
        __asm _emit 0x7C
        __asm _emit 0x17
        // 0x588DC968: mov esi, dword ptr [edx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC96E: imul esi, dword ptr [edx + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xB2
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC975: sub esi, 0x96
        __asm _emit 0x81
        __asm _emit 0xEE
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC97B: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x588DC97D: jle 0x588dc984
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x588DC97F: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC984: pop esi
        __asm _emit 0x5E
        // 0x588DC985: ret
        __asm _emit 0xC3
    }
}
