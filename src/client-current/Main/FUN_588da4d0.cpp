// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DA4D0 .. +0x11D bytes.
// Source symbol alias: FUN_588da4d0.
extern "C" __declspec(naked) void FUN_588da4d0() {
    __asm {
        // 0x588DA4D0: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA4D7: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588DA4DA: push ebx
        __asm _emit 0x53
        // 0x588DA4DB: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA4E1: cmp byte ptr [eax + ebx + 0x430], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x18
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA4E9: push esi
        __asm _emit 0x56
        // 0x588DA4EA: push edi
        __asm _emit 0x57
        // 0x588DA4EB: je 0x588da59c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA4F1: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DA4F5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588DA4F7: je 0x588da591
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA4FD: mov edi, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA503: fild dword ptr [ecx + 0x348]
        __asm _emit 0xDB
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA509: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x588DA50B: imul edi, edi, 0x75
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x75
        // 0x588DA50E: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x588DA511: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DA516: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588DA518: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588DA51B: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588DA51D: push ebp
        __asm _emit 0x55
        // 0x588DA51E: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DA522: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588DA525: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x588DA528: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x588DA52A: cdq
        __asm _emit 0x99
        // 0x588DA52B: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x588DA52D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588DA52F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DA534: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x588DA536: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588DA539: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588DA53C: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588DA53E: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x588DA541: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x588DA543: cdq
        __asm _emit 0x99
        // 0x588DA544: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DA546: sub esi, dword ptr [ebx + 4]
        __asm _emit 0x2B
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x588DA549: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x588DA54B: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x588DA54E: sub eax, dword ptr [ebx + 8]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x588DA551: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DA553: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588DA556: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588DA558: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DA55C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DA560: fmul qword ptr [0x5898ceb8]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DA566: fdiv qword ptr [0x589a1058]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DA56C: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x588DA56E: fstp qword ptr [esp + 0x10]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DA572: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x27
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DA577: fcomp qword ptr [esp + 0x10]
        __asm _emit 0xDC
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DA57B: pop ebp
        __asm _emit 0x5D
        // 0x588DA57C: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x588DA57E: test ah, 5
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x05
        // 0x588DA581: jp 0x588da591
        __asm _emit 0x7A
        __asm _emit 0x0E
        // 0x588DA583: pop edi
        __asm _emit 0x5F
        // 0x588DA584: pop esi
        __asm _emit 0x5E
        // 0x588DA585: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA58A: pop ebx
        __asm _emit 0x5B
        // 0x588DA58B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588DA58E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588DA591: pop edi
        __asm _emit 0x5F
        // 0x588DA592: pop esi
        __asm _emit 0x5E
        // 0x588DA593: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DA595: pop ebx
        __asm _emit 0x5B
        // 0x588DA596: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588DA599: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588DA59C: mov esi, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA5A2: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DA5A6: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x588DA5A8: imul esi, esi, 0x64
        __asm _emit 0x6B
        __asm _emit 0xF6
        __asm _emit 0x64
        // 0x588DA5AB: imul edx, edx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x75
        // 0x588DA5AE: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DA5B3: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588DA5B5: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588DA5B8: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588DA5BB: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588DA5BD: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588DA5C0: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588DA5C2: cdq
        __asm _emit 0x99
        // 0x588DA5C3: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588DA5C5: push eax
        __asm _emit 0x50
        // 0x588DA5C6: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DA5CB: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588DA5CD: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588DA5CF: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588DA5D2: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588DA5D4: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588DA5D7: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588DA5D9: cdq
        __asm _emit 0x99
        // 0x588DA5DA: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588DA5DC: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588DA5DE: push eax
        __asm _emit 0x50
        // 0x588DA5DF: call 0x587e5e10
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DA5E4: pop edi
        __asm _emit 0x5F
        // 0x588DA5E5: pop esi
        __asm _emit 0x5E
        // 0x588DA5E6: pop ebx
        __asm _emit 0x5B
        // 0x588DA5E7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588DA5EA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
