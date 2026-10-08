// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 185 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fcac0.

// Ghidra body range 0x588FCAC0..0x588FCB79; 185 mapped bytes.
extern "C" __declspec(naked) void FUN_588fcac0_segment_00() {
    __asm {
        // 0x588FCAC0: push ebx
        __asm _emit 0x53
        // 0x588FCAC1: push esi
        __asm _emit 0x56
        // 0x588FCAC2: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FCAC6: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588FCAC8: push edi
        __asm _emit 0x57
        // 0x588FCAC9: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588FCACB: mov eax, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x64
        // 0x588FCACE: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588FCAD1: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x588FCAD4: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x588FCAD6: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FCAD8: jl 0x588fcafb
        __asm _emit 0x7C
        __asm _emit 0x21
        // 0x588FCADA: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x588FCADD: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x588FCADF: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FCAE1: jge 0x588fcafb
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x588FCAE3: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588FCAE6: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588FCAE9: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x588FCAEC: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x588FCAEE: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x588FCAF0: jl 0x588fcafb
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x588FCAF2: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588FCAF5: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588FCAF7: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588FCAF9: jl 0x588fcb73
        __asm _emit 0x7C
        __asm _emit 0x78
        // 0x588FCAFB: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FCAFF: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FCB03: push ecx
        __asm _emit 0x51
        // 0x588FCB04: mov ecx, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x68
        // 0x588FCB07: push edx
        __asm _emit 0x52
        // 0x588FCB08: call 0x588ff0f0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCB0D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588FCB0F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588FCB11: je 0x588fcb73
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x588FCB13: movzx eax, byte ptr [esi + 0x69]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x69
        // 0x588FCB17: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x588FCB1A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FCB1C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FCB1E: je 0x588fcb48
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588FCB20: call 0x588fc560
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCB25: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FCB2B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FCB2D: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588FCB2F: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FCB33: push eax
        __asm _emit 0x50
        // 0x588FCB34: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FCB36: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FCB38: push 0x80015105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588FCB3D: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FCB42: pop edi
        __asm _emit 0x5F
        // 0x588FCB43: pop esi
        __asm _emit 0x5E
        // 0x588FCB44: pop ebx
        __asm _emit 0x5B
        // 0x588FCB45: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FCB48: call 0x588fc560
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCB4D: movzx edx, byte ptr [esi + 0x94]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCB54: movzx eax, byte ptr [esi + 0x68]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588FCB58: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FCB5A: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588FCB5C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FCB60: push ecx
        __asm _emit 0x51
        // 0x588FCB61: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FCB67: push edx
        __asm _emit 0x52
        // 0x588FCB68: push eax
        __asm _emit 0x50
        // 0x588FCB69: push 0x80017105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588FCB6E: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FCB73: pop edi
        __asm _emit 0x5F
        // 0x588FCB74: pop esi
        __asm _emit 0x5E
        // 0x588FCB75: pop ebx
        __asm _emit 0x5B
        // 0x588FCB76: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
