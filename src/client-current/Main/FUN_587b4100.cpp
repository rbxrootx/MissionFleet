// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 845 bytes in 2 exact ranges.
// Source symbol alias: FUN_587b4100.

// Ghidra body range 0x587B4100..0x587B4258; 344 mapped bytes.
extern "C" __declspec(naked) void FUN_587b4100_segment_00() {
    __asm {
        // 0x587B4100: sub esp, 0x1cc
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4106: push ebx
        __asm _emit 0x53
        // 0x587B4107: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587B4109: movzx eax, word ptr [ebx + 0x228]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4110: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B4112: shr ecx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0B
        // 0x587B4115: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587B4118: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x587B411B: inc ecx
        __asm _emit 0x41
        // 0x587B411C: cdq
        __asm _emit 0x99
        // 0x587B411D: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587B411F: push ebp
        __asm _emit 0x55
        // 0x587B4120: push esi
        __asm _emit 0x56
        // 0x587B4121: movzx esi, word ptr [ebx + 0x228]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB3
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4128: shr esi, 0xb
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x0B
        // 0x587B412B: and esi, 3
        __asm _emit 0x83
        __asm _emit 0xE6
        __asm _emit 0x03
        // 0x587B412E: inc esi
        __asm _emit 0x46
        // 0x587B412F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B4131: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B4133: push edi
        __asm _emit 0x57
        // 0x587B4134: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B4138: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B413C: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B4140: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B4144: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B4148: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B414A: jle 0x587b41fb
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4150: movzx edx, word ptr [ebx + 0x22a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x2A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4157: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x587B415A: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587B415D: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B4161: jmp 0x587b416b
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587B4163: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B4167: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B416B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587B416D: jne 0x587b417b
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587B416F: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B4173: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587B4175: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587B4179: jmp 0x587b417f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587B417B: mov dword ptr [esp + ebp*4 + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xAC
        __asm _emit 0x3C
        // 0x587B417F: mov eax, dword ptr [esp + ebp*4 + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xAC
        __asm _emit 0x3C
        // 0x587B4183: lea edi, [esp + ebp*4 + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0xAC
        __asm _emit 0x3C
        // 0x587B4187: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x587B418A: cdq
        __asm _emit 0x99
        // 0x587B418B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B418D: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B418F: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587B4191: cmp dword ptr [edi], 0
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x587B4194: jle 0x587b41ee
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587B4196: movzx edx, word ptr [ebx + 0x22a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x2A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B419D: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587B419F: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587B41A1: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x587B41A4: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587B41A6: and esi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE6
        __asm _emit 0x1F
        // 0x587B41A9: lea edx, [ecx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x49
        // 0x587B41AC: and ebx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x1F
        // 0x587B41AF: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x587B41B1: lea ebp, [esi + 0x21]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x21
        // 0x587B41B4: lea edx, [esp + edx*8 + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0xD4
        __asm _emit 0x60
        // 0x587B41B8: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B41BC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587B41C0: lea ecx, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x587B41C3: mov dword ptr [edx - 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0xFC
        // 0x587B41C6: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587B41C9: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587B41CC: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x587B41CE: mov dword ptr [edx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587B41D1: mov dword ptr [edx + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x10
        // 0x587B41D4: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x587B41D6: add edx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x18
        // 0x587B41D9: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587B41DC: jne 0x587b41c0
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x587B41DE: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B41E2: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B41E6: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B41EA: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B41EE: inc ebp
        __asm _emit 0x45
        // 0x587B41EF: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x587B41F1: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B41F5: jl 0x587b4163
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B41FB: movzx eax, word ptr [ebx + 0x228]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4202: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B420A: test eax, 0xf
        __asm _emit 0xA9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B420F: jle 0x587b444a
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4215: lea eax, [esp + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587B4219: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B421D: lea esi, [ebx + 0x304]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4223: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xFC
        // 0x587B4226: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587B4228: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B422C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B422F: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B4233: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587B4236: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B423A: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587B423D: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x10
        // 0x587B4240: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B4242: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B4246: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B424A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B424E: mov dword ptr [esp + 0x20], 0x24
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4256: jmp 0x587b4260
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x587B4260..0x587B4455; 501 mapped bytes.
extern "C" __declspec(naked) void FUN_587b4100_segment_01() {
    __asm {
        // 0x587B4260: mov edi, dword ptr [ebp*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0xAD
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B4267: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B426B: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587B426E: mov ebx, dword ptr [ebp*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0xAD
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B4275: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B427A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B427C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B427F: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587B4281: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587B4284: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B4286: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B4288: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B428C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B4290: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B4293: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B4298: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B429A: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B429E: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B42A1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B42A3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B42A6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B42A8: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587B42AA: mov dword ptr [esi - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0xF8
        // 0x587B42AD: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B42B1: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B42B4: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B42B9: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B42BB: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B42BF: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587B42C2: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B42C5: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B42C7: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B42CA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B42CC: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B42D0: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B42D5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B42D7: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B42DB: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B42DE: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B42E0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B42E2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B42E5: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587B42E7: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B42EB: cdq
        __asm _emit 0x99
        // 0x587B42EC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B42EE: movzx edx, word ptr [ecx + 0x22c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B42F5: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B42F9: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B42FB: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B42FE: and edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587B4301: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B4303: mov dword ptr [esi - 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0xFC
        // 0x587B4306: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B430B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B430D: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B4311: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587B4314: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B4317: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B4319: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B431C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B431E: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B4322: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B4327: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B4329: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B432D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B4330: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587B4332: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587B4335: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B4337: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587B4339: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x587B433B: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B433F: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587B4342: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B4347: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B4349: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B434D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B4350: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B4352: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B4355: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B4357: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B435A: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B435E: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B4363: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B4365: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B4369: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B436C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B436E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B4370: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B4373: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587B4375: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B4379: cdq
        __asm _emit 0x99
        // 0x587B437A: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B437D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B437F: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B4381: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587B4384: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B4389: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B438B: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B438F: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587B4392: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B4395: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B4397: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B439A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B439C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B43A0: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B43A5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B43A7: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B43AB: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B43AE: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587B43B0: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587B43B3: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B43B5: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587B43B7: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587B43BA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B43BE: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587B43C1: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B43C6: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B43C8: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B43CC: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B43CF: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B43D2: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587B43D4: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x587B43D7: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x587B43D9: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B43DE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B43E0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B43E3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B43E5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B43E8: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x587B43EA: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587B43EC: cdq
        __asm _emit 0x99
        // 0x587B43ED: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B43EF: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B43F1: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587B43F4: add ebp, 0x64
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x64
        // 0x587B43F7: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x587B43FC: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x587B43FE: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x587B4400: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587B4403: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B4405: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B4408: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B440A: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4410: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x587B4412: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x587B4415: sub dword ptr [esp + 0x20], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587B441A: jne 0x587b4260
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B4420: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B4424: movzx edx, word ptr [edx + 0x228]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B442B: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B442F: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B4433: inc ecx
        __asm _emit 0x41
        // 0x587B4434: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587B4437: and edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587B443A: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587B443C: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B4440: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B4444: jl 0x587b4223
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xD9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B444A: pop edi
        __asm _emit 0x5F
        // 0x587B444B: pop esi
        __asm _emit 0x5E
        // 0x587B444C: pop ebp
        __asm _emit 0x5D
        // 0x587B444D: pop ebx
        __asm _emit 0x5B
        // 0x587B444E: add esp, 0x1cc
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4454: ret
        __asm _emit 0xC3
    }
}
