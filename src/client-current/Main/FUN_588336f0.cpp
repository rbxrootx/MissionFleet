// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 172 bytes in 1 exact ranges.
// Source symbol alias: FUN_588336f0.

// Ghidra body range 0x588336F0..0x5883379C; 172 mapped bytes.
extern "C" __declspec(naked) void FUN_588336f0_segment_00() {
    __asm {
        // 0x588336F0: push edi
        __asm _emit 0x57
        // 0x588336F1: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588336F3: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588336F7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588336F9: je 0x58833796
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588336FF: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58833703: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833708: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5883370B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833710: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58833713: jne 0x58833734
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58833715: or word ptr [edi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5883371A: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5883371E: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833723: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58833726: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883372B: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5883372E: mov word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58833732: jmp 0x58833775
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x58833734: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58833738: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5883373B: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833740: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58833743: jne 0x58833771
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x58833745: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883374A: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5883374E: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833753: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x58833757: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5883375B: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833760: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58833763: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833768: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5883376B: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5883376F: jmp 0x58833775
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58833771: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58833775: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x58833778: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883377A: je 0x58833796
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5883377C: push esi
        __asm _emit 0x56
        // 0x5883377D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58833780: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x38
        // 0x58833783: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58833785: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58833788: cmp esi, dword ptr [edi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x3C
        // 0x5883378B: je 0x58833798
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5883378D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5883378F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58833791: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58833793: jne 0x58833780
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58833795: pop esi
        __asm _emit 0x5E
        // 0x58833796: pop edi
        __asm _emit 0x5F
        // 0x58833797: ret
        __asm _emit 0xC3
        // 0x58833798: pop esi
        __asm _emit 0x5E
        // 0x58833799: pop edi
        __asm _emit 0x5F
        // 0x5883379A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
