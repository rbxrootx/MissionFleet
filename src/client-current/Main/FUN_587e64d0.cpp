// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 373 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e64d0.

// Ghidra body range 0x587E64D0..0x587E6645; 373 mapped bytes.
extern "C" __declspec(naked) void FUN_587e64d0_segment_00() {
    __asm {
        // 0x587E64D0: push esi
        __asm _emit 0x56
        // 0x587E64D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E64D3: mov eax, dword ptr [esi + 0x20de4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E64D9: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E64DF: push eax
        __asm _emit 0x50
        // 0x587E64E0: call 0x587c3f50
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xDA
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587E64E5: mov eax, dword ptr [esi + 0x20de4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E64EB: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587E64EE: ja 0x587e6643
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E64F4: jmp dword ptr [eax*4 + 0x587e6648]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587E64FB: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587E64FD: mov dword ptr [esi + 0x20d68], 0x258
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6507: fstp dword ptr [esi + 0x10a1c]
        __asm _emit 0xD9
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E650D: mov dword ptr [esi + 0x20d6c], 5
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6517: mov dword ptr [esi + 0x20d78], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6521: mov dword ptr [esi + 0x20d7c], 0x14
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E652B: pop esi
        __asm _emit 0x5E
        // 0x587E652C: ret
        __asm _emit 0xC3
        // 0x587E652D: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587E652F: mov dword ptr [esi + 0x20d68], 0x258
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6539: fstp dword ptr [esi + 0x10a1c]
        __asm _emit 0xD9
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E653F: mov dword ptr [esi + 0x20d6c], 0x1e
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6549: mov dword ptr [esi + 0x20d78], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6553: mov dword ptr [esi + 0x20d7c], 0x32
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E655D: pop esi
        __asm _emit 0x5E
        // 0x587E655E: ret
        __asm _emit 0xC3
        // 0x587E655F: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587E6561: mov dword ptr [esi + 0x20d68], 0x2d0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E656B: fstp dword ptr [esi + 0x10a1c]
        __asm _emit 0xD9
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E6571: mov dword ptr [esi + 0x20d6c], 0x3c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E657B: mov dword ptr [esi + 0x20d78], 0x168
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6585: mov dword ptr [esi + 0x20d7c], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E658F: pop esi
        __asm _emit 0x5E
        // 0x587E6590: ret
        __asm _emit 0xC3
        // 0x587E6591: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587E6593: mov dword ptr [esi + 0x20d68], 0x348
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E659D: fstp dword ptr [esi + 0x10a1c]
        __asm _emit 0xD9
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E65A3: mov dword ptr [esi + 0x20d6c], 0x6e
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x6E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E65AD: mov dword ptr [esi + 0x20d78], 0x1a4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E65B7: mov dword ptr [esi + 0x20d7c], 0xa0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E65C1: pop esi
        __asm _emit 0x5E
        // 0x587E65C2: ret
        __asm _emit 0xC3
        // 0x587E65C3: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587E65C5: mov dword ptr [esi + 0x20d68], 0x3c0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E65CF: fstp dword ptr [esi + 0x10a1c]
        __asm _emit 0xD9
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E65D5: mov dword ptr [esi + 0x20d6c], 0xb4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E65DF: mov dword ptr [esi + 0x20d78], 0x1e0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E65E9: mov dword ptr [esi + 0x20d7c], 0xdc
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E65F3: pop esi
        __asm _emit 0x5E
        // 0x587E65F4: ret
        __asm _emit 0xC3
        // 0x587E65F5: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587E65F7: mov dword ptr [esi + 0x20d68], 0x438
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6601: fstp dword ptr [esi + 0x10a1c]
        __asm _emit 0xD9
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E6607: mov dword ptr [esi + 0x20d6c], 0xf0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6611: mov dword ptr [esi + 0x20d78], 0x21c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E661B: mov dword ptr [esi + 0x20d7c], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6625: pop esi
        __asm _emit 0x5E
        // 0x587E6626: ret
        __asm _emit 0xC3
        // 0x587E6627: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587E6629: mov dword ptr [esi + 0x20d68], 0x4b0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6633: fstp dword ptr [esi + 0x10a1c]
        __asm _emit 0xD9
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E6639: mov dword ptr [esi + 0x20d6c], 0x190
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6643: pop esi
        __asm _emit 0x5E
        // 0x587E6644: ret
        __asm _emit 0xC3
    }
}
