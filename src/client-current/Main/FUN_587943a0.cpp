// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587943A0 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_587943a0() {
    __asm {
        // 0x587943A0: push esi
        __asm _emit 0x56
        // 0x587943A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587943A3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587943A7: push edi
        __asm _emit 0x57
        // 0x587943A8: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587943AA: je 0x587944a3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587943B0: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x587943B3: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587943B7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587943B9: je 0x587943df
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587943BB: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x587943BE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587943C0: je 0x587943d8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587943C2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587943C4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587943C6: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x587943C9: push edi
        __asm _emit 0x57
        // 0x587943CA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587943CC: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x587943CF: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x587943D2: je 0x587943df
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587943D4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587943D6: jne 0x587943c2
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x587943D8: pop edi
        __asm _emit 0x5F
        // 0x587943D9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587943DB: pop esi
        __asm _emit 0x5E
        // 0x587943DC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587943DF: cmp dword ptr [edi + 4], 0x201
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587943E6: jne 0x587944a3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587943EC: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587943EF: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587943F2: jne 0x5879447b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587943F8: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587943FB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587943FD: je 0x58794417
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587943FF: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58794405: push edx
        __asm _emit 0x52
        // 0x58794406: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879440B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5879440E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58794410: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58794413: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58794415: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58794417: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879441D: mov dword ptr [esi + 0x7c], 0x20
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x7C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794424: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58794426: je 0x5879445a
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x58794428: cmp dword ptr [esi + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5879442C: jne 0x587944a3
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x5879442E: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58794431: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794437: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879443E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58794440: je 0x5879445a
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58794442: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794448: push eax
        __asm _emit 0x50
        // 0x58794449: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x04
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5879444E: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794454: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58794457: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5879445A: cmp dword ptr [esi + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5879445E: jne 0x587944a3
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x58794460: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58794463: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58794465: je 0x587944a3
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x58794467: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58794469: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5879446C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879446E: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58794470: push esi
        __asm _emit 0x56
        // 0x58794471: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58794473: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58794476: pop edi
        __asm _emit 0x5F
        // 0x58794477: pop esi
        __asm _emit 0x5E
        // 0x58794478: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879447B: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5879447E: jne 0x587944a3
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x58794480: cmp dword ptr [esi + 0x60], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58794487: jne 0x587944a3
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58794489: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5879448C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5879448E: je 0x5879449c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58794490: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58794492: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58794495: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58794497: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58794499: push esi
        __asm _emit 0x56
        // 0x5879449A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879449C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879449E: call 0x58794240
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587944A3: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587944A6: pop edi
        __asm _emit 0x5F
        // 0x587944A7: pop esi
        __asm _emit 0x5E
        // 0x587944A8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
