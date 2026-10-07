// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 705 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d2ee0.

// Ghidra body range 0x588D2EE0..0x588D31A1; 705 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2ee0_segment_00() {
    __asm {
        // 0x588D2EE0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x588D2EE3: push esi
        __asm _emit 0x56
        // 0x588D2EE4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D2EE6: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588D2EEA: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588D2EEC: je 0x588d319a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2EF2: cmp dword ptr [esi + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2EF9: je 0x588d319a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2EFF: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2F05: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2F0B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588D2F0D: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588D2F10: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D2F12: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588D2F15: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588D2F17: push ebx
        __asm _emit 0x53
        // 0x588D2F18: mov dword ptr [esp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D2F1C: push ebp
        __asm _emit 0x55
        // 0x588D2F1D: push edi
        __asm _emit 0x57
        // 0x588D2F1E: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D2F22: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x9D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2F27: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x9D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2F2C: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2F32: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588D2F34: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588D2F37: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D2F39: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588D2F3C: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588D2F3E: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D2F42: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D2F46: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x9D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2F4B: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x9D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2F50: cdq
        __asm _emit 0x99
        // 0x588D2F51: idiv dword ptr [0x58a244bc]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2F57: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D2F5B: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588D2F5E: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x588D2F61: add ecx, dword ptr [ebx]
        __asm _emit 0x03
        __asm _emit 0x0B
        // 0x588D2F63: add ebp, dword ptr [ebx + 4]
        __asm _emit 0x03
        __asm _emit 0x6B
        __asm _emit 0x04
        // 0x588D2F66: add ecx, dword ptr [esi + 4]
        __asm _emit 0x03
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588D2F69: add ebp, dword ptr [esi + 8]
        __asm _emit 0x03
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x588D2F6C: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D2F70: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D2F74: cdq
        __asm _emit 0x99
        // 0x588D2F75: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588D2F77: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588D2F79: movzx eax, word ptr [esi + 0x1d8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2F80: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x588D2F82: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588D2F86: jne 0x588d303e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2F8C: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2F92: mov edx, dword ptr [edx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D2F98: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D2F9C: mov eax, 0x55555556
        __asm _emit 0xB8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        // 0x588D2FA1: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D2FA3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D2FA5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D2FA8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D2FAA: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588D2FAD: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588D2FAF: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D2FB3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588D2FB5: jne 0x588d300f
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x588D2FB7: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2FBD: inc eax
        __asm _emit 0x40
        // 0x588D2FBE: cdq
        __asm _emit 0x99
        // 0x588D2FBF: mov ebp, 0xa
        __asm _emit 0xBD
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2FC4: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x588D2FC6: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2FCB: mov dword ptr [esi + 0x220], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2FD1: cmp dword ptr [esi + 0x264], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2FD7: je 0x588d300b
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588D2FD9: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D2FDB: jne 0x588d300b
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x588D2FDD: mov eax, dword ptr [0x58a24670]
        __asm _emit 0xA1
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2FE2: cmp dword ptr [eax + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2FE8: jle 0x588d2ffd
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588D2FEA: cmp dword ptr [eax + 0x190], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2FF0: je 0x588d2ffd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D2FF2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2FF8: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x588D2FFB: jmp 0x588d2fff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D2FFD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D2FFF: mov dword ptr [esi + 0x1f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3005: mov dword ptr [esi + 0x264], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D300B: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D300F: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x588D3012: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D3016: sub ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x0C
        // 0x588D3019: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D301E: push eax
        __asm _emit 0x50
        // 0x588D301F: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D3023: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3029: push ecx
        __asm _emit 0x51
        // 0x588D302A: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D302E: push edx
        __asm _emit 0x52
        // 0x588D302F: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D3033: sub ebp, 0xe
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x0E
        // 0x588D3036: push eax
        __asm _emit 0x50
        // 0x588D3037: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D303B: push ecx
        __asm _emit 0x51
        // 0x588D303C: jmp 0x588d306a
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x588D303E: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588D3042: jne 0x588d304b
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588D3044: mov dword ptr [esi + 0x28], 0x96
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D304B: mov edx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x588D304E: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3054: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D3058: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D305D: push edx
        __asm _emit 0x52
        // 0x588D305E: push eax
        __asm _emit 0x50
        // 0x588D305F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D3063: push ecx
        __asm _emit 0x51
        // 0x588D3064: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D3068: push edx
        __asm _emit 0x52
        // 0x588D3069: push eax
        __asm _emit 0x50
        // 0x588D306A: mov ecx, dword ptr [esi + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3070: call 0x5873a5d0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x75
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588D3075: mov eax, 0x96
        __asm _emit 0xB8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D307A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588D307C: je 0x588d3081
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588D307E: cdq
        __asm _emit 0x99
        // 0x588D307F: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588D3081: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3086: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588D3088: jle 0x588d3180
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D308E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D3090: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588D3092: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3096: lea ecx, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0xFF
        // 0x588D3099: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588D309C: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D30A0: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D30A6: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588D30A8: imul ecx, ecx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x75
        // 0x588D30AB: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x588D30AE: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D30B3: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D30B5: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D30BB: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D30BE: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x588D30C0: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588D30C3: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x588D30C5: cdq
        __asm _emit 0x99
        // 0x588D30C6: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x588D30C8: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D30CC: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x588D30CF: cdq
        __asm _emit 0x99
        // 0x588D30D0: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588D30D2: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588D30D5: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588D30D7: add edx, dword ptr [ebx]
        __asm _emit 0x03
        __asm _emit 0x13
        // 0x588D30D9: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D30DE: add edx, dword ptr [esi + 4]
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588D30E1: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D30E5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D30E7: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D30ED: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D30F0: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D30F2: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D30F5: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D30F7: cdq
        __asm _emit 0x99
        // 0x588D30F8: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D30FA: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3100: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x588D3103: cdq
        __asm _emit 0x99
        // 0x588D3104: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588D3106: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D310A: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D310F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D3111: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x588D3114: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D3116: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D3119: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D311B: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x588D311E: cdq
        __asm _emit 0x99
        // 0x588D311F: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588D3121: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D3125: mov edx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x588D3128: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588D312A: add eax, dword ptr [esi + 0x10]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588D312D: add eax, dword ptr [ebx + 4]
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x588D3130: add eax, dword ptr [esi + 8]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588D3133: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D3137: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D313B: lea eax, [eax + edx - 0x100]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D3142: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D3144: jge 0x588d3148
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x588D3146: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D3148: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D314E: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D3152: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3157: push eax
        __asm _emit 0x50
        // 0x588D3158: push ecx
        __asm _emit 0x51
        // 0x588D3159: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D315D: push edx
        __asm _emit 0x52
        // 0x588D315E: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D3162: push eax
        __asm _emit 0x50
        // 0x588D3163: push ecx
        __asm _emit 0x51
        // 0x588D3164: mov ecx, dword ptr [esi + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D316A: call 0x5873a5d0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x74
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588D316F: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3173: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D3177: inc ebp
        __asm _emit 0x45
        // 0x588D3178: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x588D317A: jl 0x588d30a0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D3180: mov esi, dword ptr [esi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x4C
        // 0x588D3183: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D3187: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588D3189: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D318D: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x588D3190: push ebx
        __asm _emit 0x53
        // 0x588D3191: push ecx
        __asm _emit 0x51
        // 0x588D3192: push edx
        __asm _emit 0x52
        // 0x588D3193: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D3195: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588D3197: pop edi
        __asm _emit 0x5F
        // 0x588D3198: pop ebp
        __asm _emit 0x5D
        // 0x588D3199: pop ebx
        __asm _emit 0x5B
        // 0x588D319A: pop esi
        __asm _emit 0x5E
        // 0x588D319B: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588D319E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
