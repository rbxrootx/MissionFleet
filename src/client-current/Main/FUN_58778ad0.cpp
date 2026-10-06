// FUN_58778AD0: resolve a 16-bit key against the receiver's strided records.
// Two verified UI callers use it for primary and eight-slot follow-up lookups.
// Record and key semantics remain unresolved; this is the exact mapped stream.
// See docs/current-main-16-bit-strided-record-lookup.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778AD0 .. +0x46 bytes.
// Source symbol alias: FUN_58778ad0.
extern "C" __declspec(naked) void FUN_58778ad0() {
    __asm {
        // 0x58778AD0: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x58778AD3: push edi
        __asm _emit 0x57
        // 0x58778AD4: mov edi, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x28
        // 0x58778AD7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778AD9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58778ADB: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58778ADD: jle 0x58778b12
        __asm _emit 0x7E
        __asm _emit 0x33
        // 0x58778ADF: push ebx
        __asm _emit 0x53
        // 0x58778AE0: mov bx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58778AE5: push esi
        __asm _emit 0x56
        // 0x58778AE6: lea esi, [edi + 0x35e]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778AEC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58778AF0: cmp word ptr [esi], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1E
        // 0x58778AF3: je 0x58778b06
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58778AF5: inc ecx
        __asm _emit 0x41
        // 0x58778AF6: add esi, 0x390
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778AFC: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58778AFE: jl 0x58778af0
        __asm _emit 0x7C
        __asm _emit 0xF0
        // 0x58778B00: pop esi
        __asm _emit 0x5E
        // 0x58778B01: pop ebx
        __asm _emit 0x5B
        // 0x58778B02: pop edi
        __asm _emit 0x5F
        // 0x58778B03: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778B06: imul ecx, ecx, 0x390
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778B0C: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x58778B0E: pop esi
        __asm _emit 0x5E
        // 0x58778B0F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58778B11: pop ebx
        __asm _emit 0x5B
        // 0x58778B12: pop edi
        __asm _emit 0x5F
        // 0x58778B13: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
