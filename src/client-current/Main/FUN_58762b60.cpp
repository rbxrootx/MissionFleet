// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58762B60 .. +0xBA bytes.
// Source symbol alias: FUN_58762b60.
extern "C" __declspec(naked) void FUN_58762b60() {
    __asm {
        // 0x58762B60: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58762B64: push esi
        __asm _emit 0x56
        // 0x58762B65: push edi
        __asm _emit 0x57
        // 0x58762B66: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58762B68: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58762B6A: jge 0x58762ba3
        __asm _emit 0x7D
        __asm _emit 0x37
        // 0x58762B6C: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58762B70: mov eax, dword ptr [esi + edi*4 + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B77: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58762B79: mov dword ptr [eax + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B80: mov ecx, dword ptr [esi + edi*4 + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B87: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58762B89: call 0x5875dd20
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xB1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58762B8E: mov esi, dword ptr [esi + edi*4 + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B95: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B9A: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58762B9E: pop edi
        __asm _emit 0x5F
        // 0x58762B9F: pop esi
        __asm _emit 0x5E
        // 0x58762BA0: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58762BA3: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762BA9: lea eax, [eax + eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58762BAD: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762BB3: jle 0x58762bcd
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58762BB5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58762BB7: jl 0x58762bcd
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58762BB9: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762BC0: je 0x58762bcd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58762BC2: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x58762BC5: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762BCB: jmp 0x58762bcf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58762BCD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58762BCF: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58762BD3: mov ecx, dword ptr [esi + edx*4 + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762BDA: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x58762BDD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58762BDF: je 0x58762c09
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58762BE1: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58762BE4: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x58762BE7: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x58762BEA: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58762BED: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x58762BF0: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x58762BF2: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58762BF5: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x58762BF7: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58762BFA: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x58762BFD: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58762C00: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x58762C03: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58762C06: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58762C09: mov esi, dword ptr [esi + edx*4 + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762C10: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58762C15: pop edi
        __asm _emit 0x5F
        // 0x58762C16: pop esi
        __asm _emit 0x5E
        // 0x58762C17: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
