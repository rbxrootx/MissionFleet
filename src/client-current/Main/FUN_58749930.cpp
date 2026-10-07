// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 41 bytes in 1 exact ranges.
// Source symbol alias: FUN_58749930.

// Ghidra body range 0x58749930..0x58749959; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_58749930_segment_00() {
    __asm {
        // 0x58749930: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58749934: mov eax, 0x40000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58749939: mov byte ptr [ecx + 0x68], 1
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x5874993D: mov dword ptr [ecx + 0xc4], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749947: mov dword ptr [ecx + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874994D: mov dword ptr [ecx + 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x74
        // 0x58749950: mov dword ptr [ecx + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749956: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
