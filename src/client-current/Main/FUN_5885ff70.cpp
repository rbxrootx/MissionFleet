// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 181 bytes in 1 exact ranges.
// Source symbol alias: FUN_5885ff70.

// Ghidra body range 0x5885FF70..0x58860025; 181 mapped bytes.
extern "C" __declspec(naked) void FUN_5885ff70_segment_00() {
    __asm {
        // 0x5885FF70: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885FF75: push esi
        __asm _emit 0x56
        // 0x5885FF76: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885FF78: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885FF7B: cmp word ptr [ecx + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FF83: je 0x58860009
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FF89: mov edx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FF8F: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885FF95: push edi
        __asm _emit 0x57
        // 0x5885FF96: lea edi, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FF9C: push edx
        __asm _emit 0x52
        // 0x5885FF9D: push edi
        __asm _emit 0x57
        // 0x5885FF9E: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x16
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885FFA3: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5885FFA5: cmp eax, dword ptr [esi + 0xbc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FFAB: pop edi
        __asm _emit 0x5F
        // 0x5885FFAC: jge 0x5885ffdc
        __asm _emit 0x7D
        __asm _emit 0x2E
        // 0x5885FFAE: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FFB4: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5885FFB8: shr dl, 2
        __asm _emit 0xC0
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x5885FFBB: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5885FFBE: jne 0x58860023
        __asm _emit 0x75
        __asm _emit 0x63
        // 0x5885FFC0: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FFC6: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FFCB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885FFCF: mov esi, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FFD5: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5885FFDA: pop esi
        __asm _emit 0x5E
        // 0x5885FFDB: ret
        __asm _emit 0xC3
        // 0x5885FFDC: mov edx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FFE2: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5885FFE6: shr al, 2
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x5885FFE9: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885FFEB: je 0x58860023
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5885FFED: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FFF3: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5885FFF8: mov esi, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FFFE: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860003: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58860007: pop esi
        __asm _emit 0x5E
        // 0x58860008: ret
        __asm _emit 0xC3
        // 0x58860009: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886000F: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58860014: mov esi, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886001A: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886001F: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58860023: pop esi
        __asm _emit 0x5E
        // 0x58860024: ret
        __asm _emit 0xC3
    }
}
