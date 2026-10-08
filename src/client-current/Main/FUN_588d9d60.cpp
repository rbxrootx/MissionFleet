// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 171 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d9d60.

// Ghidra body range 0x588D9D60..0x588D9E0B; 171 mapped bytes.
extern "C" __declspec(naked) void FUN_588d9d60_segment_00() {
    __asm {
        // 0x588D9D60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D9D62: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D9D67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9D6D: push eax
        __asm _emit 0x50
        // 0x588D9D6E: push ecx
        __asm _emit 0x51
        // 0x588D9D6F: push esi
        __asm _emit 0x56
        // 0x588D9D70: push edi
        __asm _emit 0x57
        // 0x588D9D71: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D9D76: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D9D78: push eax
        __asm _emit 0x50
        // 0x588D9D79: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D9D7D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9D83: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D9D85: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x588D9D87: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x2E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D9D8C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588D9D8E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D9D91: mov dword ptr [esp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588D9D95: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9D9D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588D9D9F: je 0x588d9def
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x588D9DA1: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x2E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D9DA6: and eax, 0x80000003
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588D9DAB: jns 0x588d9db2
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588D9DAD: dec eax
        __asm _emit 0x48
        // 0x588D9DAE: or eax, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFC
        // 0x588D9DB1: inc eax
        __asm _emit 0x40
        // 0x588D9DB2: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D9DB8: add eax, 7
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x07
        // 0x588D9DBB: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9DC1: jle 0x588d9de3
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x588D9DC3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D9DC5: jl 0x588d9de3
        __asm _emit 0x7C
        __asm _emit 0x1C
        // 0x588D9DC7: cmp dword ptr [ecx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9DCE: je 0x588d9de3
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588D9DD0: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9DD6: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588D9DD9: push eax
        __asm _emit 0x50
        // 0x588D9DDA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588D9DDC: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xD5
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D9DE1: jmp 0x588d9df1
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x588D9DE3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D9DE5: push eax
        __asm _emit 0x50
        // 0x588D9DE6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588D9DE8: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xD5
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D9DED: jmp 0x588d9df1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D9DEF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D9DF1: mov dword ptr [esi + 0x604c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9DF7: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D9DFB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E02: pop ecx
        __asm _emit 0x59
        // 0x588D9E03: pop edi
        __asm _emit 0x5F
        // 0x588D9E04: pop esi
        __asm _emit 0x5E
        // 0x588D9E05: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D9E08: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
