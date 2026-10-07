// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 225 bytes in 2 exact ranges.
// Source symbol alias: FUN_58777710.

// Ghidra body range 0x58777710..0x587777CB; 187 mapped bytes.
extern "C" __declspec(naked) void FUN_58777710_segment_00() {
    __asm {
        // 0x58777710: push ebp
        __asm _emit 0x55
        // 0x58777711: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58777713: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58777715: push 0x5897f1c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xF1
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5877771A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777720: push eax
        __asm _emit 0x50
        // 0x58777721: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58777724: push ebx
        __asm _emit 0x53
        // 0x58777725: push esi
        __asm _emit 0x56
        // 0x58777726: push edi
        __asm _emit 0x57
        // 0x58777727: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877772C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5877772E: push eax
        __asm _emit 0x50
        // 0x5877772F: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58777732: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777738: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5877773B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877773D: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x58777740: cmp edx, 0x1fffffff
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x1F
        // 0x58777746: jbe 0x5877774d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777748: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xEF
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5877774D: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58777750: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58777752: jne 0x58777758
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58777754: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777756: jmp 0x58777760
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58777758: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5877775B: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5877775D: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58777760: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58777762: jae 0x587777e0
        __asm _emit 0x73
        __asm _emit 0x7C
        // 0x58777764: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58777766: push edx
        __asm _emit 0x52
        // 0x58777767: call 0x58901790
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877776C: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5877776F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58777772: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58777774: mov dword ptr [ebp - 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xE8
        // 0x58777777: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877777E: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58777781: jbe 0x58777788
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777783: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777788: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5877778B: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5877778E: cmp eax, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58777791: jbe 0x5877779b
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x58777793: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777798: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5877779B: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5877779E: mov byte ptr [ebp - 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xEC
        __asm _emit 0x00
        // 0x587777A2: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x587777A5: push ecx
        __asm _emit 0x51
        // 0x587777A6: push edx
        __asm _emit 0x52
        // 0x587777A7: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587777AA: push ecx
        __asm _emit 0x51
        // 0x587777AB: push ebx
        __asm _emit 0x53
        // 0x587777AC: push edi
        __asm _emit 0x57
        // 0x587777AD: push eax
        __asm _emit 0x50
        // 0x587777AE: call 0x58901a10
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xA2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587777B3: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587777B6: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587777B9: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587777BB: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587777BE: sar edi, 3
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x587777C1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587777C3: je 0x587777ce
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587777C5: push eax
        __asm _emit 0x50
        // 0x587777C6: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587777CE..0x587777F4; 38 mapped bytes.
extern "C" __declspec(naked) void FUN_58777710_segment_01() {
    __asm {
        // 0x587777CE: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x587777D1: lea eax, [ebx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD3
        // 0x587777D4: lea ecx, [ebx + edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFB
        // 0x587777D7: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587777DA: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587777DD: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587777E0: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x587777E3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587777EA: pop ecx
        __asm _emit 0x59
        // 0x587777EB: pop edi
        __asm _emit 0x5F
        // 0x587777EC: pop esi
        __asm _emit 0x5E
        // 0x587777ED: pop ebx
        __asm _emit 0x5B
        // 0x587777EE: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587777F0: pop ebp
        __asm _emit 0x5D
        // 0x587777F1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
