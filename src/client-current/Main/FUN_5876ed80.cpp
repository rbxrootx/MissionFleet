// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 137 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876ed80.

// Ghidra body range 0x5876ED80..0x5876EE09; 137 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ed80_segment_00() {
    __asm {
        // 0x5876ED80: push esi
        __asm _emit 0x56
        // 0x5876ED81: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876ED83: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876ED87: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876ED8C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5876ED8F: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876ED94: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5876ED97: jne 0x5876ee07
        __asm _emit 0x75
        __asm _emit 0x6E
        // 0x5876ED99: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876ED9E: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876EDA2: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5876EDA6: mov edx, 0xe4ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EDAB: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5876EDAE: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EDB3: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5876EDB6: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5876EDBA: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5876EDBD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876EDBF: je 0x5876edc8
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5876EDC1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5876EDC3: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5876EDC6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5876EDC8: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5876EDCB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876EDCD: je 0x5876edd6
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5876EDCF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5876EDD1: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5876EDD4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5876EDD6: lea ecx, [esi + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5876EDD9: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EDDE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5876EDE0: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5876EDE3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876EDE5: je 0x5876edf0
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5876EDE7: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EDEC: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x5876EDF0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EDF2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876EDF4: je 0x5876edff
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5876EDF6: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EDFB: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x5876EDFF: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5876EE02: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876EE05: jne 0x5876ede0
        __asm _emit 0x75
        __asm _emit 0xD9
        // 0x5876EE07: pop esi
        __asm _emit 0x5E
        // 0x5876EE08: ret
        __asm _emit 0xC3
    }
}
