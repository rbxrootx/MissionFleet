// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877ADC0 .. +0x2BC bytes.
// Source symbol alias: FUN_5877adc0.
extern "C" __declspec(naked) void FUN_5877adc0() {
    __asm {
        // 0x5877ADC0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877ADC2: push 0x5897f2f1
        __asm _emit 0x68
        __asm _emit 0xF1
        __asm _emit 0xF2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5877ADC7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ADCD: push eax
        __asm _emit 0x50
        // 0x5877ADCE: push ebx
        __asm _emit 0x53
        // 0x5877ADCF: push esi
        __asm _emit 0x56
        // 0x5877ADD0: push edi
        __asm _emit 0x57
        // 0x5877ADD1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877ADD6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877ADD8: push eax
        __asm _emit 0x50
        // 0x5877ADD9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877ADDD: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ADE3: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5877ADE5: mov eax, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ADEB: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877ADED: je 0x5877af32
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ADF3: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5877ADF6: jne 0x5877ae9c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ADFC: lea esi, [eax + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x0D
        // 0x5877ADFF: lea ebx, [eax + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x13
        // 0x5877AE02: cmp dword ptr [esp + 0x20], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5877AE07: jne 0x5877ae41
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x5877AE09: mov ecx, dword ptr [edi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE0F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877AE11: je 0x5877ae25
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5877AE13: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877AE15: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5877AE17: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877AE19: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877AE1B: mov dword ptr [edi + 0x1d0], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE25: mov ecx, dword ptr [edi + 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE2B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877AE2D: je 0x5877ae41
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5877AE2F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877AE31: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5877AE33: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877AE35: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877AE37: mov dword ptr [edi + 0x1d4], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE41: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5877AE43: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x1E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877AE48: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877AE4B: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877AE4F: mov dword ptr [esp + 0x18], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE57: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877AE59: je 0x5877afcc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE5F: mov edx, dword ptr [0x58a248d0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877AE65: cmp dword ptr [edx + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB2
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE6B: jle 0x5877afc0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE71: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5877AE73: jl 0x5877afc0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE79: cmp dword ptr [edx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE80: je 0x5877afc0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE86: mov ecx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE8C: mov esi, dword ptr [ecx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0xB1
        // 0x5877AE8F: push esi
        __asm _emit 0x56
        // 0x5877AE90: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877AE92: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xC4
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877AE97: jmp 0x5877afce
        __asm _emit 0xE9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AE9C: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5877AE9F: jb 0x5877aed9
        __asm _emit 0x72
        __asm _emit 0x38
        // 0x5877AEA1: cmp eax, 0x1d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1D
        // 0x5877AEA4: ja 0x5877aed9
        __asm _emit 0x77
        __asm _emit 0x33
        // 0x5877AEA6: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877AEAB: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5877AEAD: and esi, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5877AEB3: jns 0x5877aeba
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5877AEB5: dec esi
        __asm _emit 0x4E
        // 0x5877AEB6: or esi, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0xFE
        // 0x5877AEB9: inc esi
        __asm _emit 0x46
        // 0x5877AEBA: add esi, 0xf
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0F
        // 0x5877AEBD: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x1D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877AEC2: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5877AEC4: and ebx, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5877AECA: jns 0x5877aed1
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5877AECC: dec ebx
        __asm _emit 0x4B
        // 0x5877AECD: or ebx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFE
        // 0x5877AED0: inc ebx
        __asm _emit 0x43
        // 0x5877AED1: add ebx, 0x15
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x15
        // 0x5877AED4: jmp 0x5877ae02
        __asm _emit 0xE9
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877AED9: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1E
        // 0x5877AEDC: jb 0x5877aee3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877AEDE: cmp eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x38
        // 0x5877AEE1: jbe 0x5877aeed
        __asm _emit 0x76
        __asm _emit 0x0A
        // 0x5877AEE3: cmp eax, 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x66
        // 0x5877AEE6: jb 0x5877af1b
        __asm _emit 0x72
        __asm _emit 0x33
        // 0x5877AEE8: cmp eax, 0x67
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x67
        // 0x5877AEEB: ja 0x5877af1b
        __asm _emit 0x77
        __asm _emit 0x2E
        // 0x5877AEED: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x5877AEF0: jb 0x5877aef7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877AEF2: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x28
        // 0x5877AEF5: jbe 0x5877af01
        __asm _emit 0x76
        __asm _emit 0x0A
        // 0x5877AEF7: cmp eax, 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x66
        // 0x5877AEFA: jb 0x5877af0e
        __asm _emit 0x72
        __asm _emit 0x12
        // 0x5877AEFC: cmp eax, 0x67
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x67
        // 0x5877AEFF: ja 0x5877af0e
        __asm _emit 0x77
        __asm _emit 0x0D
        // 0x5877AF01: mov esi, 0x12
        __asm _emit 0xBE
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AF06: lea ebx, [esi + 6]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x06
        // 0x5877AF09: jmp 0x5877ae02
        __asm _emit 0xE9
        __asm _emit 0xF4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877AF0E: mov esi, 0x13
        __asm _emit 0xBE
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AF13: lea ebx, [esi + 6]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x06
        // 0x5877AF16: jmp 0x5877ae02
        __asm _emit 0xE9
        __asm _emit 0xE7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877AF1B: cmp eax, 0x39
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x39
        // 0x5877AF1E: jb 0x5877af32
        __asm _emit 0x72
        __asm _emit 0x12
        // 0x5877AF20: cmp eax, 0x4b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4B
        // 0x5877AF23: ja 0x5877af32
        __asm _emit 0x77
        __asm _emit 0x0D
        // 0x5877AF25: mov esi, 0x11
        __asm _emit 0xBE
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AF2A: lea ebx, [esi + 6]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x06
        // 0x5877AF2D: jmp 0x5877ae02
        __asm _emit 0xE9
        __asm _emit 0xD0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877AF32: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5877AF34: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x1D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877AF39: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5877AF3B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877AF3E: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877AF42: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AF4A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5877AF4C: je 0x5877af99
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5877AF4E: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x1C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877AF53: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5877AF58: jns 0x5877af5f
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5877AF5A: dec eax
        __asm _emit 0x48
        // 0x5877AF5B: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x5877AF5E: inc eax
        __asm _emit 0x40
        // 0x5877AF5F: mov ecx, dword ptr [0x58a246fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877AF65: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AF6B: jle 0x5877af8d
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5877AF6D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877AF6F: jl 0x5877af8d
        __asm _emit 0x7C
        __asm _emit 0x1C
        // 0x5877AF71: cmp dword ptr [ecx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AF78: je 0x5877af8d
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5877AF7A: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AF80: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x5877AF83: push eax
        __asm _emit 0x50
        // 0x5877AF84: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877AF86: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xC3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877AF8B: jmp 0x5877af9b
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5877AF8D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877AF8F: push eax
        __asm _emit 0x50
        // 0x5877AF90: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877AF92: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877AF97: jmp 0x5877af9b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877AF99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877AF9B: mov dword ptr [edi + 0x1d0], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AFA1: mov dword ptr [edi + 0x1d4], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AFAB: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877AFAF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AFB6: pop ecx
        __asm _emit 0x59
        // 0x5877AFB7: pop edi
        __asm _emit 0x5F
        // 0x5877AFB8: pop esi
        __asm _emit 0x5E
        // 0x5877AFB9: pop ebx
        __asm _emit 0x5B
        // 0x5877AFBA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877AFBD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877AFC0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5877AFC2: push esi
        __asm _emit 0x56
        // 0x5877AFC3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877AFC5: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xC3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877AFCA: jmp 0x5877afce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877AFCC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877AFCE: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0xFF
        // 0x5877AFD1: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5877AFD3: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877AFD7: mov dword ptr [edi + 0x1d0], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AFDD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x1C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877AFE2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877AFE5: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877AFE9: mov dword ptr [esp + 0x18], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AFF1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877AFF3: je 0x5877b02f
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5877AFF5: mov ecx, dword ptr [0x58a248d0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877AFFB: cmp dword ptr [ecx + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B001: jle 0x5877b023
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5877B003: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877B005: jl 0x5877b023
        __asm _emit 0x7C
        __asm _emit 0x1C
        // 0x5877B007: cmp dword ptr [ecx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B00E: je 0x5877b023
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5877B010: mov edx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B016: mov ecx, dword ptr [edx + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x9A
        // 0x5877B019: push ecx
        __asm _emit 0x51
        // 0x5877B01A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877B01C: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xC3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877B021: jmp 0x5877b031
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5877B023: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877B025: push ecx
        __asm _emit 0x51
        // 0x5877B026: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877B028: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xC3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877B02D: jmp 0x5877b031
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877B02F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877B031: mov dword ptr [edi + 0x1d4], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B037: mov eax, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B03D: and eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xFE
        // 0x5877B040: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877B044: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5877B047: jne 0x5877b067
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5877B049: mov ecx, dword ptr [edi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B04F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877B051: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5877B054: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877B056: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877B058: mov ecx, dword ptr [edi + 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B05E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877B060: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5877B063: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877B065: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877B067: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877B06B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B072: pop ecx
        __asm _emit 0x59
        // 0x5877B073: pop edi
        __asm _emit 0x5F
        // 0x5877B074: pop esi
        __asm _emit 0x5E
        // 0x5877B075: pop ebx
        __asm _emit 0x5B
        // 0x5877B076: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877B079: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
