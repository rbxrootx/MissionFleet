// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 165 bytes in 1 exact ranges.
// Source symbol alias: FUN_587765f0.

// Ghidra body range 0x587765F0..0x58776695; 165 mapped bytes.
extern "C" __declspec(naked) void FUN_587765f0_segment_00() {
    __asm {
        // 0x587765F0: push ebx
        __asm _emit 0x53
        // 0x587765F1: push ebp
        __asm _emit 0x55
        // 0x587765F2: push esi
        __asm _emit 0x56
        // 0x587765F3: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587765F5: push edi
        __asm _emit 0x57
        // 0x587765F6: mov edi, dword ptr [ebp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x64
        // 0x587765F9: cmp edi, dword ptr [ebp + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x68
        // 0x587765FC: jbe 0x58776603
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587765FE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776603: mov esi, dword ptr [ebp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x58776606: mov ebx, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x68
        // 0x58776609: cmp dword ptr [ebp + 0x64], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x64
        // 0x5877660C: jbe 0x58776613
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877660E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776613: mov eax, dword ptr [ebp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x58
        // 0x58776616: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776618: je 0x5877661e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5877661A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5877661C: je 0x58776623
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5877661E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776623: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58776625: je 0x5877668c
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x58776627: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776629: jne 0x58776664
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x5877662B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776630: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776632: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58776635: jb 0x5877663c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776637: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877663C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5877663E: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58776641: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776645: cmp dword ptr [ecx + 0x64], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58776648: je 0x5877666c
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5877664A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5877664C: jne 0x58776668
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5877664E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776653: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776655: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58776658: jb 0x5877665f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877665A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877665F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58776662: jmp 0x58776606
        __asm _emit 0xEB
        __asm _emit 0xA2
        // 0x58776664: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776666: jmp 0x58776632
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x58776668: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5877666A: jmp 0x58776655
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5877666C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5877666E: jne 0x58776688
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58776670: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776675: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58776678: jb 0x5877667f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877667A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877667F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58776681: pop edi
        __asm _emit 0x5F
        // 0x58776682: pop esi
        __asm _emit 0x5E
        // 0x58776683: pop ebp
        __asm _emit 0x5D
        // 0x58776684: pop ebx
        __asm _emit 0x5B
        // 0x58776685: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58776688: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5877668A: jmp 0x58776675
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5877668C: pop edi
        __asm _emit 0x5F
        // 0x5877668D: pop esi
        __asm _emit 0x5E
        // 0x5877668E: pop ebp
        __asm _emit 0x5D
        // 0x5877668F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776691: pop ebx
        __asm _emit 0x5B
        // 0x58776692: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
