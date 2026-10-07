// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 438 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ca820.

// Ghidra body range 0x587CA820..0x587CA9D6; 438 mapped bytes.
extern "C" __declspec(naked) void FUN_587ca820_segment_00() {
    __asm {
        // 0x587CA820: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CA822: push 0x589817e3
        __asm _emit 0x68
        __asm _emit 0xE3
        __asm _emit 0x17
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CA827: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA82D: push eax
        __asm _emit 0x50
        // 0x587CA82E: push ecx
        __asm _emit 0x51
        // 0x587CA82F: push ebx
        __asm _emit 0x53
        // 0x587CA830: push ebp
        __asm _emit 0x55
        // 0x587CA831: push esi
        __asm _emit 0x56
        // 0x587CA832: push edi
        __asm _emit 0x57
        // 0x587CA833: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CA838: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CA83A: push eax
        __asm _emit 0x50
        // 0x587CA83B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CA83F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA845: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CA847: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CA84B: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587CA84F: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CA853: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CA857: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CA85B: push eax
        __asm _emit 0x50
        // 0x587CA85C: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CA860: push ecx
        __asm _emit 0x51
        // 0x587CA861: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CA865: push edx
        __asm _emit 0x52
        // 0x587CA866: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CA86A: push eax
        __asm _emit 0x50
        // 0x587CA86B: push ebp
        __asm _emit 0x55
        // 0x587CA86C: push ecx
        __asm _emit 0x51
        // 0x587CA86D: push edx
        __asm _emit 0x52
        // 0x587CA86E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CA870: call 0x587cb6b0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA875: mov dword ptr [esi], 0x5899b208
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CA87B: mov eax, dword ptr [0x58a24648]
        __asm _emit 0xA1
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA880: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CA882: cmp dword ptr [eax + 0x160], 0x111
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA88C: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CA890: jle 0x587ca8a7
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587CA892: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA898: je 0x587ca8a7
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CA89A: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA8A0: add eax, 0x4440
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA8A5: jmp 0x587ca8a9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CA8A7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CA8A9: mov ecx, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA8AF: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587CA8B2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587CA8B4: je 0x587ca8de
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587CA8B6: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587CA8B9: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587CA8BC: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587CA8BF: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587CA8C2: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587CA8C5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CA8C7: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587CA8CA: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587CA8CC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CA8CF: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CA8D2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CA8D5: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587CA8D8: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587CA8DB: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587CA8DE: mov eax, dword ptr [0x58a24648]
        __asm _emit 0xA1
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CA8E3: cmp dword ptr [eax + 0x160], 0x112
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA8ED: jle 0x587ca904
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587CA8EF: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA8F5: je 0x587ca904
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587CA8F7: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA8FD: add eax, 0x4480
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA902: jmp 0x587ca906
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CA904: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CA906: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA90C: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587CA90F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587CA911: je 0x587ca93b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587CA913: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587CA916: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587CA919: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587CA91C: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587CA91F: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587CA922: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CA924: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587CA927: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587CA929: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CA92C: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CA92F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CA932: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587CA935: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587CA938: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587CA93B: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587CA93D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x23
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CA942: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CA944: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CA947: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587CA94B: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587CA950: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CA952: je 0x587ca976
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587CA954: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CA958: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587CA95A: push ebx
        __asm _emit 0x53
        // 0x587CA95B: push ebx
        __asm _emit 0x53
        // 0x587CA95C: push ebp
        __asm _emit 0x55
        // 0x587CA95D: push ecx
        __asm _emit 0x51
        // 0x587CA95E: push esi
        __asm _emit 0x56
        // 0x587CA95F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CA961: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA966: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CA96C: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x587CA96F: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x587CA972: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CA974: jmp 0x587ca978
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CA976: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CA978: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA97D: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CA981: mov dword ptr [esi + 0x2b8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA987: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA98C: mov eax, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA992: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA997: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CA99B: mov eax, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA9A1: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA9A6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CA9AA: mov dword ptr [esi + 0x214], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA9B4: mov dword ptr [esi + 0x2bc], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA9BE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587CA9C0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CA9C4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA9CB: pop ecx
        __asm _emit 0x59
        // 0x587CA9CC: pop edi
        __asm _emit 0x5F
        // 0x587CA9CD: pop esi
        __asm _emit 0x5E
        // 0x587CA9CE: pop ebp
        __asm _emit 0x5D
        // 0x587CA9CF: pop ebx
        __asm _emit 0x5B
        // 0x587CA9D0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CA9D3: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
