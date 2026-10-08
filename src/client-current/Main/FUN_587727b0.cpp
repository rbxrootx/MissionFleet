// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 239 bytes in 1 exact ranges.
// Source symbol alias: FUN_587727b0.

// Ghidra body range 0x587727B0..0x5877289F; 239 mapped bytes.
extern "C" __declspec(naked) void FUN_587727b0_segment_00() {
    __asm {
        // 0x587727B0: mov eax, 0x8004
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587727B5: call 0x5897ce60
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xA6
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587727BA: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587727BF: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587727C1: mov dword ptr [esp + 0x8000], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587727C8: push ebx
        __asm _emit 0x53
        // 0x587727C9: mov ebx, dword ptr [esp + 0x800c]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587727D0: push esi
        __asm _emit 0x56
        // 0x587727D1: push edi
        __asm _emit 0x57
        // 0x587727D2: push ebx
        __asm _emit 0x53
        // 0x587727D3: push 0x8000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587727D8: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587727DC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587727DE: push eax
        __asm _emit 0x50
        // 0x587727DF: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587727E1: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587727E3: call 0x5897ce56
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xA6
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587727E8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587727EB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587727ED: je 0x58772883
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587727F3: push ebp
        __asm _emit 0x55
        // 0x587727F4: mov edx, dword ptr [edi + 0x400]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587727FA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587727FC: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587727FE: je 0x5877282c
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58772800: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58772803: jne 0x58772863
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x58772805: not esi
        __asm _emit 0xF7
        __asm _emit 0xD6
        // 0x58772807: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877280B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877280D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877280F: je 0x58772828
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58772811: movzx esi, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x32
        // 0x58772814: xor esi, ecx
        __asm _emit 0x33
        __asm _emit 0xF1
        // 0x58772816: and esi, 0xff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877281C: shr ecx, 8
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x5877281F: xor ecx, dword ptr [edi + esi*4]
        __asm _emit 0x33
        __asm _emit 0x0C
        __asm _emit 0xB7
        // 0x58772822: dec eax
        __asm _emit 0x48
        // 0x58772823: inc edx
        __asm _emit 0x42
        // 0x58772824: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58772826: jne 0x58772811
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x58772828: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x5877282A: jmp 0x58772863
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x5877282C: not esi
        __asm _emit 0xF7
        __asm _emit 0xD6
        // 0x5877282E: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772832: movzx ecx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCE
        // 0x58772835: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58772837: je 0x5877285e
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58772839: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772840: movzx ebp, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x2A
        // 0x58772843: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58772845: xor esi, ebp
        __asm _emit 0x33
        __asm _emit 0xF5
        // 0x58772847: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x5877284B: and esi, 0xff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772851: xor cx, word ptr [edi + esi*4]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x0C
        __asm _emit 0xB7
        // 0x58772855: dec eax
        __asm _emit 0x48
        // 0x58772856: inc edx
        __asm _emit 0x42
        // 0x58772857: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x5877285A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877285C: jne 0x58772840
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x5877285E: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58772860: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x58772863: push ebx
        __asm _emit 0x53
        // 0x58772864: push 0x8000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772869: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877286B: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877286F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58772871: push ecx
        __asm _emit 0x51
        // 0x58772872: call 0x5897ce56
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xA5
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772877: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5877287A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877287C: jne 0x587727f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772882: pop ebp
        __asm _emit 0x5D
        // 0x58772883: mov ecx, dword ptr [esp + 0x800c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877288A: pop edi
        __asm _emit 0x5F
        // 0x5877288B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877288D: pop esi
        __asm _emit 0x5E
        // 0x5877288E: pop ebx
        __asm _emit 0x5B
        // 0x5877288F: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58772891: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xA3
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772896: add esp, 0x8004
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877289C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
