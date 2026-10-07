// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 559 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ff870.

// Ghidra body range 0x587FF870..0x587FFA9F; 559 mapped bytes.
extern "C" __declspec(naked) void FUN_587ff870_segment_00() {
    __asm {
        // 0x587FF870: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587FF873: push esi
        __asm _emit 0x56
        // 0x587FF874: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587FF876: cmp dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587FF87A: push edi
        __asm _emit 0x57
        // 0x587FF87B: jne 0x587ff89e
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587FF87D: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587FF881: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587FF884: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587FF888: push eax
        __asm _emit 0x50
        // 0x587FF889: push ecx
        __asm _emit 0x51
        // 0x587FF88A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587FF88C: push edi
        __asm _emit 0x57
        // 0x587FF88D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FF88F: call 0x587ff510
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FF894: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587FF896: pop edi
        __asm _emit 0x5F
        // 0x587FF897: pop esi
        __asm _emit 0x5E
        // 0x587FF898: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587FF89B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587FF89E: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587FF8A2: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587FF8A5: mov edi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x3A
        // 0x587FF8A7: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587FF8A9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FF8AB: je 0x587ff8b1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587FF8AD: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587FF8AF: je 0x587ff8ba
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587FF8B1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xD3
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FF8B6: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587FF8BA: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587FF8BE: push ebx
        __asm _emit 0x53
        // 0x587FF8BF: push ebp
        __asm _emit 0x55
        // 0x587FF8C0: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587FF8C2: jne 0x587ff8fd
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x587FF8C4: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587FF8C8: add ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0C
        // 0x587FF8CB: push ecx
        __asm _emit 0x51
        // 0x587FF8CC: push edi
        __asm _emit 0x57
        // 0x587FF8CD: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587FF8D0: call 0x587481b0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FF8D5: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587FF8D7: je 0x587ffa78
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF8DD: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587FF8E1: push edi
        __asm _emit 0x57
        // 0x587FF8E2: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587FF8E6: push eax
        __asm _emit 0x50
        // 0x587FF8E7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587FF8E9: push edi
        __asm _emit 0x57
        // 0x587FF8EA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FF8EC: call 0x587ff510
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FF8F1: pop ebp
        __asm _emit 0x5D
        // 0x587FF8F2: pop ebx
        __asm _emit 0x5B
        // 0x587FF8F3: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587FF8F5: pop edi
        __asm _emit 0x5F
        // 0x587FF8F6: pop esi
        __asm _emit 0x5E
        // 0x587FF8F7: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587FF8FA: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587FF8FD: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587FF900: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587FF902: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FF904: je 0x587ff90a
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587FF906: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587FF908: je 0x587ff913
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587FF90A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xD3
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FF90F: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587FF913: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587FF915: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587FF919: jne 0x587ff958
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x587FF91B: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587FF91E: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587FF921: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x587FF924: push edi
        __asm _emit 0x57
        // 0x587FF925: push eax
        __asm _emit 0x50
        // 0x587FF926: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587FF929: call 0x587481b0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FF92E: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587FF930: je 0x587ffa78
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF936: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587FF939: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587FF93C: push edi
        __asm _emit 0x57
        // 0x587FF93D: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587FF941: push eax
        __asm _emit 0x50
        // 0x587FF942: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FF944: push edi
        __asm _emit 0x57
        // 0x587FF945: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FF947: call 0x587ff510
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FF94C: pop ebp
        __asm _emit 0x5D
        // 0x587FF94D: pop ebx
        __asm _emit 0x5B
        // 0x587FF94E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587FF950: pop edi
        __asm _emit 0x5F
        // 0x587FF951: pop esi
        __asm _emit 0x5E
        // 0x587FF952: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587FF955: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587FF958: add ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0C
        // 0x587FF95B: push ecx
        __asm _emit 0x51
        // 0x587FF95C: lea ebx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x587FF95F: push edi
        __asm _emit 0x57
        // 0x587FF960: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FF962: call 0x587481b0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FF967: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587FF969: je 0x587ff9d6
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x587FF96B: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587FF96F: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587FF973: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF977: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF97B: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FF97F: call 0x587ef1f0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xF8
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587FF984: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FF988: push edi
        __asm _emit 0x57
        // 0x587FF989: lea eax, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587FF98C: push eax
        __asm _emit 0x50
        // 0x587FF98D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FF98F: call 0x587481b0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FF994: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587FF996: je 0x587ff9d6
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587FF998: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587FF99B: cmp byte ptr [ecx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587FF99F: push edi
        __asm _emit 0x57
        // 0x587FF9A0: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587FF9A4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FF9A6: je 0x587ff9bd
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587FF9A8: push ebp
        __asm _emit 0x55
        // 0x587FF9A9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FF9AB: push edi
        __asm _emit 0x57
        // 0x587FF9AC: call 0x587ff510
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FF9B1: pop ebp
        __asm _emit 0x5D
        // 0x587FF9B2: pop ebx
        __asm _emit 0x5B
        // 0x587FF9B3: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587FF9B5: pop edi
        __asm _emit 0x5F
        // 0x587FF9B6: pop esi
        __asm _emit 0x5E
        // 0x587FF9B7: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587FF9BA: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587FF9BD: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587FF9C1: push edx
        __asm _emit 0x52
        // 0x587FF9C2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587FF9C4: push edi
        __asm _emit 0x57
        // 0x587FF9C5: call 0x587ff510
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FF9CA: pop ebp
        __asm _emit 0x5D
        // 0x587FF9CB: pop ebx
        __asm _emit 0x5B
        // 0x587FF9CC: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587FF9CE: pop edi
        __asm _emit 0x5F
        // 0x587FF9CF: pop esi
        __asm _emit 0x5E
        // 0x587FF9D0: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587FF9D3: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587FF9D6: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587FF9DA: push edi
        __asm _emit 0x57
        // 0x587FF9DB: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x587FF9DE: push eax
        __asm _emit 0x50
        // 0x587FF9DF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FF9E1: call 0x587481b0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FF9E6: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587FF9E8: je 0x587ffa78
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF9EE: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587FF9F2: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587FF9F6: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587FF9F9: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FF9FD: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587FF9FF: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FFA03: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FFA07: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FFA0B: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587FFA0F: call 0x587480a0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FFA14: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FFA18: push edx
        __asm _emit 0x52
        // 0x587FFA19: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FFA1D: call 0x58743680
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x3C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FFA22: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FFA26: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587FFA28: jne 0x587ffa3a
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587FFA2A: lea eax, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587FFA2D: push eax
        __asm _emit 0x50
        // 0x587FFA2E: push edi
        __asm _emit 0x57
        // 0x587FFA2F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FFA31: call 0x587481b0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FFA36: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587FFA38: je 0x587ffa78
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587FFA3A: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587FFA3E: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587FFA41: cmp byte ptr [ecx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587FFA45: push edi
        __asm _emit 0x57
        // 0x587FFA46: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587FFA4A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FFA4C: je 0x587ffa63
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587FFA4E: push eax
        __asm _emit 0x50
        // 0x587FFA4F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FFA51: push edi
        __asm _emit 0x57
        // 0x587FFA52: call 0x587ff510
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FFA57: pop ebp
        __asm _emit 0x5D
        // 0x587FFA58: pop ebx
        __asm _emit 0x5B
        // 0x587FFA59: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587FFA5B: pop edi
        __asm _emit 0x5F
        // 0x587FFA5C: pop esi
        __asm _emit 0x5E
        // 0x587FFA5D: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587FFA60: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587FFA63: push ebp
        __asm _emit 0x55
        // 0x587FFA64: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587FFA66: push edi
        __asm _emit 0x57
        // 0x587FFA67: call 0x587ff510
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FFA6C: pop ebp
        __asm _emit 0x5D
        // 0x587FFA6D: pop ebx
        __asm _emit 0x5B
        // 0x587FFA6E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587FFA70: pop edi
        __asm _emit 0x5F
        // 0x587FFA71: pop esi
        __asm _emit 0x5E
        // 0x587FFA72: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587FFA75: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587FFA78: push edi
        __asm _emit 0x57
        // 0x587FFA79: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587FFA7D: push edx
        __asm _emit 0x52
        // 0x587FFA7E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FFA80: call 0x587ff710
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FFA85: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587FFA87: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587FFA8B: pop ebp
        __asm _emit 0x5D
        // 0x587FFA8C: pop ebx
        __asm _emit 0x5B
        // 0x587FFA8D: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587FFA8F: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587FFA92: pop edi
        __asm _emit 0x5F
        // 0x587FFA93: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587FFA96: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587FFA98: pop esi
        __asm _emit 0x5E
        // 0x587FFA99: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587FFA9C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
