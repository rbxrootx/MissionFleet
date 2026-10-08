// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 98 bytes in 2 exact ranges.
// Source symbol alias: FUN_58770680.

// Ghidra body range 0x58770680..0x58770690; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_58770680_segment_00() {
    __asm {
        // 0x58770680: push esi
        __asm _emit 0x56
        // 0x58770681: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770683: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58770686: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770688: je 0x5877069a
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5877068A: push eax
        __asm _emit 0x50
        // 0x5877068B: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xC5
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5877069A..0x587706EC; 82 mapped bytes.
extern "C" __declspec(naked) void FUN_58770680_segment_01() {
    __asm {
        // 0x5877069A: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5877069D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5877069F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587706A2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587706A4: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x587706A7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587706A9: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587706AC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587706AE: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587706B1: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587706B6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587706BA: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587706BD: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587706BF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587706C3: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587706C6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587706CA: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587706CD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587706D1: cmp byte ptr [esi + 0x7a], 3
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x7A
        __asm _emit 0x03
        // 0x587706D5: jne 0x587706e0
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587706D7: mov dword ptr [esi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587706DE: pop esi
        __asm _emit 0x5E
        // 0x587706DF: ret
        __asm _emit 0xC3
        // 0x587706E0: mov byte ptr [esi + 0x7a], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x7A
        __asm _emit 0x00
        // 0x587706E4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587706E6: pop esi
        __asm _emit 0x5E
        // 0x587706E7: jmp 0x58770530
        __asm _emit 0xE9
        __asm _emit 0x44
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
