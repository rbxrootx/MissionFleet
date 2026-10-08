// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 161 bytes in 1 exact ranges.
// Source symbol alias: FUN_58773950.

// Ghidra body range 0x58773950..0x587739F1; 161 mapped bytes.
extern "C" __declspec(naked) void FUN_58773950_segment_00() {
    __asm {
        // 0x58773950: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58773953: push ebx
        __asm _emit 0x53
        // 0x58773954: push esi
        __asm _emit 0x56
        // 0x58773955: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58773957: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5877395A: push edi
        __asm _emit 0x57
        // 0x5877395B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877395D: jne 0x58773963
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5877395F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58773961: jmp 0x58773979
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58773963: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58773966: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58773968: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x5877396D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877396F: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58773972: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58773974: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58773977: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58773979: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5877397C: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5877397E: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x58773980: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58773985: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58773987: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5877398A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877398C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5877398F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58773991: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58773993: jae 0x587739ca
        __asm _emit 0x73
        __asm _emit 0x35
        // 0x58773995: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58773999: mov byte ptr [esp + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877399E: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587739A2: push ecx
        __asm _emit 0x51
        // 0x587739A3: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587739A7: push edx
        __asm _emit 0x52
        // 0x587739A8: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587739AB: push eax
        __asm _emit 0x50
        // 0x587739AC: push ecx
        __asm _emit 0x51
        // 0x587739AD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587739AF: push edi
        __asm _emit 0x57
        // 0x587739B0: call 0x58772b70
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587739B5: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587739B8: add edi, 0x108
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587739BE: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587739C1: pop edi
        __asm _emit 0x5F
        // 0x587739C2: pop esi
        __asm _emit 0x5E
        // 0x587739C3: pop ebx
        __asm _emit 0x5B
        // 0x587739C4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587739C7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587739CA: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587739CC: jbe 0x587739d3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587739CE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x92
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587739D3: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587739D7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587739D9: push edx
        __asm _emit 0x52
        // 0x587739DA: push edi
        __asm _emit 0x57
        // 0x587739DB: push eax
        __asm _emit 0x50
        // 0x587739DC: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587739E0: push eax
        __asm _emit 0x50
        // 0x587739E1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587739E3: call 0x58773660
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587739E8: pop edi
        __asm _emit 0x5F
        // 0x587739E9: pop esi
        __asm _emit 0x5E
        // 0x587739EA: pop ebx
        __asm _emit 0x5B
        // 0x587739EB: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587739EE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
