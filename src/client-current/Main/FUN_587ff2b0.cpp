// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 140 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ff2b0.

// Ghidra body range 0x587FF2B0..0x587FF33C; 140 mapped bytes.
extern "C" __declspec(naked) void FUN_587ff2b0_segment_00() {
    __asm {
        // 0x587FF2B0: push ecx
        __asm _emit 0x51
        // 0x587FF2B1: mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x587FF2B4: push esi
        __asm _emit 0x56
        // 0x587FF2B5: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587FF2B8: cmp byte ptr [esi + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587FF2BC: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587FF2C0: jne 0x587ff337
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x587FF2C2: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587FF2C6: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x587FF2C9: push ebx
        __asm _emit 0x53
        // 0x587FF2CA: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x587FF2CD: push ebp
        __asm _emit 0x55
        // 0x587FF2CE: push edi
        __asm _emit 0x57
        // 0x587FF2CF: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FF2D3: lea ebp, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587FF2D6: cmp dword ptr [esp + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x587FF2DB: jb 0x587ff2e2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587FF2DD: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587FF2E0: jmp 0x587ff2e4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587FF2E2: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587FF2E4: mov edi, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x587FF2E7: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587FF2E9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587FF2EB: jae 0x587ff2ed
        __asm _emit 0x73
        __asm _emit 0x00
        // 0x587FF2ED: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587FF2EF: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587FF2F1: jb 0x587ff2f5
        __asm _emit 0x72
        __asm _emit 0x02
        // 0x587FF2F3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FF2F5: cmp dword ptr [esi + 0x24], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF2F9: jb 0x587ff300
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587FF2FB: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587FF2FE: jmp 0x587ff303
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587FF300: lea eax, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587FF303: push ecx
        __asm _emit 0x51
        // 0x587FF304: push edx
        __asm _emit 0x52
        // 0x587FF305: push eax
        __asm _emit 0x50
        // 0x587FF306: call 0x58748020
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x8D
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FF30B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587FF30E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FF310: jne 0x587ff31d
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587FF312: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587FF314: jb 0x587ff31f
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x587FF316: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587FF318: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x587FF31B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FF31D: jge 0x587ff324
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587FF31F: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587FF322: jmp 0x587ff32a
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587FF324: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF328: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587FF32A: cmp byte ptr [esi + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587FF32E: je 0x587ff2d6
        __asm _emit 0x74
        __asm _emit 0xA6
        // 0x587FF330: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF334: pop edi
        __asm _emit 0x5F
        // 0x587FF335: pop ebp
        __asm _emit 0x5D
        // 0x587FF336: pop ebx
        __asm _emit 0x5B
        // 0x587FF337: pop esi
        __asm _emit 0x5E
        // 0x587FF338: pop ecx
        __asm _emit 0x59
        // 0x587FF339: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
