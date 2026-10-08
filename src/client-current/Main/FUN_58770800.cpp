// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 220 bytes in 1 exact ranges.
// Source symbol alias: FUN_58770800.

// Ghidra body range 0x58770800..0x587708DC; 220 mapped bytes.
extern "C" __declspec(naked) void FUN_58770800_segment_00() {
    __asm {
        // 0x58770800: push esi
        __asm _emit 0x56
        // 0x58770801: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770803: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58770807: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58770809: je 0x587708d6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877080F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58770813: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770818: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5877081B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770820: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58770823: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58770827: jne 0x58770844
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58770829: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877082E: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58770831: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770836: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58770839: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5877083D: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58770842: jmp 0x587708b8
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x58770844: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58770847: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877084C: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5877084F: jne 0x5877087d
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x58770851: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770856: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5877085A: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877085F: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58770863: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58770867: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877086C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5877086F: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770874: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58770877: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877087B: jmp 0x587708b8
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x5877087D: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58770881: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58770883: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58770886: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877088B: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5877088E: jne 0x587708b8
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x58770890: cmp dword ptr [esi + 0x70], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x70
        __asm _emit 0x00
        // 0x58770894: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58770896: jne 0x587708a1
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58770898: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5877089A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5877089D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5877089F: jmp 0x587708b8
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587708A1: call 0x5876f490
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587708A6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587708A8: call 0x5876f210
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587708AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587708AF: je 0x587708b8
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587708B1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587708B3: call 0x587706f0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587708B8: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x587708BB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587708BD: je 0x587708d6
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587708BF: push edi
        __asm _emit 0x57
        // 0x587708C0: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x587708C3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587708C5: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587708C8: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x587708CB: je 0x587708d8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587708CD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587708CF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587708D1: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587708D3: jne 0x587708c0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x587708D5: pop edi
        __asm _emit 0x5F
        // 0x587708D6: pop esi
        __asm _emit 0x5E
        // 0x587708D7: ret
        __asm _emit 0xC3
        // 0x587708D8: pop edi
        __asm _emit 0x5F
        // 0x587708D9: pop esi
        __asm _emit 0x5E
        // 0x587708DA: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
