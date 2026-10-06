// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888D5C0 .. +0x91 bytes.
// Source symbol alias: FUN_5888d5c0.
extern "C" __declspec(naked) void FUN_5888d5c0() {
    __asm {
        // 0x5888D5C0: push esi
        __asm _emit 0x56
        // 0x5888D5C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888D5C3: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D5C9: push edi
        __asm _emit 0x57
        // 0x5888D5CA: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D5D0: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xAB
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D5D5: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5888D5D7: sub edi, 9
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x09
        // 0x5888D5DA: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5888D5DC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888D5DE: jle 0x5888d609
        __asm _emit 0x7E
        __asm _emit 0x29
        // 0x5888D5E0: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D5E6: imul eax, eax, 0x54
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x5888D5E9: mov ecx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D5EF: sub ecx, 9
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x09
        // 0x5888D5F2: cdq
        __asm _emit 0x99
        // 0x5888D5F3: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5888D5F5: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5888D5F8: mov ecx, dword ptr [esi + 0x4a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D5FE: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5888D600: sub edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x0E
        // 0x5888D603: push edx
        __asm _emit 0x52
        // 0x5888D604: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x5D
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D609: mov ecx, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D60F: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D615: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xAB
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D61A: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5888D61C: sub edi, 6
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x06
        // 0x5888D61F: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5888D621: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888D623: jle 0x5888d64e
        __asm _emit 0x7E
        __asm _emit 0x29
        // 0x5888D625: mov ecx, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D62B: imul eax, eax, 0x54
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x5888D62E: mov ecx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D634: sub ecx, 6
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x06
        // 0x5888D637: cdq
        __asm _emit 0x99
        // 0x5888D638: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5888D63A: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5888D63D: mov ecx, dword ptr [esi + 0x4a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D643: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5888D645: sub edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x0E
        // 0x5888D648: push edx
        __asm _emit 0x52
        // 0x5888D649: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x5D
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D64E: pop edi
        __asm _emit 0x5F
        // 0x5888D64F: pop esi
        __asm _emit 0x5E
        // 0x5888D650: ret
        __asm _emit 0xC3
    }
}
