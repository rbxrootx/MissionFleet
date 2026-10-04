// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884D870 .. +0x76 bytes.
// Source symbol alias: FUN_5884d870.
extern "C" __declspec(naked) void FUN_5884d870() {
    __asm {
        // 0x5884D870: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D876: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884D878: je 0x5884d8e3
        __asm _emit 0x74
        __asm _emit 0x69
        // 0x5884D87A: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884D880: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5884D882: je 0x5884d8e3
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x5884D884: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D886: cmp dword ptr [esp + 4], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5884D88A: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5884D88D: add eax, 0x209
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D892: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D898: jle 0x5884d8b2
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5884D89A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884D89C: jl 0x5884d8b2
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5884D89E: cmp dword ptr [edx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D8A5: je 0x5884d8b2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884D8A7: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D8AD: mov eax, dword ptr [edx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x5884D8B0: jmp 0x5884d8b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D8B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D8B4: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5884D8B7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884D8B9: je 0x5884d8e3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5884D8BB: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884D8BE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5884D8C1: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884D8C4: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5884D8C7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884D8CA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884D8CC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5884D8CF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5884D8D1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5884D8D4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884D8D7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5884D8DA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884D8DD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5884D8E0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5884D8E3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
