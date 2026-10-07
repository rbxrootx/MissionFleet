// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 141 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e9310.

// Ghidra body range 0x587E9310..0x587E939D; 141 mapped bytes.
extern "C" __declspec(naked) void FUN_587e9310_segment_00() {
    __asm {
        // 0x587E9310: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9315: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587E9318: push edi
        __asm _emit 0x57
        // 0x587E9319: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587E931B: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xD3
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587E9320: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E9322: je 0x587e9399
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x587E9324: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E932A: push esi
        __asm _emit 0x56
        // 0x587E932B: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x587E932E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587E9330: je 0x587e938c
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x587E9332: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E9334: call 0x588d66d0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xD3
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587E9339: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587E933E: jne 0x587e9385
        __asm _emit 0x75
        __asm _emit 0x45
        // 0x587E9340: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E9342: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xD3
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587E9347: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587E934C: jne 0x587e9385
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x587E934E: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9353: cmp esi, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587E9356: je 0x587e9385
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587E9358: cmp dword ptr [esi + 0x1258], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E935E: jne 0x587e9385
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x587E9360: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E9363: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587E9366: sub eax, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587E9369: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587E936C: sub ecx, dword ptr [edx + 4]
        __asm _emit 0x2B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587E936F: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587E9371: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587E9373: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587E9376: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E9378: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587E937B: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587E937D: cmp edx, 0x9c400
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587E9383: jl 0x587e9391
        __asm _emit 0x7C
        __asm _emit 0x0C
        // 0x587E9385: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587E9388: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587E938A: jne 0x587e9332
        __asm _emit 0x75
        __asm _emit 0xA6
        // 0x587E938C: pop esi
        __asm _emit 0x5E
        // 0x587E938D: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587E938F: pop edi
        __asm _emit 0x5F
        // 0x587E9390: ret
        __asm _emit 0xC3
        // 0x587E9391: pop esi
        __asm _emit 0x5E
        // 0x587E9392: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9397: pop edi
        __asm _emit 0x5F
        // 0x587E9398: ret
        __asm _emit 0xC3
        // 0x587E9399: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587E939B: pop edi
        __asm _emit 0x5F
        // 0x587E939C: ret
        __asm _emit 0xC3
    }
}
