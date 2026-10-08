// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 130 bytes in 1 exact ranges.
// Source symbol alias: FUN_58876790.

// Ghidra body range 0x58876790..0x58876812; 130 mapped bytes.
extern "C" __declspec(naked) void FUN_58876790_segment_00() {
    __asm {
        // 0x58876790: push esi
        __asm _emit 0x56
        // 0x58876791: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58876793: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876798: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5887679C: lea ecx, [esi + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5887679F: mov edx, 3
        __asm _emit 0xBA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588767A4: push edi
        __asm _emit 0x57
        // 0x588767A5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588767A7: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588767AC: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588767B0: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588767B3: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588767B6: jne 0x588767a5
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x588767B8: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588767BE: pop edi
        __asm _emit 0x5F
        // 0x588767BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588767C1: je 0x588767e5
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588767C3: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588767C5: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588767CA: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588767CE: mov edx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588767D4: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588767D7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588767DB: mov dword ptr [esi + 0xc4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588767E5: cmp word ptr [esi + 0xcc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588767ED: je 0x588767f8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588767EF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588767F1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588767F3: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588767F8: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588767FC: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876801: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58876804: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876809: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5887680C: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58876810: pop esi
        __asm _emit 0x5E
        // 0x58876811: ret
        __asm _emit 0xC3
    }
}
