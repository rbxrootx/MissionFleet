// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587F73B0 .. +0x17A bytes.
// Source symbol alias: FUN_587f73b0.
extern "C" __declspec(naked) void FUN_587f73b0() {
    __asm {
        // 0x587F73B0: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x587F73B3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F73B8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F73BA: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F73BE: push ebx
        __asm _emit 0x53
        // 0x587F73BF: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587F73C3: mov ecx, dword ptr [ecx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F73C9: push ebp
        __asm _emit 0x55
        // 0x587F73CA: mov ebp, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F73D0: cmp byte ptr [ebp + 2], 0x78
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x02
        __asm _emit 0x78
        // 0x587F73D4: push edi
        __asm _emit 0x57
        // 0x587F73D5: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F73D9: jne 0x587f73e2
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587F73DB: mov edi, 6
        __asm _emit 0xBF
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F73E0: jmp 0x587f7400
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x587F73E2: mov al, byte ptr [ebp + 1]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x01
        // 0x587F73E5: cmp al, 0xa4
        __asm _emit 0x3C
        __asm _emit 0xA4
        // 0x587F73E7: jne 0x587f73f0
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587F73E9: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F73EE: jmp 0x587f7400
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587F73F0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F73F2: cmp al, 0xc5
        __asm _emit 0x3C
        __asm _emit 0xC5
        // 0x587F73F4: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x587F73F7: dec ecx
        __asm _emit 0x49
        // 0x587F73F8: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x587F73FB: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x03
        // 0x587F73FE: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587F7400: mov cl, byte ptr [edi + ebp]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x2F
        // 0x587F7403: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x587F7405: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x587F7408: je 0x587f7518
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F740E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587F7410: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F7412: je 0x587f7518
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7418: mov al, byte ptr [ebx + ebp]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x2B
        // 0x587F741B: cmp al, 0x20
        __asm _emit 0x3C
        __asm _emit 0x20
        // 0x587F741D: je 0x587f7436
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587F741F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587F7421: je 0x587f7436
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587F7423: cmp al, 0x30
        __asm _emit 0x3C
        __asm _emit 0x30
        // 0x587F7425: jl 0x587f7518
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F742B: cmp al, 0x39
        __asm _emit 0x3C
        __asm _emit 0x39
        // 0x587F742D: jg 0x587f7518
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7433: inc ebx
        __asm _emit 0x43
        // 0x587F7434: jmp 0x587f7410
        __asm _emit 0xEB
        __asm _emit 0xDA
        // 0x587F7436: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F7438: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587F743A: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F743E: jge 0x587f74a2
        __asm _emit 0x7D
        __asm _emit 0x62
        // 0x587F7440: fld qword ptr [0x5898cb38]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F7446: push esi
        __asm _emit 0x56
        // 0x587F7447: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587F7449: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x587F744B: sub esi, edi
        __asm _emit 0x2B
        __asm _emit 0xF7
        // 0x587F744D: dec esi
        __asm _emit 0x4E
        // 0x587F744E: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587F7450: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587F7452: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F7454: jge 0x587f7458
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587F7456: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587F7458: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587F745A: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F745C: je 0x587f7460
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x587F745E: fmul st(1)
        __asm _emit 0xD8
        __asm _emit 0xC9
        // 0x587F7460: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x587F7462: je 0x587f746a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587F7464: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587F7466: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x587F7468: jmp 0x587f745a
        __asm _emit 0xEB
        __asm _emit 0xF0
        // 0x587F746A: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x587F746C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F746E: jge 0x587f7472
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587F7470: fdivr st(1)
        __asm _emit 0xD8
        __asm _emit 0xF9
        // 0x587F7472: movsx edx, byte ptr [edi + ebp]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x2F
        // 0x587F7476: sub edx, 0x30
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x30
        // 0x587F7479: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F747D: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F7481: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x587F7483: fiadd dword ptr [esp + 0x10]
        __asm _emit 0xDA
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F7487: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x58
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F748C: inc edi
        __asm _emit 0x47
        // 0x587F748D: dec esi
        __asm _emit 0x4E
        // 0x587F748E: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587F7490: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F7494: jl 0x587f744e
        __asm _emit 0x7C
        __asm _emit 0xB8
        // 0x587F7496: cmp eax, 0xffff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F749B: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587F749D: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587F749F: pop esi
        __asm _emit 0x5E
        // 0x587F74A0: jg 0x587f750f
        __asm _emit 0x7F
        __asm _emit 0x6D
        // 0x587F74A2: push eax
        __asm _emit 0x50
        // 0x587F74A3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F74A5: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F74AA: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F74AE: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x587F74B0: push eax
        __asm _emit 0x50
        // 0x587F74B1: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F74B5: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F74B9: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F74BD: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F74C1: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587F74C5: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587F74C9: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x45
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587F74CE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587F74D1: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F74D5: push ecx
        __asm _emit 0x51
        // 0x587F74D6: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F74DC: call 0x587b7fd0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x0A
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F74E1: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xA2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F74E6: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F74EC: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F74F0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F74F3: push eax
        __asm _emit 0x50
        // 0x587F74F4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F74F6: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F74F8: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F74FD: pop edi
        __asm _emit 0x5F
        // 0x587F74FE: pop ebp
        __asm _emit 0x5D
        // 0x587F74FF: pop ebx
        __asm _emit 0x5B
        // 0x587F7500: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F7504: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F7506: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x56
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F750B: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x587F750E: ret
        __asm _emit 0xC3
        // 0x587F750F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F7513: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x84
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F7518: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F751C: pop edi
        __asm _emit 0x5F
        // 0x587F751D: pop ebp
        __asm _emit 0x5D
        // 0x587F751E: pop ebx
        __asm _emit 0x5B
        // 0x587F751F: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F7521: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x56
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F7526: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x587F7529: ret
        __asm _emit 0xC3
    }
}
