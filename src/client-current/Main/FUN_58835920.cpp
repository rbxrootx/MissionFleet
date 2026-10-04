// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58835920 .. +0xEC bytes.
// Source symbol alias: FUN_58835920.
extern "C" __declspec(naked) void FUN_58835920() {
    __asm {
        // 0x58835920: push ebx
        __asm _emit 0x53
        // 0x58835921: push ebp
        __asm _emit 0x55
        // 0x58835922: push esi
        __asm _emit 0x56
        // 0x58835923: push edi
        __asm _emit 0x57
        // 0x58835924: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58835926: mov esi, dword ptr [edi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883592C: cmp esi, dword ptr [edi + 0x268]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835932: jbe 0x58835939
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58835934: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835939: mov ebx, dword ptr [edi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883593F: nop
        __asm _emit 0x90
        // 0x58835940: mov ebp, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835946: cmp dword ptr [edi + 0x264], ebp
        __asm _emit 0x39
        __asm _emit 0xAF
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883594C: jbe 0x58835953
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883594E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x73
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835953: mov eax, dword ptr [edi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835959: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5883595B: je 0x58835961
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5883595D: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5883595F: je 0x58835966
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58835961: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x73
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835966: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58835968: je 0x58835a03
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883596E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58835970: jne 0x588359af
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x58835972: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835977: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58835979: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x5883597C: jb 0x58835983
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883597E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835983: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58835985: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835989: push eax
        __asm _emit 0x50
        // 0x5883598A: push ecx
        __asm _emit 0x51
        // 0x5883598B: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58835991: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58835993: je 0x588359b7
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58835995: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58835997: jne 0x588359b3
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58835999: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883599E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588359A0: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x588359A3: jb 0x588359aa
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588359A5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588359AA: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588359AD: jmp 0x58835940
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x588359AF: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588359B1: jmp 0x58835979
        __asm _emit 0xEB
        __asm _emit 0xC6
        // 0x588359B3: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588359B5: jmp 0x588359a0
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x588359B7: mov eax, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588359BD: lea ecx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588359C0: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588359C2: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588359C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588359C7: jle 0x588359d9
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588359C9: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588359CB: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588359CD: push eax
        __asm _emit 0x50
        // 0x588359CE: push ecx
        __asm _emit 0x51
        // 0x588359CF: push eax
        __asm _emit 0x50
        // 0x588359D0: push esi
        __asm _emit 0x56
        // 0x588359D1: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588359D6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588359D9: add dword ptr [edi + 0x268], -4
        __asm _emit 0x83
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFC
        // 0x588359E0: mov eax, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588359E6: cmp dword ptr [edi + 0x264], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588359EC: ja 0x588359f2
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x588359EE: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588359F0: jbe 0x588359f7
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588359F2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588359F7: pop edi
        __asm _emit 0x5F
        // 0x588359F8: pop esi
        __asm _emit 0x5E
        // 0x588359F9: pop ebp
        __asm _emit 0x5D
        // 0x588359FA: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588359FF: pop ebx
        __asm _emit 0x5B
        // 0x58835A00: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58835A03: pop edi
        __asm _emit 0x5F
        // 0x58835A04: pop esi
        __asm _emit 0x5E
        // 0x58835A05: pop ebp
        __asm _emit 0x5D
        // 0x58835A06: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58835A08: pop ebx
        __asm _emit 0x5B
        // 0x58835A09: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
