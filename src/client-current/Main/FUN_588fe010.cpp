// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 194 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fe010.

// Ghidra body range 0x588FE010..0x588FE0D2; 194 mapped bytes.
extern "C" __declspec(naked) void FUN_588fe010_segment_00() {
    __asm {
        // 0x588FE010: push ecx
        __asm _emit 0x51
        // 0x588FE011: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FE015: push ebx
        __asm _emit 0x53
        // 0x588FE016: push ebp
        __asm _emit 0x55
        // 0x588FE017: push esi
        __asm _emit 0x56
        // 0x588FE018: push edi
        __asm _emit 0x57
        // 0x588FE019: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588FE01B: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FE01F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588FE021: lea ebx, [ecx + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE027: mov eax, dword ptr [ebx - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0xD8
        // 0x588FE02A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FE02D: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588FE030: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588FE032: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FE034: jl 0x588fe05b
        __asm _emit 0x7C
        __asm _emit 0x25
        // 0x588FE036: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588FE039: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588FE03B: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FE03D: jge 0x588fe05b
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x588FE03F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FE043: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x588FE046: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FE049: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x588FE04C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588FE04E: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588FE050: jl 0x588fe05b
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x588FE052: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588FE055: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FE057: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588FE059: jl 0x588fe0a1
        __asm _emit 0x7C
        __asm _emit 0x46
        // 0x588FE05B: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588FE05D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FE060: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588FE063: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588FE065: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FE067: jl 0x588fe08e
        __asm _emit 0x7C
        __asm _emit 0x25
        // 0x588FE069: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588FE06C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588FE06E: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FE070: jge 0x588fe08e
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x588FE072: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FE076: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x588FE079: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FE07C: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x588FE07F: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588FE081: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588FE083: jl 0x588fe08e
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x588FE085: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588FE088: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FE08A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588FE08C: jl 0x588fe0a1
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588FE08E: inc ebp
        __asm _emit 0x45
        // 0x588FE08F: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588FE092: cmp ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0A
        // 0x588FE095: jl 0x588fe027
        __asm _emit 0x7C
        __asm _emit 0x90
        // 0x588FE097: pop edi
        __asm _emit 0x5F
        // 0x588FE098: pop esi
        __asm _emit 0x5E
        // 0x588FE099: pop ebp
        __asm _emit 0x5D
        // 0x588FE09A: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588FE09C: pop ebx
        __asm _emit 0x5B
        // 0x588FE09D: pop ecx
        __asm _emit 0x59
        // 0x588FE09E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FE0A1: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FE0A5: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588FE0A8: cdq
        __asm _emit 0x99
        // 0x588FE0A9: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE0AE: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588FE0B0: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588FE0B2: jne 0x588fe0b5
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588FE0B4: dec eax
        __asm _emit 0x48
        // 0x588FE0B5: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE0BB: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x588FE0BE: lea eax, [ebp + edx*2 + 1]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x55
        __asm _emit 0x01
        // 0x588FE0C2: push eax
        __asm _emit 0x50
        // 0x588FE0C3: call 0x588fd790
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE0C8: pop edi
        __asm _emit 0x5F
        // 0x588FE0C9: pop esi
        __asm _emit 0x5E
        // 0x588FE0CA: pop ebp
        __asm _emit 0x5D
        // 0x588FE0CB: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588FE0CD: pop ebx
        __asm _emit 0x5B
        // 0x588FE0CE: pop ecx
        __asm _emit 0x59
        // 0x588FE0CF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
