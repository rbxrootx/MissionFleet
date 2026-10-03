// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5879F810 .. +0x249 bytes.
extern "C" __declspec(naked) void FUN_5879f810() {
    __asm {
        // 0x5879F810: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5879F814: push ebp
        __asm _emit 0x55
        // 0x5879F815: push esi
        __asm _emit 0x56
        // 0x5879F816: push edi
        __asm _emit 0x57
        // 0x5879F817: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5879F819: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5879F81C: jne 0x5879f9a9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F822: cmp dword ptr [esi + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F829: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879F82D: jle 0x5879f8be
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F833: push ebx
        __asm _emit 0x53
        // 0x5879F834: cmp ebp, dword ptr [esi + 0x94]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F83A: jne 0x5879f863
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x5879F83C: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F842: call 0x58908600
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x8D
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879F847: lea edi, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F84D: mov ebx, 6
        __asm _emit 0xBB
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F852: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5879F854: call 0x58908600
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x8D
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879F859: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5879F85C: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5879F85F: jne 0x5879f852
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5879F861: jmp 0x5879f8af
        __asm _emit 0xEB
        __asm _emit 0x4C
        // 0x5879F863: cmp ebp, dword ptr [esi + 0x98]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F869: jne 0x5879f8bd
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x5879F86B: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F871: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F877: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879F87C: add edi, -7
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xF9
        // 0x5879F87F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5879F881: jge 0x5879f8af
        __asm _emit 0x7D
        __asm _emit 0x2C
        // 0x5879F883: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F889: call 0x58908680
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x8D
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879F88E: lea edi, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F894: mov ebx, 6
        __asm _emit 0xBB
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F899: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F8A0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5879F8A2: call 0x58908680
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x8D
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879F8A7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5879F8AA: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5879F8AD: jne 0x5879f8a0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5879F8AF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879F8B1: call 0x58797960
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x80
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879F8B6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879F8B8: call 0x5879b3b0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879F8BD: pop ebx
        __asm _emit 0x5B
        // 0x5879F8BE: cmp ebp, dword ptr [esi + 0x1a0]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F8C4: jne 0x5879f91b
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x5879F8C6: cmp byte ptr [esi + 0x2d8], 2
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5879F8CD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879F8CF: jne 0x5879f8d8
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5879F8D1: call 0x587983f0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x8B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879F8D6: jmp 0x5879f8dd
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5879F8D8: call 0x58797f10
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879F8DD: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5879F8E0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879F8E2: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5879F8E5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879F8E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879F8E9: je 0x5879fa51
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F8EF: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5879F8F2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879F8F4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5879F8F7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879F8F9: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879F8FE: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5879F901: push eax
        __asm _emit 0x50
        // 0x5879F902: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879F907: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5879F90A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5879F90C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5879F90F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879F911: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879F913: pop edi
        __asm _emit 0x5F
        // 0x5879F914: pop esi
        __asm _emit 0x5E
        // 0x5879F915: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879F917: pop ebp
        __asm _emit 0x5D
        // 0x5879F918: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5879F91B: cmp ebp, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F921: je 0x5879f946
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5879F923: cmp ebp, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F929: je 0x5879f946
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5879F92B: cmp ebp, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F931: jne 0x5879fa51
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F937: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879F939: call 0x58798850
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x8F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879F93E: pop edi
        __asm _emit 0x5F
        // 0x5879F93F: pop esi
        __asm _emit 0x5E
        // 0x5879F940: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879F942: pop ebp
        __asm _emit 0x5D
        // 0x5879F943: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5879F946: cmp dword ptr [esi + 0x2c8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F94D: jne 0x5879fa51
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F953: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F958: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5879F95A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5879F95C: mov dword ptr [esi + 0x2b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F962: mov dword ptr [esi + 0x2b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F968: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5879F96B: mov dword ptr [esi + 0x2c0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F971: mov dword ptr [esi + 0x2bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F977: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5879F979: mov word ptr [esi + 0x2c6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F980: mov word ptr [esi + 0x2c4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F987: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5879F98A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879F98C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879F98E: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879F993: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5879F997: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x5879F99A: pop edi
        __asm _emit 0x5F
        // 0x5879F99B: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x02
        // 0x5879F99F: pop esi
        __asm _emit 0x5E
        // 0x5879F9A0: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5879F9A3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879F9A5: pop ebp
        __asm _emit 0x5D
        // 0x5879F9A6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5879F9A9: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5879F9AC: jne 0x5879fa51
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F9B2: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879F9B6: cmp edi, dword ptr [esi + 0x94]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F9BC: jne 0x5879f9c5
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5879F9BE: push 0x58998488
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879F9C3: jmp 0x5879fa34
        __asm _emit 0xEB
        __asm _emit 0x6F
        // 0x5879F9C5: cmp edi, dword ptr [esi + 0x98]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F9CB: jne 0x5879f9d4
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5879F9CD: push 0x5899846c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879F9D2: jmp 0x5879fa34
        __asm _emit 0xEB
        __asm _emit 0x60
        // 0x5879F9D4: cmp edi, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F9DA: je 0x5879fa2f
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x5879F9DC: cmp edi, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F9E2: je 0x5879fa2f
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5879F9E4: cmp edi, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F9EA: jne 0x5879fa51
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x5879F9EC: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879F9F2: mov eax, dword ptr [edx + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879F9F8: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5879F9FC: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x5879FA00: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5879FA03: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x5879FA06: jne 0x5879fa0f
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5879FA08: push 0x58998450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879FA0D: jmp 0x5879fa34
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x5879FA0F: movzx eax, word ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FA16: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5879FA1A: je 0x5879fa51
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5879FA1C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x5879FA20: je 0x5879fa51
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5879FA22: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x5879FA26: je 0x5879fa51
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5879FA28: push 0x58998428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879FA2D: jmp 0x5879fa34
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5879FA2F: push 0x58998410
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879FA34: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879FA3A: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FA40: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5879FA43: push eax
        __asm _emit 0x50
        // 0x5879FA44: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x5879FA46: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FA4B: push edi
        __asm _emit 0x57
        // 0x5879FA4C: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x2C
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5879FA51: pop edi
        __asm _emit 0x5F
        // 0x5879FA52: pop esi
        __asm _emit 0x5E
        // 0x5879FA53: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FA55: pop ebp
        __asm _emit 0x5D
        // 0x5879FA56: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
