// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588ACA40 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_588aca40() {
    __asm {
        // 0x588ACA40: push esi
        __asm _emit 0x56
        // 0x588ACA41: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588ACA43: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588ACA47: push edi
        __asm _emit 0x57
        // 0x588ACA48: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588ACA4A: je 0x588acb1d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA50: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588ACA53: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588ACA57: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ACA59: je 0x588aca7f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588ACA5B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588ACA5E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ACA60: je 0x588aca78
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588ACA62: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588ACA64: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588ACA66: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588ACA69: push edi
        __asm _emit 0x57
        // 0x588ACA6A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588ACA6C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588ACA6F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588ACA72: je 0x588aca7f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588ACA74: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ACA76: jne 0x588aca62
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588ACA78: pop edi
        __asm _emit 0x5F
        // 0x588ACA79: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ACA7B: pop esi
        __asm _emit 0x5E
        // 0x588ACA7C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588ACA7F: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588ACA82: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA87: je 0x588acaa4
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588ACA89: cmp eax, 0x20a
        __asm _emit 0x3D
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA8E: jne 0x588acb1d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACA94: movzx edx, word ptr [edi + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x57
        __asm _emit 0x0A
        // 0x588ACA98: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588ACA9B: pop edi
        __asm _emit 0x5F
        // 0x588ACA9C: mov dword ptr [esp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588ACAA0: pop esi
        __asm _emit 0x5E
        // 0x588ACAA1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588ACAA4: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x588ACAA7: lea eax, [edi - 0xd]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xF3
        // 0x588ACAAA: cmp eax, 0x1b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1B
        // 0x588ACAAD: ja 0x588acb1d
        __asm _emit 0x77
        __asm _emit 0x6E
        // 0x588ACAAF: movzx eax, byte ptr [eax + 0x588acb38]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x8A
        __asm _emit 0x58
        // 0x588ACAB6: jmp dword ptr [eax*4 + 0x588acb28]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xCB
        __asm _emit 0x8A
        __asm _emit 0x58
        // 0x588ACABD: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588ACAC0: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588ACAC4: shr dl, 1
        __asm _emit 0xD0
        __asm _emit 0xEA
        // 0x588ACAC6: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588ACAC9: je 0x588acb1d
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588ACACB: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588ACACE: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACAD4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ACAD6: je 0x588acb1d
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588ACAD8: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588ACADB: jmp 0x588acae0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588ACADD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588ACAE0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588ACAE2: inc eax
        __asm _emit 0x40
        // 0x588ACAE3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588ACAE5: jne 0x588acae0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588ACAE7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588ACAE9: inc eax
        __asm _emit 0x40
        // 0x588ACAEA: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588ACAED: jle 0x588acb1d
        __asm _emit 0x7E
        __asm _emit 0x2E
        // 0x588ACAEF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588ACAF1: call 0x588ac590
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588ACAF6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588ACAF9: pop edi
        __asm _emit 0x5F
        // 0x588ACAFA: pop esi
        __asm _emit 0x5E
        // 0x588ACAFB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588ACAFE: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ACB04: mov edx, dword ptr [ecx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACB0A: mov dword ptr [edx + 0x2c8], 0
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACB14: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588ACB16: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588ACB19: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588ACB1B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588ACB1D: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588ACB20: pop edi
        __asm _emit 0x5F
        // 0x588ACB21: pop esi
        __asm _emit 0x5E
    }
}
