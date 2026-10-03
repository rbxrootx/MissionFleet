// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58797960 .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_58797960() {
    __asm {
        // 0x58797960: push esi
        __asm _emit 0x56
        // 0x58797961: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58797963: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797969: push edi
        __asm _emit 0x57
        // 0x5879796A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879796C: je 0x5879797a
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5879796E: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x58797971: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797976: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5879797A: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797980: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797986: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58797988: je 0x5879798f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5879798A: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5879798D: jmp 0x58797992
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5879798F: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58797992: mov dword ptr [esi + 0x2f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797998: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879799A: je 0x587979dc
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5879799C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5879799F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587979A1: cmp eax, dword ptr [esi + 0x250]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587979A7: jne 0x587979d1
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x587979A9: movzx eax, word ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587979B0: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x587979B4: je 0x587979d1
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587979B6: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x587979BA: je 0x587979d1
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587979BC: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x587979C0: je 0x587979d1
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587979C2: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587979C8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587979CA: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x9C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587979CF: jmp 0x587979dc
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587979D1: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587979D7: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587979DC: mov ecx, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587979E2: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x587979E5: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587979EA: push ebx
        __asm _emit 0x53
        // 0x587979EB: lea edi, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587979F1: mov ebx, 6
        __asm _emit 0xBB
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587979F6: jmp 0x58797a00
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587979F8: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587979FF: nop
        __asm _emit 0x90
        // 0x58797A00: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A06: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58797A0B: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58797A0D: push eax
        __asm _emit 0x50
        // 0x58797A0E: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x0E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58797A13: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58797A16: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58797A19: jne 0x58797a00
        __asm _emit 0x75
        __asm _emit 0xE5
        // 0x58797A1B: cmp dword ptr [esi + 0x2f8], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A21: je 0x58797a66
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58797A23: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A29: mov edi, dword ptr [ecx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x5C
        // 0x58797A2C: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58797A31: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A37: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58797A39: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58797A3E: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58797A41: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A47: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x58797A49: imul ebx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDF
        // 0x58797A4C: lea eax, [ebx + edx + 0xdd]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A53: push eax
        __asm _emit 0x50
        // 0x58797A54: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xB9
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58797A59: mov eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A5F: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58797A64: jmp 0x58797a75
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58797A66: mov eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A6C: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A71: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58797A75: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A7B: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797A81: pop ebx
        __asm _emit 0x5B
        // 0x58797A82: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58797A84: je 0x58797aab
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58797A86: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58797A8B: inc eax
        __asm _emit 0x40
        // 0x58797A8C: lea eax, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xC0
        // 0x58797A8F: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58797A91: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58797A93: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58797A95: cdq
        __asm _emit 0x99
        // 0x58797A96: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58797A98: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58797A9B: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58797A9E: lea eax, [edx + eax + 0xe9]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797AA5: push eax
        __asm _emit 0x50
    }
}
