// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 139 bytes in 1 exact ranges.
// Source symbol alias: FUN_58771430.

// Ghidra body range 0x58771430..0x587714BB; 139 mapped bytes.
extern "C" __declspec(naked) void FUN_58771430_segment_00() {
    __asm {
        // 0x58771430: push esi
        __asm _emit 0x56
        // 0x58771431: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58771433: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58771437: push edi
        __asm _emit 0x57
        // 0x58771438: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5877143A: je 0x587714b3
        __asm _emit 0x74
        __asm _emit 0x77
        // 0x5877143C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5877143F: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58771443: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771445: je 0x5877146d
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58771447: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5877144A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877144C: je 0x58771466
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5877144E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58771450: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58771452: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771454: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58771457: push edi
        __asm _emit 0x57
        // 0x58771458: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877145A: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5877145D: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58771460: je 0x5877146d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58771462: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771464: jne 0x58771450
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58771466: pop edi
        __asm _emit 0x5F
        // 0x58771467: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58771469: pop esi
        __asm _emit 0x5E
        // 0x5877146A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877146D: cmp dword ptr [edi + 4], 0x100
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771474: jne 0x587714b3
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x58771476: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x58771479: cmp edi, 0xd
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0D
        // 0x5877147C: je 0x5877149f
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5877147E: cmp edi, 0x1b
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x1B
        // 0x58771481: jne 0x587714b3
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x58771483: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58771485: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877148B: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x5877148E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771490: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58771492: push eax
        __asm _emit 0x50
        // 0x58771493: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58771495: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58771497: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5877149A: pop edi
        __asm _emit 0x5F
        // 0x5877149B: pop esi
        __asm _emit 0x5E
        // 0x5877149C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877149F: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587714A5: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587714A7: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587714AA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587714AC: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587714AE: push ecx
        __asm _emit 0x51
        // 0x587714AF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587714B1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587714B3: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587714B6: pop edi
        __asm _emit 0x5F
        // 0x587714B7: pop esi
        __asm _emit 0x5E
        // 0x587714B8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
