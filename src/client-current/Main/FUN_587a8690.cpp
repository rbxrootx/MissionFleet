// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A8690 .. +0x203 bytes.
// Source symbol alias: FUN_587a8690.
extern "C" __declspec(naked) void FUN_587a8690() {
    __asm {
        // 0x587A8690: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A8693: push ebx
        __asm _emit 0x53
        // 0x587A8694: push ebp
        __asm _emit 0x55
        // 0x587A8695: push esi
        __asm _emit 0x56
        // 0x587A8696: push edi
        __asm _emit 0x57
        // 0x587A8697: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587A8699: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A869D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A869F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587A86A1: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A86A5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A86A7: jne 0x587a876a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A86AD: cmp dword ptr [esp + 0x20], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A86B1: je 0x587a875a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A86B7: mov esi, dword ptr [edi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x34
        // 0x587A86BA: cmp esi, dword ptr [edi + 0x38]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x38
        // 0x587A86BD: jbe 0x587a86c4
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A86BF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x45
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A86C4: mov ebx, dword ptr [edi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x28
        // 0x587A86C7: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x587A86C9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A86D0: mov esi, dword ptr [edi + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x38
        // 0x587A86D3: cmp dword ptr [edi + 0x34], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x34
        // 0x587A86D6: jbe 0x587a86dd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A86D8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x45
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A86DD: mov eax, dword ptr [edi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x28
        // 0x587A86E0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A86E2: je 0x587a86e8
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A86E4: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587A86E6: je 0x587a86ed
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A86E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A86ED: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x587A86EF: je 0x587a874f
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x587A86F1: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A86F3: jne 0x587a872b
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587A86F5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A86FA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A86FC: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587A86FF: jb 0x587a8706
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8701: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x45
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8706: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A8709: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A870D: cmp dword ptr [eax], ecx
        __asm _emit 0x39
        __asm _emit 0x08
        // 0x587A870F: je 0x587a8733
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587A8711: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A8713: jne 0x587a872f
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587A8715: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A871A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A871C: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587A871F: jb 0x587a8726
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8721: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x45
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8726: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587A8729: jmp 0x587a86d0
        __asm _emit 0xEB
        __asm _emit 0xA5
        // 0x587A872B: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587A872D: jmp 0x587a86fc
        __asm _emit 0xEB
        __asm _emit 0xCD
        // 0x587A872F: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587A8731: jmp 0x587a871c
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587A8733: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A8735: jne 0x587a8766
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x587A8737: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x45
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A873C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A873E: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587A8741: jb 0x587a8748
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8743: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x45
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8748: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x587A874B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A874D: jne 0x587a876e
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587A874F: push 0x58999a74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x9A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A8754: call dword ptr [0x5898c178]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A875A: pop edi
        __asm _emit 0x5F
        // 0x587A875B: pop esi
        __asm _emit 0x5E
        // 0x587A875C: pop ebp
        __asm _emit 0x5D
        // 0x587A875D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A875F: pop ebx
        __asm _emit 0x5B
        // 0x587A8760: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A8763: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A8766: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587A8768: jmp 0x587a873e
        __asm _emit 0xEB
        __asm _emit 0xD4
        // 0x587A876A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A876C: jmp 0x587a8772
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587A876E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A8772: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A8775: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x587A8778: je 0x587a883e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A877E: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587A8781: je 0x587a87e5
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x587A8783: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587A8786: jne 0x587a875a
        __asm _emit 0x75
        __asm _emit 0xD2
        // 0x587A8788: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A878A: je 0x587a8798
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587A878C: test dword ptr [ecx], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x587A8792: jne 0x587a8884
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8798: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587A879B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A879D: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xA4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A87A2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A87A4: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xA4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A87A9: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587A87AC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A87AE: je 0x587a87b8
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587A87B0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587A87B2: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587A87B4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A87B6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587A87B8: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587A87BD: je 0x587a8884
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A87C3: push ebp
        __asm _emit 0x55
        // 0x587A87C4: push ebx
        __asm _emit 0x53
        // 0x587A87C5: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A87C9: push ecx
        __asm _emit 0x51
        // 0x587A87CA: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A87CE: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x28
        // 0x587A87D1: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x11
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587A87D6: pop edi
        __asm _emit 0x5F
        // 0x587A87D7: pop esi
        __asm _emit 0x5E
        // 0x587A87D8: pop ebp
        __asm _emit 0x5D
        // 0x587A87D9: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A87DE: pop ebx
        __asm _emit 0x5B
        // 0x587A87DF: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A87E2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A87E5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A87E7: je 0x587a87f5
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587A87E9: test dword ptr [ecx], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x587A87EF: jne 0x587a8884
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A87F5: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587A87F8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A87FA: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xA4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A87FF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A8801: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xA4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A8806: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587A8809: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A880B: je 0x587a8815
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587A880D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587A880F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587A8811: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A8813: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587A8815: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587A881A: je 0x587a8884
        __asm _emit 0x74
        __asm _emit 0x68
        // 0x587A881C: push ebp
        __asm _emit 0x55
        // 0x587A881D: push ebx
        __asm _emit 0x53
        // 0x587A881E: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A8822: push ecx
        __asm _emit 0x51
        // 0x587A8823: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A8827: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x28
        // 0x587A882A: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x11
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587A882F: pop edi
        __asm _emit 0x5F
        // 0x587A8830: pop esi
        __asm _emit 0x5E
        // 0x587A8831: pop ebp
        __asm _emit 0x5D
        // 0x587A8832: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8837: pop ebx
        __asm _emit 0x5B
        // 0x587A8838: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A883B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A883E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A8840: je 0x587a884a
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587A8842: test dword ptr [ecx], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x587A8848: jne 0x587a8884
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x587A884A: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587A884D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A884F: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xA3
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A8854: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A8856: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A885B: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587A885E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A8860: je 0x587a886a
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587A8862: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587A8864: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587A8866: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A8868: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587A886A: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587A886F: je 0x587a8884
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587A8871: push ebp
        __asm _emit 0x55
        // 0x587A8872: push ebx
        __asm _emit 0x53
        // 0x587A8873: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A8877: push ecx
        __asm _emit 0x51
        // 0x587A8878: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A887C: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x28
        // 0x587A887F: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x10
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587A8884: pop edi
        __asm _emit 0x5F
        // 0x587A8885: pop esi
        __asm _emit 0x5E
        // 0x587A8886: pop ebp
        __asm _emit 0x5D
        // 0x587A8887: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A888C: pop ebx
        __asm _emit 0x5B
        // 0x587A888D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A8890: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
