// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 355 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b3090.

// Ghidra body range 0x587B3090..0x587B31F3; 355 mapped bytes.
extern "C" __declspec(naked) void FUN_587b3090_segment_00() {
    __asm {
        // 0x587B3090: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587B3092: push 0x58980e83
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0x0E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B3097: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B309D: push eax
        __asm _emit 0x50
        // 0x587B309E: push ecx
        __asm _emit 0x51
        // 0x587B309F: push ebx
        __asm _emit 0x53
        // 0x587B30A0: push ebp
        __asm _emit 0x55
        // 0x587B30A1: push esi
        __asm _emit 0x56
        // 0x587B30A2: push edi
        __asm _emit 0x57
        // 0x587B30A3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B30A8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B30AA: push eax
        __asm _emit 0x50
        // 0x587B30AB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B30AF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B30B5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B30B7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B30BB: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B30BF: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B30C3: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B30C7: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B30CB: push eax
        __asm _emit 0x50
        // 0x587B30CC: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B30D0: push ebp
        __asm _emit 0x55
        // 0x587B30D1: push ecx
        __asm _emit 0x51
        // 0x587B30D2: push edx
        __asm _emit 0x52
        // 0x587B30D3: push eax
        __asm _emit 0x50
        // 0x587B30D4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B30D6: call 0x587b1640
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B30DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587B30DD: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B30E2: lea ecx, [esi + 0x18c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B30E8: push ebx
        __asm _emit 0x53
        // 0x587B30E9: push ecx
        __asm _emit 0x51
        // 0x587B30EA: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B30EE: mov dword ptr [esi], 0x58999ed4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD4
        __asm _emit 0x9E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B30F4: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x9B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B30F9: push 0x4800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B30FE: lea eax, [esi + 0x3e4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3104: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B3106: push ebx
        __asm _emit 0x53
        // 0x587B3107: push eax
        __asm _emit 0x50
        // 0x587B3108: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x587B310B: mov word ptr [esi + 0x24c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3112: mov dword ptr [esi + 0x250], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3118: mov dword ptr [esi + 0x254], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B311E: mov dword ptr [esi + 0x3d4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3124: mov dword ptr [esi + 0x320], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B312A: mov dword ptr [esi + 0x26c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3130: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x9B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B3135: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B313A: lea ecx, [esi + 0x270]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3140: push ebx
        __asm _emit 0x53
        // 0x587B3141: push ecx
        __asm _emit 0x51
        // 0x587B3142: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x9B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B3147: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B314C: lea edx, [esi + 0x324]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3152: push ebx
        __asm _emit 0x53
        // 0x587B3153: push edx
        __asm _emit 0x52
        // 0x587B3154: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B3159: mov eax, 0xaaaaaaaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B315E: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587B3160: mov dword ptr [esi + 0x31c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3166: mov dword ptr [esi + 0x3d0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B316C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B3171: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B3173: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x587B3176: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B317A: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587B317F: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587B3181: je 0x587b31a6
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587B3183: movzx eax, word ptr [esi + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x587B3187: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B318B: push eax
        __asm _emit 0x50
        // 0x587B318C: push ebx
        __asm _emit 0x53
        // 0x587B318D: push ebx
        __asm _emit 0x53
        // 0x587B318E: push ebp
        __asm _emit 0x55
        // 0x587B318F: push ecx
        __asm _emit 0x51
        // 0x587B3190: push esi
        __asm _emit 0x56
        // 0x587B3191: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B3193: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587B3198: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B319E: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x587B31A1: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x587B31A4: jmp 0x587b31a8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B31A6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B31A8: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B31AD: mov dword ptr [esi + 0x3d8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B31B3: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x587B31B7: mov dword ptr [esi + 0x25c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B31BD: mov dword ptr [esi + 0x260], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B31C3: mov dword ptr [esi + 0x264], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B31C9: mov dword ptr [esi + 0x268], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B31CF: mov dword ptr [esi + 0x3dc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B31D5: mov dword ptr [esi + 0x3e0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B31DB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B31DD: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B31E1: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B31E8: pop ecx
        __asm _emit 0x59
        // 0x587B31E9: pop edi
        __asm _emit 0x5F
        // 0x587B31EA: pop esi
        __asm _emit 0x5E
        // 0x587B31EB: pop ebp
        __asm _emit 0x5D
        // 0x587B31EC: pop ebx
        __asm _emit 0x5B
        // 0x587B31ED: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587B31F0: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
