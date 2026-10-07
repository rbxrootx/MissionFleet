// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 188 bytes in 1 exact ranges.
// Source symbol alias: FUN_587471b0.

// Ghidra body range 0x587471B0..0x5874726C; 188 mapped bytes.
extern "C" __declspec(naked) void FUN_587471b0_segment_00() {
    __asm {
        // 0x587471B0: push esi
        __asm _emit 0x56
        // 0x587471B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587471B3: mov edx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587471B9: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587471BB: je 0x587471e1
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587471BD: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587471C3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587471C5: je 0x587471e1
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587471C7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587471C9: push edi
        __asm _emit 0x57
        // 0x587471CA: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587471CD: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x587471CF: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587471D5: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587471D8: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587471DA: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587471E0: pop edi
        __asm _emit 0x5F
        // 0x587471E1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587471E3: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587471E6: mov dword ptr [esi + 0x9c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587471EC: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587471EF: mov dword ptr [esi + 0xa0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587471F5: mov eax, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587471FB: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587471FF: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58747203: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58747207: je 0x5874726a
        __asm _emit 0x74
        __asm _emit 0x61
        // 0x58747209: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5874720D: je 0x5874726a
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x5874720F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747211: call 0x58745480
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747216: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747218: call 0x587466b0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874721D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874721F: call 0x587454e0
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747224: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58747226: jne 0x5874726a
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x58747228: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874722A: call 0x587455b0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874722F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58747231: jne 0x5874726a
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x58747233: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747235: call 0x58746f70
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874723A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874723C: jne 0x5874726a
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5874723E: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747244: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x32
        // 0x58747247: jl 0x58747263
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x58747249: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874724B: call 0x58746b70
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747250: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747252: call 0x587465c0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747257: mov dword ptr [esi + 0x88], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747261: pop esi
        __asm _emit 0x5E
        // 0x58747262: ret
        __asm _emit 0xC3
        // 0x58747263: inc eax
        __asm _emit 0x40
        // 0x58747264: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874726A: pop esi
        __asm _emit 0x5E
        // 0x5874726B: ret
        __asm _emit 0xC3
    }
}
