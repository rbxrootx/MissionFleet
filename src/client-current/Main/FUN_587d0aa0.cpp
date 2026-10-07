// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 910 bytes in 4 exact ranges.
// Source symbol alias: FUN_587d0aa0.

// Ghidra body range 0x587D0AA0..0x587D0C17; 375 mapped bytes.
extern "C" __declspec(naked) void FUN_587d0aa0_segment_00() {
    __asm {
        // 0x587D0AA0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D0AA4: sub esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x50
        // 0x587D0AA7: push ebx
        __asm _emit 0x53
        // 0x587D0AA8: push ebp
        __asm _emit 0x55
        // 0x587D0AA9: push esi
        __asm _emit 0x56
        // 0x587D0AAA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D0AAC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D0AAE: mov dword ptr [esi + 0xac8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0AB4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D0AB7: mov dword ptr [esi + 0xacc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0ABD: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D0AC0: mov dword ptr [esi + 0xad0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0AC6: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587D0AC9: mov dword ptr [esi + 0xad4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0ACF: fld dword ptr [esi + 0xac8]
        __asm _emit 0xD9
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0AD5: fld qword ptr [0x5898cae0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D0ADB: push edi
        __asm _emit 0x57
        // 0x587D0ADC: fmul st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC9
        // 0x587D0ADE: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x587D0AE0: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xC1
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D0AE5: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0AEB: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x587D0AEE: fmul dword ptr [esi + 0xac8]
        __asm _emit 0xD8
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0AF4: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xC1
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D0AF9: mov edx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0AFF: mov dword ptr [edx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x587D0B02: mov eax, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B08: mov ecx, dword ptr [esi + 0xacc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B0E: mov dword ptr [eax + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x587D0B11: mov edx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B17: mov eax, dword ptr [esi + 0xacc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B1D: mov dword ptr [edx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x587D0B20: mov ecx, dword ptr [esi + 0x778]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B26: call 0x58789620
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x8A
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D0B2B: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B31: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x587D0B33: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D0B35: push ecx
        __asm _emit 0x51
        // 0x587D0B36: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xC1
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D0B3B: mov edx, dword ptr [esp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x587D0B3F: movzx eax, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x02
        // 0x587D0B42: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587D0B45: mov word ptr [esi + 0xa06], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B4C: mov cx, word ptr [ecx*2 + 0x589c3e2e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x4D
        __asm _emit 0x2E
        __asm _emit 0x3E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D0B54: mov word ptr [esi + 0xd8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B5B: mov ecx, dword ptr [esi + 0x7a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B61: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587D0B64: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D0B66: je 0x587d0b78
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587D0B68: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587D0B6B: dec eax
        __asm _emit 0x48
        // 0x587D0B6C: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D0B6F: mov ecx, dword ptr [esi + 0x7a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B75: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D0B78: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587D0B7A: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587D0B7D: mov dword ptr [esp + 0x20], 0xffffffac
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xAC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0B85: mov dword ptr [esp + 0x24], 0xfffffeb5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xB5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0B8D: mov dword ptr [esp + 0x28], 0x15f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x5F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0B95: mov dword ptr [esp + 0x2c], 0xffffff4c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0B9D: mov dword ptr [esp + 0x30], 0x30f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x0F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0BA5: mov dword ptr [esp + 0x34], 0xffffffdd
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0BAD: mov dword ptr [esp + 0x38], 0x1b0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0BB5: mov dword ptr [esp + 0x3c], 0x91
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0BBD: mov dword ptr [esp + 0x40], 0x51
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0BC5: mov dword ptr [esp + 0x44], 0x145
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0BCD: mov dword ptr [esp + 0x48], 0xfffffea1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0xA1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0BD5: mov dword ptr [esp + 0x4c], 0xb4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0BDD: mov dword ptr [esp + 0x50], 0xfffffcee
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0xEE
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0BE5: mov dword ptr [esp + 0x54], 0x1e
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0BED: mov dword ptr [esp + 0x58], 0xfffffe4d
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x4D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0BF5: mov dword ptr [esp + 0x5c], 0xffffff6a
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0BFD: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D0C01: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D0C05: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D0C07: mov dword ptr [esp + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587D0C0B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D0C0D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D0C11: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D0C15: jmp 0x587d0c20
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587D0C20..0x587D0D3A; 282 mapped bytes.
extern "C" __declspec(naked) void FUN_587d0aa0_segment_01() {
    __asm {
        // 0x587D0C20: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D0C22: test dword ptr [esp + 0x68], 0x80000000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587D0C2A: je 0x587d0c9d
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x587D0C2C: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0C32: imul ecx, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D0C37: mov edx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0C3D: mov eax, dword ptr [esp + ebx*8 + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xDC
        __asm _emit 0x20
        // 0x587D0C41: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D0C45: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587D0C47: add eax, dword ptr [edx + ecx*8]
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x587D0C4A: lea ecx, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xCA
        // 0x587D0C4D: mov edx, dword ptr [esp + ebx*8 + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xDC
        __asm _emit 0x24
        // 0x587D0C51: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587D0C54: lea ecx, [edx + ecx + 0x300]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0C5B: movsx edx, word ptr [esi + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x587D0C5F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D0C61: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x587D0C63: lea edx, [edx + edi + 0x582]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x3A
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0C6A: push edx
        __asm _emit 0x52
        // 0x587D0C6B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D0C6D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D0C6F: push ecx
        __asm _emit 0x51
        // 0x587D0C70: push eax
        __asm _emit 0x50
        // 0x587D0C71: push ebx
        __asm _emit 0x53
        // 0x587D0C72: push esi
        __asm _emit 0x56
        // 0x587D0C73: call 0x5874f8c0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xEC
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587D0C78: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587D0C7A: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587D0C7D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587D0C7F: je 0x587d0c9d
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587D0C81: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D0C83: call 0x5874b5a0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xA9
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587D0C88: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587D0C8A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D0C8D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D0C8F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D0C91: mov ecx, dword ptr [esi + 0x778]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0C97: push edi
        __asm _emit 0x57
        // 0x587D0C98: call 0x58789590
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x88
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D0C9D: shl dword ptr [esp + 0x68], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587D0CA1: inc ebp
        __asm _emit 0x45
        // 0x587D0CA2: cmp ebp, 5
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x05
        // 0x587D0CA5: jl 0x587d0c22
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x77
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0CAB: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D0CAF: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D0CB3: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x587D0CB6: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x587D0CB9: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D0CBD: jl 0x587d0c20
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x5D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0CC3: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x587D0CC8: inc ebx
        __asm _emit 0x43
        // 0x587D0CC9: cmp ebx, 8
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x08
        // 0x587D0CCC: jl 0x587d0c01
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x2F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0CD2: mov ebp, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587D0CD6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587D0CD8: je 0x587d0e36
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0CDE: mov eax, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587D0CE2: movzx eax, word ptr [eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x02
        // 0x587D0CE6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D0CE8: mov edx, 0xd4
        __asm _emit 0xBA
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0CED: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587D0CEF: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x587D0CF2: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587D0CF4: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587D0CF6: push ecx
        __asm _emit 0x51
        // 0x587D0CF7: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D0CFC: mov ebx, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587D0D00: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587D0D02: movzx eax, word ptr [ebx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x02
        // 0x587D0D06: imul eax, eax, 0xd4
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D0C: push eax
        __asm _emit 0x50
        // 0x587D0D0D: push ebp
        __asm _emit 0x55
        // 0x587D0D0E: push edi
        __asm _emit 0x57
        // 0x587D0D0F: mov dword ptr [esp + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D16: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xC0
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D0D1B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D0D1D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D0D20: mov dword ptr [esp + 0x68], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D28: cmp cx, word ptr [ebx + 2]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x4B
        __asm _emit 0x02
        // 0x587D0D2C: jae 0x587d0e2d
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D32: lea ebp, [edi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D38: jmp 0x587d0d40
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587D0D40..0x587D0E33; 243 mapped bytes.
extern "C" __declspec(naked) void FUN_587d0aa0_segment_02() {
    __asm {
        // 0x587D0D40: test byte ptr [ebp], 0x7f
        __asm _emit 0xF6
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x7F
        // 0x587D0D44: je 0x587d0e12
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D4A: movzx eax, byte ptr [ebp + 0x2e]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x45
        __asm _emit 0x2E
        // 0x587D0D4E: mov edx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D54: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587D0D56: shr edi, 4
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x04
        // 0x587D0D59: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587D0D5C: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587D0D5F: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587D0D61: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D67: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x587D0D69: mov dword ptr [eax + edx*4], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587D0D70: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D76: mov edx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0D7C: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587D0D7F: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x587D0D81: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x587D0D84: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D0D86: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587D0D89: lea edx, [edi + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xBF
        // 0x587D0D8C: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587D0D8E: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587D0D90: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x587D0D94: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D0D98: sub dx, bx
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x587D0D9B: mov ecx, 0x7da
        __asm _emit 0xB9
        __asm _emit 0xDA
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0DA0: add dx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587D0DA3: movzx ecx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCA
        // 0x587D0DA6: lea edx, [ebp - 0x80]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x80
        // 0x587D0DA9: push edx
        __asm _emit 0x52
        // 0x587D0DAA: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D0DAE: push ecx
        __asm _emit 0x51
        // 0x587D0DAF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D0DB1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D0DB3: add eax, 0x300
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0DB8: push eax
        __asm _emit 0x50
        // 0x587D0DB9: push edx
        __asm _emit 0x52
        // 0x587D0DBA: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587D0DBC: push esi
        __asm _emit 0x56
        // 0x587D0DBD: call 0x5874f8c0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xEA
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587D0DC2: mov edx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0DC9: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587D0DCC: push ebx
        __asm _emit 0x53
        // 0x587D0DCD: push edi
        __asm _emit 0x57
        // 0x587D0DCE: lea ecx, [ebp - 0x80]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x80
        // 0x587D0DD1: push ecx
        __asm _emit 0x51
        // 0x587D0DD2: mov dword ptr [esi + 0x774], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0DD8: movzx ecx, byte ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587D0DDC: and ecx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x7F
        // 0x587D0DDF: push ecx
        __asm _emit 0x51
        // 0x587D0DE0: movzx ecx, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0A
        // 0x587D0DE3: push ecx
        __asm _emit 0x51
        // 0x587D0DE4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D0DE6: call 0x5874bac0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xAC
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587D0DEB: mov ecx, dword ptr [esi + 0x774]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0DF1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D0DF3: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587D0DF6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D0DF8: mov ecx, dword ptr [esi + 0x774]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0DFE: push ecx
        __asm _emit 0x51
        // 0x587D0DFF: mov ecx, dword ptr [esi + 0x778]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E05: call 0x58789590
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x87
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D0E0A: mov edi, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587D0E0E: mov ebx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587D0E12: mov eax, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587D0E16: movzx edx, word ptr [ebx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x53
        __asm _emit 0x02
        // 0x587D0E1A: inc eax
        __asm _emit 0x40
        // 0x587D0E1B: add ebp, 0xd4
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E21: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587D0E23: mov dword ptr [esp + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587D0E27: jl 0x587d0d40
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0E2D: push edi
        __asm _emit 0x57
        // 0x587D0E2E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D0E36..0x587D0E40; 10 mapped bytes.
extern "C" __declspec(naked) void FUN_587d0aa0_segment_03() {
    __asm {
        // 0x587D0E36: pop edi
        __asm _emit 0x5F
        // 0x587D0E37: pop esi
        __asm _emit 0x5E
        // 0x587D0E38: pop ebp
        __asm _emit 0x5D
        // 0x587D0E39: pop ebx
        __asm _emit 0x5B
        // 0x587D0E3A: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x50
        // 0x587D0E3D: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
