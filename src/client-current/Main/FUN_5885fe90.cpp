// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5885FE90 .. +0xA2 bytes.
// Source symbol alias: FUN_5885fe90.
extern "C" __declspec(naked) void FUN_5885fe90() {
    __asm {
        // 0x5885FE90: push edi
        __asm _emit 0x57
        // 0x5885FE91: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5885FE93: cmp dword ptr [edi + 0xa8], 1
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5885FE9A: je 0x5885feea
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5885FE9C: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885FEA1: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885FEA4: movzx eax, word ptr [ecx + 0x164]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FEAB: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5885FEAF: jne 0x5885ff14
        __asm _emit 0x75
        __asm _emit 0x63
        // 0x5885FEB1: mov edx, dword ptr [edi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FEB7: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885FEBD: push esi
        __asm _emit 0x56
        // 0x5885FEBE: lea esi, [edi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FEC4: push edx
        __asm _emit 0x52
        // 0x5885FEC5: push esi
        __asm _emit 0x56
        // 0x5885FEC6: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885FECB: cmp dword ptr [esi], 0x12c
        __asm _emit 0x81
        __asm _emit 0x3E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FED1: jge 0x5885feec
        __asm _emit 0x7D
        __asm _emit 0x19
        // 0x5885FED3: push 0x5899eb6c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5885FED8: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885FEDE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5885FEE1: push eax
        __asm _emit 0x50
        // 0x5885FEE2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885FEE4: call 0x5885f8c0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885FEE9: pop esi
        __asm _emit 0x5E
        // 0x5885FEEA: pop edi
        __asm _emit 0x5F
        // 0x5885FEEB: ret
        __asm _emit 0xC3
        // 0x5885FEEC: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885FEF2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885FEF4: push 0x85
        __asm _emit 0x68
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FEF9: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x5885FEFB: call 0x588ec100
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885FF00: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885FF02: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885FF04: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885FF06: mov dword ptr [edi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FF0C: call 0x5885ea90
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885FF11: pop esi
        __asm _emit 0x5E
        // 0x5885FF12: pop edi
        __asm _emit 0x5F
        // 0x5885FF13: ret
        __asm _emit 0xC3
        // 0x5885FF14: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5885FF18: jne 0x5885feea
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x5885FF1A: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885FF20: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x5885FF22: call 0x588ec080
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xC1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885FF27: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5885FF29: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885FF2B: call 0x5885ea90
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885FF30: pop edi
        __asm _emit 0x5F
        // 0x5885FF31: ret
        __asm _emit 0xC3
    }
}
