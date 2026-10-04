// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58752340 .. +0xCE bytes.
// Source symbol alias: FUN_58752340.
extern "C" __declspec(naked) void FUN_58752340() {
    __asm {
        // 0x58752340: sub esp, 0xf4
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752346: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875234B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875234D: mov dword ptr [esp + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752354: push esi
        __asm _emit 0x56
        // 0x58752355: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58752357: cmp dword ptr [esi + 0x90], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875235E: je 0x587523f8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752364: push ebx
        __asm _emit 0x53
        // 0x58752365: push ebp
        __asm _emit 0x55
        // 0x58752366: push edi
        __asm _emit 0x57
        // 0x58752367: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875236C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5875236E: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58752372: push ebp
        __asm _emit 0x55
        // 0x58752373: push eax
        __asm _emit 0x50
        // 0x58752374: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xA8
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58752379: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5875237C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5875237E: lea edi, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58752382: cmp ebx, dword ptr [esi + 0xa0]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752388: jge 0x587523de
        __asm _emit 0x7D
        __asm _emit 0x54
        // 0x5875238A: cmp dword ptr [esi + 0x98], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752391: jne 0x5875239f
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58752393: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752399: mov dword ptr [esi + 0x98], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875239F: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587523A5: mov eax, dword ptr [edx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x70
        // 0x587523A8: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x587523AB: push ecx
        __asm _emit 0x51
        // 0x587523AC: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587523B1: push edi
        __asm _emit 0x57
        // 0x587523B2: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587523B8: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587523BE: mov eax, dword ptr [edx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x587523C1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587523C4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587523C6: jne 0x587523ce
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587523C8: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587523CE: inc ebx
        __asm _emit 0x43
        // 0x587523CF: inc ebp
        __asm _emit 0x45
        // 0x587523D0: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x587523D3: cmp ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0A
        // 0x587523D6: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587523DC: jl 0x58752382
        __asm _emit 0x7C
        __asm _emit 0xA4
        // 0x587523DE: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587523E0: jle 0x587523f5
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x587523E2: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587523E4: push ebp
        __asm _emit 0x55
        // 0x587523E5: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587523E9: push ecx
        __asm _emit 0x51
        // 0x587523EA: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587523F0: call 0x587b91b0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x6D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587523F5: pop edi
        __asm _emit 0x5F
        // 0x587523F6: pop ebp
        __asm _emit 0x5D
        // 0x587523F7: pop ebx
        __asm _emit 0x5B
        // 0x587523F8: mov ecx, dword ptr [esp + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587523FF: pop esi
        __asm _emit 0x5E
        // 0x58752400: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58752402: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xA7
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58752407: add esp, 0xf4
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875240D: ret
        __asm _emit 0xC3
    }
}
