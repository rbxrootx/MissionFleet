// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 124 bytes in 1 exact ranges.
// Source symbol alias: FUN_58735840.

// Ghidra body range 0x58735840..0x587358BC; 124 mapped bytes.
extern "C" __declspec(naked) void FUN_58735840_segment_00() {
    __asm {
        // 0x58735840: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58735844: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x58735847: jae 0x5873584e
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58735849: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5873584B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873584E: cmp eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x11
        // 0x58735851: jae 0x58735858
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58735853: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58735855: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735858: cmp eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x18
        // 0x5873585B: jae 0x58735862
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5873585D: mov al, 2
        __asm _emit 0xB0
        __asm _emit 0x02
        // 0x5873585F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735862: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x58735865: jae 0x5873586c
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58735867: mov al, 3
        __asm _emit 0xB0
        __asm _emit 0x03
        // 0x58735869: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873586C: cmp eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x26
        // 0x5873586F: jae 0x58735876
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58735871: mov al, 4
        __asm _emit 0xB0
        __asm _emit 0x04
        // 0x58735873: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735876: cmp eax, 0x2f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x2F
        // 0x58735879: jae 0x58735880
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5873587B: mov al, 5
        __asm _emit 0xB0
        __asm _emit 0x05
        // 0x5873587D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735880: cmp eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x38
        // 0x58735883: jae 0x5873588a
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58735885: mov al, 6
        __asm _emit 0xB0
        __asm _emit 0x06
        // 0x58735887: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873588A: cmp eax, 0x41
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x41
        // 0x5873588D: jae 0x58735894
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5873588F: mov al, 7
        __asm _emit 0xB0
        __asm _emit 0x07
        // 0x58735891: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735894: cmp eax, 0x4c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4C
        // 0x58735897: jae 0x5873589e
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58735899: mov al, 8
        __asm _emit 0xB0
        __asm _emit 0x08
        // 0x5873589B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873589E: cmp eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x57
        // 0x587358A1: jae 0x587358a8
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x587358A3: mov al, 9
        __asm _emit 0xB0
        __asm _emit 0x09
        // 0x587358A5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587358A8: cmp eax, 0x62
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x62
        // 0x587358AB: jae 0x587358b2
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x587358AD: mov al, 0xa
        __asm _emit 0xB0
        __asm _emit 0x0A
        // 0x587358AF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587358B2: cmp eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x7D
        // 0x587358B5: sbb al, al
        __asm _emit 0x1A
        __asm _emit 0xC0
        // 0x587358B7: and al, 0xb
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x587358B9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
