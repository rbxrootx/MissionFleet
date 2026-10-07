// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 176 bytes in 2 exact ranges.
// Source symbol alias: FUN_5882c310.

// Ghidra body range 0x5882C310..0x5882C32D; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_5882c310_segment_00() {
    __asm {
        // 0x5882C310: push ebx
        __asm _emit 0x53
        // 0x5882C311: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882C313: cmp dword ptr [ebx + 0x170], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C31A: je 0x5882c3c1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C320: push ebp
        __asm _emit 0x55
        // 0x5882C321: push esi
        __asm _emit 0x56
        // 0x5882C322: push edi
        __asm _emit 0x57
        // 0x5882C323: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5882C325: lea esi, [ebx + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C32B: jmp 0x5882c330
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5882C330..0x5882C3C3; 147 mapped bytes.
extern "C" __declspec(naked) void FUN_5882c310_segment_01() {
    __asm {
        // 0x5882C330: mov ecx, dword ptr [ebx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C336: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xBE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882C33B: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C341: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882C343: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x5882C345: call 0x58786090
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x9D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C34A: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5882C34C: jae 0x5882c39d
        __asm _emit 0x73
        __asm _emit 0x4F
        // 0x5882C34E: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C354: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xA1
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C359: cmp byte ptr [eax + edi*4 + 0x300], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C361: je 0x5882c38e
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5882C363: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C369: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xA1
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C36E: cmp word ptr [eax + edi*4 + 0x302], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C377: je 0x5882c38e
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5882C379: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882C37B: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5882C380: mov eax, dword ptr [esi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xEC
        // 0x5882C383: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C388: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882C38C: jmp 0x5882c3b1
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5882C38E: mov eax, dword ptr [esi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xEC
        // 0x5882C391: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5882C396: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C39B: jmp 0x5882c3ab
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5882C39D: mov eax, dword ptr [esi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xEC
        // 0x5882C3A0: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C3A5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882C3A9: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5882C3AB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882C3AD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882C3B1: inc ebp
        __asm _emit 0x45
        // 0x5882C3B2: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5882C3B5: cmp ebp, 5
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x05
        // 0x5882C3B8: jl 0x5882c330
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882C3BE: pop edi
        __asm _emit 0x5F
        // 0x5882C3BF: pop esi
        __asm _emit 0x5E
        // 0x5882C3C0: pop ebp
        __asm _emit 0x5D
        // 0x5882C3C1: pop ebx
        __asm _emit 0x5B
        // 0x5882C3C2: ret
        __asm _emit 0xC3
    }
}
