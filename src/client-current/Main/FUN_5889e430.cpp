// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889E430 .. +0x46E bytes.
// Source symbol alias: FUN_5889e430.
extern "C" __declspec(naked) void FUN_5889e430() {
    __asm {
        // 0x5889E430: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5889E432: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889E437: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E43D: push eax
        __asm _emit 0x50
        // 0x5889E43E: push ecx
        __asm _emit 0x51
        // 0x5889E43F: push ebx
        __asm _emit 0x53
        // 0x5889E440: push ebp
        __asm _emit 0x55
        // 0x5889E441: push esi
        __asm _emit 0x56
        // 0x5889E442: push edi
        __asm _emit 0x57
        // 0x5889E443: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889E448: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5889E44A: push eax
        __asm _emit 0x50
        // 0x5889E44B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889E44F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E455: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889E457: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889E45B: mov dword ptr [esi], 0x589a0200
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889E461: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5889E464: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889E466: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889E46A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E46C: je 0x5889e479
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889E46E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E470: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E472: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E474: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E476: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5889E479: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5889E47C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E47E: je 0x5889e48b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889E480: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E482: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E484: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E486: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E488: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5889E48B: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5889E48E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E490: je 0x5889e49d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889E492: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E494: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E496: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E498: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E49A: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x5889E49D: mov ecx, dword ptr [esi + 0x364]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E4A3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E4A5: je 0x5889e4b5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E4A7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E4A9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E4AB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E4AD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E4AF: mov dword ptr [esi + 0x364], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E4B5: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E4BB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E4BD: je 0x5889e4cd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E4BF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E4C1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E4C3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E4C5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E4C7: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E4CD: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E4D3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E4D5: je 0x5889e4e5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E4D7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E4D9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E4DB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E4DD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E4DF: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E4E5: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E4EB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E4ED: je 0x5889e4fd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E4EF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E4F1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E4F3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E4F5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E4F7: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E4FD: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E503: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E505: je 0x5889e515
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E507: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E509: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E50B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E50D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E50F: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E515: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E51B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E51D: je 0x5889e52d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E51F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E521: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E523: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E525: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E527: mov dword ptr [esi + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E52D: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E533: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E535: je 0x5889e545
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E537: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E539: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E53B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E53D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E53F: mov dword ptr [esi + 0xb8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E545: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E54B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E54D: je 0x5889e55d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E54F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E551: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E553: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E555: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E557: mov dword ptr [esi + 0xbc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E55D: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E563: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E565: je 0x5889e575
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E567: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E569: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E56B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E56D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E56F: mov dword ptr [esi + 0xc0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E575: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E57B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E57D: je 0x5889e58d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E57F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E581: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E583: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E585: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E587: mov dword ptr [esi + 0xc4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E58D: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E593: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E595: je 0x5889e5a5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E597: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E599: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E59B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E59D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E59F: mov dword ptr [esi + 0x120], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E5A5: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E5AB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E5AD: je 0x5889e5bd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E5AF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E5B1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E5B3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E5B5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E5B7: mov dword ptr [esi + 0x124], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E5BD: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E5C3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E5C5: je 0x5889e5d5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E5C7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E5C9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E5CB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E5CD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E5CF: mov dword ptr [esi + 0xcc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E5D5: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E5DB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E5DD: je 0x5889e5ed
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E5DF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E5E1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E5E3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E5E5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E5E7: mov dword ptr [esi + 0xd0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E5ED: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E5F3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E5F5: je 0x5889e605
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E5F7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E5F9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E5FB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E5FD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E5FF: mov dword ptr [esi + 0x110], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E605: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E60B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E60D: je 0x5889e61d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E60F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E611: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E613: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E615: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E617: mov dword ptr [esi + 0x114], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E61D: mov ecx, dword ptr [esi + 0x360]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E623: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E625: je 0x5889e635
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E627: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E629: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E62B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E62D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E62F: mov dword ptr [esi + 0x360], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E635: lea ebx, [esi + 0x2e0]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E63B: mov ebp, 0x1f
        __asm _emit 0xBD
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E640: mov ecx, dword ptr [ebx - 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x84
        // 0x5889E643: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E645: je 0x5889e652
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889E647: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E649: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E64B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E64D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E64F: mov dword ptr [ebx - 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x84
        // 0x5889E652: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5889E654: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E656: je 0x5889e662
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5889E658: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E65A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E65C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E65E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E660: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x5889E662: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5889E665: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5889E668: jne 0x5889e640
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x5889E66A: mov ecx, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E670: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E672: je 0x5889e682
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E674: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E676: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E678: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E67A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E67C: mov dword ptr [esi + 0x248], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E682: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E688: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E68A: je 0x5889e69a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E68C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E68E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E690: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E692: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E694: mov dword ptr [esi + 0x24c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E69A: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E6A0: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E6A2: je 0x5889e6b2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E6A4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E6A6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E6A8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E6AA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E6AC: mov dword ptr [esi + 0x250], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E6B2: lea ebx, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x5889E6B5: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E6BA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E6C0: mov ecx, dword ptr [ebx - 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0xF8
        // 0x5889E6C3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E6C5: je 0x5889e6d2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889E6C7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E6C9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E6CB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E6CD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E6CF: mov dword ptr [ebx - 8], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0xF8
        // 0x5889E6D2: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5889E6D4: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E6D6: je 0x5889e6e2
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5889E6D8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E6DA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E6DC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E6DE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E6E0: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x5889E6E2: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x5889E6E5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E6E7: je 0x5889e6f4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889E6E9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E6EB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E6ED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E6EF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E6F1: mov dword ptr [ebx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x5889E6F4: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5889E6F7: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5889E6FA: jne 0x5889e6c0
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x5889E6FC: lea ebx, [esi + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E702: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E707: mov ecx, dword ptr [ebx - 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0xF8
        // 0x5889E70A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E70C: je 0x5889e719
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889E70E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E710: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E712: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E714: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E716: mov dword ptr [ebx - 8], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0xF8
        // 0x5889E719: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5889E71B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E71D: je 0x5889e729
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5889E71F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E721: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E723: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E725: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E727: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x5889E729: mov ecx, dword ptr [ebx - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0xE8
        // 0x5889E72C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E72E: je 0x5889e73b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889E730: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E732: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E734: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E736: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E738: mov dword ptr [ebx - 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0xE8
        // 0x5889E73B: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5889E73E: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5889E741: jne 0x5889e707
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x5889E743: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E749: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E74B: je 0x5889e75b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E74D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E74F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E751: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E753: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E755: mov dword ptr [esi + 0x128], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E75B: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E761: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E763: je 0x5889e773
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E765: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E767: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E769: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E76B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E76D: mov dword ptr [esi + 0x12c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E773: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E779: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E77B: je 0x5889e78b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E77D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E77F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E781: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E783: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E785: mov dword ptr [esi + 0x130], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E78B: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E791: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E793: je 0x5889e7a3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E795: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E797: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E799: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E79B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E79D: mov dword ptr [esi + 0xc8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E7A3: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E7A9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E7AB: je 0x5889e7bb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E7AD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E7AF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E7B1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E7B3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E7B5: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E7BB: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E7C1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E7C3: je 0x5889e7d3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E7C5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E7C7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E7C9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E7CB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E7CD: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E7D3: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E7D9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E7DB: je 0x5889e7eb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E7DD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E7DF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E7E1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E7E3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E7E5: mov dword ptr [esi + 0x134], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E7EB: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E7F1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E7F3: je 0x5889e803
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E7F5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E7F7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E7F9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E7FB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E7FD: mov dword ptr [esi + 0x138], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E803: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E809: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E80B: je 0x5889e81b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E80D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E80F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E811: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E813: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E815: mov dword ptr [esi + 0x13c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E81B: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E821: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E823: je 0x5889e833
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E825: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E827: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E829: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E82B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E82D: mov dword ptr [esi + 0x140], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E833: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E839: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E83B: je 0x5889e84b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E83D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E83F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E841: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E843: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E845: mov dword ptr [esi + 0x144], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E84B: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E851: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E853: je 0x5889e863
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E855: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E857: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E859: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E85B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E85D: mov dword ptr [esi + 0x148], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E863: mov ecx, dword ptr [esi + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E869: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889E86B: je 0x5889e87b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E86D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5889E86F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889E871: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889E873: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5889E875: mov dword ptr [esi + 0x14c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E87B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889E87D: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889E885: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889E88A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889E88E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E895: pop ecx
        __asm _emit 0x59
        // 0x5889E896: pop edi
        __asm _emit 0x5F
        // 0x5889E897: pop esi
        __asm _emit 0x5E
        // 0x5889E898: pop ebp
        __asm _emit 0x5D
        // 0x5889E899: pop ebx
        __asm _emit 0x5B
        // 0x5889E89A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5889E89D: ret
        __asm _emit 0xC3
    }
}
