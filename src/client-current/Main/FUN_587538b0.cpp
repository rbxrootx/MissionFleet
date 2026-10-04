// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587538B0 .. +0xC6 bytes.
// Source symbol alias: FUN_587538b0.
extern "C" __declspec(naked) void FUN_587538b0() {
    __asm {
        // 0x587538B0: push ebx
        __asm _emit 0x53
        // 0x587538B1: push ebp
        __asm _emit 0x55
        // 0x587538B2: push esi
        __asm _emit 0x56
        // 0x587538B3: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587538B5: push edi
        __asm _emit 0x57
        // 0x587538B6: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x587538B9: cmp edi, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x587538BC: jbe 0x587538c3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587538BE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587538C3: mov esi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587538C6: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x587538C9: cmp dword ptr [ebp + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x587538CC: jbe 0x587538d3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587538CE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587538D3: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587538D6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587538D8: je 0x587538de
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587538DA: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587538DC: je 0x587538e3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587538DE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587538E3: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587538E5: je 0x5875396d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587538EB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587538ED: jne 0x58753940
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587538EF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587538F4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587538F6: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587538F9: jb 0x58753900
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587538FB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753900: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58753904: cmp dword ptr [edi], eax
        __asm _emit 0x39
        __asm _emit 0x07
        // 0x58753906: jne 0x58753926
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58753908: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875390A: jne 0x58753944
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x5875390C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753911: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753913: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753916: jb 0x5875391d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753918: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875391D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58753921: cmp dword ptr [edi + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58753924: je 0x5875394c
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58753926: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753928: jne 0x58753948
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5875392A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875392F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753931: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753934: jb 0x5875393b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753936: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875393B: add edi, 0x48
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x48
        // 0x5875393E: jmp 0x587538c6
        __asm _emit 0xEB
        __asm _emit 0x86
        // 0x58753940: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753942: jmp 0x587538f6
        __asm _emit 0xEB
        __asm _emit 0xB2
        // 0x58753944: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753946: jmp 0x58753913
        __asm _emit 0xEB
        __asm _emit 0xCB
        // 0x58753948: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5875394A: jmp 0x58753931
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x5875394C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875394E: jne 0x58753969
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58753950: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753955: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58753958: jb 0x5875395f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5875395A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875395F: lea eax, [edi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58753962: pop edi
        __asm _emit 0x5F
        // 0x58753963: pop esi
        __asm _emit 0x5E
        // 0x58753964: pop ebp
        __asm _emit 0x5D
        // 0x58753965: pop ebx
        __asm _emit 0x5B
        // 0x58753966: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58753969: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5875396B: jmp 0x58753955
        __asm _emit 0xEB
        __asm _emit 0xE8
        // 0x5875396D: pop edi
        __asm _emit 0x5F
        // 0x5875396E: pop esi
        __asm _emit 0x5E
        // 0x5875396F: pop ebp
        __asm _emit 0x5D
        // 0x58753970: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753972: pop ebx
        __asm _emit 0x5B
        // 0x58753973: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
