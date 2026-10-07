// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 90 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786090.

// Ghidra body range 0x58786090..0x587860EA; 90 mapped bytes.
extern "C" __declspec(naked) void FUN_58786090_segment_00() {
    __asm {
        // 0x58786090: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58786093: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58786096: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786098: je 0x587860e4
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x5878609A: mov eax, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x4C
        // 0x5878609D: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587860A1: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587860A5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587860A7: jge 0x587860af
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587860A9: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587860AF: fdiv qword ptr [0x5898ceb8]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xB8
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587860B5: fadd qword ptr [0x58996ad0]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587860BB: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587860BF: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587860C4: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587860C9: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587860CD: fldcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587860D1: fistp qword ptr [esp + 4]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587860D5: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587860D9: mov dword ptr [ecx + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587860DC: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587860E0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587860E3: ret
        __asm _emit 0xC3
        // 0x587860E4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587860E6: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587860E9: ret
        __asm _emit 0xC3
    }
}
