// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 185 bytes in 2 exact ranges.
// Source symbol alias: FUN_5882c490.

// Ghidra body range 0x5882C490..0x5882C4AD; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_5882c490_segment_00() {
    __asm {
        // 0x5882C490: push ebx
        __asm _emit 0x53
        // 0x5882C491: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882C493: cmp dword ptr [ebx + 0x170], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C49A: je 0x5882c54a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C4A0: push ebp
        __asm _emit 0x55
        // 0x5882C4A1: push esi
        __asm _emit 0x56
        // 0x5882C4A2: push edi
        __asm _emit 0x57
        // 0x5882C4A3: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5882C4A5: lea esi, [ebx + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C4AB: jmp 0x5882c4b0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5882C4B0..0x5882C54C; 156 mapped bytes.
extern "C" __declspec(naked) void FUN_5882c490_segment_01() {
    __asm {
        // 0x5882C4B0: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C4B6: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882C4BB: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C4C1: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882C4C3: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x5882C4C5: call 0x587860f0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x9C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C4CA: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5882C4CC: jae 0x5882c51f
        __asm _emit 0x73
        __asm _emit 0x51
        // 0x5882C4CE: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C4D4: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x9F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C4D9: cmp byte ptr [eax + edi*4 + 0x180], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0xB8
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C4E1: je 0x5882c50a
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5882C4E3: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C4E9: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x9F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C4EE: cmp word ptr [eax + edi*4 + 0x182], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xB8
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C4F7: je 0x5882c50a
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5882C4F9: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882C4FB: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5882C500: mov eax, dword ptr [esi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF4
        // 0x5882C503: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C508: jmp 0x5882c536
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5882C50A: mov eax, dword ptr [esi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF4
        // 0x5882C50D: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5882C512: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882C514: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C519: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882C51D: jmp 0x5882c53a
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x5882C51F: mov eax, dword ptr [esi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF4
        // 0x5882C522: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C527: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882C52B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882C52D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5882C52F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882C533: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5882C536: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882C53A: inc ebp
        __asm _emit 0x45
        // 0x5882C53B: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5882C53E: cmp ebp, 3
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x03
        // 0x5882C541: jl 0x5882c4b0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882C547: pop edi
        __asm _emit 0x5F
        // 0x5882C548: pop esi
        __asm _emit 0x5E
        // 0x5882C549: pop ebp
        __asm _emit 0x5D
        // 0x5882C54A: pop ebx
        __asm _emit 0x5B
        // 0x5882C54B: ret
        __asm _emit 0xC3
    }
}
