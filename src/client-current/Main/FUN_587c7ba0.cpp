// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C7BA0 .. +0xD9 bytes.
// Source symbol alias: FUN_587c7ba0.
extern "C" __declspec(naked) void FUN_587c7ba0() {
    __asm {
        // 0x587C7BA0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C7BA2: push esi
        __asm _emit 0x56
        // 0x587C7BA3: cmp dword ptr [esp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587C7BA7: je 0x587c7c06
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x587C7BA9: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BAF: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BB4: mov dword ptr [ecx + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BBA: mov esi, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BC0: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587C7BC3: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BC9: mov dword ptr [ecx + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BCF: mov esi, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BD5: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587C7BD8: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BDE: mov dword ptr [ecx + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BE4: mov esi, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BEA: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587C7BED: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BF3: mov dword ptr [ecx + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BF9: mov ecx, dword ptr [ecx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7BFF: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587C7C02: pop esi
        __asm _emit 0x5E
        // 0x587C7C03: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587C7C06: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C0C: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C12: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x587C7C15: mov dword ptr [ecx + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C1B: mov esi, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C21: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587C7C24: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C2A: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C30: mov dword ptr [ecx + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C36: mov esi, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C3C: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587C7C3F: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C45: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C4B: mov dword ptr [ecx + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C51: mov esi, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C57: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587C7C5A: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C60: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C66: mov dword ptr [ecx + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C6C: mov edx, dword ptr [ecx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7C72: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587C7C75: pop esi
        __asm _emit 0x5E
        // 0x587C7C76: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
