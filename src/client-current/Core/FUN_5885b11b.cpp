// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B11B .. +0x41F bytes.
extern "C" __declspec(naked) void FUN_5885b11b() {
    __asm {
        // 0x5885B11B: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B11D: push ebp
        __asm _emit 0x55
        // 0x5885B11E: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B120: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x5885B123: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885B128: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5885B12A: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885B12D: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5885B130: mov dword ptr [ebp - 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xC4
        // 0x5885B133: push esi
        __asm _emit 0x56
        // 0x5885B134: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885B136: jne 0x5885b152
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5885B138: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B13D: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B143: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B148: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885B14B: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5885B14D: jmp 0x5885b2aa
        __asm _emit 0xE9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B152: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x5885B155: push ebx
        __asm _emit 0x53
        // 0x5885B156: cdq
        __asm _emit 0x99
        // 0x5885B157: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5885B159: mov dword ptr [ebp - 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xCC
        // 0x5885B15C: push edi
        __asm _emit 0x57
        // 0x5885B15D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885B15F: mov dword ptr [ebp - 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xC8
        // 0x5885B162: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885B164: jl 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B16A: jg 0x5885b177
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x5885B16C: cmp edi, 0x45
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x45
        // 0x5885B16F: jb 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B175: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885B177: ja 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B17D: jb 0x5885b18b
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x5885B17F: cmp edi, 0x44e
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x4E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B185: ja 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B18B: mov esi, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x10
        // 0x5885B18E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885B190: js 0x5885b19d
        __asm _emit 0x78
        __asm _emit 0x0B
        // 0x5885B192: mov dword ptr [ebp - 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xC0
        // 0x5885B195: mov dword ptr [ebp - 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xBC
        // 0x5885B198: cmp esi, 0xb
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0B
        // 0x5885B19B: jle 0x5885b207
        __asm _emit 0x7E
        __asm _emit 0x6A
        // 0x5885B19D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885B19F: cdq
        __asm _emit 0x99
        // 0x5885B1A0: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5885B1A2: pop esi
        __asm _emit 0x5E
        // 0x5885B1A3: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5885B1A5: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5885B1A7: cdq
        __asm _emit 0x99
        // 0x5885B1A8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5885B1AA: mov dword ptr [ecx + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x10
        // 0x5885B1AD: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885B1AF: mov dword ptr [ebp - 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xC8
        // 0x5885B1B2: adc ebx, edx
        __asm _emit 0x13
        __asm _emit 0xDA
        // 0x5885B1B4: mov dword ptr [ebp - 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xC0
        // 0x5885B1B7: mov dword ptr [ebp - 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xCC
        // 0x5885B1BA: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5885B1BC: mov dword ptr [ebp - 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xBC
        // 0x5885B1BF: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885B1C1: jns 0x5885b1df
        __asm _emit 0x79
        __asm _emit 0x1C
        // 0x5885B1C3: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x5885B1C6: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5885B1C9: mov dword ptr [ecx + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x10
        // 0x5885B1CC: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885B1CE: sbb ebx, 0
        __asm _emit 0x83
        __asm _emit 0xDB
        __asm _emit 0x00
        // 0x5885B1D1: mov dword ptr [ebp - 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xC8
        // 0x5885B1D4: mov dword ptr [ebp - 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xCC
        // 0x5885B1D7: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5885B1D9: mov dword ptr [ebp - 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xC0
        // 0x5885B1DC: mov dword ptr [ebp - 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xBC
        // 0x5885B1DF: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B1E1: jl 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B1E7: jg 0x5885b1f4
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x5885B1E9: cmp eax, 0x45
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x45
        // 0x5885B1EC: jb 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B1F2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B1F4: ja 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B1FA: jb 0x5885b207
        __asm _emit 0x72
        __asm _emit 0x0B
        // 0x5885B1FC: cmp eax, 0x44e
        __asm _emit 0x3D
        __asm _emit 0x4E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B201: ja 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B207: push dword ptr [ebp - 0x44]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xBC
        // 0x5885B20A: mov eax, dword ptr [esi*4 + 0x588c60b8]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885B211: push dword ptr [ebp - 0x40]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x5885B214: cdq
        __asm _emit 0x99
        // 0x5885B215: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885B218: mov dword ptr [ebp - 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xD4
        // 0x5885B21B: call 0x5885b0cb
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B220: pop ecx
        __asm _emit 0x59
        // 0x5885B221: pop ecx
        __asm _emit 0x59
        // 0x5885B222: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885B224: je 0x5885b234
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885B226: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B228: inc eax
        __asm _emit 0x40
        // 0x5885B229: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5885B22B: jle 0x5885b234
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x5885B22D: add dword ptr [ebp - 0x30], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885B230: adc dword ptr [ebp - 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x55
        __asm _emit 0xD4
        __asm _emit 0x00
        // 0x5885B234: push ebx
        __asm _emit 0x53
        // 0x5885B235: push edi
        __asm _emit 0x57
        // 0x5885B236: call 0x5885b067
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B23B: pop ecx
        __asm _emit 0x59
        // 0x5885B23C: pop ecx
        __asm _emit 0x59
        // 0x5885B23D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885B23F: sub edi, 0x46
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x46
        // 0x5885B242: mov dword ptr [ebp - 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xC0
        // 0x5885B245: push 0x16d
        __asm _emit 0x68
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B24A: sbb ebx, 0
        __asm _emit 0x83
        __asm _emit 0xDB
        __asm _emit 0x00
        // 0x5885B24D: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5885B24F: push ebx
        __asm _emit 0x53
        // 0x5885B250: push edi
        __asm _emit 0x57
        // 0x5885B251: call 0x58831b50
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x68
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885B256: mov ecx, dword ptr [ebp - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xC0
        // 0x5885B259: mov edi, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xC4
        // 0x5885B25C: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x5885B25E: adc esi, edx
        __asm _emit 0x13
        __asm _emit 0xF2
        // 0x5885B260: add ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x5885B263: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5885B265: adc esi, dword ptr [ebp - 0x2c]
        __asm _emit 0x13
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5885B268: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5885B26B: cdq
        __asm _emit 0x99
        // 0x5885B26C: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x5885B26E: mov dword ptr [ebp - 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD4
        // 0x5885B271: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885B273: adc eax, edx
        __asm _emit 0x13
        __asm _emit 0xC2
        // 0x5885B275: mov dword ptr [ebp - 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x5885B278: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885B27A: jl 0x5885b2b7
        __asm _emit 0x7C
        __asm _emit 0x3B
        // 0x5885B27C: jg 0x5885b282
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x5885B27E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885B280: jb 0x5885b2b7
        __asm _emit 0x72
        __asm _emit 0x35
        // 0x5885B282: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B284: jl 0x5885b2cd
        __asm _emit 0x7C
        __asm _emit 0x47
        // 0x5885B286: jg 0x5885b28e
        __asm _emit 0x7F
        __asm _emit 0x06
        // 0x5885B288: cmp dword ptr [ebp - 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xD4
        __asm _emit 0x00
        // 0x5885B28C: jb 0x5885b2cd
        __asm _emit 0x72
        __asm _emit 0x3F
        // 0x5885B28E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B290: jl 0x5885b298
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x5885B292: jg 0x5885b2cd
        __asm _emit 0x7F
        __asm _emit 0x39
        // 0x5885B294: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885B296: jae 0x5885b2cd
        __asm _emit 0x73
        __asm _emit 0x35
        // 0x5885B298: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B29D: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B2A3: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885B2A6: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5885B2A8: pop edi
        __asm _emit 0x5F
        // 0x5885B2A9: pop ebx
        __asm _emit 0x5B
        // 0x5885B2AA: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885B2AD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5885B2AF: pop esi
        __asm _emit 0x5E
        // 0x5885B2B0: call 0x58831050
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x5D
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885B2B5: leave
        __asm _emit 0xC9
        // 0x5885B2B6: ret
        __asm _emit 0xC3
        // 0x5885B2B7: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B2B9: jg 0x5885b2cd
        __asm _emit 0x7F
        __asm _emit 0x12
        // 0x5885B2BB: jl 0x5885b2c3
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x5885B2BD: cmp dword ptr [ebp - 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xD4
        __asm _emit 0x00
        // 0x5885B2C1: jae 0x5885b2cd
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x5885B2C3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B2C5: jl 0x5885b2cd
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x5885B2C7: jg 0x5885b298
        __asm _emit 0x7F
        __asm _emit 0xCF
        // 0x5885B2C9: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885B2CB: jae 0x5885b298
        __asm _emit 0x73
        __asm _emit 0xCB
        // 0x5885B2CD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885B2CF: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x5885B2D1: push eax
        __asm _emit 0x50
        // 0x5885B2D2: push ebx
        __asm _emit 0x53
        // 0x5885B2D3: call 0x58831b50
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x68
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885B2D8: mov esi, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x5885B2DB: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5885B2DD: or ecx, esi
        __asm _emit 0x0B
        __asm _emit 0xCE
        // 0x5885B2DF: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885B2E2: mov dword ptr [ebp - 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xD4
        // 0x5885B2E5: je 0x5885b304
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5885B2E7: push esi
        __asm _emit 0x56
        // 0x5885B2E8: push ebx
        __asm _emit 0x53
        // 0x5885B2E9: push edx
        __asm _emit 0x52
        // 0x5885B2EA: push eax
        __asm _emit 0x50
        // 0x5885B2EB: call 0x5887d0e0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885B2F0: cmp eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x18
        // 0x5885B2F3: jne 0x5885b2fd
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885B2F5: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B2F7: jne 0x5885b2fd
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5885B2F9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B2FB: jmp 0x5885b300
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885B2FD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B2FF: inc eax
        __asm _emit 0x40
        // 0x5885B300: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B302: jne 0x5885b298
        __asm _emit 0x75
        __asm _emit 0x94
        // 0x5885B304: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5885B307: cdq
        __asm _emit 0x99
        // 0x5885B308: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885B30A: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5885B30C: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885B30F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885B311: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5885B313: adc ebx, dword ptr [ebp - 0x2c]
        __asm _emit 0x13
        __asm _emit 0x5D
        __asm _emit 0xD4
        // 0x5885B316: cmp dword ptr [ebp - 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xD4
        __asm _emit 0x00
        // 0x5885B31A: jl 0x5885b340
        __asm _emit 0x7C
        __asm _emit 0x24
        // 0x5885B31C: jg 0x5885b322
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x5885B31E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B320: jb 0x5885b340
        __asm _emit 0x72
        __asm _emit 0x1E
        // 0x5885B322: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B324: jl 0x5885b35c
        __asm _emit 0x7C
        __asm _emit 0x36
        // 0x5885B326: jg 0x5885b32c
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x5885B328: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885B32A: jb 0x5885b35c
        __asm _emit 0x72
        __asm _emit 0x30
        // 0x5885B32C: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885B32E: jl 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B334: jg 0x5885b35c
        __asm _emit 0x7F
        __asm _emit 0x26
        // 0x5885B336: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885B338: jb 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x5A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B33E: jmp 0x5885b35c
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x5885B340: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B342: jg 0x5885b35c
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x5885B344: jl 0x5885b34a
        __asm _emit 0x7C
        __asm _emit 0x04
        // 0x5885B346: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885B348: jae 0x5885b35c
        __asm _emit 0x73
        __asm _emit 0x12
        // 0x5885B34A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885B34C: jl 0x5885b35c
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5885B34E: jg 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x44
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B354: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885B356: jae 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B35C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885B35E: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x5885B360: push ebx
        __asm _emit 0x53
        // 0x5885B361: push esi
        __asm _emit 0x56
        // 0x5885B362: call 0x58831b50
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x67
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885B367: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885B369: mov dword ptr [ebp - 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x5885B36C: or ecx, ebx
        __asm _emit 0x0B
        __asm _emit 0xCB
        // 0x5885B36E: mov dword ptr [ebp - 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xD0
        // 0x5885B371: je 0x5885b394
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5885B373: push ebx
        __asm _emit 0x53
        // 0x5885B374: push esi
        __asm _emit 0x56
        // 0x5885B375: push edx
        __asm _emit 0x52
        // 0x5885B376: push eax
        __asm _emit 0x50
        // 0x5885B377: call 0x5887d0e0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885B37C: cmp eax, 0x3c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3C
        // 0x5885B37F: jne 0x5885b389
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885B381: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B383: jne 0x5885b389
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5885B385: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B387: jmp 0x5885b38c
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885B389: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B38B: inc eax
        __asm _emit 0x40
        // 0x5885B38C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B38E: jne 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B394: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5885B397: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x5885B39A: cdq
        __asm _emit 0x99
        // 0x5885B39B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885B39D: mov dword ptr [ebp - 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD4
        // 0x5885B3A0: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x5885B3A3: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5885B3A5: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5885B3A7: adc ebx, ecx
        __asm _emit 0x13
        __asm _emit 0xD9
        // 0x5885B3A9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885B3AB: jl 0x5885b3d3
        __asm _emit 0x7C
        __asm _emit 0x26
        // 0x5885B3AD: jg 0x5885b3b3
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x5885B3AF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B3B1: jb 0x5885b3d3
        __asm _emit 0x72
        __asm _emit 0x20
        // 0x5885B3B3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B3B5: jl 0x5885b3f1
        __asm _emit 0x7C
        __asm _emit 0x3A
        // 0x5885B3B7: jg 0x5885b3bf
        __asm _emit 0x7F
        __asm _emit 0x06
        // 0x5885B3B9: cmp dword ptr [ebp - 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xD4
        __asm _emit 0x00
        // 0x5885B3BD: jb 0x5885b3f1
        __asm _emit 0x72
        __asm _emit 0x32
        // 0x5885B3BF: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885B3C1: jl 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B3C7: jg 0x5885b3f1
        __asm _emit 0x7F
        __asm _emit 0x28
        // 0x5885B3C9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885B3CB: jb 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xC7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B3D1: jmp 0x5885b3f1
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5885B3D3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B3D5: jg 0x5885b3f1
        __asm _emit 0x7F
        __asm _emit 0x1A
        // 0x5885B3D7: jl 0x5885b3df
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x5885B3D9: cmp dword ptr [ebp - 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xD4
        __asm _emit 0x00
        // 0x5885B3DD: jae 0x5885b3f1
        __asm _emit 0x73
        __asm _emit 0x12
        // 0x5885B3DF: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885B3E1: jl 0x5885b3f1
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5885B3E3: jg 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xAF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B3E9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885B3EB: jae 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xA7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B3F1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885B3F3: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x5885B3F5: push ebx
        __asm _emit 0x53
        // 0x5885B3F6: push esi
        __asm _emit 0x56
        // 0x5885B3F7: call 0x58831b50
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x67
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885B3FC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885B3FE: mov dword ptr [ebp - 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x5885B401: or ecx, ebx
        __asm _emit 0x0B
        __asm _emit 0xCB
        // 0x5885B403: mov dword ptr [ebp - 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xD4
        // 0x5885B406: je 0x5885b429
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5885B408: push ebx
        __asm _emit 0x53
        // 0x5885B409: push esi
        __asm _emit 0x56
        // 0x5885B40A: push edx
        __asm _emit 0x52
        // 0x5885B40B: push eax
        __asm _emit 0x50
        // 0x5885B40C: call 0x5887d0e0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885B411: cmp eax, 0x3c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3C
        // 0x5885B414: jne 0x5885b41e
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885B416: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B418: jne 0x5885b41e
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5885B41A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B41C: jmp 0x5885b421
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885B41E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B420: inc eax
        __asm _emit 0x40
        // 0x5885B421: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B423: jne 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B429: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5885B42B: mov ebx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xC4
        // 0x5885B42E: cdq
        __asm _emit 0x99
        // 0x5885B42F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885B431: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5885B433: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x5885B435: mov dword ptr [ebp - 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xC8
        // 0x5885B438: adc esi, dword ptr [ebp - 0x2c]
        __asm _emit 0x13
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5885B43B: cmp dword ptr [ebp - 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xD4
        __asm _emit 0x00
        // 0x5885B43F: mov dword ptr [ebp - 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x5885B442: jl 0x5885b46a
        __asm _emit 0x7C
        __asm _emit 0x26
        // 0x5885B444: jg 0x5885b44a
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x5885B446: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885B448: jb 0x5885b46a
        __asm _emit 0x72
        __asm _emit 0x20
        // 0x5885B44A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885B44C: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5885B44E: jl 0x5885b488
        __asm _emit 0x7C
        __asm _emit 0x38
        // 0x5885B450: jg 0x5885b456
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x5885B452: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5885B454: jb 0x5885b488
        __asm _emit 0x72
        __asm _emit 0x32
        // 0x5885B456: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5885B458: jl 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B45E: jg 0x5885b488
        __asm _emit 0x7F
        __asm _emit 0x28
        // 0x5885B460: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885B462: jb 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x30
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B468: jmp 0x5885b488
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5885B46A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885B46C: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5885B46E: jg 0x5885b488
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x5885B470: jl 0x5885b476
        __asm _emit 0x7C
        __asm _emit 0x04
        // 0x5885B472: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5885B474: jae 0x5885b488
        __asm _emit 0x73
        __asm _emit 0x12
        // 0x5885B476: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5885B478: jl 0x5885b488
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5885B47A: jg 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B480: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885B482: jae 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B488: cmp byte ptr [ebp + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885B48C: je 0x5885b521
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B492: call 0x5886867d
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B497: lea eax, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885B49A: mov dword ptr [ebp - 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xD0
        // 0x5885B49D: push eax
        __asm _emit 0x50
        // 0x5885B49E: mov dword ptr [ebp - 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xD4
        // 0x5885B4A1: call 0x58871447
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x5F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885B4A6: pop ecx
        __asm _emit 0x59
        // 0x5885B4A7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B4A9: jne 0x5885b530
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B4AF: lea eax, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD4
        // 0x5885B4B2: push eax
        __asm _emit 0x50
        // 0x5885B4B3: call 0x58871473
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x5F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885B4B8: pop ecx
        __asm _emit 0x59
        // 0x5885B4B9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B4BB: jne 0x5885b530
        __asm _emit 0x75
        __asm _emit 0x73
        // 0x5885B4BD: mov eax, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xD4
        // 0x5885B4C0: cdq
        __asm _emit 0x99
        // 0x5885B4C1: add dword ptr [ebp - 0x38], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x5885B4C4: lea eax, [ebp - 0x38]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x5885B4C7: push eax
        __asm _emit 0x50
        // 0x5885B4C8: adc dword ptr [ebp - 0x34], edx
        __asm _emit 0x11
        __asm _emit 0x55
        __asm _emit 0xCC
        // 0x5885B4CB: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x5885B4CE: push eax
        __asm _emit 0x50
        // 0x5885B4CF: call 0x5885b05c
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B4D4: pop ecx
        __asm _emit 0x59
        // 0x5885B4D5: pop ecx
        __asm _emit 0x59
        // 0x5885B4D6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B4D8: jne 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B4DE: mov eax, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5885B4E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B4E3: jg 0x5885b4ed
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5885B4E5: jns 0x5885b50e
        __asm _emit 0x79
        __asm _emit 0x27
        // 0x5885B4E7: cmp dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x5885B4EB: jle 0x5885b50e
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x5885B4ED: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885B4F0: cdq
        __asm _emit 0x99
        // 0x5885B4F1: add dword ptr [ebp - 0x38], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x5885B4F4: lea eax, [ebp - 0x38]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x5885B4F7: push eax
        __asm _emit 0x50
        // 0x5885B4F8: adc dword ptr [ebp - 0x34], edx
        __asm _emit 0x11
        __asm _emit 0x55
        __asm _emit 0xCC
        // 0x5885B4FB: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x5885B4FE: push eax
        __asm _emit 0x50
        // 0x5885B4FF: call 0x5885b05c
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B504: pop ecx
        __asm _emit 0x59
        // 0x5885B505: pop ecx
        __asm _emit 0x59
        // 0x5885B506: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B508: jne 0x5885b298
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B50E: mov eax, dword ptr [ebp - 0x38]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x5885B511: lea esi, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x5885B514: mov edx, dword ptr [ebp - 0x34]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xCC
        // 0x5885B517: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5885B519: pop ecx
        __asm _emit 0x59
        // 0x5885B51A: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5885B51C: jmp 0x5885b2a8
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B521: lea eax, [ebp - 0x38]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x5885B524: push eax
        __asm _emit 0x50
        // 0x5885B525: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x5885B528: push eax
        __asm _emit 0x50
        // 0x5885B529: call 0x58862705
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B52E: jmp 0x5885b504
        __asm _emit 0xEB
        __asm _emit 0xD4
        // 0x5885B530: push ebx
        __asm _emit 0x53
        // 0x5885B531: push ebx
        __asm _emit 0x53
        // 0x5885B532: push ebx
        __asm _emit 0x53
        // 0x5885B533: push ebx
        __asm _emit 0x53
        // 0x5885B534: push ebx
        __asm _emit 0x53
        // 0x5885B535: call 0x58850fd9
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x5A
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
