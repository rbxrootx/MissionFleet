// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FB570 .. +0x16E bytes.
// Source symbol alias: FUN_588fb570.
extern "C" __declspec(naked) void FUN_588fb570() {
    __asm {
        // 0x588FB570: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FB572: push 0x5898a363
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0xA3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FB577: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB57D: push eax
        __asm _emit 0x50
        // 0x588FB57E: push ecx
        __asm _emit 0x51
        // 0x588FB57F: push ebx
        __asm _emit 0x53
        // 0x588FB580: push ebp
        __asm _emit 0x55
        // 0x588FB581: push esi
        __asm _emit 0x56
        // 0x588FB582: push edi
        __asm _emit 0x57
        // 0x588FB583: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FB588: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FB58A: push eax
        __asm _emit 0x50
        // 0x588FB58B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FB58F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB595: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588FB597: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FB59B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FB59F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FB5A3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FB5A7: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FB5AB: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FB5AF: push eax
        __asm _emit 0x50
        // 0x588FB5B0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FB5B4: push ecx
        __asm _emit 0x51
        // 0x588FB5B5: push edx
        __asm _emit 0x52
        // 0x588FB5B6: push esi
        __asm _emit 0x56
        // 0x588FB5B7: push edi
        __asm _emit 0x57
        // 0x588FB5B8: push eax
        __asm _emit 0x50
        // 0x588FB5B9: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588FB5BB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB5C0: mov dword ptr [ebp], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FB5C7: or word ptr [ebp + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4D
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FB5CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FB5CE: mov dword ptr [ebp + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x50
        // 0x588FB5D1: mov dword ptr [ebp + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x588FB5D4: mov dword ptr [ebp + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB5DB: mov dword ptr [ebp + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x5C
        // 0x588FB5DE: dec esi
        __asm _emit 0x4E
        // 0x588FB5DF: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FB5E3: mov dword ptr [ebp], 0x589a2204
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FB5EA: lea edi, [ebp + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x60
        // 0x588FB5ED: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FB5F1: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB5F9: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FB5FB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FB600: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588FB602: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FB605: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FB609: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588FB60E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588FB610: je 0x588fb687
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x588FB612: mov eax, dword ptr [0x58a24734]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FB617: cmp dword ptr [eax + 0x164], 0x13
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        // 0x588FB61E: jle 0x588fb634
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588FB620: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB627: je 0x588fb634
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB629: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB62F: mov ebx, dword ptr [ecx + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x4C
        // 0x588FB632: jmp 0x588fb636
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FB634: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FB636: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FB63A: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FB63E: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FB642: push edx
        __asm _emit 0x52
        // 0x588FB643: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FB645: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FB647: push eax
        __asm _emit 0x50
        // 0x588FB648: push ecx
        __asm _emit 0x51
        // 0x588FB649: push ebp
        __asm _emit 0x55
        // 0x588FB64A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FB64C: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB651: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FB657: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588FB65A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588FB65C: je 0x588fb689
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588FB65E: mov edx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x10
        // 0x588FB661: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588FB664: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x588FB667: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588FB66A: mov ecx, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x18
        // 0x588FB66D: lea eax, [ebx + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x588FB670: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x588FB673: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FB676: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x588FB679: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588FB67C: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x588FB67F: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FB682: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x588FB685: jmp 0x588fb689
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FB687: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588FB689: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FB68E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FB690: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588FB695: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x588FB697: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB69C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588FB69E: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588FB6A0: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB6A5: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588FB6A7: add dword ptr [esp + 0x38], 0xa6
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB6AF: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB6B4: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FB6B8: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588FB6BB: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x588FB6C0: jne 0x588fb5f9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FB6C6: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588FB6C8: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FB6CC: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB6D3: pop ecx
        __asm _emit 0x59
        // 0x588FB6D4: pop edi
        __asm _emit 0x5F
        // 0x588FB6D5: pop esi
        __asm _emit 0x5E
        // 0x588FB6D6: pop ebp
        __asm _emit 0x5D
        // 0x588FB6D7: pop ebx
        __asm _emit 0x5B
        // 0x588FB6D8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FB6DB: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
