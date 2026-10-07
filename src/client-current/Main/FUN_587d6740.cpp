// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 238 bytes in 1 exact ranges.
// Source symbol alias: FUN_587d6740.

// Ghidra body range 0x587D6740..0x587D682E; 238 mapped bytes.
extern "C" __declspec(naked) void FUN_587d6740_segment_00() {
    __asm {
        // 0x587D6740: push ebx
        __asm _emit 0x53
        // 0x587D6741: push ebp
        __asm _emit 0x55
        // 0x587D6742: push esi
        __asm _emit 0x56
        // 0x587D6743: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587D6745: push edi
        __asm _emit 0x57
        // 0x587D6746: lea esi, [ebx + 0x240]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D674C: mov ebp, 0x20
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6751: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D6753: mov ecx, dword ptr [esi + 0x2c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6759: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D675B: je 0x587d676b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D675D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D675F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D6761: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D6763: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D6765: mov dword ptr [esi + 0x2c4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D676B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587D676D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D676F: je 0x587d677b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D6771: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D6773: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D6775: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D6777: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D6779: mov dword ptr [esi], edi
        __asm _emit 0x89
        __asm _emit 0x3E
        // 0x587D677B: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6781: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D6783: je 0x587d6793
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D6785: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D6787: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D6789: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D678B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D678D: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6793: mov ecx, dword ptr [esi - 0x180]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D6799: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D679B: je 0x587d67ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D679D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D679F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D67A1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D67A3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D67A5: mov dword ptr [esi - 0x180], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D67AB: mov ecx, dword ptr [esi - 0x80]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x80
        // 0x587D67AE: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D67B0: je 0x587d67bd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D67B2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D67B4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D67B6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D67B8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D67BA: mov dword ptr [esi - 0x80], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x80
        // 0x587D67BD: mov ecx, dword ptr [esi - 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D67C3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D67C5: je 0x587d67d5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D67C7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D67C9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D67CB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D67CD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D67CF: mov dword ptr [esi - 0x100], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D67D5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587D67D8: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587D67DB: jne 0x587d6753
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D67E1: mov ecx, dword ptr [ebx + 0x584]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D67E7: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D67E9: je 0x587d67f9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D67EB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D67ED: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D67EF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D67F1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D67F3: mov dword ptr [ebx + 0x584], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D67F9: mov ecx, dword ptr [ebx + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D67FF: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D6801: je 0x587d6811
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D6803: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D6805: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D6807: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D6809: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D680B: mov dword ptr [ebx + 0x340], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6811: mov ecx, dword ptr [ebx + 0x344]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6817: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D6819: je 0x587d6829
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D681B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D681D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D681F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D6821: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D6823: mov dword ptr [ebx + 0x344], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6829: pop edi
        __asm _emit 0x5F
        // 0x587D682A: pop esi
        __asm _emit 0x5E
        // 0x587D682B: pop ebp
        __asm _emit 0x5D
        // 0x587D682C: pop ebx
        __asm _emit 0x5B
        // 0x587D682D: ret
        __asm _emit 0xC3
    }
}
