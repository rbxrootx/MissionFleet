// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58849440 .. +0xF2 bytes.
// Source symbol alias: FUN_58849440.
extern "C" __declspec(naked) void FUN_58849440() {
    __asm {
        // 0x58849440: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58849443: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58849448: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884944A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884944E: cmp dword ptr [esp + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58849453: push ebp
        __asm _emit 0x55
        // 0x58849454: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58849456: jne 0x58849481
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58849458: call 0x58848610
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884945D: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x58849460: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58849462: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58849465: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58849467: push 0xee49
        __asm _emit 0x68
        __asm _emit 0x49
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884946C: push ebp
        __asm _emit 0x55
        // 0x5884946D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884946F: pop ebp
        __asm _emit 0x5D
        // 0x58849470: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58849474: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58849476: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x37
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884947B: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5884947E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58849481: push ebx
        __asm _emit 0x53
        // 0x58849482: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58849486: push esi
        __asm _emit 0x56
        // 0x58849487: push edi
        __asm _emit 0x57
        // 0x58849488: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884948C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5884948E: dec ebx
        __asm _emit 0x4B
        // 0x5884948F: nop
        __asm _emit 0x90
        // 0x58849490: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58849492: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58849496: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884949A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884949E: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588494A2: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588494A6: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588494AA: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x588494AD: cmp al, 0x3b
        __asm _emit 0x3C
        __asm _emit 0x3B
        // 0x588494AF: je 0x588494c4
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588494B1: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588494B5: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588494B7: je 0x588494c4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588494B9: inc esi
        __asm _emit 0x46
        // 0x588494BA: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x588494BC: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x588494BF: inc ecx
        __asm _emit 0x41
        // 0x588494C0: cmp al, 0x3b
        __asm _emit 0x3C
        __asm _emit 0x3B
        // 0x588494C2: jne 0x588494b5
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588494C4: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588494C8: push eax
        __asm _emit 0x50
        // 0x588494C9: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588494CE: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588494D4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588494D6: je 0x588494e4
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588494D8: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588494DC: push ecx
        __asm _emit 0x51
        // 0x588494DD: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588494DF: call 0x58849210
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588494E4: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588494E6: je 0x588494eb
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588494E8: inc esi
        __asm _emit 0x46
        // 0x588494E9: jmp 0x58849490
        __asm _emit 0xEB
        __asm _emit 0xA5
        // 0x588494EB: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588494F2: pop edi
        __asm _emit 0x5F
        // 0x588494F3: pop esi
        __asm _emit 0x5E
        // 0x588494F4: pop ebx
        __asm _emit 0x5B
        // 0x588494F5: jne 0x5884950e
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588494F7: movsx edx, word ptr [ebp + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x95
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588494FE: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58849502: dec eax
        __asm _emit 0x48
        // 0x58849503: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58849505: je 0x5884950e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58849507: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58849509: call 0x58848610
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884950E: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x58849511: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58849513: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58849516: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58849518: push 0xee49
        __asm _emit 0x68
        __asm _emit 0x49
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884951D: push ebp
        __asm _emit 0x55
        // 0x5884951E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58849520: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58849524: pop ebp
        __asm _emit 0x5D
        // 0x58849525: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58849527: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x36
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884952C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5884952F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
