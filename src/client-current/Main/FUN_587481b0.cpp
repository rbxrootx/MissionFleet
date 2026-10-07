// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 50 bytes in 1 exact ranges.
// Source symbol alias: FUN_587481b0.

// Ghidra body range 0x587481B0..0x587481E2; 50 mapped bytes.
extern "C" __declspec(naked) void FUN_587481b0_segment_00() {
    __asm {
        // 0x587481B0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587481B4: cmp dword ptr [eax + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x587481B8: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587481BB: jb 0x587481c2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587481BD: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587481C0: jmp 0x587481c5
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587481C2: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587481C5: push ecx
        __asm _emit 0x51
        // 0x587481C6: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587481CA: push eax
        __asm _emit 0x50
        // 0x587481CB: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x587481CE: push eax
        __asm _emit 0x50
        // 0x587481CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587481D1: call 0x58748110
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587481D6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587481D8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587481DA: setl cl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC1
        // 0x587481DD: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x587481DF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
