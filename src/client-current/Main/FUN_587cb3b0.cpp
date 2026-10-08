// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 383 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb3b0.

// Ghidra body range 0x587CB3B0..0x587CB52F; 383 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb3b0_segment_00() {
    __asm {
        // 0x587CB3B0: push ecx
        __asm _emit 0x51
        // 0x587CB3B1: push ebx
        __asm _emit 0x53
        // 0x587CB3B2: push esi
        __asm _emit 0x56
        // 0x587CB3B3: push edi
        __asm _emit 0x57
        // 0x587CB3B4: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587CB3B6: mov edx, dword ptr [edi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB3BC: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587CB3BF: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CB3C4: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587CB3C6: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CB3C9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB3CB: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB3CE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB3D0: mov edx, dword ptr [edi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB3D6: push edx
        __asm _emit 0x52
        // 0x587CB3D7: mov edx, dword ptr [edi + 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB3DD: push edx
        __asm _emit 0x52
        // 0x587CB3DE: push eax
        __asm _emit 0x50
        // 0x587CB3DF: push ecx
        __asm _emit 0x51
        // 0x587CB3E0: call 0x5876c360
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x0F
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587CB3E5: mov edx, dword ptr [edi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB3EB: lea esi, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x80
        // 0x587CB3EE: mov ecx, dword ptr [edi + 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB3F4: sub ecx, dword ptr [edi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587CB3F7: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CB3FC: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587CB3FE: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CB401: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB403: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB406: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587CB408: mov eax, dword ptr [edi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB40E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CB410: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587CB412: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587CB415: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587CB417: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587CB41A: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587CB41C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CB420: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CB423: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587CB425: fild dword ptr [esp + 0xc]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CB429: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CB42B: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x18
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CB430: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x18
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CB435: mov dword ptr [edi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB43B: mov edi, dword ptr [edi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB441: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x587CB446: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587CB448: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587CB44A: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587CB44D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB44F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB452: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB454: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587CB457: ja 0x587cb4e0
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB45D: jmp dword ptr [eax*4 + 0x587cb530]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xB5
        __asm _emit 0x7C
        __asm _emit 0x58
        // 0x587CB464: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x587CB469: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587CB46B: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x587CB46D: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587CB470: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB472: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB475: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB477: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587CB47A: ja 0x587cb4e0
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x587CB47C: jmp dword ptr [eax*4 + 0x587cb540]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xB5
        __asm _emit 0x7C
        __asm _emit 0x58
        // 0x587CB483: lea eax, [edi + 0x708]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB489: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587CB48B: jg 0x587cb4dc
        __asm _emit 0x7F
        __asm _emit 0x4F
        // 0x587CB48D: jge 0x587cb4f3
        __asm _emit 0x7D
        __asm _emit 0x64
        // 0x587CB48F: sub esi, edi
        __asm _emit 0x2B
        __asm _emit 0xF7
        // 0x587CB491: sub esi, 0xe10
        __asm _emit 0x81
        __asm _emit 0xEE
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB497: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x587CB499: pop edi
        __asm _emit 0x5F
        // 0x587CB49A: pop esi
        __asm _emit 0x5E
        // 0x587CB49B: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587CB49D: pop ebx
        __asm _emit 0x5B
        // 0x587CB49E: pop ecx
        __asm _emit 0x59
        // 0x587CB49F: ret
        __asm _emit 0xC3
        // 0x587CB4A0: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x587CB4A5: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587CB4A7: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x587CB4A9: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587CB4AC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB4AE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB4B1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB4B3: js 0x587cb4e0
        __asm _emit 0x78
        __asm _emit 0x2B
        // 0x587CB4B5: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587CB4B8: jle 0x587cb4dc
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x587CB4BA: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587CB4BD: jne 0x587cb4e0
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587CB4BF: jmp 0x587cb483
        __asm _emit 0xEB
        __asm _emit 0xC2
        // 0x587CB4C1: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x587CB4C6: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587CB4C8: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x587CB4CA: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587CB4CD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB4CF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB4D2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB4D4: je 0x587cb4e7
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CB4D6: dec eax
        __asm _emit 0x48
        // 0x587CB4D7: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587CB4DA: ja 0x587cb4e0
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587CB4DC: sub esi, edi
        __asm _emit 0x2B
        __asm _emit 0xF7
        // 0x587CB4DE: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x587CB4E0: pop edi
        __asm _emit 0x5F
        // 0x587CB4E1: pop esi
        __asm _emit 0x5E
        // 0x587CB4E2: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587CB4E4: pop ebx
        __asm _emit 0x5B
        // 0x587CB4E5: pop ecx
        __asm _emit 0x59
        // 0x587CB4E6: ret
        __asm _emit 0xC3
        // 0x587CB4E7: lea eax, [edi - 0x708]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xF8
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CB4ED: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587CB4EF: jg 0x587cb51e
        __asm _emit 0x7F
        __asm _emit 0x2D
        // 0x587CB4F1: jl 0x587cb4dc
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587CB4F3: pop edi
        __asm _emit 0x5F
        // 0x587CB4F4: mov ebx, 0x708
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB4F9: pop esi
        __asm _emit 0x5E
        // 0x587CB4FA: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587CB4FC: pop ebx
        __asm _emit 0x5B
        // 0x587CB4FD: pop ecx
        __asm _emit 0x59
        // 0x587CB4FE: ret
        __asm _emit 0xC3
        // 0x587CB4FF: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x587CB504: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587CB506: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x587CB508: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587CB50B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB50D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB510: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB512: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587CB515: ja 0x587cb4e0
        __asm _emit 0x77
        __asm _emit 0xC9
        // 0x587CB517: jmp dword ptr [eax*4 + 0x587cb550]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xB5
        __asm _emit 0x7C
        __asm _emit 0x58
        // 0x587CB51E: sub esi, edi
        __asm _emit 0x2B
        __asm _emit 0xF7
        // 0x587CB520: add esi, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB526: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x587CB528: pop edi
        __asm _emit 0x5F
        // 0x587CB529: pop esi
        __asm _emit 0x5E
        // 0x587CB52A: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587CB52C: pop ebx
        __asm _emit 0x5B
        // 0x587CB52D: pop ecx
        __asm _emit 0x59
        // 0x587CB52E: ret
        __asm _emit 0xC3
    }
}
