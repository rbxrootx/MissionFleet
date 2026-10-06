// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 67 bytes across [0x588FB070,0x588FB08D) and [0x588FB090,0x588FB0B6).
// The contiguous mapped stream includes the three-byte gap and ends at 0x588FB0B6.
// Source symbol alias: FUN_588fb070.
extern "C" __declspec(naked) void FUN_588fb070() {
    __asm {
        // 0x588FB070: movzx eax, byte ptr [ecx + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0x6A
        // 0x588FB074: cmp eax, dword ptr [esp + 4]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FB078: je 0x588fb07f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588FB07A: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588FB07C: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FB07F: movzx edx, byte ptr [ecx + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x6B
        // 0x588FB083: push esi
        __asm _emit 0x56
        // 0x588FB084: push edi
        __asm _emit 0x57
        // 0x588FB085: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FB089: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588FB08B: jmp 0x588fb090
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588FB08D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588FB090: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FB092: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588FB094: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB096: je 0x588fb0af
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588FB098: inc eax
        __asm _emit 0x40
        // 0x588FB099: inc ecx
        __asm _emit 0x41
        // 0x588FB09A: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588FB09D: jl 0x588fb094
        __asm _emit 0x7C
        __asm _emit 0xF5
        // 0x588FB09F: inc esi
        __asm _emit 0x46
        // 0x588FB0A0: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x588FB0A3: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x588FB0A6: jl 0x588fb090
        __asm _emit 0x7C
        __asm _emit 0xE8
        // 0x588FB0A8: pop edi
        __asm _emit 0x5F
        // 0x588FB0A9: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588FB0AB: pop esi
        __asm _emit 0x5E
        // 0x588FB0AC: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FB0AF: pop edi
        __asm _emit 0x5F
        // 0x588FB0B0: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588FB0B2: pop esi
        __asm _emit 0x5E
        // 0x588FB0B3: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
