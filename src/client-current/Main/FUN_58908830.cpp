// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908830 .. +0x36 bytes.
// Source symbol alias: FUN_58908830.
extern "C" __declspec(naked) void FUN_58908830() {
    __asm {
        // 0x58908830: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58908834: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58908837: je 0x58908859
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58908839: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x5890883C: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5890883E: jle 0x5890884c
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58908840: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908842: je 0x58908863
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58908844: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x58908847: dec edx
        __asm _emit 0x4A
        // 0x58908848: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5890884A: jg 0x58908840
        __asm _emit 0x7F
        __asm _emit 0xF4
        // 0x5890884C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890884E: je 0x58908863
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58908850: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908856: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58908859: mov dword ptr [ecx + 0x84], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908863: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
