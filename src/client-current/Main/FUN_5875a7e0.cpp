// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875A7E0 .. +0x435 bytes.
// Source symbol alias: FUN_5875a7e0.
extern "C" __declspec(naked) void FUN_5875a7e0() {
    __asm {
        // 0x5875A7E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5875A7E2: push 0x5897ea8b
        __asm _emit 0x68
        __asm _emit 0x8B
        __asm _emit 0xEA
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5875A7E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A7ED: push eax
        __asm _emit 0x50
        // 0x5875A7EE: push ecx
        __asm _emit 0x51
        // 0x5875A7EF: push ebx
        __asm _emit 0x53
        // 0x5875A7F0: push ebp
        __asm _emit 0x55
        // 0x5875A7F1: push esi
        __asm _emit 0x56
        // 0x5875A7F2: push edi
        __asm _emit 0x57
        // 0x5875A7F3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875A7F8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875A7FA: push eax
        __asm _emit 0x50
        // 0x5875A7FB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875A7FF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A805: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875A807: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875A80B: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5875A80F: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5875A813: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5875A817: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875A81B: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875A81F: push eax
        __asm _emit 0x50
        // 0x5875A820: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875A824: push ecx
        __asm _emit 0x51
        // 0x5875A825: push edx
        __asm _emit 0x52
        // 0x5875A826: push ebp
        __asm _emit 0x55
        // 0x5875A827: push ebx
        __asm _emit 0x53
        // 0x5875A828: push eax
        __asm _emit 0x50
        // 0x5875A829: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875A82B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875A830: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875A836: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875A83B: mov cx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875A840: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875A842: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5875A844: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875A848: mov dword ptr [esi], 0x5898d7c0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC0
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875A84E: mov word ptr [esi + 0xac], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A855: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5875A858: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5875A85B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x23
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875A860: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5875A862: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875A865: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875A869: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5875A86E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875A870: je 0x5875a897
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5875A872: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5875A874: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875A876: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875A878: lea edx, [ebp + 0x2f]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x2F
        // 0x5875A87B: push edx
        __asm _emit 0x52
        // 0x5875A87C: lea eax, [ebx + 0x22]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x22
        // 0x5875A87F: push eax
        __asm _emit 0x50
        // 0x5875A880: push esi
        __asm _emit 0x56
        // 0x5875A881: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875A883: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x89
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875A888: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875A88E: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A895: jmp 0x5875a899
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A897: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875A899: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5875A89B: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5875A8A0: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x5875A8A3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875A8A8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5875A8AA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875A8AD: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875A8B1: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5875A8B6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875A8B8: je 0x5875a8df
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5875A8BA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5875A8BC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875A8BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875A8C0: lea ecx, [ebp + 0x2f]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x2F
        // 0x5875A8C3: push ecx
        __asm _emit 0x51
        // 0x5875A8C4: lea edx, [ebx + 0x22]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x22
        // 0x5875A8C7: push edx
        __asm _emit 0x52
        // 0x5875A8C8: push esi
        __asm _emit 0x56
        // 0x5875A8C9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875A8CB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x88
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875A8D0: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875A8D6: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A8DD: jmp 0x5875a8e1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A8DF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875A8E1: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5875A8E3: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5875A8E8: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x5875A8EB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x23
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875A8F0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875A8F3: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875A8F7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875A8F9: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5875A8FE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875A900: je 0x5875a937
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5875A902: mov ecx, dword ptr [0x58a24770]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A908: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A90E: jle 0x5875a920
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5875A910: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A916: je 0x5875a920
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5875A918: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A91E: jmp 0x5875a922
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A920: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875A922: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5875A924: lea edx, [ebp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x40
        // 0x5875A927: push edx
        __asm _emit 0x52
        // 0x5875A928: lea edx, [ebx + 0x22]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x22
        // 0x5875A92B: push edx
        __asm _emit 0x52
        // 0x5875A92C: push ecx
        __asm _emit 0x51
        // 0x5875A92D: push esi
        __asm _emit 0x56
        // 0x5875A92E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875A930: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xA0
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875A935: jmp 0x5875a939
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A937: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875A939: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5875A93B: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5875A940: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5875A943: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x23
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875A948: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875A94B: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875A94F: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5875A954: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875A956: je 0x5875a994
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5875A958: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A95E: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x5875A965: jle 0x5875a97d
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5875A967: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A96D: je 0x5875a97d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875A96F: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A975: add edx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A97B: jmp 0x5875a97f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A97D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5875A97F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5875A981: lea ecx, [ebp + 0x3a]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x3A
        // 0x5875A984: push ecx
        __asm _emit 0x51
        // 0x5875A985: lea ecx, [ebx + 0x15]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x15
        // 0x5875A988: push ecx
        __asm _emit 0x51
        // 0x5875A989: push edx
        __asm _emit 0x52
        // 0x5875A98A: push esi
        __asm _emit 0x56
        // 0x5875A98B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875A98D: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875A992: jmp 0x5875a996
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A994: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875A996: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5875A998: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5875A99D: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5875A9A0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x22
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875A9A5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875A9A8: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875A9AC: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5875A9B1: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875A9B3: je 0x5875a9f1
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5875A9B5: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A9BB: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x5875A9C2: jle 0x5875a9da
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5875A9C4: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A9CA: je 0x5875a9da
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875A9CC: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A9D2: add edx, 0x280
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A9D8: jmp 0x5875a9dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A9DA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5875A9DC: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5875A9DE: lea ecx, [ebp + 0x3a]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x3A
        // 0x5875A9E1: push ecx
        __asm _emit 0x51
        // 0x5875A9E2: lea ecx, [ebx + 0x15]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x15
        // 0x5875A9E5: push ecx
        __asm _emit 0x51
        // 0x5875A9E6: push edx
        __asm _emit 0x52
        // 0x5875A9E7: push esi
        __asm _emit 0x56
        // 0x5875A9E8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875A9EA: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xA0
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875A9EF: jmp 0x5875a9f3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A9F1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875A9F3: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5875A9F5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5875A9FA: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5875A9FD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x22
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875AA02: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875AA05: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875AA09: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5875AA0E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875AA10: je 0x5875aa4e
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5875AA12: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875AA18: cmp dword ptr [ecx + 0x164], 0x41
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        // 0x5875AA1F: jle 0x5875aa37
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5875AA21: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AA27: je 0x5875aa37
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875AA29: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AA2F: mov ecx, dword ptr [edx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AA35: jmp 0x5875aa39
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875AA37: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875AA39: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5875AA3B: lea edx, [ebp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x2C
        // 0x5875AA3E: push edx
        __asm _emit 0x52
        // 0x5875AA3F: lea edx, [ebx + 0x1f]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x1F
        // 0x5875AA42: push edx
        __asm _emit 0x52
        // 0x5875AA43: push ecx
        __asm _emit 0x51
        // 0x5875AA44: push esi
        __asm _emit 0x56
        // 0x5875AA45: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875AA47: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x72
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875AA4C: jmp 0x5875aa50
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875AA4E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875AA50: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5875AA53: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875AA58: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5875AA5D: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5875AA60: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x82
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AA65: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5875AA68: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AA6D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875AA71: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5875AA74: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5875AA76: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875AA7A: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5875AA7C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x21
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875AA81: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875AA84: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875AA88: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5875AA8D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875AA8F: je 0x5875aabd
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5875AA91: push edi
        __asm _emit 0x57
        // 0x5875AA92: push edi
        __asm _emit 0x57
        // 0x5875AA93: push 0xffd997
        __asm _emit 0x68
        __asm _emit 0x97
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5875AA98: lea ecx, [ebp + 0x3a]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x3A
        // 0x5875AA9B: push ecx
        __asm _emit 0x51
        // 0x5875AA9C: lea edx, [ebx + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AAA2: push edx
        __asm _emit 0x52
        // 0x5875AAA3: lea ecx, [ebp + 0x2e]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x2E
        // 0x5875AAA6: push ecx
        __asm _emit 0x51
        // 0x5875AAA7: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875AAAD: lea edx, [ebx + 0x3a]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3A
        // 0x5875AAB0: push edx
        __asm _emit 0x52
        // 0x5875AAB1: push ecx
        __asm _emit 0x51
        // 0x5875AAB2: push edi
        __asm _emit 0x57
        // 0x5875AAB3: push esi
        __asm _emit 0x56
        // 0x5875AAB4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875AAB6: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x87
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875AABB: jmp 0x5875aabf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875AABD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875AABF: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5875AAC1: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5875AAC6: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5875AAC9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x21
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875AACE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875AAD1: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875AAD5: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5875AADA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875AADC: je 0x5875ab0a
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5875AADE: push edi
        __asm _emit 0x57
        // 0x5875AADF: push edi
        __asm _emit 0x57
        // 0x5875AAE0: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5875AAE5: lea edx, [ebp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x48
        // 0x5875AAE8: push edx
        __asm _emit 0x52
        // 0x5875AAE9: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875AAEF: lea ecx, [ebx + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AAF5: push ecx
        __asm _emit 0x51
        // 0x5875AAF6: add ebp, 0x3d
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x3D
        // 0x5875AAF9: push ebp
        __asm _emit 0x55
        // 0x5875AAFA: add ebx, 0x3a
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x3A
        // 0x5875AAFD: push ebx
        __asm _emit 0x53
        // 0x5875AAFE: push edx
        __asm _emit 0x52
        // 0x5875AAFF: push edi
        __asm _emit 0x57
        // 0x5875AB00: push esi
        __asm _emit 0x56
        // 0x5875AB01: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875AB03: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x87
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875AB08: jmp 0x5875ab0c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875AB0A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875AB0C: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5875AB0F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875AB11: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875AB13: push 0x88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AB18: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5875AB1D: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x5875AB20: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x5875AB23: mov word ptr [esi + 0x9c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AB2A: mov word ptr [esi + 0x9e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AB31: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AB37: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AB3D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x21
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875AB42: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875AB45: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875AB49: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x5875AB4E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875AB50: je 0x5875ab66
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5875AB52: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5875AB55: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5875AB58: push edx
        __asm _emit 0x52
        // 0x5875AB59: push ecx
        __asm _emit 0x51
        // 0x5875AB5A: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5875AB5C: push esi
        __asm _emit 0x56
        // 0x5875AB5D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875AB5F: call 0x58751e80
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x73
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875AB64: jmp 0x5875ab68
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875AB66: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875AB68: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AB6E: mov dword ptr [eax + 0x80], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AB74: mov ebx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AB7A: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x5875AB7D: mov edx, 0x7d0
        __asm _emit 0xBA
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AB82: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5875AB87: mov word ptr [ebx + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x26
        // 0x5875AB8B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5875AB8D: je 0x5875ab95
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875AB8F: push ebx
        __asm _emit 0x53
        // 0x5875AB90: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x83
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AB95: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x5875AB98: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5875AB9A: je 0x5875aba2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875AB9C: push ebx
        __asm _emit 0x53
        // 0x5875AB9D: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x83
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875ABA2: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ABA8: mov dword ptr [eax + 0x78], 0x64
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ABAF: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ABB5: mov dword ptr [eax + 0x6c], 0x78
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x6C
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ABBC: mov dword ptr [eax + 0x70], 0x82
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x70
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ABC3: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ABC9: mov dword ptr [ecx + 0x68], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ABD0: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ABD6: mov eax, 0x14
        __asm _emit 0xB8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ABDB: mov word ptr [edx + 0x7c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x7C
        // 0x5875ABDF: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5875ABE2: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5875ABE5: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x5875ABE8: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5875ABEB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5875ABEE: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5875ABF1: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5875ABF4: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5875ABF7: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5875ABFA: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5875ABFD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875ABFF: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875AC03: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AC0A: pop ecx
        __asm _emit 0x59
        // 0x5875AC0B: pop edi
        __asm _emit 0x5F
        // 0x5875AC0C: pop esi
        __asm _emit 0x5E
        // 0x5875AC0D: pop ebp
        __asm _emit 0x5D
        // 0x5875AC0E: pop ebx
        __asm _emit 0x5B
        // 0x5875AC0F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5875AC12: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
