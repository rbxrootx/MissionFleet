// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EBEB0 .. +0xEE bytes.
// Source symbol alias: FUN_588ebeb0.
extern "C" __declspec(naked) void FUN_588ebeb0() {
    __asm {
        // 0x588EBEB0: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EBEB4: push ebx
        __asm _emit 0x53
        // 0x588EBEB5: push ebp
        __asm _emit 0x55
        // 0x588EBEB6: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EBEBA: push esi
        __asm _emit 0x56
        // 0x588EBEBB: push edi
        __asm _emit 0x57
        // 0x588EBEBC: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EBEBE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EBEC0: jne 0x588ebec4
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588EBEC2: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588EBEC4: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x588EBEC6: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x588EBEC9: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588EBECB: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x0D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EBED0: cdq
        __asm _emit 0x99
        // 0x588EBED1: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x588EBED3: cmp dword ptr [0x589c9074], 2
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x588EBEDA: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588EBEDC: je 0x588ebee7
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588EBEDE: pop edi
        __asm _emit 0x5F
        // 0x588EBEDF: pop esi
        __asm _emit 0x5E
        // 0x588EBEE0: pop ebp
        __asm _emit 0x5D
        // 0x588EBEE1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EBEE3: pop ebx
        __asm _emit 0x5B
        // 0x588EBEE4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588EBEE7: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EBEEB: mov eax, dword ptr [esi + eax*8 + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x588EBEEF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588EBEF2: je 0x588ebf21
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588EBEF4: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588EBEF7: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBEFD: jle 0x588ebf12
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EBEFF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EBF01: jl 0x588ebf12
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EBF03: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBF09: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EBF0B: je 0x588ebf12
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EBF0D: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588EBF10: jmp 0x588ebf14
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EBF12: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EBF14: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EBF16: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EBF18: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x588EBF1B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EBF1D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EBF1F: jne 0x588ebf92
        __asm _emit 0x75
        __asm _emit 0x71
        // 0x588EBF21: dec ebx
        __asm _emit 0x4B
        // 0x588EBF22: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588EBF24: je 0x588ebede
        __asm _emit 0x74
        __asm _emit 0xB8
        // 0x588EBF26: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EBF2A: lea eax, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2F
        // 0x588EBF2D: mov dword ptr [esi + ecx*8 + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xCE
        __asm _emit 0x08
        // 0x588EBF31: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588EBF34: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBF3A: jle 0x588ebf4f
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EBF3C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EBF3E: jl 0x588ebf4f
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EBF40: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBF46: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EBF48: je 0x588ebf4f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EBF4A: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588EBF4D: jmp 0x588ebf51
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EBF4F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EBF51: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EBF57: push edx
        __asm _emit 0x52
        // 0x588EBF58: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EBF5A: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EBF5F: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EBF63: mov eax, dword ptr [esi + eax*8 + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x588EBF67: mov esi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x588EBF6A: cmp dword ptr [esi + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBF70: jle 0x588ebf85
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EBF72: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EBF74: jl 0x588ebf85
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EBF76: mov esi, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBF7C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EBF7E: je 0x588ebf85
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EBF80: mov eax, dword ptr [esi + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x86
        // 0x588EBF83: jmp 0x588ebf87
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EBF85: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EBF87: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EBF89: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EBF8B: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588EBF8E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EBF90: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EBF92: pop edi
        __asm _emit 0x5F
        // 0x588EBF93: pop esi
        __asm _emit 0x5E
        // 0x588EBF94: pop ebp
        __asm _emit 0x5D
        // 0x588EBF95: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBF9A: pop ebx
        __asm _emit 0x5B
        // 0x588EBF9B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
