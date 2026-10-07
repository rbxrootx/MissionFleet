// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 190 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874a9b0.

// Ghidra body range 0x5874A9B0..0x5874AA6E; 190 mapped bytes.
extern "C" __declspec(naked) void FUN_5874a9b0_segment_00() {
    __asm {
        // 0x5874A9B0: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874A9B4: push esi
        __asm _emit 0x56
        // 0x5874A9B5: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874A9B9: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874A9BC: mov byte ptr [esi], 0x7d
        __asm _emit 0xC6
        __asm _emit 0x06
        __asm _emit 0x7D
        // 0x5874A9BF: mov edx, 0x9a8
        __asm _emit 0xBA
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A9C4: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874A9C9: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x5874A9CC: mov eax, dword ptr [eax + edx - 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xFC
        // 0x5874A9D0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874A9D2: je 0x5874a9ea
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5874A9D4: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x5E
        // 0x5874A9D8: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5874A9DC: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x5874A9DE: cmp al, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x01
        // 0x5874A9E0: jbe 0x5874a9e4
        __asm _emit 0x76
        __asm _emit 0x02
        // 0x5874A9E2: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5874A9E4: cmp al, byte ptr [esi]
        __asm _emit 0x3A
        __asm _emit 0x06
        // 0x5874A9E6: jae 0x5874a9ea
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5874A9E8: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x5874A9EA: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874A9EF: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x5874A9F2: mov eax, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x02
        // 0x5874A9F5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874A9F7: je 0x5874aa0f
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5874A9F9: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x5E
        // 0x5874A9FD: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5874AA01: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x5874AA03: cmp al, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x01
        // 0x5874AA05: jbe 0x5874aa09
        __asm _emit 0x76
        __asm _emit 0x02
        // 0x5874AA07: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5874AA09: cmp al, byte ptr [esi]
        __asm _emit 0x3A
        __asm _emit 0x06
        // 0x5874AA0B: jae 0x5874aa0f
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5874AA0D: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x5874AA0F: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874AA14: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x5874AA17: mov eax, dword ptr [eax + edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x5874AA1B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874AA1D: je 0x5874aa35
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5874AA1F: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x5E
        // 0x5874AA23: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5874AA27: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x5874AA29: cmp al, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x01
        // 0x5874AA2B: jbe 0x5874aa2f
        __asm _emit 0x76
        __asm _emit 0x02
        // 0x5874AA2D: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5874AA2F: cmp al, byte ptr [esi]
        __asm _emit 0x3A
        __asm _emit 0x06
        // 0x5874AA31: jae 0x5874aa35
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5874AA33: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x5874AA35: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874AA3A: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x5874AA3D: mov eax, dword ptr [eax + edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x08
        // 0x5874AA41: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874AA43: je 0x5874aa5b
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5874AA45: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x5E
        // 0x5874AA49: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5874AA4D: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x5874AA4F: cmp al, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x01
        // 0x5874AA51: jbe 0x5874aa55
        __asm _emit 0x76
        __asm _emit 0x02
        // 0x5874AA53: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5874AA55: cmp al, byte ptr [esi]
        __asm _emit 0x3A
        __asm _emit 0x06
        // 0x5874AA57: jae 0x5874aa5b
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5874AA59: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x5874AA5B: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x5874AA5E: cmp edx, 0xa28
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x28
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AA64: jl 0x5874a9c4
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x5A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874AA6A: pop esi
        __asm _emit 0x5E
        // 0x5874AA6B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
