// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58750010 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_58750010() {
    __asm {
        // 0x58750010: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58750012: push 0x5897e6ae
        __asm _emit 0x68
        __asm _emit 0xAE
        __asm _emit 0xE6
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58750017: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875001D: push eax
        __asm _emit 0x50
        // 0x5875001E: push ecx
        __asm _emit 0x51
        // 0x5875001F: push ebx
        __asm _emit 0x53
        // 0x58750020: push ebp
        __asm _emit 0x55
        // 0x58750021: push esi
        __asm _emit 0x56
        // 0x58750022: push edi
        __asm _emit 0x57
        // 0x58750023: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58750028: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875002A: push eax
        __asm _emit 0x50
        // 0x5875002B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875002F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750035: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58750037: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875003B: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5875003F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58750043: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58750047: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875004B: push ebp
        __asm _emit 0x55
        // 0x5875004C: push eax
        __asm _emit 0x50
        // 0x5875004D: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58750051: push ecx
        __asm _emit 0x51
        // 0x58750052: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58750056: push edx
        __asm _emit 0x52
        // 0x58750057: push eax
        __asm _emit 0x50
        // 0x58750058: push ecx
        __asm _emit 0x51
        // 0x58750059: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875005B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x31
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58750060: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58750062: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58750064: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58750068: mov dword ptr [esi], 0x5898d5c8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC8
        __asm _emit 0xD5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875006E: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58750071: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xCB
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58750076: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58750078: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875007B: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5875007F: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58750084: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58750086: je 0x587500ad
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58750088: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875008C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58750090: push ebp
        __asm _emit 0x55
        // 0x58750091: push ebx
        __asm _emit 0x53
        // 0x58750092: push ebx
        __asm _emit 0x53
        // 0x58750093: push edx
        __asm _emit 0x52
        // 0x58750094: push eax
        __asm _emit 0x50
        // 0x58750095: push esi
        __asm _emit 0x56
        // 0x58750096: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58750098: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x31
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5875009D: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587500A3: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x587500A6: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x587500A9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587500AB: jmp 0x587500af
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587500AD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587500AF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587500B4: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587500B8: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x587500BB: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x2C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587500C0: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587500C2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xCB
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587500C7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587500C9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587500CC: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587500D0: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587500D5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587500D7: je 0x587500fe
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587500D9: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587500DD: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587500E1: push ebp
        __asm _emit 0x55
        // 0x587500E2: push ebx
        __asm _emit 0x53
        // 0x587500E3: push ebx
        __asm _emit 0x53
        // 0x587500E4: push ecx
        __asm _emit 0x51
        // 0x587500E5: push edx
        __asm _emit 0x52
        // 0x587500E6: push esi
        __asm _emit 0x56
        // 0x587500E7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587500E9: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x30
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587500EE: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587500F4: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x587500F7: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x587500FA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587500FC: jmp 0x58750100
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587500FE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58750100: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750105: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58750109: mov dword ptr [esi + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5875010C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x2C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58750111: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58750113: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x58750116: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x58750119: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5875011C: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5875011F: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58750122: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58750125: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58750128: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5875012B: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5875012E: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750134: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875013A: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750140: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750146: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875014C: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750152: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750158: mov dword ptr [esi + 0x9c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750162: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750168: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875016E: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750174: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875017A: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750180: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750186: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58750188: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875018C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750193: pop ecx
        __asm _emit 0x59
        // 0x58750194: pop edi
        __asm _emit 0x5F
        // 0x58750195: pop esi
        __asm _emit 0x5E
        // 0x58750196: pop ebp
        __asm _emit 0x5D
        // 0x58750197: pop ebx
        __asm _emit 0x5B
        // 0x58750198: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5875019B: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
