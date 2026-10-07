// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874E520 .. +0xD0 bytes.
// Source symbol alias: FUN_5874e520.
extern "C" __declspec(naked) void FUN_5874e520() {
    __asm {
        // 0x5874E520: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5874E522: push 0x5897e533
        __asm _emit 0x68
        __asm _emit 0x33
        __asm _emit 0xE5
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874E527: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874E52D: push eax
        __asm _emit 0x50
        // 0x5874E52E: push ecx
        __asm _emit 0x51
        // 0x5874E52F: push ebx
        __asm _emit 0x53
        // 0x5874E530: push esi
        __asm _emit 0x56
        // 0x5874E531: push edi
        __asm _emit 0x57
        // 0x5874E532: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874E537: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874E539: push eax
        __asm _emit 0x50
        // 0x5874E53A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874E53E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874E544: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874E546: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874E54A: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5874E54E: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874E552: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874E556: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874E55A: push ebx
        __asm _emit 0x53
        // 0x5874E55B: push eax
        __asm _emit 0x50
        // 0x5874E55C: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874E560: push ecx
        __asm _emit 0x51
        // 0x5874E561: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874E565: push edx
        __asm _emit 0x52
        // 0x5874E566: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874E56A: push eax
        __asm _emit 0x50
        // 0x5874E56B: push ecx
        __asm _emit 0x51
        // 0x5874E56C: push edx
        __asm _emit 0x52
        // 0x5874E56D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874E56F: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874E574: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874E576: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874E57E: mov dword ptr [esi], 0x5898d3e0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE0
        __asm _emit 0xD3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874E584: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xE6
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874E589: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5874E58B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874E58E: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5874E592: mov byte ptr [esp + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5874E597: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5874E599: je 0x5874e5c8
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5874E59B: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5874E59E: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874E5A1: add ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x40
        // 0x5874E5A4: push ebx
        __asm _emit 0x53
        // 0x5874E5A5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874E5A7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874E5A9: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5874E5AC: push eax
        __asm _emit 0x50
        // 0x5874E5AD: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5874E5B0: push ecx
        __asm _emit 0x51
        // 0x5874E5B1: push esi
        __asm _emit 0x56
        // 0x5874E5B2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874E5B4: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x4B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874E5B9: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874E5BF: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874E5C6: jmp 0x5874e5ca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874E5C8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5874E5CA: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874E5CF: mov dword ptr [esi + 0x1e8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874E5D5: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x5874E5D9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874E5DB: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874E5DF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874E5E6: pop ecx
        __asm _emit 0x59
        // 0x5874E5E7: pop edi
        __asm _emit 0x5F
        // 0x5874E5E8: pop esi
        __asm _emit 0x5E
        // 0x5874E5E9: pop ebx
        __asm _emit 0x5B
        // 0x5874E5EA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5874E5ED: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
