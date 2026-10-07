// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 90 bytes in 1 exact ranges.
// Source symbol alias: FUN_587860f0.

// Ghidra body range 0x587860F0..0x5878614A; 90 mapped bytes.
extern "C" __declspec(naked) void FUN_587860f0_segment_00() {
    __asm {
        // 0x587860F0: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587860F3: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587860F6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587860F8: je 0x58786144
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x587860FA: mov eax, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x4C
        // 0x587860FD: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786101: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786105: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786107: jge 0x5878610f
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58786109: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878610F: fdiv qword ptr [0x58996aa0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xA0
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58786115: fmul qword ptr [0x58996ae0]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5878611B: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5878611F: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58786124: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786129: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878612D: fldcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786131: fistp qword ptr [esp + 4]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786135: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786139: mov dword ptr [ecx + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x5878613C: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58786140: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58786143: ret
        __asm _emit 0xC3
        // 0x58786144: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58786146: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58786149: ret
        __asm _emit 0xC3
    }
}
