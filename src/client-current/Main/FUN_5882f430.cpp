// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 256 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882f430.

// Ghidra body range 0x5882F430..0x5882F530; 256 mapped bytes.
extern "C" __declspec(naked) void FUN_5882f430_segment_00() {
    __asm {
        // 0x5882F430: push esi
        __asm _emit 0x56
        // 0x5882F431: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882F433: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5882F437: push edi
        __asm _emit 0x57
        // 0x5882F438: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5882F43A: je 0x5882f528
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F440: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5882F443: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882F447: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882F449: je 0x5882f46f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5882F44B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5882F44E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882F450: je 0x5882f468
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5882F452: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882F454: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882F456: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5882F459: push edi
        __asm _emit 0x57
        // 0x5882F45A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5882F45C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5882F45F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x5882F462: je 0x5882f46f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5882F464: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882F466: jne 0x5882f452
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5882F468: pop edi
        __asm _emit 0x5F
        // 0x5882F469: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F46B: pop esi
        __asm _emit 0x5E
        // 0x5882F46C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882F46F: cmp dword ptr [edi + 4], 0x20a
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F476: jne 0x5882f528
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F47C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F47F: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x70
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F484: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F48A: jne 0x5882f528
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F490: push ebx
        __asm _emit 0x53
        // 0x5882F491: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F497: lea edx, [esi + 0x234]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F49D: push edx
        __asm _emit 0x52
        // 0x5882F49E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5882F4A0: call 0x5882bef0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F4A5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882F4A7: je 0x5882f4e1
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5882F4A9: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5882F4AE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882F4B0: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5882F4B3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F4B5: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5882F4B7: jle 0x5882f4cd
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5882F4B9: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F4BF: push ecx
        __asm _emit 0x51
        // 0x5882F4C0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882F4C2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882F4C4: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882F4C7: pop ebx
        __asm _emit 0x5B
        // 0x5882F4C8: pop edi
        __asm _emit 0x5F
        // 0x5882F4C9: pop esi
        __asm _emit 0x5E
        // 0x5882F4CA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882F4CD: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F4D3: push ecx
        __asm _emit 0x51
        // 0x5882F4D4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882F4D6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882F4D8: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882F4DB: pop ebx
        __asm _emit 0x5B
        // 0x5882F4DC: pop edi
        __asm _emit 0x5F
        // 0x5882F4DD: pop esi
        __asm _emit 0x5E
        // 0x5882F4DE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882F4E1: lea eax, [esi + 0x244]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F4E7: push eax
        __asm _emit 0x50
        // 0x5882F4E8: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5882F4EA: call 0x5882bef0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F4EF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882F4F1: je 0x5882f527
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5882F4F3: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5882F4F8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F4FA: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5882F4FC: jle 0x5882f517
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x5882F4FE: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5882F500: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F506: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x5882F509: push eax
        __asm _emit 0x50
        // 0x5882F50A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882F50C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882F50E: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882F511: pop ebx
        __asm _emit 0x5B
        // 0x5882F512: pop edi
        __asm _emit 0x5F
        // 0x5882F513: pop esi
        __asm _emit 0x5E
        // 0x5882F514: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882F517: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F51D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882F51F: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5882F522: push ecx
        __asm _emit 0x51
        // 0x5882F523: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882F525: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882F527: pop ebx
        __asm _emit 0x5B
        // 0x5882F528: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882F52B: pop edi
        __asm _emit 0x5F
        // 0x5882F52C: pop esi
        __asm _emit 0x5E
        // 0x5882F52D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
