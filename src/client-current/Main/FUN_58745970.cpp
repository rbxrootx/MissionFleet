// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1333 bytes in 1 exact ranges.
// Source symbol alias: FUN_58745970.

// Ghidra body range 0x58745970..0x58745EA5; 1333 mapped bytes.
extern "C" __declspec(naked) void FUN_58745970_segment_00() {
    __asm {
        // 0x58745970: push ebp
        __asm _emit 0x55
        // 0x58745971: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58745973: and esp, 0xffffffc0
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xC0
        // 0x58745976: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x58745979: push ebx
        __asm _emit 0x53
        // 0x5874597A: push ebp
        __asm _emit 0x55
        // 0x5874597B: push esi
        __asm _emit 0x56
        // 0x5874597C: push edi
        __asm _emit 0x57
        // 0x5874597D: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5874597F: mov edi, dword ptr [ebp + 0xec]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745985: fld qword ptr [0x5898cf40]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874598B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874598D: fstp qword ptr [esp + 0x28]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58745991: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58745995: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745999: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874599D: cmp edi, dword ptr [ebp + 0xf0]
        __asm _emit 0x3B
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587459A3: jbe 0x587459aa
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587459A5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587459AA: mov esi, dword ptr [ebp + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587459B0: mov ebx, dword ptr [ebp + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587459B6: cmp dword ptr [ebp + 0xec], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587459BC: jbe 0x587459c3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587459BE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587459C3: mov eax, dword ptr [ebp + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587459C9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587459CB: je 0x587459d1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587459CD: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587459CF: je 0x587459d6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587459D1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587459D6: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587459D8: je 0x58745b22
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587459DE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587459E0: jne 0x58745ad4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587459E6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587459EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587459ED: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587459F0: jb 0x587459f7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587459F2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587459F7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587459F9: jne 0x58745adb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587459FF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A04: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745A06: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58745A09: jb 0x58745a10
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745A0B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A10: mov ecx, dword ptr [edi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58745A13: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58745A18: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58745A1D: jne 0x58745e9d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745A23: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58745A25: jne 0x58745ae2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745A2B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745A32: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58745A35: jb 0x58745a3c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745A37: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A3C: cmp dword ptr [edi], 0
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x58745A3F: jg 0x58745e9d
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745A45: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58745A47: jne 0x58745ae9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745A4D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A52: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745A54: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58745A57: jb 0x58745a5e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745A59: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A5E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58745A60: jne 0x58745af0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745A66: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A6B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745A6D: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58745A70: jb 0x58745a77
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745A72: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A77: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58745A79: jne 0x58745af7
        __asm _emit 0x75
        __asm _emit 0x7C
        // 0x58745A7B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A80: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745A82: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58745A85: jb 0x58745a8c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745A87: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A8C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58745A8E: jne 0x58745afb
        __asm _emit 0x75
        __asm _emit 0x6B
        // 0x58745A90: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745A95: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745A97: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58745A9A: jb 0x58745aa1
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745A9C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745AA1: mov eax, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x58745AA4: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58745AA7: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58745AAA: push eax
        __asm _emit 0x50
        // 0x58745AAB: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58745AAE: push ecx
        __asm _emit 0x51
        // 0x58745AAF: push edx
        __asm _emit 0x52
        // 0x58745AB0: push eax
        __asm _emit 0x50
        // 0x58745AB1: call 0x587473e0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745AB6: fld qword ptr [esp + 0x38]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58745ABA: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x58745ABC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58745ABF: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58745AC1: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x58745AC4: jne 0x58745aff
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x58745AC6: fstp qword ptr [esp + 0x28]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58745ACA: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745ACE: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745AD2: jmp 0x58745b01
        __asm _emit 0xEB
        __asm _emit 0x2D
        // 0x58745AD4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745AD6: jmp 0x587459ed
        __asm _emit 0xE9
        __asm _emit 0x12
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745ADB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745ADD: jmp 0x58745a06
        __asm _emit 0xE9
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745AE2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745AE4: jmp 0x58745a32
        __asm _emit 0xE9
        __asm _emit 0x49
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745AE9: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745AEB: jmp 0x58745a54
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745AF0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745AF2: jmp 0x58745a6d
        __asm _emit 0xE9
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745AF7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745AF9: jmp 0x58745a82
        __asm _emit 0xEB
        __asm _emit 0x87
        // 0x58745AFB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745AFD: jmp 0x58745a97
        __asm _emit 0xEB
        __asm _emit 0x98
        // 0x58745AFF: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x58745B01: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58745B03: jne 0x58745b1e
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58745B05: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745B0A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745B0C: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58745B0F: jb 0x58745b16
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745B11: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745B16: add edi, 0x28
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x28
        // 0x58745B19: jmp 0x587459b0
        __asm _emit 0xE9
        __asm _emit 0x92
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745B1E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745B20: jmp 0x58745b0c
        __asm _emit 0xEB
        __asm _emit 0xEA
        // 0x58745B22: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745B26: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58745B28: jne 0x58745ca7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745B2E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745B33: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745B37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745B39: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745B3D: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58745B40: jb 0x58745b4b
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x58745B42: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745B47: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745B4B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58745B4D: jne 0x58745cae
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745B53: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745B58: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745B5A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745B5E: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58745B61: jb 0x58745b68
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745B63: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745B68: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745B6C: lea ebp, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x18
        // 0x58745B6F: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58745B72: push ebp
        __asm _emit 0x55
        // 0x58745B73: push esi
        __asm _emit 0x56
        // 0x58745B74: call 0x58747320
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745B79: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58745B7D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58745B80: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58745B82: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58745B84: jne 0x58745cb5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745B8A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745B8F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745B91: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745B95: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58745B98: jb 0x58745b9f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745B9A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745B9F: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58745BA1: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58745BA5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58745BA7: jne 0x58745cbc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745BAD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745BB2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745BB4: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745BB8: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58745BBB: jb 0x58745bc2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745BBD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745BC2: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745BC6: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x58745BC8: mov ebx, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x10
        // 0x58745BCB: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745BCF: fstp qword ptr [esp + 0x28]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58745BD3: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58745BD7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58745BD9: jne 0x58745cc3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745BDF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745BE4: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745BE8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745BEA: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745BEE: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58745BF1: jb 0x58745bfc
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x58745BF3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745BF8: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745BFC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58745BFE: jne 0x58745cca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745C04: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745C09: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745C0B: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745C0F: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58745C12: jb 0x58745c19
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745C14: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745C19: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745C1D: mov ecx, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x24
        // 0x58745C20: push ebp
        __asm _emit 0x55
        // 0x58745C21: push ebx
        __asm _emit 0x53
        // 0x58745C22: push esi
        __asm _emit 0x56
        // 0x58745C23: call 0x588d6a30
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x0E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58745C28: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58745C2A: jne 0x58745cd3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745C30: fld qword ptr [0x5898cf38]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58745C36: fld qword ptr [esp + 0x28]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58745C3A: fcom st(1)
        __asm _emit 0xD8
        __asm _emit 0xD1
        // 0x58745C3C: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58745C3E: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x58745C40: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x58745C43: je 0x58745cd1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745C49: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x58745C4B: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58745C4F: fst qword ptr [esp + 0x30]
        __asm _emit 0xDD
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58745C53: push eax
        __asm _emit 0x50
        // 0x58745C54: fstp qword ptr [esp + 0x3c]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58745C58: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58745C5C: push ecx
        __asm _emit 0x51
        // 0x58745C5D: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58745C60: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x58745C63: push edi
        __asm _emit 0x57
        // 0x58745C64: fild dword ptr [esp + 0x2c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58745C68: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58745C6B: fstp qword ptr [esp + 8]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58745C6F: fild dword ptr [esp + 0x38]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58745C73: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x58745C76: call 0x58747270
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745C7B: fld qword ptr [esp + 0x54]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58745C7F: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x58745C82: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745C87: fld qword ptr [esp + 0x38]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58745C8B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58745C8D: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58745C91: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745C96: fld qword ptr [esp + 0x28]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58745C9A: fadd qword ptr [0x5898cf30]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58745CA0: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58745CA2: jmp 0x58745bcb
        __asm _emit 0xE9
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745CA7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58745CA9: jmp 0x58745b39
        __asm _emit 0xE9
        __asm _emit 0x8B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745CAE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58745CB0: jmp 0x58745b5a
        __asm _emit 0xE9
        __asm _emit 0xA5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745CB5: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58745CB7: jmp 0x58745b91
        __asm _emit 0xE9
        __asm _emit 0xD5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745CBC: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58745CBE: jmp 0x58745bb4
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745CC3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58745CC5: jmp 0x58745bea
        __asm _emit 0xE9
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745CCA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58745CCC: jmp 0x58745c0b
        __asm _emit 0xE9
        __asm _emit 0x3A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745CD1: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x58745CD3: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745CD7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58745CD9: jne 0x58745d44
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x58745CDB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x6F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745CE0: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745CE4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745CE6: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745CEA: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58745CED: jb 0x58745cf8
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x58745CEF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x6F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745CF4: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745CF8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58745CFA: jne 0x58745d48
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x58745CFC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x6F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745D01: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745D03: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745D07: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58745D0A: jb 0x58745d11
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745D0C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x6F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745D11: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745D15: mov ecx, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x24
        // 0x58745D18: push ebp
        __asm _emit 0x55
        // 0x58745D19: push ebx
        __asm _emit 0x53
        // 0x58745D1A: push esi
        __asm _emit 0x56
        // 0x58745D1B: call 0x588d6a30
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x0D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58745D20: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58745D22: jne 0x58745d4c
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x58745D24: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58745D28: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58745D2A: mov dword ptr [eax + 0xd4], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745D30: mov dword ptr [eax + 0xd8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745D36: mov dword ptr [eax + 0xd0], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745D3C: pop edi
        __asm _emit 0x5F
        // 0x58745D3D: pop esi
        __asm _emit 0x5E
        // 0x58745D3E: pop ebp
        __asm _emit 0x5D
        // 0x58745D3F: pop ebx
        __asm _emit 0x5B
        // 0x58745D40: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58745D42: pop ebp
        __asm _emit 0x5D
        // 0x58745D43: ret
        __asm _emit 0xC3
        // 0x58745D44: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58745D46: jmp 0x58745ce6
        __asm _emit 0xEB
        __asm _emit 0x9E
        // 0x58745D48: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58745D4A: jmp 0x58745d03
        __asm _emit 0xEB
        __asm _emit 0xB7
        // 0x58745D4C: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745D50: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58745D52: jne 0x58745e67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745D58: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x6F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745D5D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745D5F: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745D63: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58745D66: jb 0x58745d6d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745D68: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x6F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745D6D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58745D6F: jne 0x58745e6e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745D75: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745D7A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745D7C: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745D80: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58745D83: jb 0x58745d8a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745D85: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745D8A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58745D8C: jne 0x58745e75
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745D92: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745D97: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745D99: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745D9D: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58745DA0: jb 0x58745da7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745DA2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745DA7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58745DA9: jne 0x58745e7c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745DAF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745DB4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745DB6: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745DBA: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58745DBD: jb 0x58745dc4
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745DBF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745DC4: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745DC8: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x58745DCB: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58745DCE: push ecx
        __asm _emit 0x51
        // 0x58745DCF: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58745DD2: push edx
        __asm _emit 0x52
        // 0x58745DD3: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58745DD6: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x58745DD9: push ecx
        __asm _emit 0x51
        // 0x58745DDA: push edx
        __asm _emit 0x52
        // 0x58745DDB: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58745DDF: call 0x587473e0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745DE4: fcomp qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x1D
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58745DEA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58745DED: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58745DEF: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x58745DF2: jnp 0x58745e9d
        __asm _emit 0x0F
        __asm _emit 0x8B
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745DF8: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58745DFC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745DFE: cmp dword ptr [ebp + 0xd0], eax
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745E04: jne 0x58745e8b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745E0A: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58745E0C: jne 0x58745e83
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x58745E0E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745E13: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745E15: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745E19: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58745E1C: jb 0x58745e23
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745E1E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745E23: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58745E27: sub esi, dword ptr [edx]
        __asm _emit 0x2B
        __asm _emit 0x32
        // 0x58745E29: mov dword ptr [ebp + 0xd4], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745E2F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58745E31: jne 0x58745e87
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x58745E33: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745E38: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745E3A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745E3E: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58745E41: jb 0x58745e48
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58745E43: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x6E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745E48: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745E4C: sub ebx, dword ptr [edx + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x5A
        __asm _emit 0x10
        // 0x58745E4F: mov dword ptr [ebp + 0xd0], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745E59: mov dword ptr [ebp + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745E5F: pop edi
        __asm _emit 0x5F
        // 0x58745E60: pop esi
        __asm _emit 0x5E
        // 0x58745E61: pop ebp
        __asm _emit 0x5D
        // 0x58745E62: pop ebx
        __asm _emit 0x5B
        // 0x58745E63: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58745E65: pop ebp
        __asm _emit 0x5D
        // 0x58745E66: ret
        __asm _emit 0xC3
        // 0x58745E67: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58745E69: jmp 0x58745d5f
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745E6E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58745E70: jmp 0x58745d7c
        __asm _emit 0xE9
        __asm _emit 0x07
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745E75: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58745E77: jmp 0x58745d99
        __asm _emit 0xE9
        __asm _emit 0x1D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745E7C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58745E7E: jmp 0x58745db6
        __asm _emit 0xE9
        __asm _emit 0x33
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745E83: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58745E85: jmp 0x58745e15
        __asm _emit 0xEB
        __asm _emit 0x8E
        // 0x58745E87: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58745E89: jmp 0x58745e3a
        __asm _emit 0xEB
        __asm _emit 0xAF
        // 0x58745E8B: mov dword ptr [ebp + 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745E91: mov dword ptr [ebp + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745E97: mov dword ptr [ebp + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745E9D: pop edi
        __asm _emit 0x5F
        // 0x58745E9E: pop esi
        __asm _emit 0x5E
        // 0x58745E9F: pop ebp
        __asm _emit 0x5D
        // 0x58745EA0: pop ebx
        __asm _emit 0x5B
        // 0x58745EA1: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58745EA3: pop ebp
        __asm _emit 0x5D
        // 0x58745EA4: ret
        __asm _emit 0xC3
    }
}
