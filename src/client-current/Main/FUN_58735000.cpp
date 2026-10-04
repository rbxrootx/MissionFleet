// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58735000 .. +0xD6 bytes.
// Source symbol alias: FUN_58735000.
extern "C" __declspec(naked) void FUN_58735000() {
    __asm {
        // 0x58735000: push ebp
        __asm _emit 0x55
        // 0x58735001: mov ebp, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58735005: push esi
        __asm _emit 0x56
        // 0x58735006: push edi
        __asm _emit 0x57
        // 0x58735007: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58735009: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5873500B: je 0x58735053
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5873500D: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58735010: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58735013: cmp edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x10
        // 0x58735016: jb 0x5873501c
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58735018: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5873501A: jmp 0x5873501e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873501C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873501E: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x58735020: jb 0x58735053
        __asm _emit 0x72
        __asm _emit 0x31
        // 0x58735022: cmp edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x10
        // 0x58735025: jb 0x5873502b
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58735027: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58735029: jmp 0x5873502d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873502B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873502D: mov edi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58735030: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x58735032: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58735034: jbe 0x58735053
        __asm _emit 0x76
        __asm _emit 0x1D
        // 0x58735036: cmp edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x10
        // 0x58735039: jb 0x5873503d
        __asm _emit 0x72
        __asm _emit 0x02
        // 0x5873503B: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5873503D: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58735041: push ecx
        __asm _emit 0x51
        // 0x58735042: sub ebp, eax
        __asm _emit 0x2B
        __asm _emit 0xE8
        // 0x58735044: push ebp
        __asm _emit 0x55
        // 0x58735045: push esi
        __asm _emit 0x56
        // 0x58735046: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58735048: call 0x58734f20
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873504D: pop edi
        __asm _emit 0x5F
        // 0x5873504E: pop esi
        __asm _emit 0x5E
        // 0x5873504F: pop ebp
        __asm _emit 0x5D
        // 0x58735050: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58735053: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58735057: cmp edi, -2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFE
        // 0x5873505A: jbe 0x58735061
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873505C: call 0x589714be
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xC4
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58735061: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58735064: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58735066: jae 0x58735088
        __asm _emit 0x73
        __asm _emit 0x20
        // 0x58735068: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5873506B: push edx
        __asm _emit 0x52
        // 0x5873506C: push edi
        __asm _emit 0x57
        // 0x5873506D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873506F: call 0x58734de0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58735074: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58735076: jbe 0x587350ce
        __asm _emit 0x76
        __asm _emit 0x56
        // 0x58735078: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x5873507B: push ebx
        __asm _emit 0x53
        // 0x5873507C: lea ebx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x5873507F: cmp ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x58735082: jb 0x587350b0
        __asm _emit 0x72
        __asm _emit 0x2C
        // 0x58735084: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58735086: jmp 0x587350b2
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x58735088: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5873508A: jne 0x58735076
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5873508C: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5873508F: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58735092: jb 0x587350a2
        __asm _emit 0x72
        __asm _emit 0x0E
        // 0x58735094: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58735097: pop edi
        __asm _emit 0x5F
        // 0x58735098: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873509B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5873509D: pop esi
        __asm _emit 0x5E
        // 0x5873509E: pop ebp
        __asm _emit 0x5D
        // 0x5873509F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587350A2: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587350A5: pop edi
        __asm _emit 0x5F
        // 0x587350A6: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587350A9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587350AB: pop esi
        __asm _emit 0x5E
        // 0x587350AC: pop ebp
        __asm _emit 0x5D
        // 0x587350AD: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587350B0: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587350B2: push edi
        __asm _emit 0x57
        // 0x587350B3: push ebp
        __asm _emit 0x55
        // 0x587350B4: push ecx
        __asm _emit 0x51
        // 0x587350B5: push eax
        __asm _emit 0x50
        // 0x587350B6: call 0x5897cc5a
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x7B
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587350BB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587350BE: cmp dword ptr [esi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x587350C2: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587350C5: jb 0x587350c9
        __asm _emit 0x72
        __asm _emit 0x02
        // 0x587350C7: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x587350C9: mov byte ptr [ebx + edi], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x587350CD: pop ebx
        __asm _emit 0x5B
        // 0x587350CE: pop edi
        __asm _emit 0x5F
        // 0x587350CF: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587350D1: pop esi
        __asm _emit 0x5E
        // 0x587350D2: pop ebp
        __asm _emit 0x5D
        // 0x587350D3: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
