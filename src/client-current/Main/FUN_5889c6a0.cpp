// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 478 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889c6a0.

// Ghidra body range 0x5889C6A0..0x5889C87E; 478 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c6a0_segment_00() {
    __asm {
        // 0x5889C6A0: push ebx
        __asm _emit 0x53
        // 0x5889C6A1: push ebp
        __asm _emit 0x55
        // 0x5889C6A2: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5889C6A4: movzx eax, byte ptr [ebp + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C6AB: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5889C6AE: push esi
        __asm _emit 0x56
        // 0x5889C6AF: push edi
        __asm _emit 0x57
        // 0x5889C6B0: je 0x5889c7ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C6B6: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5889C6B9: je 0x5889c75e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C6BF: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5889C6C2: jne 0x5889c879
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C6C8: mov ebx, 0xfffff594
        __asm _emit 0xBB
        __asm _emit 0x94
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C6CD: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C6D3: mov edi, 0x200
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C6D8: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C6DA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C6E0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C6E3: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889C6E6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C6EC: jle 0x5889c700
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C6EE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C6F0: jl 0x5889c700
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C6F2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C6F8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C6FA: je 0x5889c700
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C6FC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C6FE: jmp 0x5889c702
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C700: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C702: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C704: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889C707: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C709: je 0x5889c733
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889C70B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889C70E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889C711: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889C714: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889C717: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889C71A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889C71C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889C71F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889C721: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889C724: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889C727: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889C72A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889C72D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889C730: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889C733: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C735: push 0x44
        __asm _emit 0x6A
        __asm _emit 0x44
        // 0x5889C737: push 0xd2
        __asm _emit 0x68
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C73C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x6B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C741: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C743: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C748: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C74E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C751: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C757: jl 0x5889c6e0
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889C759: pop edi
        __asm _emit 0x5F
        // 0x5889C75A: pop esi
        __asm _emit 0x5E
        // 0x5889C75B: pop ebp
        __asm _emit 0x5D
        // 0x5889C75C: pop ebx
        __asm _emit 0x5B
        // 0x5889C75D: ret
        __asm _emit 0xC3
        // 0x5889C75E: mov ebx, 0xfffff594
        __asm _emit 0xBB
        __asm _emit 0x94
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C763: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C769: mov edi, 0x200
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C76E: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C770: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C773: lea ecx, [esi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x1E
        // 0x5889C776: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C77C: jle 0x5889c790
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C77E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C780: jl 0x5889c790
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C782: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C788: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C78A: je 0x5889c790
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C78C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C78E: jmp 0x5889c792
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C790: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C792: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C794: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889C797: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C799: je 0x5889c7c3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889C79B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889C79E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889C7A1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889C7A4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889C7A7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889C7AA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889C7AC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889C7AF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889C7B1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889C7B4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889C7B7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889C7BA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889C7BD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889C7C0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889C7C3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C7C5: push 0x39
        __asm _emit 0x6A
        __asm _emit 0x39
        // 0x5889C7C7: push 0xd2
        __asm _emit 0x68
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C7CC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x6A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C7D1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C7D3: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C7D8: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C7DE: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C7E1: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C7E7: jl 0x5889c770
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889C7E9: pop edi
        __asm _emit 0x5F
        // 0x5889C7EA: pop esi
        __asm _emit 0x5E
        // 0x5889C7EB: pop ebp
        __asm _emit 0x5D
        // 0x5889C7EC: pop ebx
        __asm _emit 0x5B
        // 0x5889C7ED: ret
        __asm _emit 0xC3
        // 0x5889C7EE: mov ebx, 0xfffff594
        __asm _emit 0xBB
        __asm _emit 0x94
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C7F3: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C7F9: mov edi, 0x200
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C7FE: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C800: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C803: lea ecx, [esi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x1E
        // 0x5889C806: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C80C: jle 0x5889c820
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C80E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C810: jl 0x5889c820
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C812: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C818: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C81A: je 0x5889c820
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C81C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C81E: jmp 0x5889c822
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C820: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C822: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C824: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889C827: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C829: je 0x5889c853
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889C82B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889C82E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889C831: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889C834: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889C837: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889C83A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889C83C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889C83F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889C841: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889C844: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889C847: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889C84A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889C84D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889C850: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889C853: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C855: push 0x2e
        __asm _emit 0x6A
        __asm _emit 0x2E
        // 0x5889C857: push 0xd2
        __asm _emit 0x68
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C85C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x6A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C861: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C863: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C868: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C86E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C871: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C877: jl 0x5889c800
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889C879: pop edi
        __asm _emit 0x5F
        // 0x5889C87A: pop esi
        __asm _emit 0x5E
        // 0x5889C87B: pop ebp
        __asm _emit 0x5D
        // 0x5889C87C: pop ebx
        __asm _emit 0x5B
        // 0x5889C87D: ret
        __asm _emit 0xC3
    }
}
