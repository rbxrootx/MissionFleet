// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DAA20 .. +0x135 bytes.
// Source symbol alias: FUN_588daa20.
extern "C" __declspec(naked) void FUN_588daa20() {
    __asm {
        // 0x588DAA20: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DAA25: cmp dword ptr [eax + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA2C: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DAA30: push esi
        __asm _emit 0x56
        // 0x588DAA31: mov edx, 0xffffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588DAA36: jne 0x588daacf
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA3C: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DAA42: cmp dword ptr [esi + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DAA46: je 0x588daacf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA4C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DAA4E: je 0x588daa5a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588DAA50: mov edx, 0xff9b00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x9B
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588DAA55: jmp 0x588daaf5
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA5A: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA5F: mov esi, dword ptr [ecx + 0x12f4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xF4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA65: mov dword ptr [esi + 0x60], 0xff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA6C: mov esi, dword ptr [ecx + 0x12f8]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xF8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA72: mov dword ptr [esi + 0x60], 0xff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA79: mov esi, dword ptr [ecx + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA7F: mov dword ptr [ecx + 0x1258], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA85: mov dword ptr [esi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x588DAA88: mov esi, dword ptr [ecx + 0x12ec]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xEC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA8E: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588DAA90: mov dword ptr [esi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x588DAA93: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DAA99: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x588DAA9B: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x03
        // 0x588DAA9E: pop esi
        __asm _emit 0x5E
        // 0x588DAA9F: cmp dword ptr [edx + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588DAAA2: jne 0x588daaa9
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588DAAA4: mov eax, 0xcf
        __asm _emit 0xB8
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAAA9: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DAAAF: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAAB5: jle 0x588dab1b
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x588DAAB7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DAAB9: jl 0x588dab1b
        __asm _emit 0x7C
        __asm _emit 0x60
        // 0x588DAABB: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAAC2: je 0x588dab1b
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x588DAAC4: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588DAAC7: add eax, dword ptr [edx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAACD: jmp 0x588dab1d
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x588DAACF: movzx esi, byte ptr [ecx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAAD6: cmp esi, 7
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x07
        // 0x588DAAD9: ja 0x588daaf5
        __asm _emit 0x77
        __asm _emit 0x1A
        // 0x588DAADB: jmp dword ptr [esi*4 + 0x588dab58]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0xB5
        __asm _emit 0x58
        __asm _emit 0xAB
        __asm _emit 0x8D
        __asm _emit 0x58
        // 0x588DAAE2: mov edx, 0xff9b00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x9B
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588DAAE7: jmp 0x588daaf5
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588DAAE9: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAAEE: jmp 0x588daaf5
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588DAAF0: mov edx, 0x86ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAAF5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DAAF7: je 0x588daa5f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DAAFD: push edi
        __asm _emit 0x57
        // 0x588DAAFE: mov edi, dword ptr [ecx + 0x12f4]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAB04: mov esi, 0xff00
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAB09: mov dword ptr [edi + 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x60
        // 0x588DAB0C: mov edi, dword ptr [ecx + 0x12f8]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAB12: mov dword ptr [edi + 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x60
        // 0x588DAB15: pop edi
        __asm _emit 0x5F
        // 0x588DAB16: jmp 0x588daa79
        __asm _emit 0xE9
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DAB1B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DAB1D: mov ecx, dword ptr [ecx + 0x60fc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xFC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAB23: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DAB26: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DAB28: je 0x588dab52
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DAB2A: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DAB2D: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DAB30: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DAB33: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DAB36: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DAB39: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DAB3B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DAB3E: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DAB40: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DAB43: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DAB46: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DAB49: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DAB4C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DAB4F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DAB52: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
