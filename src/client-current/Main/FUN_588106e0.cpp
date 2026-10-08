// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 364 bytes in 1 exact ranges.
// Source symbol alias: FUN_588106e0.

// Ghidra body range 0x588106E0..0x5881084C; 364 mapped bytes.
extern "C" __declspec(naked) void FUN_588106e0_segment_00() {
    __asm {
        // 0x588106E0: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588106E5: push esi
        __asm _emit 0x56
        // 0x588106E6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588106E8: mov ecx, dword ptr [eax + 0x10be0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xE0
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588106EE: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x588106F1: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588106F4: push edx
        __asm _emit 0x52
        // 0x588106F5: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x6C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588106FA: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588106FF: mov ecx, dword ptr [eax + 0x10bd4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD4
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58810705: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58810708: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5881070B: push edx
        __asm _emit 0x52
        // 0x5881070C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x6C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58810711: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810716: mov ecx, dword ptr [eax + 0x10bd8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5881071C: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x5881071F: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58810722: push edx
        __asm _emit 0x52
        // 0x58810723: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x6C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58810728: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881072D: mov ecx, dword ptr [eax + 0x10be4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xE4
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58810733: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58810736: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58810739: push edx
        __asm _emit 0x52
        // 0x5881073A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x6C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5881073F: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810744: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58810747: mov edx, dword ptr [ecx + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881074D: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58810750: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58810756: push edx
        __asm _emit 0x52
        // 0x58810757: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x6C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5881075C: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810761: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58810764: mov edx, dword ptr [ecx + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881076A: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5881076D: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58810773: push edx
        __asm _emit 0x52
        // 0x58810774: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x6B
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58810779: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881077E: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58810781: mov eax, dword ptr [ecx + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810787: mov ecx, dword ptr [ecx + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881078D: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58810792: imul eax, eax, 0x37
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x37
        // 0x58810795: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5881079B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5881079D: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5881079F: mov edx, 0x37
        __asm _emit 0xBA
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588107A4: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588107A6: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588107AC: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588107AF: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588107B5: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588107B8: mov eax, dword ptr [ecx + 0x1438]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588107BE: mov ecx, dword ptr [ecx + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588107C4: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588107C9: imul eax, eax, 0x72
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x72
        // 0x588107CC: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588107D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588107D4: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x588107D6: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588107DC: add eax, dword ptr [esi + 0x9c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588107E2: push eax
        __asm _emit 0x50
        // 0x588107E3: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x2A
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588107E8: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588107EE: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588107F1: mov eax, dword ptr [ecx + 0x143c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588107F7: mov ecx, dword ptr [ecx + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588107FD: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58810802: imul eax, eax, 0x72
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x72
        // 0x58810805: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5881080B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5881080D: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5881080F: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810815: add eax, dword ptr [esi + 0x9c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881081B: push eax
        __asm _emit 0x50
        // 0x5881081C: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x2A
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58810821: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810827: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5881082A: mov eax, dword ptr [eax + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810830: imul eax, eax, 0x37
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x37
        // 0x58810833: cdq
        __asm _emit 0x99
        // 0x58810834: idiv dword ptr [esi + 0x98]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881083A: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810840: mov ecx, 0x37
        __asm _emit 0xB9
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810845: pop esi
        __asm _emit 0x5E
        // 0x58810846: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58810848: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5881084B: ret
        __asm _emit 0xC3
    }
}
