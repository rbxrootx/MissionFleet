// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 81 bytes in 1 exact ranges.
// Source symbol alias: FUN_587862c0.

// Ghidra body range 0x587862C0..0x58786311; 81 mapped bytes.
extern "C" __declspec(naked) void FUN_587862c0_segment_00() {
    __asm {
        // 0x587862C0: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587862C3: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587862C6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587862C8: je 0x5878630b
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x587862CA: mov eax, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x4C
        // 0x587862CD: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587862D1: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587862D5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587862D7: jge 0x587862df
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587862D9: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587862DF: fmul qword ptr [0x5898cb38]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587862E5: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587862E9: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587862EE: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587862F3: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587862F7: fldcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587862FB: fistp qword ptr [esp + 4]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587862FF: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786303: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58786307: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5878630A: ret
        __asm _emit 0xC3
        // 0x5878630B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878630D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58786310: ret
        __asm _emit 0xC3
    }
}
