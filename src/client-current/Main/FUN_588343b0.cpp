// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588343B0 .. +0x168 bytes.
// Source symbol alias: FUN_588343b0.
extern "C" __declspec(naked) void FUN_588343b0() {
    __asm {
        // 0x588343B0: push ecx
        __asm _emit 0x51
        // 0x588343B1: push edi
        __asm _emit 0x57
        // 0x588343B2: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588343B4: cmp byte ptr [edi + 0x321], 5
        __asm _emit 0x80
        __asm _emit 0xBF
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x588343BB: mov dword ptr [esp + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588343BF: jne 0x58834513
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588343C5: push ebx
        __asm _emit 0x53
        // 0x588343C6: push ebp
        __asm _emit 0x55
        // 0x588343C7: push esi
        __asm _emit 0x56
        // 0x588343C8: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588343CC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588343CE: je 0x58834482
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588343D4: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588343D8: lea ebp, [edi + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588343DE: add ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0C
        // 0x588343E1: lea eax, [edi + 0x150]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588343E7: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588343EB: jmp 0x588343f0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588343ED: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588343F0: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588343F2: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588343F7: jmp 0x58834400
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x588343F9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834400: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58834402: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58834407: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5883440A: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5883440D: jne 0x58834400
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5883440F: mov eax, dword ptr [ebp - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xC0
        // 0x58834412: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58834415: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58834417: je 0x5883444f
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58834419: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883441B: je 0x5883444f
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x5883441D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883441F: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834424: lea edx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5883442A: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5883442C: je 0x5883443f
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5883442E: mov dl, byte ptr [esi]
        __asm _emit 0x8A
        __asm _emit 0x16
        // 0x58834430: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58834432: je 0x5883443f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58834434: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x58834436: inc eax
        __asm _emit 0x40
        // 0x58834437: inc esi
        __asm _emit 0x46
        // 0x58834438: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5883443B: jne 0x58834424
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5883443D: jmp 0x58834443
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5883443F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58834441: jne 0x58834444
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58834443: dec eax
        __asm _emit 0x48
        // 0x58834444: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58834448: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883444C: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883444F: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x58834457: jne 0x58834465
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58834459: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5883445C: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834463: jmp 0x5883446f
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58834465: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58834468: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883446F: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58834472: add ecx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x54
        // 0x58834475: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5883447A: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5883447C: jne 0x588343f0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58834482: cmp esi, 5
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x58834485: je 0x58834509
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883448B: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834490: lea ebp, [edi + esi*4 + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0xB7
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834497: lea edi, [edi + esi*8 + 0x150]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0xF7
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883449E: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x588344A0: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588344A5: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588344A7: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588344AC: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x588344B0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588344B3: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588344B6: jne 0x588344a5
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x588344B8: mov eax, dword ptr [ebp - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xC0
        // 0x588344BB: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588344BE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588344C0: je 0x588344f3
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x588344C2: mov esi, 0x5898c922
        __asm _emit 0xBE
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588344C7: mov ebx, 0x80
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588344CC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588344D0: lea edx, [ebx + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588344D6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588344D8: je 0x588344eb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588344DA: mov dl, byte ptr [esi]
        __asm _emit 0x8A
        __asm _emit 0x16
        // 0x588344DC: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588344DE: je 0x588344eb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588344E0: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x588344E2: inc eax
        __asm _emit 0x40
        // 0x588344E3: inc esi
        __asm _emit 0x46
        // 0x588344E4: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588344E7: jne 0x588344d0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588344E9: jmp 0x588344ef
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588344EB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588344ED: jne 0x588344f0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588344EF: dec eax
        __asm _emit 0x48
        // 0x588344F0: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588344F3: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588344F6: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588344F9: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588344FC: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834503: jne 0x588344a0
        __asm _emit 0x75
        __asm _emit 0x9B
        // 0x58834505: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58834509: pop esi
        __asm _emit 0x5E
        // 0x5883450A: pop ebp
        __asm _emit 0x5D
        // 0x5883450B: mov byte ptr [edi + 0x321], 0
        __asm _emit 0xC6
        __asm _emit 0x87
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834512: pop ebx
        __asm _emit 0x5B
        // 0x58834513: pop edi
        __asm _emit 0x5F
        // 0x58834514: pop ecx
        __asm _emit 0x59
        // 0x58834515: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
