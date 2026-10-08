// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 266 bytes in 1 exact ranges.
// Source symbol alias: FUN_58874310.

// Ghidra body range 0x58874310..0x5887441A; 266 mapped bytes.
extern "C" __declspec(naked) void FUN_58874310_segment_00() {
    __asm {
        // 0x58874310: sub esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x38
        // 0x58874313: push esi
        __asm _emit 0x56
        // 0x58874314: mov esi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58874318: push edi
        __asm _emit 0x57
        // 0x58874319: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5887431B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5887431D: jne 0x58874336
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5887431F: push 0xba
        __asm _emit 0x68
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874324: push 0x5899ef04
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xEF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58874329: push 0x5899eec8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xEE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5887432E: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58874333: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58874336: mov dword ptr [edi + 0x78], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x78
        // 0x58874339: mov ax, word ptr [esi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5887433D: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58874341: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x58874344: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887434A: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5887434F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58874351: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58874354: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58874356: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58874359: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5887435B: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5887435E: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58874360: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58874362: mov dword ptr [esp + 8], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887436A: mov dword ptr [esp + 0xc], 0x2d9
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0xD9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874372: mov dword ptr [esp + 0x10], 0xb7b
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x7B
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887437A: mov dword ptr [esp + 0x14], 0x1a2b
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x2B
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874382: mov dword ptr [esp + 0x18], 0x2f64
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x64
        __asm _emit 0x2F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887438A: mov dword ptr [esp + 0x1c], 0x4be5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xE5
        __asm _emit 0x4B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874392: mov dword ptr [esp + 0x20], 0x70c4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xC4
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887439A: mov dword ptr [esp + 0x24], 0x9f8d
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588743A2: mov dword ptr [esp + 0x28], 0xda84
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x84
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588743AA: mov dword ptr [esp + 0x2c], 0x124f8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0xF8
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588743B2: mov dword ptr [esp + 0x30], 0x183f1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xF1
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588743BA: mov dword ptr [esp + 0x34], 0x1ff62
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x62
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588743C2: mov dword ptr [esp + 0x38], 0x2a495
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x95
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588743CA: mov dword ptr [esp + 0x3c], 0x2e121
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x21
        __asm _emit 0xE1
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588743D2: jne 0x588743e9
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x588743D4: mov eax, dword ptr [esp + eax*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x08
        // 0x588743D8: mov ecx, dword ptr [edi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x6C
        // 0x588743DB: push eax
        __asm _emit 0x50
        // 0x588743DC: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x2F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588743E1: pop edi
        __asm _emit 0x5F
        // 0x588743E2: pop esi
        __asm _emit 0x5E
        // 0x588743E3: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x588743E6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588743E9: mov esi, dword ptr [esp + eax*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x84
        __asm _emit 0x08
        // 0x588743ED: mov edx, dword ptr [esp + eax*4 + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x84
        __asm _emit 0x0C
        // 0x588743F1: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x588743F3: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588743F8: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588743FA: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588743FD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588743FF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58874402: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58874404: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58874407: mov ecx, dword ptr [edi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x6C
        // 0x5887440A: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x5887440C: push eax
        __asm _emit 0x50
        // 0x5887440D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x2F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58874412: pop edi
        __asm _emit 0x5F
        // 0x58874413: pop esi
        __asm _emit 0x5E
        // 0x58874414: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x58874417: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
