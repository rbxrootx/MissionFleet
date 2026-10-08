// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 747 bytes in 2 exact ranges.
// Source symbol alias: FUN_5889b630.

// Ghidra body range 0x5889B630..0x5889B6ED; 189 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b630_segment_00() {
    __asm {
        // 0x5889B630: push ebp
        __asm _emit 0x55
        // 0x5889B631: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5889B633: movzx eax, byte ptr [ebp + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B63A: dec eax
        __asm _emit 0x48
        // 0x5889B63B: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5889B63E: ja 0x5889b91c
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B644: push ebx
        __asm _emit 0x53
        // 0x5889B645: push esi
        __asm _emit 0x56
        // 0x5889B646: push edi
        __asm _emit 0x57
        // 0x5889B647: jmp dword ptr [eax*4 + 0x5889b920]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xB9
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5889B64E: mov ebx, 0xfffff69b
        __asm _emit 0xBB
        __asm _emit 0x9B
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B653: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B659: mov edi, 0x3c0
        __asm _emit 0xBF
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B65E: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889B660: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889B663: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889B666: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B66C: jle 0x5889b680
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889B66E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889B670: jl 0x5889b680
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889B672: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B678: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B67A: je 0x5889b680
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889B67C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889B67E: jmp 0x5889b682
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B680: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B682: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B684: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889B687: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B689: je 0x5889b6b3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889B68B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889B68E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889B691: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889B694: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889B697: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889B69A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B69C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889B69F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889B6A1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889B6A4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889B6A7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889B6AA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889B6AD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889B6B0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889B6B3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B6B5: push 0x4f
        __asm _emit 0x6A
        __asm _emit 0x4F
        // 0x5889B6B7: push 0x88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B6BC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x7B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B6C1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889B6C3: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889B6C8: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B6CE: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889B6D1: cmp edi, 0x5c0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B6D7: jl 0x5889b660
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889B6D9: mov ebx, 0xfffff694
        __asm _emit 0xBB
        __asm _emit 0x94
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B6DE: lea esi, [ebp + 0x97c]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x7C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B6E4: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B6E9: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889B6EB: jmp 0x5889b6f0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5889B6F0..0x5889B91E; 558 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b630_segment_01() {
    __asm {
        // 0x5889B6F0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889B6F3: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889B6F6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B6FC: jle 0x5889b710
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889B6FE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889B700: jl 0x5889b710
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889B702: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B708: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B70A: je 0x5889b710
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889B70C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889B70E: jmp 0x5889b712
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B710: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B712: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B714: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889B717: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B719: je 0x5889b743
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889B71B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889B71E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889B721: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889B724: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889B727: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889B72A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B72C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889B72F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889B731: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889B734: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889B737: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889B73A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889B73D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889B740: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889B743: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B745: push 0x46
        __asm _emit 0x6A
        __asm _emit 0x46
        // 0x5889B747: push 0x22e
        __asm _emit 0x68
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B74C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x7B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B751: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889B753: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889B758: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B75E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889B761: cmp edi, 0x600
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B767: jl 0x5889b6f0
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889B769: pop edi
        __asm _emit 0x5F
        // 0x5889B76A: pop esi
        __asm _emit 0x5E
        // 0x5889B76B: pop ebx
        __asm _emit 0x5B
        // 0x5889B76C: pop ebp
        __asm _emit 0x5D
        // 0x5889B76D: ret
        __asm _emit 0xC3
        // 0x5889B76E: mov ebx, 0xfffff593
        __asm _emit 0xBB
        __asm _emit 0x93
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B773: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B779: mov edi, 0x1c0
        __asm _emit 0xBF
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B77E: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889B780: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889B783: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889B786: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B78C: jle 0x5889b7a0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889B78E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889B790: jl 0x5889b7a0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889B792: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B798: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B79A: je 0x5889b7a0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889B79C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889B79E: jmp 0x5889b7a2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B7A0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B7A2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B7A4: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889B7A7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B7A9: je 0x5889b7d3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889B7AB: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889B7AE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889B7B1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889B7B4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889B7B7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889B7BA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B7BC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889B7BF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889B7C1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889B7C4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889B7C7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889B7CA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889B7CD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889B7D0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889B7D3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B7D5: push 0x4f
        __asm _emit 0x6A
        __asm _emit 0x4F
        // 0x5889B7D7: push 0x88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B7DC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x7A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B7E1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889B7E3: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889B7E8: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B7EE: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889B7F1: cmp edi, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B7F7: jl 0x5889b780
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889B7F9: pop edi
        __asm _emit 0x5F
        // 0x5889B7FA: pop esi
        __asm _emit 0x5E
        // 0x5889B7FB: pop ebx
        __asm _emit 0x5B
        // 0x5889B7FC: pop ebp
        __asm _emit 0x5D
        // 0x5889B7FD: ret
        __asm _emit 0xC3
        // 0x5889B7FE: mov ebx, 0xfffff69b
        __asm _emit 0xBB
        __asm _emit 0x9B
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B803: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B809: mov edi, 0x3c0
        __asm _emit 0xBF
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B80E: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889B810: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889B813: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889B816: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B81C: jle 0x5889b830
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889B81E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889B820: jl 0x5889b830
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889B822: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B828: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B82A: je 0x5889b830
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889B82C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889B82E: jmp 0x5889b832
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B830: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B832: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B834: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889B837: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B839: je 0x5889b863
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889B83B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889B83E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889B841: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889B844: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889B847: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889B84A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B84C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889B84F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889B851: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889B854: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889B857: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889B85A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889B85D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889B860: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889B863: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B865: push 0x4f
        __asm _emit 0x6A
        __asm _emit 0x4F
        // 0x5889B867: push 0x19d
        __asm _emit 0x68
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B86C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x7A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B871: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889B873: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889B878: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B87E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889B881: cmp edi, 0x5c0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B887: jl 0x5889b810
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889B889: pop edi
        __asm _emit 0x5F
        // 0x5889B88A: pop esi
        __asm _emit 0x5E
        // 0x5889B88B: pop ebx
        __asm _emit 0x5B
        // 0x5889B88C: pop ebp
        __asm _emit 0x5D
        // 0x5889B88D: ret
        __asm _emit 0xC3
        // 0x5889B88E: mov ebx, 0xfffff594
        __asm _emit 0xBB
        __asm _emit 0x94
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B893: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B899: mov edi, 0x200
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B89E: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889B8A0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889B8A3: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889B8A6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B8AC: jle 0x5889b8c0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889B8AE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889B8B0: jl 0x5889b8c0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889B8B2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B8B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B8BA: je 0x5889b8c0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889B8BC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889B8BE: jmp 0x5889b8c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B8C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B8C2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B8C4: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889B8C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B8C9: je 0x5889b8f3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889B8CB: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889B8CE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889B8D1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889B8D4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889B8D7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889B8DA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B8DC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889B8DF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889B8E1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889B8E4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889B8E7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889B8EA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889B8ED: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889B8F0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889B8F3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B8F5: push 0x46
        __asm _emit 0x6A
        __asm _emit 0x46
        // 0x5889B8F7: push 0x22e
        __asm _emit 0x68
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B8FC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B901: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889B903: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889B908: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B90E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889B911: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B917: jl 0x5889b8a0
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889B919: pop edi
        __asm _emit 0x5F
        // 0x5889B91A: pop esi
        __asm _emit 0x5E
        // 0x5889B91B: pop ebx
        __asm _emit 0x5B
        // 0x5889B91C: pop ebp
        __asm _emit 0x5D
        // 0x5889B91D: ret
        __asm _emit 0xC3
    }
}
