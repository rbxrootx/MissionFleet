// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888E450 .. +0x14A bytes.
// Source symbol alias: FUN_5888e450.
extern "C" __declspec(naked) void FUN_5888e450() {
    __asm {
        // 0x5888E450: sub esp, 0x304
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E456: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5888E45B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5888E45D: mov dword ptr [esp + 0x300], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E464: push esi
        __asm _emit 0x56
        // 0x5888E465: push edi
        __asm _emit 0x57
        // 0x5888E466: push 0x2ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E46B: lea eax, [esp + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0D
        // 0x5888E46F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888E471: push eax
        __asm _emit 0x50
        // 0x5888E472: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888E474: mov byte ptr [esp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5888E479: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xE7
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5888E47E: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888E484: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5888E487: mov di, word ptr [esp + 0x31c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E48F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888E492: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888E494: je 0x5888e523
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E49A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E4A0: cmp word ptr [eax + 0x350], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E4A7: je 0x5888e4b2
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5888E4A9: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x5888E4AC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888E4AE: jne 0x5888e4a0
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5888E4B0: jmp 0x5888e523
        __asm _emit 0xEB
        __asm _emit 0x71
        // 0x5888E4B2: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888E4B8: cmp word ptr [edx + 0x204], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5888E4C0: jne 0x5888e4ef
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x5888E4C2: mov edx, dword ptr [eax + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E4C8: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x5888E4CB: lea ecx, [esi + 0x298]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E4D1: push ecx
        __asm _emit 0x51
        // 0x5888E4D2: push eax
        __asm _emit 0x50
        // 0x5888E4D3: lea ecx, [esi + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E4D9: push ecx
        __asm _emit 0x51
        // 0x5888E4DA: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888E4DE: push 0x5899ff58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888E4E3: push edx
        __asm _emit 0x52
        // 0x5888E4E4: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888E4EA: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5888E4ED: jmp 0x5888e513
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x5888E4EF: mov eax, dword ptr [eax + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E4F5: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5888E4F8: push ecx
        __asm _emit 0x51
        // 0x5888E4F9: lea edx, [esi + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E4FF: push edx
        __asm _emit 0x52
        // 0x5888E500: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888E504: push 0x5899ff50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888E509: push eax
        __asm _emit 0x50
        // 0x5888E50A: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888E510: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5888E513: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5888E517: push ecx
        __asm _emit 0x51
        // 0x5888E518: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E51E: call 0x588d28a0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888E523: cmp dword ptr [esp + 0x314], 1
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5888E52B: jne 0x5888e581
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x5888E52D: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888E533: movzx eax, word ptr [edx + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E53A: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5888E53E: je 0x5888e581
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5888E540: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888E543: je 0x5888e581
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5888E545: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5888E549: je 0x5888e581
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5888E54B: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888E550: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5888E553: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888E555: je 0x5888e581
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5888E557: cmp word ptr [eax + 0x350], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E55E: jne 0x5888e581
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5888E560: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888E562: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888E564: push 0x5899ff24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888E569: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888E56F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888E572: push eax
        __asm _emit 0x50
        // 0x5888E573: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x5888E575: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xD5
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5888E57A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888E57C: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x67
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5888E581: mov ecx, dword ptr [esp + 0x308]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E588: pop edi
        __asm _emit 0x5F
        // 0x5888E589: pop esi
        __asm _emit 0x5E
        // 0x5888E58A: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5888E58C: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xE6
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5888E591: add esp, 0x304
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888E597: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
