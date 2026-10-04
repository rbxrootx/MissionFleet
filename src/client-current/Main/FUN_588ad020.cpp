// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AD020 .. +0x41F bytes.
// Source symbol alias: FUN_588ad020.
extern "C" __declspec(naked) void FUN_588ad020() {
    __asm {
        // 0x588AD020: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588AD022: push 0x58987eda
        __asm _emit 0x68
        __asm _emit 0xDA
        __asm _emit 0x7E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AD027: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD02D: push eax
        __asm _emit 0x50
        // 0x588AD02E: push ecx
        __asm _emit 0x51
        // 0x588AD02F: push ebx
        __asm _emit 0x53
        // 0x588AD030: push ebp
        __asm _emit 0x55
        // 0x588AD031: push esi
        __asm _emit 0x56
        // 0x588AD032: push edi
        __asm _emit 0x57
        // 0x588AD033: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588AD038: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588AD03A: push eax
        __asm _emit 0x50
        // 0x588AD03B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AD03F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD045: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AD047: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588AD04B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AD04F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AD053: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588AD057: push eax
        __asm _emit 0x50
        // 0x588AD058: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588AD05C: push ecx
        __asm _emit 0x51
        // 0x588AD05D: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588AD061: push edx
        __asm _emit 0x52
        // 0x588AD062: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588AD066: push eax
        __asm _emit 0x50
        // 0x588AD067: push ecx
        __asm _emit 0x51
        // 0x588AD068: push edx
        __asm _emit 0x52
        // 0x588AD069: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588AD06B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD070: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AD076: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588AD07B: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD080: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD088: mov dword ptr [esi], 0x589a07ec
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xEC
        __asm _emit 0x07
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588AD08E: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AD092: mov dword ptr [esp + 0x3c], 0x10
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD09A: lea ebx, [esi + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588AD09D: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD0A5: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588AD0A7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xFB
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AD0AC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588AD0AE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AD0B1: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588AD0B5: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588AD0BA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588AD0BC: je 0x588ad13a
        __asm _emit 0x74
        __asm _emit 0x7C
        // 0x588AD0BE: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD0C3: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD0C9: jle 0x588ad0e7
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x588AD0CB: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588AD0CD: jl 0x588ad0e7
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x588AD0CF: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD0D6: je 0x588ad0e7
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588AD0D8: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD0DE: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AD0E2: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588AD0E5: jmp 0x588ad0e9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD0E7: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588AD0E9: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AD0ED: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588AD0F1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588AD0F3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AD0F5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AD0F7: push edx
        __asm _emit 0x52
        // 0x588AD0F8: push eax
        __asm _emit 0x50
        // 0x588AD0F9: push esi
        __asm _emit 0x56
        // 0x588AD0FA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588AD0FC: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD101: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AD107: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588AD10A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588AD10C: je 0x588ad134
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588AD10E: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x588AD111: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588AD114: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588AD117: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588AD11A: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x588AD11D: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588AD11F: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588AD122: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AD125: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588AD128: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588AD12B: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588AD12E: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588AD131: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588AD134: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AD138: jmp 0x588ad13c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD13A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588AD13C: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x588AD141: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x588AD143: inc ebp
        __asm _emit 0x45
        // 0x588AD144: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588AD147: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x588AD14C: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588AD151: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AD155: jne 0x588ad0a5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AD15B: mov ebp, 6
        __asm _emit 0xBD
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD160: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AD164: mov dword ptr [esp + 0x3c], 0x18
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD16C: lea ebx, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x588AD16F: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD177: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588AD179: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xFA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AD17E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588AD180: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AD183: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588AD187: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588AD18C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588AD18E: je 0x588ad20c
        __asm _emit 0x74
        __asm _emit 0x7C
        // 0x588AD190: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD195: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD19B: jle 0x588ad1b9
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x588AD19D: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588AD19F: jl 0x588ad1b9
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x588AD1A1: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD1A8: je 0x588ad1b9
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588AD1AA: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD1B0: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AD1B4: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588AD1B7: jmp 0x588ad1bb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD1B9: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588AD1BB: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AD1BF: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588AD1C3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588AD1C5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AD1C7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AD1C9: push edx
        __asm _emit 0x52
        // 0x588AD1CA: push eax
        __asm _emit 0x50
        // 0x588AD1CB: push esi
        __asm _emit 0x56
        // 0x588AD1CC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588AD1CE: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x5F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD1D3: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AD1D9: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588AD1DC: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588AD1DE: je 0x588ad206
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588AD1E0: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x588AD1E3: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588AD1E6: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588AD1E9: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588AD1EC: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x588AD1EF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588AD1F1: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588AD1F4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AD1F7: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588AD1FA: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588AD1FD: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588AD200: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588AD203: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588AD206: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AD20A: jmp 0x588ad20e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD20C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588AD20E: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x588AD213: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x588AD215: inc ebp
        __asm _emit 0x45
        // 0x588AD216: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588AD219: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x588AD21E: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588AD223: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AD227: jne 0x588ad177
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AD22D: mov eax, 0xbfff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD232: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AD236: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588AD239: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AD23E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x5A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD243: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588AD246: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD24B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x5A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD250: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x588AD253: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AD258: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x5A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD25D: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x588AD260: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD265: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x5A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD26A: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD26F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xF9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AD274: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AD277: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AD27B: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AD27F: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588AD283: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588AD288: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AD28A: je 0x588ad2be
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588AD28C: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x588AD291: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AD293: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588AD298: lea ecx, [edi + 0x32]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x32
        // 0x588AD29B: push ecx
        __asm _emit 0x51
        // 0x588AD29C: lea edx, [ebx + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD2A2: push edx
        __asm _emit 0x52
        // 0x588AD2A3: lea ecx, [edi + 0x25]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x25
        // 0x588AD2A6: push ecx
        __asm _emit 0x51
        // 0x588AD2A7: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD2AD: lea edx, [ebx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x20
        // 0x588AD2B0: push edx
        __asm _emit 0x52
        // 0x588AD2B1: push ecx
        __asm _emit 0x51
        // 0x588AD2B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AD2B4: push esi
        __asm _emit 0x56
        // 0x588AD2B5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AD2B7: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x3D
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AD2BC: jmp 0x588ad2c0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD2BE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AD2C0: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD2C5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588AD2CA: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588AD2CD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xF9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AD2D2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AD2D5: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AD2D9: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588AD2DE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AD2E0: je 0x588ad31f
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588AD2E2: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD2E8: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588AD2EF: jle 0x588ad308
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588AD2F1: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD2F8: je 0x588ad308
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588AD2FA: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD300: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD306: jmp 0x588ad30a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD308: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588AD30A: lea ecx, [edi + 0x3e]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x3E
        // 0x588AD30D: push ecx
        __asm _emit 0x51
        // 0x588AD30E: lea ecx, [ebx + 0x49]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x49
        // 0x588AD311: push ecx
        __asm _emit 0x51
        // 0x588AD312: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588AD314: push edx
        __asm _emit 0x52
        // 0x588AD315: push esi
        __asm _emit 0x56
        // 0x588AD316: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AD318: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x9D
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AD31D: jmp 0x588ad321
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD31F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AD321: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588AD324: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588AD326: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588AD32B: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588AD32E: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xBB
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588AD333: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD338: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xF9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AD33D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AD340: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AD344: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588AD349: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AD34B: je 0x588ad395
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x588AD34D: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD353: cmp dword ptr [ecx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588AD35A: jle 0x588ad370
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588AD35C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD363: je 0x588ad370
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AD365: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD36B: sub edx, -0x80
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x80
        // 0x588AD36E: jmp 0x588ad372
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD370: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588AD372: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588AD374: lea ecx, [edi + 0x4e]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x4E
        // 0x588AD377: push ecx
        __asm _emit 0x51
        // 0x588AD378: lea ecx, [ebx + 0x4f]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x4F
        // 0x588AD37B: push ecx
        __asm _emit 0x51
        // 0x588AD37C: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD382: push edx
        __asm _emit 0x52
        // 0x588AD383: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD389: push esi
        __asm _emit 0x56
        // 0x588AD38A: push edx
        __asm _emit 0x52
        // 0x588AD38B: push ecx
        __asm _emit 0x51
        // 0x588AD38C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AD38E: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x0A
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AD393: jmp 0x588ad397
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD395: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AD397: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD39C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588AD3A1: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588AD3A4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xF8
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AD3A9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AD3AC: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AD3B0: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588AD3B5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AD3B7: je 0x588ad401
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x588AD3B9: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD3BF: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588AD3C6: jle 0x588ad3dc
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588AD3C8: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD3CF: je 0x588ad3dc
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AD3D1: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD3D7: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x588AD3DA: jmp 0x588ad3de
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD3DC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588AD3DE: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD3E4: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588AD3E6: add edi, 0x4e
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x4E
        // 0x588AD3E9: push edi
        __asm _emit 0x57
        // 0x588AD3EA: add ebx, 0x7b
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x7B
        // 0x588AD3ED: push ebx
        __asm _emit 0x53
        // 0x588AD3EE: push edx
        __asm _emit 0x52
        // 0x588AD3EF: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AD3F5: push esi
        __asm _emit 0x56
        // 0x588AD3F6: push edx
        __asm _emit 0x52
        // 0x588AD3F7: push ecx
        __asm _emit 0x51
        // 0x588AD3F8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AD3FA: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x09
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AD3FF: jmp 0x588ad403
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AD401: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AD403: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588AD406: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD40B: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588AD40F: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AD413: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD418: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AD41B: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD420: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588AD423: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AD427: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588AD429: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AD42D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AD434: pop ecx
        __asm _emit 0x59
        // 0x588AD435: pop edi
        __asm _emit 0x5F
        // 0x588AD436: pop esi
        __asm _emit 0x5E
        // 0x588AD437: pop ebp
        __asm _emit 0x5D
        // 0x588AD438: pop ebx
        __asm _emit 0x5B
        // 0x588AD439: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588AD43C: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
