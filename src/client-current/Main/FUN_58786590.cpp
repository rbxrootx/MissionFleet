// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 80 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786590.

// Ghidra body range 0x58786590..0x587865E0; 80 mapped bytes.
extern "C" __declspec(naked) void FUN_58786590_segment_00() {
    __asm {
        // 0x58786590: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58786593: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58786596: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58786598: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878659A: je 0x587865da
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5878659C: mov eax, dword ptr [ecx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x48
        // 0x5878659F: imul eax, dword ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587865A4: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587865A8: fild dword ptr [esp + 0xc]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587865AC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587865AE: jge 0x587865b6
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587865B0: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587865B6: fmul qword ptr [0x5898cb38]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587865BC: fnstcw word ptr [esp + 0xc]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587865C0: movzx eax, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587865C5: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587865CA: mov dword ptr [esp], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x587865CD: fldcw word ptr [esp]
        __asm _emit 0xD9
        __asm _emit 0x2C
        __asm _emit 0x24
        // 0x587865D0: fistp qword ptr [esp]
        __asm _emit 0xDF
        __asm _emit 0x3C
        __asm _emit 0x24
        // 0x587865D3: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x587865D6: fldcw word ptr [esp + 0xc]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587865DA: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587865DD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
