// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 81 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786260.

// Ghidra body range 0x58786260..0x587862B1; 81 mapped bytes.
extern "C" __declspec(naked) void FUN_58786260_segment_00() {
    __asm {
        // 0x58786260: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58786263: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58786266: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786268: je 0x587862ab
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5878626A: mov eax, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x48
        // 0x5878626D: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786271: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786275: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786277: jge 0x5878627f
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58786279: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878627F: fmul qword ptr [0x5898cb38]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58786285: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58786289: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5878628E: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786293: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786297: fldcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878629B: fistp qword ptr [esp + 4]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878629F: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587862A3: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587862A7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587862AA: ret
        __asm _emit 0xC3
        // 0x587862AB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587862AD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587862B0: ret
        __asm _emit 0xC3
    }
}
