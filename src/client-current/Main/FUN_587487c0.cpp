// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 751 bytes in 7 exact ranges.
// Source symbol alias: FUN_587487c0.

// Ghidra body range 0x587487C0..0x58748878; 184 mapped bytes.
extern "C" __declspec(naked) void FUN_587487c0_segment_00() {
    __asm {
        // 0x587487C0: push ebp
        __asm _emit 0x55
        // 0x587487C1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587487C3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x587487C6: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587487C8: push 0x5897e2b3
        __asm _emit 0x68
        __asm _emit 0xB3
        __asm _emit 0xE2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x587487CD: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587487D3: push eax
        __asm _emit 0x50
        // 0x587487D4: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x587487D7: push ebx
        __asm _emit 0x53
        // 0x587487D8: push ebp
        __asm _emit 0x55
        // 0x587487D9: push esi
        __asm _emit 0x56
        // 0x587487DA: push edi
        __asm _emit 0x57
        // 0x587487DB: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587487E0: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587487E2: push eax
        __asm _emit 0x50
        // 0x587487E3: lea eax, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587487E7: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587487ED: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587487F1: mov esi, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x2C
        // 0x587487F4: cmp esi, dword ptr [ecx + 0x30]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x30
        // 0x587487F7: lea ebx, [ecx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x20
        // 0x587487FA: jbe 0x58748801
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587487FC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748801: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x58748803: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58748805: mov esi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x58748808: cmp dword ptr [ebx + 0xc], esi
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x5874880B: jbe 0x58748812
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5874880D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748812: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58748814: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58748816: je 0x5874881c
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58748818: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5874881A: je 0x58748821
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5874881C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748821: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x58748823: je 0x587488f3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748829: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5874882B: jne 0x587488dd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748831: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748836: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58748838: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5874883B: jb 0x58748842
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5874883D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748842: cmp dword ptr [ebp], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748846: je 0x587488c0
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x58748848: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5874884A: jne 0x587488e4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748850: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748855: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58748857: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5874885A: jb 0x58748861
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5874885C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748861: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58748864: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58748866: je 0x587488a4
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x58748868: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874886E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58748870: je 0x5874887b
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58748872: push eax
        __asm _emit 0x50
        // 0x58748873: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x43
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5874887B..0x5874889B; 32 mapped bytes.
extern "C" __declspec(naked) void FUN_587487c0_segment_01() {
    __asm {
        // 0x5874887B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874887D: mov dword ptr [esi + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748883: mov dword ptr [esi + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748889: mov dword ptr [esi + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874888F: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748895: push eax
        __asm _emit 0x50
        // 0x58748896: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x43
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587488A4..0x5874893A; 150 mapped bytes.
extern "C" __declspec(naked) void FUN_587487c0_segment_02() {
    __asm {
        // 0x587488A4: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587488A6: jne 0x587488eb
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x587488A8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x43
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587488AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587488AF: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587488B2: jb 0x587488b9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587488B4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x43
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587488B9: mov dword ptr [ebp], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587488C0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587488C2: jne 0x587488ef
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x587488C4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x43
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587488C9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587488CB: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587488CE: jb 0x587488d5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587488D0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x43
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587488D5: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587488D8: jmp 0x58748805
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587488DD: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587488DF: jmp 0x58748838
        __asm _emit 0xE9
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587488E4: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587488E6: jmp 0x58748857
        __asm _emit 0xE9
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587488EB: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587488ED: jmp 0x587488af
        __asm _emit 0xEB
        __asm _emit 0xC0
        // 0x587488EF: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587488F1: jmp 0x587488cb
        __asm _emit 0xEB
        __asm _emit 0xD8
        // 0x587488F3: mov ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x587488F6: cmp dword ptr [ebx + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x587488F9: jbe 0x58748900
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587488FB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x43
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748900: mov esi, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x58748903: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x58748905: cmp esi, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x58748908: jbe 0x5874890f
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5874890A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x43
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874890F: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58748911: push ebp
        __asm _emit 0x55
        // 0x58748912: push edi
        __asm _emit 0x57
        // 0x58748913: push esi
        __asm _emit 0x56
        // 0x58748914: push eax
        __asm _emit 0x50
        // 0x58748915: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58748919: push ecx
        __asm _emit 0x51
        // 0x5874891A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5874891C: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58748921: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58748927: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5874892A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5874892C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58748930: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58748932: je 0x58748abc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748938: jmp 0x58748946
        __asm _emit 0xEB
        __asm _emit 0x0C
    }
}

// Ghidra body range 0x58748940..0x587489C4; 132 mapped bytes.
extern "C" __declspec(naked) void FUN_587487c0_segment_03() {
    __asm {
        // 0x58748940: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58748944: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58748946: mov eax, dword ptr [eax + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874894C: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5874894F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58748951: mov dword ptr [esp + 0x50], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748959: mov dword ptr [esp + 0x4c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874895D: mov byte ptr [esp + 0x3c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x00
        // 0x58748962: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x58748965: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58748967: inc eax
        __asm _emit 0x40
        // 0x58748968: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5874896A: jne 0x58748965
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5874896C: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x5874896E: push eax
        __asm _emit 0x50
        // 0x5874896F: push ecx
        __asm _emit 0x51
        // 0x58748970: lea ecx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58748974: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xC6
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58748979: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874897D: mov edi, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x18
        // 0x58748980: mov ebp, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x29
        // 0x58748982: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58748986: push edx
        __asm _emit 0x52
        // 0x58748987: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874898B: push eax
        __asm _emit 0x50
        // 0x5874898C: mov dword ptr [esp + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58748990: call 0x58748270
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58748995: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58748997: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58748999: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874899B: je 0x587489a1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5874899D: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5874899F: je 0x587489a6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587489A1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x42
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587489A6: cmp dword ptr [esi + 4], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587489A9: setne bl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC3
        // 0x587489AC: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x587489AF: cmp dword ptr [esp + 0x50], 0x10
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587489B4: mov dword ptr [esp + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587489B8: jb 0x587489c7
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x587489BA: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587489BE: push ecx
        __asm _emit 0x51
        // 0x587489BF: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x42
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587489C7..0x58748A83; 188 mapped bytes.
extern "C" __declspec(naked) void FUN_587487c0_segment_04() {
    __asm {
        // 0x587489C7: push 0x818
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587489CC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x42
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587489D1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587489D4: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587489D8: mov dword ptr [esp + 0x60], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587489E0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587489E2: je 0x587489ef
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587489E4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587489E6: call 0x587430a0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xA6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587489EB: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587489ED: jmp 0x587489f1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587489EF: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587489F1: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587489F5: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x587489F8: push edx
        __asm _emit 0x52
        // 0x587489F9: push ebp
        __asm _emit 0x55
        // 0x587489FA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587489FC: mov dword ptr [esp + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58748A00: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58748A04: call 0x58743080
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xA6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58748A09: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58748A0B: call 0x587477a0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58748A10: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58748A12: call 0x5896bf30
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x35
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58748A17: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58748A19: je 0x58748a6d
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x58748A1B: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58748A1F: mov ecx, dword ptr [ebx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x2C
        // 0x58748A22: add ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x20
        // 0x58748A25: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58748A27: jne 0x58748a2d
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58748A29: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58748A2B: jmp 0x58748a35
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58748A2D: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x58748A30: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58748A32: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58748A35: mov edi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x58748A38: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58748A3A: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58748A3C: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58748A3F: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58748A41: jae 0x58748a4d
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x58748A43: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x58748A45: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58748A48: mov dword ptr [ebx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x58748A4B: jmp 0x58748aad
        __asm _emit 0xEB
        __asm _emit 0x60
        // 0x58748A4D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58748A4F: jbe 0x58748a56
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58748A51: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x42
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748A56: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58748A58: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58748A5C: push ecx
        __asm _emit 0x51
        // 0x58748A5D: push edi
        __asm _emit 0x57
        // 0x58748A5E: push eax
        __asm _emit 0x50
        // 0x58748A5F: lea edx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58748A63: push edx
        __asm _emit 0x52
        // 0x58748A64: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58748A66: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xDE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58748A6B: jmp 0x58748aad
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x58748A6D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58748A6F: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58748A71: je 0x58748aad
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58748A73: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748A79: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58748A7B: je 0x58748a86
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58748A7D: push eax
        __asm _emit 0x50
        // 0x58748A7E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x41
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58748A86..0x58748AA4; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_587487c0_segment_05() {
    __asm {
        // 0x58748A86: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748A8C: push eax
        __asm _emit 0x50
        // 0x58748A8D: mov dword ptr [esi + 0xec], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748A93: mov dword ptr [esi + 0xf0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748A99: mov dword ptr [esi + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748A9F: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x41
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58748AAD..0x58748AD0; 35 mapped bytes.
extern "C" __declspec(naked) void FUN_587487c0_segment_06() {
    __asm {
        // 0x58748AAD: mov eax, dword ptr [ebp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x78
        // 0x58748AB0: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58748AB4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58748AB6: jne 0x58748940
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58748ABC: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58748AC0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748AC7: pop ecx
        __asm _emit 0x59
        // 0x58748AC8: pop edi
        __asm _emit 0x5F
        // 0x58748AC9: pop esi
        __asm _emit 0x5E
        // 0x58748ACA: pop ebp
        __asm _emit 0x5D
        // 0x58748ACB: pop ebx
        __asm _emit 0x5B
        // 0x58748ACC: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58748ACE: pop ebp
        __asm _emit 0x5D
        // 0x58748ACF: ret
        __asm _emit 0xC3
    }
}
