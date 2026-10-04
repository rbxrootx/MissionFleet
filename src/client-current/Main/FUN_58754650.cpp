// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58754650 .. +0x101 bytes.
// Source symbol alias: FUN_58754650.
extern "C" __declspec(naked) void FUN_58754650() {
    __asm {
        // 0x58754650: push ebp
        __asm _emit 0x55
        // 0x58754651: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58754653: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58754655: push 0x5897e820
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5875465A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754660: push eax
        __asm _emit 0x50
        // 0x58754661: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58754664: push ebx
        __asm _emit 0x53
        // 0x58754665: push esi
        __asm _emit 0x56
        // 0x58754666: push edi
        __asm _emit 0x57
        // 0x58754667: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875466C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5875466E: push eax
        __asm _emit 0x50
        // 0x5875466F: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58754672: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754678: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5875467B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875467D: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58754680: cmp edi, 0x38e38e3
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xE3
        __asm _emit 0x38
        __asm _emit 0x8E
        __asm _emit 0x03
        // 0x58754686: jbe 0x5875468d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58754688: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x1F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875468D: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58754690: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58754692: je 0x587546aa
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58754694: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58754697: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58754699: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x5875469E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587546A0: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587546A3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587546A5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587546A8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587546AA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587546AC: jae 0x58754740
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587546B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587546B4: push edi
        __asm _emit 0x57
        // 0x587546B5: call 0x58753360
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587546BA: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587546BD: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587546C0: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x587546C3: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587546CA: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587546CD: jbe 0x587546d4
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587546CF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587546D4: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587546D7: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587546DA: jbe 0x587546e1
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587546DC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587546E1: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587546E4: mov byte ptr [ebp - 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x587546E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x587546EB: push eax
        __asm _emit 0x50
        // 0x587546EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x587546EF: push ecx
        __asm _emit 0x51
        // 0x587546F0: lea edx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587546F3: push edx
        __asm _emit 0x52
        // 0x587546F4: push eax
        __asm _emit 0x50
        // 0x587546F5: push edi
        __asm _emit 0x57
        // 0x587546F6: push ebx
        __asm _emit 0x53
        // 0x587546F7: call 0x58753590
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587546FC: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587546FF: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58754702: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58754704: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x58754709: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5875470B: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5875470E: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58754710: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58754713: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58754716: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58754718: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5875471A: je 0x58754725
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5875471C: push ebx
        __asm _emit 0x53
        // 0x5875471D: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754722: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58754725: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58754728: lea ecx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC0
        // 0x5875472B: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5875472E: lea edx, [eax + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC8
        // 0x58754731: lea ecx, [edi + edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFF
        // 0x58754734: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58754737: lea edx, [eax + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC8
        // 0x5875473A: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5875473D: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58754740: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58754743: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875474A: pop ecx
        __asm _emit 0x59
        // 0x5875474B: pop edi
        __asm _emit 0x5F
        // 0x5875474C: pop esi
        __asm _emit 0x5E
        // 0x5875474D: pop ebx
        __asm _emit 0x5B
        // 0x5875474E: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58754750: pop ebp
        __asm _emit 0x5D
    }
}
