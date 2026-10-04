// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EAF30 .. +0x1FE bytes.
// Source symbol alias: FUN_588eaf30.
extern "C" __declspec(naked) void FUN_588eaf30() {
    __asm {
        // 0x588EAF30: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588EAF33: push ebx
        __asm _emit 0x53
        // 0x588EAF34: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588EAF36: push esi
        __asm _emit 0x56
        // 0x588EAF37: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EAF3B: inc dword ptr [ebx + esi*4 + 8]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0xB3
        __asm _emit 0x08
        // 0x588EAF3F: cmp dword ptr [ebx + esi*4 + 0x808], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAF47: mov dword ptr [esp + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588EAF4B: je 0x588eaf79
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x588EAF4D: cmp dword ptr [ebx + esi*4 + 0x1008], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAF55: je 0x588eaf79
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588EAF57: mov eax, dword ptr [ebx + esi*4 + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAF5E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EAF62: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x588EAF64: mov edx, dword ptr [ebx + esi*4 + 0x1008]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAF6B: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EAF6F: pop esi
        __asm _emit 0x5E
        // 0x588EAF70: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588EAF72: pop ebx
        __asm _emit 0x5B
        // 0x588EAF73: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588EAF76: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588EAF79: mov ecx, dword ptr [ebx + 0x1818]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAF7F: sub ecx, dword ptr [ebx + 0x1814]
        __asm _emit 0x2B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAF85: push ebp
        __asm _emit 0x55
        // 0x588EAF86: push edi
        __asm _emit 0x57
        // 0x588EAF87: lea edi, [ebx + 0x1808]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAF8D: test ecx, 0xfffffffc
        __asm _emit 0xF7
        __asm _emit 0xC1
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EAF93: je 0x588eb00e
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x588EAF95: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x588EAF98: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x588EAF9B: jbe 0x588eafa2
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EAF9D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAFA2: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588EAFA4: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x588EAFA6: mov ebx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x588EAFA9: cmp dword ptr [edi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x588EAFAC: jbe 0x588eafb3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EAFAE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAFB3: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EAFB5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EAFB7: je 0x588eafbd
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588EAFB9: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588EAFBB: je 0x588eafc2
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EAFBD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAFC2: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588EAFC4: je 0x588eb006
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588EAFC6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EAFC8: jne 0x588eaffe
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x588EAFCA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAFCF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EAFD1: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588EAFD4: jb 0x588eafdb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EAFD6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAFDB: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EAFDF: cmp dword ptr [ebp], edx
        __asm _emit 0x39
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x588EAFE2: je 0x588eb01c
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588EAFE4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EAFE6: jne 0x588eb002
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588EAFE8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAFED: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EAFEF: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588EAFF2: jb 0x588eaff9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EAFF4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAFF9: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588EAFFC: jmp 0x588eafa6
        __asm _emit 0xEB
        __asm _emit 0xA8
        // 0x588EAFFE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EB000: jmp 0x588eafd1
        __asm _emit 0xEB
        __asm _emit 0xCF
        // 0x588EB002: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EB004: jmp 0x588eafef
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x588EB006: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EB00A: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EB00E: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EB012: push eax
        __asm _emit 0x50
        // 0x588EB013: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588EB015: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xA4
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588EB01A: jmp 0x588eb024
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588EB01C: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EB020: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EB024: lea ecx, [esi + esi*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x76
        // 0x588EB027: mov edx, dword ptr [ebx + ecx*8 + 0x1830]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xCB
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB02E: sub edx, dword ptr [ebx + ecx*8 + 0x182c]
        __asm _emit 0x2B
        __asm _emit 0x94
        __asm _emit 0xCB
        __asm _emit 0x2C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB035: lea esi, [ebx + ecx*8 + 0x1820]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0xCB
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB03C: test edx, 0xfffffffc
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EB042: je 0x588eb0b9
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x588EB044: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x588EB047: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x588EB04A: jbe 0x588eb051
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EB04C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB051: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x588EB053: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x588EB055: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x588EB058: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x588EB05B: jbe 0x588eb062
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EB05D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB062: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EB064: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588EB066: je 0x588eb06c
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588EB068: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588EB06A: je 0x588eb071
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EB06C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB071: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588EB073: je 0x588eb0b5
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588EB075: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588EB077: jne 0x588eb0ad
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x588EB079: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x1B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB07E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB080: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588EB083: jb 0x588eb08a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EB085: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB08A: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EB08E: cmp dword ptr [ebp], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588EB091: je 0x588eb108
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x588EB093: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588EB095: jne 0x588eb0b1
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588EB097: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x1B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB09C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB09E: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588EB0A1: jb 0x588eb0a8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EB0A3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x1B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB0A8: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588EB0AB: jmp 0x588eb055
        __asm _emit 0xEB
        __asm _emit 0xA8
        // 0x588EB0AD: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EB0AF: jmp 0x588eb080
        __asm _emit 0xEB
        __asm _emit 0xCF
        // 0x588EB0B1: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EB0B3: jmp 0x588eb09e
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x588EB0B5: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EB0B9: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588EB0BC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EB0BE: jne 0x588eb0c4
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588EB0C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB0C2: jmp 0x588eb0cc
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588EB0C4: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x588EB0C7: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588EB0C9: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588EB0CC: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588EB0CF: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x588EB0D1: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588EB0D3: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588EB0D6: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588EB0D8: jae 0x588eb0e8
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x588EB0DA: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EB0DE: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x588EB0E0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588EB0E3: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588EB0E6: jmp 0x588eb10c
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x588EB0E8: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588EB0EA: jbe 0x588eb0f1
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EB0EC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x1B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB0F1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EB0F3: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EB0F7: push ecx
        __asm _emit 0x51
        // 0x588EB0F8: push edi
        __asm _emit 0x57
        // 0x588EB0F9: push eax
        __asm _emit 0x50
        // 0x588EB0FA: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EB0FE: push edx
        __asm _emit 0x52
        // 0x588EB0FF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EB101: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB106: jmp 0x588eb10c
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588EB108: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EB10C: mov eax, dword ptr [ebx + 0x4830]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB112: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588EB116: pop edi
        __asm _emit 0x5F
        // 0x588EB117: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x588EB119: mov edx, dword ptr [ebx + 0x4834]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x34
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB11F: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588EB123: pop ebp
        __asm _emit 0x5D
        // 0x588EB124: pop esi
        __asm _emit 0x5E
        // 0x588EB125: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588EB127: pop ebx
        __asm _emit 0x5B
        // 0x588EB128: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588EB12B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
