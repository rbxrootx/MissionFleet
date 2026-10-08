// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 212 bytes in 1 exact ranges.
// Source symbol alias: FUN_58770930.

// Ghidra body range 0x58770930..0x58770A04; 212 mapped bytes.
extern "C" __declspec(naked) void FUN_58770930_segment_00() {
    __asm {
        // 0x58770930: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58770932: push 0x58988648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58770937: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877093D: push eax
        __asm _emit 0x50
        // 0x5877093E: push ecx
        __asm _emit 0x51
        // 0x5877093F: push esi
        __asm _emit 0x56
        // 0x58770940: push edi
        __asm _emit 0x57
        // 0x58770941: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58770946: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58770948: push eax
        __asm _emit 0x50
        // 0x58770949: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877094D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770953: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770955: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58770959: mov dword ptr [esi], 0x58996170
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x70
        __asm _emit 0x61
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877095F: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58770962: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58770964: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58770968: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5877096A: je 0x58770977
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877096C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5877096E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58770970: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58770972: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58770974: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x58770977: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5877097A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5877097C: je 0x58770989
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877097E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58770980: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58770982: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58770984: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58770986: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x58770989: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5877098C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5877098E: je 0x5877099b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58770990: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58770992: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58770994: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58770996: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58770998: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x5877099B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5877099E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587709A0: je 0x587709ad
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587709A2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587709A4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587709A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587709A8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587709AA: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x587709AD: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587709B0: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587709B2: je 0x587709bf
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587709B4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587709B6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587709B8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587709BA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587709BC: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x587709BF: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587709C2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587709C4: je 0x587709d1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587709C6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587709C8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587709CA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587709CC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587709CE: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x587709D1: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x587709D4: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587709D6: je 0x587709e3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587709D8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587709DA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587709DC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587709DE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587709E0: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x587709E3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587709E5: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587709ED: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x22
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587709F2: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587709F6: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587709FD: pop ecx
        __asm _emit 0x59
        // 0x587709FE: pop edi
        __asm _emit 0x5F
        // 0x587709FF: pop esi
        __asm _emit 0x5E
        // 0x58770A00: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58770A03: ret
        __asm _emit 0xC3
    }
}
