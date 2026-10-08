// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 871 bytes in 1 exact ranges.
// Source symbol alias: FUN_5884a820.

// Ghidra body range 0x5884A820..0x5884AB87; 871 mapped bytes.
extern "C" __declspec(naked) void FUN_5884a820_segment_00() {
    __asm {
        // 0x5884A820: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x5884A823: push ebx
        __asm _emit 0x53
        // 0x5884A824: mov ebx, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A82A: push ebp
        __asm _emit 0x55
        // 0x5884A82B: push esi
        __asm _emit 0x56
        // 0x5884A82C: lea esi, [ecx + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A832: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A834: push edi
        __asm _emit 0x57
        // 0x5884A835: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884A839: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884A83D: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884A841: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5884A844: jbe 0x5884a84b
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884A846: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A84B: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x5884A84D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5884A850: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x5884A853: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x5884A856: jbe 0x5884a85d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884A858: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A85D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5884A85F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A861: je 0x5884a867
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5884A863: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5884A865: je 0x5884a86c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5884A867: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A86C: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5884A86E: je 0x5884a8d6
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x5884A870: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A872: jne 0x5884a8a7
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x5884A874: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A879: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A87B: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x5884A87E: jb 0x5884a885
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884A880: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A885: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5884A887: cmp dword ptr [eax + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5884A88B: jne 0x5884a8af
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x5884A88D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A88F: jne 0x5884a8ab
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5884A891: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A896: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A898: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x5884A89B: jb 0x5884a8a2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884A89D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A8A2: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5884A8A5: jmp 0x5884a850
        __asm _emit 0xEB
        __asm _emit 0xA9
        // 0x5884A8A7: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884A8A9: jmp 0x5884a87b
        __asm _emit 0xEB
        __asm _emit 0xD0
        // 0x5884A8AB: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884A8AD: jmp 0x5884a898
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5884A8AF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A8B1: jne 0x5884a987
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A8B7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A8BC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A8BE: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x5884A8C1: jb 0x5884a8c8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884A8C3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A8C8: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5884A8CA: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884A8CE: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884A8D2: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884A8D6: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884A8DA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884A8DE: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5884A8E0: jne 0x5884a9c0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A8E6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884A8E8: je 0x5884a9c0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A8EE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884A8F0: je 0x5884a9c0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A8F6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884A8F8: call 0x588205f0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x5C
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5884A8FD: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884A901: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884A905: push edx
        __asm _emit 0x52
        // 0x5884A906: push eax
        __asm _emit 0x50
        // 0x5884A907: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5884A90B: push ecx
        __asm _emit 0x51
        // 0x5884A90C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884A90E: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884A913: lea edx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884A917: push edx
        __asm _emit 0x52
        // 0x5884A918: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884A91A: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xAB
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5884A91F: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5884A922: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5884A925: jbe 0x5884a92c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884A927: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A92C: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x5884A92E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5884A930: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x5884A933: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x5884A936: jbe 0x5884a93d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884A938: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A93D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5884A93F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A941: je 0x5884a947
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5884A943: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5884A945: je 0x5884a94c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5884A947: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A94C: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5884A94E: je 0x5884a9b2
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x5884A950: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A952: jne 0x5884a98e
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x5884A954: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A959: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A95B: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x5884A95E: jb 0x5884a965
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884A960: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A965: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5884A967: cmp dword ptr [eax + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5884A96B: jne 0x5884a996
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x5884A96D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A96F: jne 0x5884a992
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5884A971: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A976: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884A978: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x5884A97B: jb 0x5884a982
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884A97D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A982: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5884A985: jmp 0x5884a930
        __asm _emit 0xEB
        __asm _emit 0xA9
        // 0x5884A987: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884A989: jmp 0x5884a8be
        __asm _emit 0xE9
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884A98E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884A990: jmp 0x5884a95b
        __asm _emit 0xEB
        __asm _emit 0xC9
        // 0x5884A992: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884A994: jmp 0x5884a978
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x5884A996: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884A998: jne 0x5884a9bc
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x5884A99A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A99F: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x5884A9A2: jb 0x5884a9a9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884A9A4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A9A9: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5884A9AB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884A9AD: call 0x588205f0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x5C
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5884A9B2: pop edi
        __asm _emit 0x5F
        // 0x5884A9B3: pop esi
        __asm _emit 0x5E
        // 0x5884A9B4: pop ebp
        __asm _emit 0x5D
        // 0x5884A9B5: pop ebx
        __asm _emit 0x5B
        // 0x5884A9B6: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x5884A9B9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884A9BC: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x5884A9BE: jmp 0x5884a99f
        __asm _emit 0xEB
        __asm _emit 0xDF
        // 0x5884A9C0: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5884A9C3: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5884A9C6: jbe 0x5884a9cd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884A9C8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A9CD: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x5884A9CF: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884A9D3: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x5884A9D5: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5884A9D8: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5884A9DB: jbe 0x5884a9e2
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884A9DD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A9E2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5884A9E4: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5884A9E6: je 0x5884a9ec
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5884A9E8: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5884A9EA: je 0x5884a9f1
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5884A9EC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884A9F1: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x5884A9F3: je 0x5884a9b2
        __asm _emit 0x74
        __asm _emit 0xBD
        // 0x5884A9F5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5884A9F7: jne 0x5884aa92
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884A9FD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AA02: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884AA04: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5884AA07: jb 0x5884aa0e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884AA09: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AA0E: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5884AA11: cmp ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884AA15: jne 0x5884ab62
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AA1B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5884AA1D: jne 0x5884aa99
        __asm _emit 0x75
        __asm _emit 0x7A
        // 0x5884AA1F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AA24: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884AA26: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5884AA29: jb 0x5884aa30
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884AA2B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AA30: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5884AA35: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5884AA38: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884AA3C: je 0x5884aadf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884AA42: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884AA46: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884AA48: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5884AA4A: call 0x588205f0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x5B
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5884AA4F: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884AA53: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5884AA56: lea ecx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5884AA59: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5884AA5B: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5884AA5E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AA60: jle 0x5884aa72
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5884AA62: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5884AA64: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5884AA66: push eax
        __asm _emit 0x50
        // 0x5884AA67: push ecx
        __asm _emit 0x51
        // 0x5884AA68: push eax
        __asm _emit 0x50
        // 0x5884AA69: push edi
        __asm _emit 0x57
        // 0x5884AA6A: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AA6F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5884AA72: add dword ptr [esi + 0x10], -4
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0xFC
        // 0x5884AA76: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5884AA79: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5884AA7C: ja 0x5884aa82
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5884AA7E: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5884AA80: jbe 0x5884aa87
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884AA82: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AA87: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5884AA8A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884AA8C: jne 0x5884aa9d
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5884AA8E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884AA90: jmp 0x5884aaa5
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5884AA92: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5884AA94: jmp 0x5884aa04
        __asm _emit 0xE9
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AA99: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5884AA9B: jmp 0x5884aa26
        __asm _emit 0xEB
        __asm _emit 0x89
        // 0x5884AA9D: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5884AAA0: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5884AAA2: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5884AAA5: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5884AAA8: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5884AAAA: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5884AAAC: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5884AAAF: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5884AAB1: jae 0x5884aabd
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x5884AAB3: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x5884AAB5: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5884AAB8: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5884AABB: jmp 0x5884aadb
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5884AABD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5884AABF: jbe 0x5884aac6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884AAC1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AAC6: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5884AAC8: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884AACC: push ecx
        __asm _emit 0x51
        // 0x5884AACD: push edi
        __asm _emit 0x57
        // 0x5884AACE: push eax
        __asm _emit 0x50
        // 0x5884AACF: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884AAD3: push edx
        __asm _emit 0x52
        // 0x5884AAD4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884AAD6: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xBD
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5884AADB: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884AADF: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5884AAE2: lea ecx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x5884AAE5: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5884AAE7: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5884AAEA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AAEC: jle 0x5884aafe
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5884AAEE: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5884AAF0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5884AAF2: push eax
        __asm _emit 0x50
        // 0x5884AAF3: push ecx
        __asm _emit 0x51
        // 0x5884AAF4: push eax
        __asm _emit 0x50
        // 0x5884AAF5: push ebp
        __asm _emit 0x55
        // 0x5884AAF6: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AAFB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5884AAFE: add dword ptr [esi + 0x10], -4
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0xFC
        // 0x5884AB02: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5884AB05: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x5884AB08: ja 0x5884ab0e
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5884AB0A: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5884AB0C: jbe 0x5884ab13
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884AB0E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AB13: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5884AB16: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5884AB19: jbe 0x5884ab20
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884AB1B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AB20: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5884AB22: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884AB26: push ecx
        __asm _emit 0x51
        // 0x5884AB27: push edi
        __asm _emit 0x57
        // 0x5884AB28: push eax
        __asm _emit 0x50
        // 0x5884AB29: lea edx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884AB2D: push edx
        __asm _emit 0x52
        // 0x5884AB2E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884AB30: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xBD
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5884AB35: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5884AB38: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5884AB3B: jbe 0x5884ab42
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5884AB3D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AB42: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5884AB44: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884AB46: jne 0x5884ab7f
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x5884AB48: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AB4D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884AB4F: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5884AB52: jb 0x5884ab59
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884AB54: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AB59: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5884AB5B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884AB5D: call 0x588205f0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x5A
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5884AB62: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5884AB64: jne 0x5884ab83
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5884AB66: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AB6B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884AB6D: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5884AB70: jb 0x5884ab77
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5884AB72: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884AB77: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5884AB7A: jmp 0x5884a9d5
        __asm _emit 0xE9
        __asm _emit 0x56
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884AB7F: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5884AB81: jmp 0x5884ab4f
        __asm _emit 0xEB
        __asm _emit 0xCC
        // 0x5884AB83: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5884AB85: jmp 0x5884ab6d
        __asm _emit 0xEB
        __asm _emit 0xE6
    }
}
