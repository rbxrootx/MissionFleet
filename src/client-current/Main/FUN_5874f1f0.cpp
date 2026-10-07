// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1669 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874f1f0.

// Ghidra body range 0x5874F1F0..0x5874F875; 1669 mapped bytes.
extern "C" __declspec(naked) void FUN_5874f1f0_segment_00() {
    __asm {
        // 0x5874F1F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5874F1F2: push 0x5897e63b
        __asm _emit 0x68
        __asm _emit 0x3B
        __asm _emit 0xE6
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874F1F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F1FD: push eax
        __asm _emit 0x50
        // 0x5874F1FE: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874F203: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874F205: push eax
        __asm _emit 0x50
        // 0x5874F206: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F20A: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F210: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F214: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F216: jne 0x5874f275
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x5874F218: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F21D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xDA
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F222: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F225: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F229: mov dword ptr [esp + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F231: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F233: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F239: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F23D: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F241: push ecx
        __asm _emit 0x51
        // 0x5874F242: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F246: push edx
        __asm _emit 0x52
        // 0x5874F247: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F24B: push ecx
        __asm _emit 0x51
        // 0x5874F24C: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F250: push edx
        __asm _emit 0x52
        // 0x5874F251: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F255: push ecx
        __asm _emit 0x51
        // 0x5874F256: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F25A: push edx
        __asm _emit 0x52
        // 0x5874F25B: push ecx
        __asm _emit 0x51
        // 0x5874F25C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F25E: call 0x5874d8b0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F263: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F267: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F26E: pop ecx
        __asm _emit 0x59
        // 0x5874F26F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F272: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F275: test byte ptr [eax + 0x82], 0x20
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x5874F27C: je 0x5874f2db
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x5874F27E: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F283: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xD9
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F288: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F28B: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F28F: mov dword ptr [esp + 0xc], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F297: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F299: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F29F: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F2A3: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F2A7: push edx
        __asm _emit 0x52
        // 0x5874F2A8: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F2AC: push ecx
        __asm _emit 0x51
        // 0x5874F2AD: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F2B1: push edx
        __asm _emit 0x52
        // 0x5874F2B2: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F2B6: push ecx
        __asm _emit 0x51
        // 0x5874F2B7: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F2BB: push edx
        __asm _emit 0x52
        // 0x5874F2BC: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F2C0: push ecx
        __asm _emit 0x51
        // 0x5874F2C1: push edx
        __asm _emit 0x52
        // 0x5874F2C2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F2C4: call 0x5874de10
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F2C9: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F2CD: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F2D4: pop ecx
        __asm _emit 0x59
        // 0x5874F2D5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F2D8: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F2DB: movzx eax, word ptr [eax + 0x86]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F2E2: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5874F2E5: ja 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F2EB: jmp dword ptr [eax*4 + 0x5874f878]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xF8
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x5874F2F2: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F2F7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xD9
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F2FC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F2FF: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F303: mov dword ptr [esp + 0xc], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F30B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F30D: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4E
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F313: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F317: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F31B: push ecx
        __asm _emit 0x51
        // 0x5874F31C: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F320: push edx
        __asm _emit 0x52
        // 0x5874F321: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F325: push ecx
        __asm _emit 0x51
        // 0x5874F326: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F32A: push edx
        __asm _emit 0x52
        // 0x5874F32B: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F32F: push ecx
        __asm _emit 0x51
        // 0x5874F330: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F334: push edx
        __asm _emit 0x52
        // 0x5874F335: push ecx
        __asm _emit 0x51
        // 0x5874F336: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F338: call 0x5874ee50
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F33D: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F341: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F348: pop ecx
        __asm _emit 0x59
        // 0x5874F349: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F34C: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F34F: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F354: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xD8
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F359: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F35C: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F360: mov dword ptr [esp + 0xc], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F368: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F36A: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F370: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F374: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F378: push edx
        __asm _emit 0x52
        // 0x5874F379: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F37D: push ecx
        __asm _emit 0x51
        // 0x5874F37E: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F382: push edx
        __asm _emit 0x52
        // 0x5874F383: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F387: push ecx
        __asm _emit 0x51
        // 0x5874F388: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F38C: push edx
        __asm _emit 0x52
        // 0x5874F38D: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F391: push ecx
        __asm _emit 0x51
        // 0x5874F392: push edx
        __asm _emit 0x52
        // 0x5874F393: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F395: call 0x5874c8b0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F39A: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F39E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F3A5: pop ecx
        __asm _emit 0x59
        // 0x5874F3A6: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F3A9: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F3AC: push 0x1ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F3B1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xD8
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F3B6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F3B9: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F3BD: mov dword ptr [esp + 0xc], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F3C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F3C7: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F3CD: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F3D1: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F3D5: push ecx
        __asm _emit 0x51
        // 0x5874F3D6: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F3DA: push edx
        __asm _emit 0x52
        // 0x5874F3DB: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F3DF: push ecx
        __asm _emit 0x51
        // 0x5874F3E0: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F3E4: push edx
        __asm _emit 0x52
        // 0x5874F3E5: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F3E9: push ecx
        __asm _emit 0x51
        // 0x5874F3EA: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F3EE: push edx
        __asm _emit 0x52
        // 0x5874F3EF: push ecx
        __asm _emit 0x51
        // 0x5874F3F0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F3F2: call 0x5874ca60
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F3F7: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F3FB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F402: pop ecx
        __asm _emit 0x59
        // 0x5874F403: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F406: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F409: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F40E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xD8
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F413: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F416: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F41A: mov dword ptr [esp + 0xc], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F422: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F424: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F42A: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F42E: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F432: push edx
        __asm _emit 0x52
        // 0x5874F433: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F437: push ecx
        __asm _emit 0x51
        // 0x5874F438: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F43C: push edx
        __asm _emit 0x52
        // 0x5874F43D: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F441: push ecx
        __asm _emit 0x51
        // 0x5874F442: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F446: push edx
        __asm _emit 0x52
        // 0x5874F447: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F44B: push ecx
        __asm _emit 0x51
        // 0x5874F44C: push edx
        __asm _emit 0x52
        // 0x5874F44D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F44F: call 0x5874d560
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F454: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F458: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F45F: pop ecx
        __asm _emit 0x59
        // 0x5874F460: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F463: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F466: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F46B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xD7
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F470: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F473: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F477: mov dword ptr [esp + 0xc], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F47F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F481: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F487: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F48B: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F48F: push ecx
        __asm _emit 0x51
        // 0x5874F490: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F494: push edx
        __asm _emit 0x52
        // 0x5874F495: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F499: push ecx
        __asm _emit 0x51
        // 0x5874F49A: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F49E: push edx
        __asm _emit 0x52
        // 0x5874F49F: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F4A3: push ecx
        __asm _emit 0x51
        // 0x5874F4A4: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F4A8: push edx
        __asm _emit 0x52
        // 0x5874F4A9: push ecx
        __asm _emit 0x51
        // 0x5874F4AA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F4AC: call 0x5874ce40
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F4B1: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F4B5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F4BC: pop ecx
        __asm _emit 0x59
        // 0x5874F4BD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F4C0: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F4C3: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F4C8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xD7
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F4CD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F4D0: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F4D4: mov dword ptr [esp + 0xc], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F4DC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F4DE: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F4E4: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F4E8: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F4EC: push edx
        __asm _emit 0x52
        // 0x5874F4ED: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F4F1: push ecx
        __asm _emit 0x51
        // 0x5874F4F2: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F4F6: push edx
        __asm _emit 0x52
        // 0x5874F4F7: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F4FB: push ecx
        __asm _emit 0x51
        // 0x5874F4FC: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F500: push edx
        __asm _emit 0x52
        // 0x5874F501: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F505: push ecx
        __asm _emit 0x51
        // 0x5874F506: push edx
        __asm _emit 0x52
        // 0x5874F507: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F509: call 0x5874d720
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F50E: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F512: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F519: pop ecx
        __asm _emit 0x59
        // 0x5874F51A: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F51D: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F520: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F525: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xD7
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F52A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F52D: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F531: mov dword ptr [esp + 0xc], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F539: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F53B: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F541: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F545: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F549: push ecx
        __asm _emit 0x51
        // 0x5874F54A: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F54E: push edx
        __asm _emit 0x52
        // 0x5874F54F: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F553: push ecx
        __asm _emit 0x51
        // 0x5874F554: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F558: push edx
        __asm _emit 0x52
        // 0x5874F559: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F55D: push ecx
        __asm _emit 0x51
        // 0x5874F55E: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F562: push edx
        __asm _emit 0x52
        // 0x5874F563: push ecx
        __asm _emit 0x51
        // 0x5874F564: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F566: call 0x5874e0a0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F56B: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F56F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F576: pop ecx
        __asm _emit 0x59
        // 0x5874F577: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F57A: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F57D: push 0x1f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F582: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xD6
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F587: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F58A: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F58E: mov dword ptr [esp + 0xc], 9
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F596: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F598: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F59E: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F5A2: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F5A6: push edx
        __asm _emit 0x52
        // 0x5874F5A7: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F5AB: push ecx
        __asm _emit 0x51
        // 0x5874F5AC: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F5B0: push edx
        __asm _emit 0x52
        // 0x5874F5B1: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F5B5: push ecx
        __asm _emit 0x51
        // 0x5874F5B6: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F5BA: push edx
        __asm _emit 0x52
        // 0x5874F5BB: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F5BF: push ecx
        __asm _emit 0x51
        // 0x5874F5C0: push edx
        __asm _emit 0x52
        // 0x5874F5C1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F5C3: call 0x5874eb40
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F5C8: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F5CC: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F5D3: pop ecx
        __asm _emit 0x59
        // 0x5874F5D4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F5D7: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F5DA: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F5DF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xD6
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F5E4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F5E7: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F5EB: mov dword ptr [esp + 0xc], 0xa
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F5F3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F5F5: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F5FB: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F5FF: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F603: push ecx
        __asm _emit 0x51
        // 0x5874F604: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F608: push edx
        __asm _emit 0x52
        // 0x5874F609: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F60D: push ecx
        __asm _emit 0x51
        // 0x5874F60E: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F612: push edx
        __asm _emit 0x52
        // 0x5874F613: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F617: push ecx
        __asm _emit 0x51
        // 0x5874F618: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F61C: push edx
        __asm _emit 0x52
        // 0x5874F61D: push ecx
        __asm _emit 0x51
        // 0x5874F61E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F620: call 0x5874d380
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F625: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F629: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F630: pop ecx
        __asm _emit 0x59
        // 0x5874F631: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F634: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F637: push 0x1f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F63C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xD6
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F641: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F644: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F648: mov dword ptr [esp + 0xc], 0xb
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F650: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F652: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F658: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F65C: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F660: push edx
        __asm _emit 0x52
        // 0x5874F661: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F665: push ecx
        __asm _emit 0x51
        // 0x5874F666: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F66A: push edx
        __asm _emit 0x52
        // 0x5874F66B: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F66F: push ecx
        __asm _emit 0x51
        // 0x5874F670: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F674: push edx
        __asm _emit 0x52
        // 0x5874F675: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F679: push ecx
        __asm _emit 0x51
        // 0x5874F67A: push edx
        __asm _emit 0x52
        // 0x5874F67B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F67D: call 0x5874dc80
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F682: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F686: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F68D: pop ecx
        __asm _emit 0x59
        // 0x5874F68E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F691: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F694: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F699: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xD5
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F69E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F6A1: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F6A5: mov dword ptr [esp + 0xc], 0xc
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F6AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F6AF: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F6B5: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F6B9: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F6BD: push ecx
        __asm _emit 0x51
        // 0x5874F6BE: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F6C2: push edx
        __asm _emit 0x52
        // 0x5874F6C3: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F6C7: push ecx
        __asm _emit 0x51
        // 0x5874F6C8: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F6CC: push edx
        __asm _emit 0x52
        // 0x5874F6CD: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F6D1: push ecx
        __asm _emit 0x51
        // 0x5874F6D2: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F6D6: push edx
        __asm _emit 0x52
        // 0x5874F6D7: push ecx
        __asm _emit 0x51
        // 0x5874F6D8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F6DA: call 0x5874efe0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F6DF: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F6E3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F6EA: pop ecx
        __asm _emit 0x59
        // 0x5874F6EB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F6EE: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F6F1: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F6F6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xD5
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F6FB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F6FE: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F702: mov dword ptr [esp + 0xc], 0xd
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F70A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F70C: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F712: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F716: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F71A: push edx
        __asm _emit 0x52
        // 0x5874F71B: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F71F: push ecx
        __asm _emit 0x51
        // 0x5874F720: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F724: push edx
        __asm _emit 0x52
        // 0x5874F725: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F729: push ecx
        __asm _emit 0x51
        // 0x5874F72A: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F72E: push edx
        __asm _emit 0x52
        // 0x5874F72F: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F733: push ecx
        __asm _emit 0x51
        // 0x5874F734: push edx
        __asm _emit 0x52
        // 0x5874F735: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F737: call 0x5874ec40
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F73C: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F740: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F747: pop ecx
        __asm _emit 0x59
        // 0x5874F748: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F74B: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F74E: push 0x1ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F753: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xD4
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F758: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F75B: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F75F: mov dword ptr [esp + 0xc], 0xe
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F767: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F769: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F76F: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F773: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F777: push ecx
        __asm _emit 0x51
        // 0x5874F778: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F77C: push edx
        __asm _emit 0x52
        // 0x5874F77D: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F781: push ecx
        __asm _emit 0x51
        // 0x5874F782: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F786: push edx
        __asm _emit 0x52
        // 0x5874F787: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F78B: push ecx
        __asm _emit 0x51
        // 0x5874F78C: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F790: push edx
        __asm _emit 0x52
        // 0x5874F791: push ecx
        __asm _emit 0x51
        // 0x5874F792: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F794: call 0x5874e520
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F799: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F79D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F7A4: pop ecx
        __asm _emit 0x59
        // 0x5874F7A5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F7A8: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F7AB: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F7B0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xD4
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F7B5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F7B8: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F7BC: mov dword ptr [esp + 0xc], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F7C4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F7C6: je 0x5874f861
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F7CC: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F7D0: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F7D4: push edx
        __asm _emit 0x52
        // 0x5874F7D5: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F7D9: push ecx
        __asm _emit 0x51
        // 0x5874F7DA: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F7DE: push edx
        __asm _emit 0x52
        // 0x5874F7DF: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F7E3: push ecx
        __asm _emit 0x51
        // 0x5874F7E4: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F7E8: push edx
        __asm _emit 0x52
        // 0x5874F7E9: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F7ED: push ecx
        __asm _emit 0x51
        // 0x5874F7EE: push edx
        __asm _emit 0x52
        // 0x5874F7EF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F7F1: call 0x5874c6c0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xCE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F7F6: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F7FA: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F801: pop ecx
        __asm _emit 0x59
        // 0x5874F802: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F805: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F808: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F80D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xD4
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F812: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F815: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F819: mov dword ptr [esp + 0xc], 0x10
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F821: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F823: je 0x5874f861
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5874F825: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F829: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F82D: push ecx
        __asm _emit 0x51
        // 0x5874F82E: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F832: push edx
        __asm _emit 0x52
        // 0x5874F833: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F837: push ecx
        __asm _emit 0x51
        // 0x5874F838: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F83C: push edx
        __asm _emit 0x52
        // 0x5874F83D: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F841: push ecx
        __asm _emit 0x51
        // 0x5874F842: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F846: push edx
        __asm _emit 0x52
        // 0x5874F847: push ecx
        __asm _emit 0x51
        // 0x5874F848: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874F84A: call 0x5874dd90
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F84F: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F853: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F85A: pop ecx
        __asm _emit 0x59
        // 0x5874F85B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F85E: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5874F861: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874F863: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F867: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F86E: pop ecx
        __asm _emit 0x59
        // 0x5874F86F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F872: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
