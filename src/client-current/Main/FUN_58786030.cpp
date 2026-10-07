// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 96 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786030.

// Ghidra body range 0x58786030..0x58786090; 96 mapped bytes.
extern "C" __declspec(naked) void FUN_58786030_segment_00() {
    __asm {
        // 0x58786030: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58786033: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58786036: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786038: je 0x5878608a
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x5878603A: mov eax, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x48
        // 0x5878603D: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786041: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786045: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786047: jge 0x5878604f
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58786049: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878604F: fdiv qword ptr [0x58996aa0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xA0
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58786055: fmul qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878605B: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5878605F: fadd qword ptr [0x5898cf18]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58786065: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5878606A: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878606F: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786073: fldcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786077: fistp qword ptr [esp + 4]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878607B: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878607F: mov dword ptr [ecx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x58786082: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58786086: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58786089: ret
        __asm _emit 0xC3
        // 0x5878608A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878608C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5878608F: ret
        __asm _emit 0xC3
    }
}
