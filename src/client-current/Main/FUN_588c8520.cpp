// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 169 bytes in 1 exact ranges.
// Source symbol alias: FUN_588c8520.

// Ghidra body range 0x588C8520..0x588C85C9; 169 mapped bytes.
extern "C" __declspec(naked) void FUN_588c8520_segment_00() {
    __asm {
        // 0x588C8520: push esi
        __asm _emit 0x56
        // 0x588C8521: push edi
        __asm _emit 0x57
        // 0x588C8522: lea eax, [ecx + 0x180]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8528: mov esi, 3
        __asm _emit 0xBE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C852D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588C8530: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xFC
        // 0x588C8533: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588C8535: je 0x588c8540
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588C8537: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C853C: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588C8540: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C8542: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588C8544: je 0x588c854f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588C8546: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C854B: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588C854F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C8552: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588C8554: je 0x588c855f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588C8556: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C855B: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588C855F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C8562: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588C8564: je 0x588c856f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588C8566: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C856B: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588C856F: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588C8572: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588C8574: je 0x588c857f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588C8576: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C857B: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588C857F: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x588C8582: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588C8585: jne 0x588c8530
        __asm _emit 0x75
        __asm _emit 0xA9
        // 0x588C8587: movzx eax, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588C858C: pop edi
        __asm _emit 0x5F
        // 0x588C858D: pop esi
        __asm _emit 0x5E
        // 0x588C858E: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x588C8591: ja 0x588c85c6
        __asm _emit 0x77
        __asm _emit 0x33
        // 0x588C8593: movzx edx, byte ptr [eax + 0x588c85d8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0xD8
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x588C859A: jmp dword ptr [edx*4 + 0x588c85cc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xCC
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x588C85A1: mov eax, dword ptr [eax*4 + 0x589a0c30]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x0C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588C85A8: mov eax, dword ptr [ecx + eax*4 + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C85AF: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588C85B4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C85B7: mov eax, dword ptr [ecx + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C85BD: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C85C2: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C85C6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
