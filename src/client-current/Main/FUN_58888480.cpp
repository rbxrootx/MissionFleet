// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58888480 .. +0x296 bytes.
extern "C" __declspec(naked) void FUN_58888480() {
    __asm {
        // 0x58888480: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58888482: push 0x58988648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58888487: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888848D: push eax
        __asm _emit 0x50
        // 0x5888848E: push ecx
        __asm _emit 0x51
        // 0x5888848F: push esi
        __asm _emit 0x56
        // 0x58888490: push edi
        __asm _emit 0x57
        // 0x58888491: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58888496: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58888498: push eax
        __asm _emit 0x50
        // 0x58888499: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888849D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588884A3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588884A5: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588884A9: mov dword ptr [esi], 0x5899fb0c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x0C
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588884AF: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588884B2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588884B4: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588884B8: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588884BA: je 0x588884c7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588884BC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588884BE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588884C0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588884C2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588884C4: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588884C7: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588884CA: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588884CC: je 0x588884d9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588884CE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588884D0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588884D2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588884D4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588884D6: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x588884D9: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588884DC: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588884DE: je 0x588884eb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588884E0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588884E2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588884E4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588884E6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588884E8: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x588884EB: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588884EE: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588884F0: je 0x588884fd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588884F2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588884F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588884F6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588884F8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588884FA: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588884FD: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58888500: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58888502: je 0x5888850f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58888504: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888506: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888508: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888850A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888850C: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5888850F: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58888512: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58888514: je 0x58888521
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58888516: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888518: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888851A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888851C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888851E: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x58888521: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58888524: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58888526: je 0x58888533
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58888528: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888852A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888852C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888852E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888530: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x58888533: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888539: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5888853B: je 0x5888854b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888853D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888853F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888541: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58888543: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888545: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888854B: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888551: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58888553: je 0x58888563
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58888555: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888557: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888559: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888855B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888855D: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888563: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888569: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5888856B: je 0x5888857b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888856D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888856F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888571: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58888573: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888575: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888857B: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888581: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58888583: je 0x58888593
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58888585: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888587: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888589: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888858B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888858D: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888593: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888599: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5888859B: je 0x588885ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888859D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888859F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588885A1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588885A3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588885A5: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588885AB: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588885B1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588885B3: je 0x588885c3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588885B5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588885B7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588885B9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588885BB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588885BD: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588885C3: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588885C9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588885CB: je 0x588885db
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588885CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588885CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588885D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588885D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588885D5: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588885DB: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588885E1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588885E3: je 0x588885f3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588885E5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588885E7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588885E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588885EB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588885ED: mov dword ptr [esi + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588885F3: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588885F9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588885FB: je 0x5888860b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588885FD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588885FF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888601: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58888603: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888605: mov dword ptr [esi + 0xf0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888860B: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888611: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58888613: je 0x58888623
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58888615: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888617: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888619: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888861B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888861D: mov dword ptr [esi + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888623: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888629: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5888862B: je 0x5888863b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888862D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888862F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888631: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58888633: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888635: mov dword ptr [esi + 0xf8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888863B: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5888863E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58888640: je 0x5888864d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58888642: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888644: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888646: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58888648: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888864A: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x5888864D: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888653: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58888655: je 0x58888665
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58888657: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888659: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888865B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888865D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888865F: mov dword ptr [esi + 0xd4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888665: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888866B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5888866D: je 0x5888867d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888866F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888671: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58888673: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58888675: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888677: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888867D: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888683: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58888685: je 0x58888695
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58888687: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888689: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888868B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888868D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888868F: mov dword ptr [esi + 0xdc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888695: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888869B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5888869D: je 0x588886ad
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888869F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588886A1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588886A3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588886A5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588886A7: mov dword ptr [esi + 0xe0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588886AD: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588886B3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588886B5: je 0x588886c5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588886B7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588886B9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588886BB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588886BD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588886BF: mov dword ptr [esi + 0xe4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588886C5: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588886CB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588886CD: je 0x588886dd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588886CF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588886D1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588886D3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588886D5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588886D7: mov dword ptr [esi + 0xe8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588886DD: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588886E3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588886E5: je 0x588886f5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588886E7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588886E9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588886EB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588886ED: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588886EF: mov dword ptr [esi + 0xfc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588886F5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588886F7: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588886FF: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xA5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58888704: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58888708: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888870F: pop ecx
        __asm _emit 0x59
        // 0x58888710: pop edi
        __asm _emit 0x5F
        // 0x58888711: pop esi
        __asm _emit 0x5E
        // 0x58888712: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58888715: ret
        __asm _emit 0xC3
    }
}
