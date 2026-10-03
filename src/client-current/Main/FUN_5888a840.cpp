// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888A840 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_5888a840() {
    __asm {
        // 0x5888A840: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5888A842: push 0x58987ae8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888A847: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A84D: push eax
        __asm _emit 0x50
        // 0x5888A84E: push ecx
        __asm _emit 0x51
        // 0x5888A84F: push ebx
        __asm _emit 0x53
        // 0x5888A850: push ebp
        __asm _emit 0x55
        // 0x5888A851: push esi
        __asm _emit 0x56
        // 0x5888A852: push edi
        __asm _emit 0x57
        // 0x5888A853: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5888A858: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5888A85A: push eax
        __asm _emit 0x50
        // 0x5888A85B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888A85F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A865: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5888A867: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888A86B: mov dword ptr [edi], 0x5899fbd8
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xD8
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888A871: mov ecx, dword ptr [edi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A877: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5888A879: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5888A87D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A87F: je 0x5888a88f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888A881: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A883: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A885: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A887: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A889: mov dword ptr [edi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A88F: mov ecx, dword ptr [edi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A895: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A897: je 0x5888a8a7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888A899: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A89B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A89D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A89F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A8A1: mov dword ptr [edi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A8A7: mov ecx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A8AD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A8AF: je 0x5888a8bf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888A8B1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A8B3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A8B5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A8B7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A8B9: mov dword ptr [edi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A8BF: mov ecx, dword ptr [edi + 0x224]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A8C5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A8C7: je 0x5888a8d7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888A8C9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A8CB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A8CD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A8CF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A8D1: mov dword ptr [edi + 0x224], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A8D7: mov ecx, dword ptr [edi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A8DD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A8DF: je 0x5888a8ef
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888A8E1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A8E3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A8E5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A8E7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A8E9: mov dword ptr [edi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A8EF: lea esi, [edi + 0x124]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A8F5: mov ebp, 0x20
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A8FA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A900: mov ecx, dword ptr [esi - 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888A906: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A908: je 0x5888a918
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888A90A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A90C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A90E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A910: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A912: mov dword ptr [esi - 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888A918: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5888A91A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A91C: je 0x5888a928
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5888A91E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A920: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A922: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A924: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A926: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x5888A928: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A92E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A930: je 0x5888a940
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888A932: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A934: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A936: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A938: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A93A: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A940: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5888A943: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5888A946: jne 0x5888a900
        __asm _emit 0x75
        __asm _emit 0xB8
        // 0x5888A948: mov ecx, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A94E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A950: je 0x5888a960
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888A952: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A954: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A956: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A958: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A95A: mov dword ptr [edi + 0x11c], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A960: mov ecx, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A966: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888A968: je 0x5888a978
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888A96A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888A96C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888A96E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888A970: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888A972: mov dword ptr [edi + 0x120], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A978: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5888A97A: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888A982: call 0x587b5f50
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xB5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5888A987: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888A98B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A992: pop ecx
        __asm _emit 0x59
        // 0x5888A993: pop edi
        __asm _emit 0x5F
        // 0x5888A994: pop esi
        __asm _emit 0x5E
        // 0x5888A995: pop ebp
        __asm _emit 0x5D
        // 0x5888A996: pop ebx
        __asm _emit 0x5B
        // 0x5888A997: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5888A99A: ret
        __asm _emit 0xC3
    }
}
