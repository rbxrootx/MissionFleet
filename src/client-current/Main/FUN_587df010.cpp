// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x587DF010 .. +0x563 bytes.
// Source symbol alias: FUN_587df010.
extern "C" __declspec(naked) void FUN_587df010() {
    __asm {
        // 0x587DF010: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x587DF013: push ebx
        __asm _emit 0x53
        // 0x587DF014: push esi
        __asm _emit 0x56
        // 0x587DF015: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DF017: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587DF019: cmp dword ptr [esi + 0xd78], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF01F: je 0x587df552
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2D
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF025: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF02B: push ebp
        __asm _emit 0x55
        // 0x587DF02C: push edi
        __asm _emit 0x57
        // 0x587DF02D: call 0x588f2cf0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587DF032: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF038: mov edi, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF03E: mov ecx, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF044: mov edx, dword ptr [edi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF04A: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DF04E: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DF052: mov eax, 0xe8c
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF057: jmp 0x587df060
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587DF059: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF060: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF066: mov dword ptr [eax + ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0x08
        // 0x587DF069: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587DF06C: cmp eax, 0xf0c
        __asm _emit 0x3D
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF071: jl 0x587df060
        __asm _emit 0x7C
        __asm _emit 0xED
        // 0x587DF073: mov dx, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x587DF077: mov eax, 0x7c00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF07C: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x587DF07F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587DF081: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DF085: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587DF088: jae 0x587df2ab
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF08E: mov ecx, 0xa80
        __asm _emit 0xB9
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF093: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587DF095: mov eax, 0xdcc
        __asm _emit 0xB8
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF09A: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587DF09C: lea ebx, [esi + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF0A2: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587DF0A6: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587DF0AA: jmp 0x587df0b4
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587DF0AC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587DF0B0: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587DF0B4: mov ebp, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF0BA: lea eax, [ecx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x29
        // 0x587DF0BD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587DF0BF: cmp dword ptr [eax + ebx], edx
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x18
        // 0x587DF0C2: je 0x587df26e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF0C8: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DF0CC: and eax, 0x80000000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587DF0D1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587DF0D3: test dword ptr [esp + 0x18], 0x80000000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587DF0DB: je 0x587df0e7
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587DF0DD: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DF0DF: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x587DF0E2: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x03
        // 0x587DF0E5: jmp 0x587df0ed
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587DF0E7: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DF0E9: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x587DF0EC: inc ecx
        __asm _emit 0x41
        // 0x587DF0ED: mov eax, dword ptr [ebp + ecx*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF0F4: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DF0F6: je 0x587df137
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x587DF0F8: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DF0FC: push edx
        __asm _emit 0x52
        // 0x587DF0FD: push eax
        __asm _emit 0x50
        // 0x587DF0FE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DF100: call 0x587daf90
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DF105: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587DF109: mov edx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF10F: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x587DF111: mov dword ptr [ecx + edx], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x587DF114: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587DF117: jne 0x587df257
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF11D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DF121: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF127: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587DF12C: push eax
        __asm _emit 0x50
        // 0x587DF12D: call 0x588ef5f0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587DF132: jmp 0x587df285
        __asm _emit 0xE9
        __asm _emit 0x4E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF137: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DF13C: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        // 0x587DF143: jle 0x587df15b
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587DF145: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF14B: je 0x587df15b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DF14D: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF153: mov eax, dword ptr [eax + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF159: jmp 0x587df15d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DF15B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DF15D: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587DF15F: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587DF162: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DF164: je 0x587df18e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DF166: mov ebp, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587DF169: mov dword ptr [ecx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x587DF16C: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x587DF16F: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587DF172: mov dword ptr [ecx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x587DF175: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x587DF177: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587DF17A: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x587DF17C: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587DF17F: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x587DF182: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x587DF185: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x587DF188: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587DF18B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587DF18E: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DF193: cmp dword ptr [eax + 0x164], 0x123
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF19D: jle 0x587df1b5
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587DF19F: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF1A5: je 0x587df1b5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DF1A7: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF1AD: mov eax, dword ptr [ecx + 0x48c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF1B3: jmp 0x587df1b7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DF1B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DF1B7: mov ecx, dword ptr [ebx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF1BD: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587DF1C0: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DF1C2: je 0x587df1ec
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DF1C4: mov ebp, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587DF1C7: mov dword ptr [ecx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x587DF1CA: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x587DF1CD: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587DF1D0: mov dword ptr [ecx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x587DF1D3: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x587DF1D5: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587DF1D8: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x587DF1DA: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587DF1DD: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x587DF1E0: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x587DF1E3: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x587DF1E6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587DF1E9: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587DF1EC: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DF1F1: cmp dword ptr [eax + 0x164], 0x122
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF1FB: jle 0x587df213
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587DF1FD: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF203: je 0x587df213
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DF205: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF20B: mov eax, dword ptr [ecx + 0x488]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF211: jmp 0x587df215
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DF213: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DF215: mov ecx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF21B: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587DF21E: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DF220: je 0x587df24a
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DF222: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587DF225: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587DF228: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587DF22B: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587DF22E: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587DF231: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587DF233: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587DF236: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587DF238: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587DF23B: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587DF23E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587DF241: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587DF244: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587DF247: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587DF24A: mov ecx, dword ptr [ebx + 0x444]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF250: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x587DF252: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x3A
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587DF257: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DF25B: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF260: push ecx
        __asm _emit 0x51
        // 0x587DF261: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF267: call 0x588ef5f0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587DF26C: jmp 0x587df285
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587DF26E: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587DF270: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x587DF273: mov ecx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF279: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587DF27C: mov eax, dword ptr [ebx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF282: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x587DF285: movzx ecx, word ptr [edi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587DF289: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DF28D: shl dword ptr [esp + 0x18], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DF291: shl dword ptr [esp + 0x1c], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DF295: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x587DF298: inc eax
        __asm _emit 0x40
        // 0x587DF299: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587DF29C: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587DF29F: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587DF2A1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DF2A5: jl 0x587df0b0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DF2AB: mov edx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF2B1: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF2B7: movzx edi, word ptr [eax + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x78
        __asm _emit 0x0E
        // 0x587DF2BB: mov ecx, 0xa80
        __asm _emit 0xB9
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF2C0: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587DF2C2: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587DF2C6: and edi, 0xf
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x0F
        // 0x587DF2C9: mov ecx, 0xdcc
        __asm _emit 0xB9
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF2CE: mov eax, 0x1c
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF2D3: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587DF2D5: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587DF2D9: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DF2DD: lea ebx, [esi + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF2E3: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587DF2E7: jmp 0x587df2f8
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587DF2E9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF2F0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DF2F4: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587DF2F8: mov ebp, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF2FE: mov edx, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF304: mov edx, dword ptr [edx + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF30A: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF30F: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587DF311: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x587DF313: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x587DF316: je 0x587df508
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF31C: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587DF320: lea ecx, [ebx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x2B
        // 0x587DF323: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587DF325: cmp dword ptr [ecx + edx], ebp
        __asm _emit 0x39
        __asm _emit 0x2C
        __asm _emit 0x11
        // 0x587DF328: je 0x587df50a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF32E: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x587DF330: sub cl, 0x11
        __asm _emit 0x80
        __asm _emit 0xE9
        __asm _emit 0x11
        // 0x587DF333: mov byte ptr [esp + 0x13], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x587DF337: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587DF33B: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587DF33D: jbe 0x587df3d1
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF343: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DF347: mov edi, 0x9b8
        __asm _emit 0xBF
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF34C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587DF350: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF356: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DF35A: cmp byte ptr [eax + edx + 0x1be], cl
        __asm _emit 0x38
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF361: jne 0x587df3a1
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x587DF363: mov ebp, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x38
        // 0x587DF366: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DF36A: push eax
        __asm _emit 0x50
        // 0x587DF36B: push ebp
        __asm _emit 0x55
        // 0x587DF36C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DF36E: call 0x587daf90
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xBC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DF373: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587DF377: lea edx, [ebx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x0B
        // 0x587DF37A: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF380: mov dword ptr [edx + ecx], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0A
        // 0x587DF383: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF389: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587DF38C: je 0x587df3ba
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x587DF38E: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DF392: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF397: push edx
        __asm _emit 0x52
        // 0x587DF398: call 0x588ef5f0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587DF39D: mov cl, byte ptr [esp + 0x13]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x587DF3A1: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587DF3A5: add dword ptr [esp + 0x1c], 0x20
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x20
        // 0x587DF3AA: inc eax
        __asm _emit 0x40
        // 0x587DF3AB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587DF3AE: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587DF3B2: cmp eax, dword ptr [esp + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587DF3B6: jb 0x587df350
        __asm _emit 0x72
        __asm _emit 0x98
        // 0x587DF3B8: jmp 0x587df3c9
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587DF3BA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DF3BE: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587DF3C3: push eax
        __asm _emit 0x50
        // 0x587DF3C4: call 0x588ef5f0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587DF3C9: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587DF3CB: jne 0x587df531
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF3D1: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DF3D6: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        // 0x587DF3DD: jle 0x587df3f5
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587DF3DF: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF3E5: je 0x587df3f5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DF3E7: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF3ED: mov eax, dword ptr [ecx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF3F3: jmp 0x587df3f7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DF3F5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DF3F7: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587DF3F9: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587DF3FC: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587DF3FE: je 0x587df428
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DF400: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587DF403: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587DF406: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587DF409: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587DF40C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587DF40F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587DF411: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587DF414: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587DF416: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587DF419: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587DF41C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587DF41F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587DF422: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587DF425: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587DF428: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DF42D: cmp dword ptr [eax + 0x164], 0x123
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF437: jle 0x587df44f
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587DF439: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF43F: je 0x587df44f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DF441: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF447: mov eax, dword ptr [ecx + 0x48c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF44D: jmp 0x587df451
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DF44F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DF451: mov ecx, dword ptr [ebx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF457: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587DF45A: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587DF45C: je 0x587df486
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DF45E: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587DF461: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587DF464: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587DF467: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587DF46A: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587DF46D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587DF46F: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587DF472: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587DF474: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587DF477: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587DF47A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587DF47D: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587DF480: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587DF483: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587DF486: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DF48B: cmp dword ptr [eax + 0x164], 0x122
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF495: jle 0x587df4ad
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587DF497: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF49D: je 0x587df4ad
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DF49F: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF4A5: mov eax, dword ptr [ecx + 0x488]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF4AB: jmp 0x587df4af
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DF4AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DF4AF: mov ecx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF4B5: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587DF4B8: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587DF4BA: je 0x587df4e4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DF4BC: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587DF4BF: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587DF4C2: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587DF4C5: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587DF4C8: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587DF4CB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587DF4CD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587DF4D0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587DF4D2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587DF4D5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587DF4D8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587DF4DB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587DF4DE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587DF4E1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587DF4E4: mov ecx, dword ptr [ebx + 0x444]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF4EA: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x587DF4EC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x37
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587DF4F1: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DF4F5: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF4FA: push ecx
        __asm _emit 0x51
        // 0x587DF4FB: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF501: call 0x588ef5f0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587DF506: jmp 0x587df531
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x587DF508: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587DF50A: mov ecx, dword ptr [ebx + 0x444]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF510: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF515: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x37
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587DF51A: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587DF51C: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x587DF51F: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF525: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x587DF528: mov ecx, dword ptr [ebx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF52E: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x587DF531: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DF535: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DF539: inc eax
        __asm _emit 0x40
        // 0x587DF53A: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587DF53D: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x587DF540: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DF544: jl 0x587df2f0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xA6
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DF54A: pop edi
        __asm _emit 0x5F
        // 0x587DF54B: pop ebp
        __asm _emit 0x5D
        // 0x587DF54C: pop esi
        __asm _emit 0x5E
        // 0x587DF54D: pop ebx
        __asm _emit 0x5B
        // 0x587DF54E: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587DF551: ret
        __asm _emit 0xC3
        // 0x587DF552: add esi, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF558: mov eax, 0x20
        __asm _emit 0xB8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DF55D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587DF560: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587DF562: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587DF565: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587DF568: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x587DF56B: jne 0x587df560
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587DF56D: pop esi
        __asm _emit 0x5E
        // 0x587DF56E: pop ebx
        __asm _emit 0x5B
        // 0x587DF56F: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587DF572: ret
        __asm _emit 0xC3
    }
}
