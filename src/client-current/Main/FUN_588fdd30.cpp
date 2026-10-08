// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 152 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fdd30.

// Ghidra body range 0x588FDD30..0x588FDDC8; 152 mapped bytes.
extern "C" __declspec(naked) void FUN_588fdd30_segment_00() {
    __asm {
        // 0x588FDD30: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FDD34: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x588FDD37: jne 0x588fddc3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDD3D: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FDD41: cmp eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDD47: jne 0x588fdd63
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588FDD49: mov ecx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x60
        // 0x588FDD4C: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588FDD4F: jle 0x588fddc3
        __asm _emit 0x7E
        __asm _emit 0x72
        // 0x588FDD51: dec ecx
        __asm _emit 0x49
        // 0x588FDD52: push ecx
        __asm _emit 0x51
        // 0x588FDD53: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FDD59: call 0x588fd790
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FDD5E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FDD60: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FDD63: cmp eax, dword ptr [ecx + 0xb8]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDD69: jne 0x588fdd85
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588FDD6B: mov ecx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x60
        // 0x588FDD6E: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x64
        // 0x588FDD71: jge 0x588fddc3
        __asm _emit 0x7D
        __asm _emit 0x50
        // 0x588FDD73: inc ecx
        __asm _emit 0x41
        // 0x588FDD74: push ecx
        __asm _emit 0x51
        // 0x588FDD75: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FDD7B: call 0x588fd790
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FDD80: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FDD82: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FDD85: cmp eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDD8B: jne 0x588fdd9a
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588FDD8D: mov ecx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x60
        // 0x588FDD90: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588FDD93: jle 0x588fddc3
        __asm _emit 0x7E
        __asm _emit 0x2E
        // 0x588FDD95: cmp ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x588FDD98: jmp 0x588fdd4f
        __asm _emit 0xEB
        __asm _emit 0xB5
        // 0x588FDD9A: cmp eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDDA0: jne 0x588fddc3
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x588FDDA2: mov ecx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x60
        // 0x588FDDA5: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x64
        // 0x588FDDA8: jge 0x588fddc3
        __asm _emit 0x7D
        __asm _emit 0x19
        // 0x588FDDAA: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDDAF: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588FDDB1: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588FDDB4: jl 0x588fddc3
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x588FDDB6: inc ecx
        __asm _emit 0x41
        // 0x588FDDB7: push ecx
        __asm _emit 0x51
        // 0x588FDDB8: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FDDBE: call 0x588fd790
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FDDC3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FDDC5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
