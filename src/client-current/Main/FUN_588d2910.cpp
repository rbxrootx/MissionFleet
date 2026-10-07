// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 216 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d2910.

// Ghidra body range 0x588D2910..0x588D29E8; 216 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2910_segment_00() {
    __asm {
        // 0x588D2910: push ecx
        __asm _emit 0x51
        // 0x588D2911: push esi
        __asm _emit 0x56
        // 0x588D2912: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D2914: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588D2918: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588D291A: je 0x588d29de
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2920: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588D2923: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588D2926: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588D2928: inc eax
        __asm _emit 0x40
        // 0x588D2929: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588D292B: jne 0x588d2926
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588D292D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588D292F: push edi
        __asm _emit 0x57
        // 0x588D2930: je 0x588d29c1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2936: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588D2939: sub ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D293F: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588D2942: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588D2944: push ebx
        __asm _emit 0x53
        // 0x588D2945: lea ebx, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D294B: jle 0x588d2966
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x588D294D: sub eax, dword ptr [esi + 0x80]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2953: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D2955: push eax
        __asm _emit 0x50
        // 0x588D2956: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D295B: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2961: add dword ptr [esi + 0xc], edx
        __asm _emit 0x01
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588D2964: jmp 0x588d29c0
        __asm _emit 0xEB
        __asm _emit 0x5A
        // 0x588D2966: cmp dword ptr [esi + 0x88], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588D296D: jne 0x588d29ac
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x588D296F: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2975: push eax
        __asm _emit 0x50
        // 0x588D2976: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D2978: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xF3
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588D297D: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588D2980: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2986: mov edi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x39
        // 0x588D2988: push ebx
        __asm _emit 0x53
        // 0x588D2989: push edx
        __asm _emit 0x52
        // 0x588D298A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D298D: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D2993: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588D2996: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588D2998: push eax
        __asm _emit 0x50
        // 0x588D2999: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D299F: push eax
        __asm _emit 0x50
        // 0x588D29A0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588D29A2: mov dword ptr [esi + 0x88], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D29AC: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588D29AF: push eax
        __asm _emit 0x50
        // 0x588D29B0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D29B2: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D29B7: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588D29BA: sub ecx, dword ptr [esi + 0x78]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588D29BD: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588D29C0: pop ebx
        __asm _emit 0x5B
        // 0x588D29C1: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588D29C4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D29C6: je 0x588d29dd
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588D29C8: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588D29CB: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588D29CD: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588D29D0: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588D29D3: je 0x588d29e1
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D29D5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588D29D7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588D29D9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588D29DB: jne 0x588d29c8
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588D29DD: pop edi
        __asm _emit 0x5F
        // 0x588D29DE: pop esi
        __asm _emit 0x5E
        // 0x588D29DF: pop ecx
        __asm _emit 0x59
        // 0x588D29E0: ret
        __asm _emit 0xC3
        // 0x588D29E1: pop edi
        __asm _emit 0x5F
        // 0x588D29E2: pop esi
        __asm _emit 0x5E
        // 0x588D29E3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D29E6: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
