// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 79 bytes in 1 exact ranges.
// Source symbol alias: FUN_58882680.

// Ghidra body range 0x58882680..0x588826CF; 79 mapped bytes.
extern "C" __declspec(naked) void FUN_58882680_segment_00() {
    __asm {
        // 0x58882680: push esi
        __asm _emit 0x56
        // 0x58882681: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58882683: push edi
        __asm _emit 0x57
        // 0x58882684: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58882688: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888268A: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5888268D: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58882690: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58882693: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58882695: jne 0x5888269e
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58882697: pop edi
        __asm _emit 0x5F
        // 0x58882698: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5888269A: pop esi
        __asm _emit 0x5E
        // 0x5888269B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888269E: cmp edi, 0x7878787
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x87
        __asm _emit 0x87
        __asm _emit 0x87
        __asm _emit 0x07
        // 0x588826A4: jbe 0x588826ab
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588826A6: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x3F
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588826AB: push eax
        __asm _emit 0x50
        // 0x588826AC: push edi
        __asm _emit 0x57
        // 0x588826AD: call 0x5887a410
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588826B2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588826B4: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588826B7: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x588826B9: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588826BC: lea edx, [eax + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x48
        // 0x588826BF: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588826C2: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588826C5: pop edi
        __asm _emit 0x5F
        // 0x588826C6: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x588826C9: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588826CB: pop esi
        __asm _emit 0x5E
        // 0x588826CC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
