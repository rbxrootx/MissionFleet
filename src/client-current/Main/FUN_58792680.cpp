// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 165 bytes in 1 exact ranges.
// Source symbol alias: FUN_58792680.

// Ghidra body range 0x58792680..0x58792725; 165 mapped bytes.
extern "C" __declspec(naked) void FUN_58792680_segment_00() {
    __asm {
        // 0x58792680: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58792683: push ebx
        __asm _emit 0x53
        // 0x58792684: push ebp
        __asm _emit 0x55
        // 0x58792685: push esi
        __asm _emit 0x56
        // 0x58792686: push edi
        __asm _emit 0x57
        // 0x58792687: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58792689: mov ebp, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x5879268C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5879268E: jne 0x58792694
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58792690: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58792692: jmp 0x587926ac
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x58792694: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58792697: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x58792699: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x5879269E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587926A0: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587926A2: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587926A5: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587926A7: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587926AA: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587926AC: mov ebx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x587926AF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587926B1: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x587926B3: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x587926B8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587926BA: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587926BC: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587926BF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587926C1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587926C4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587926C6: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587926C8: jae 0x587926fd
        __asm _emit 0x73
        __asm _emit 0x33
        // 0x587926CA: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587926CE: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587926D3: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587926D7: push ecx
        __asm _emit 0x51
        // 0x587926D8: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587926DC: push edx
        __asm _emit 0x52
        // 0x587926DD: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587926E0: push eax
        __asm _emit 0x50
        // 0x587926E1: push ecx
        __asm _emit 0x51
        // 0x587926E2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587926E4: push ebx
        __asm _emit 0x53
        // 0x587926E5: call 0x58791f30
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587926EA: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587926ED: add ebx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x1C
        // 0x587926F0: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x587926F3: pop edi
        __asm _emit 0x5F
        // 0x587926F4: pop esi
        __asm _emit 0x5E
        // 0x587926F5: pop ebp
        __asm _emit 0x5D
        // 0x587926F6: pop ebx
        __asm _emit 0x5B
        // 0x587926F7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587926FA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587926FD: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587926FF: jbe 0x58792706
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58792701: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xA5
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792706: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5879270A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5879270C: push edx
        __asm _emit 0x52
        // 0x5879270D: push ebx
        __asm _emit 0x53
        // 0x5879270E: push eax
        __asm _emit 0x50
        // 0x5879270F: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58792713: push eax
        __asm _emit 0x50
        // 0x58792714: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58792716: call 0x587925c0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879271B: pop edi
        __asm _emit 0x5F
        // 0x5879271C: pop esi
        __asm _emit 0x5E
        // 0x5879271D: pop ebp
        __asm _emit 0x5D
        // 0x5879271E: pop ebx
        __asm _emit 0x5B
        // 0x5879271F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58792722: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
