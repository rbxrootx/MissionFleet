// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 39 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972c40.

// Ghidra body range 0x58972C40..0x58972C67; 39 mapped bytes.
extern "C" __declspec(naked) void FUN_58972c40_segment_00() {
    __asm {
        // 0x58972C40: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58972C44: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58972C46: jl 0x58972c62
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x58972C48: cmp eax, dword ptr [ecx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x58972C4B: jge 0x58972c62
        __asm _emit 0x7D
        __asm _emit 0x15
        // 0x58972C4D: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58972C51: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58972C53: jl 0x58972c62
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x58972C55: cmp eax, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58972C58: jge 0x58972c62
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58972C5A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972C5F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58972C62: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58972C64: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
