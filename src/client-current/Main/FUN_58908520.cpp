// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908520 .. +0xD1 bytes.
// Source symbol alias: FUN_58908520.
extern "C" __declspec(naked) void FUN_58908520() {
    __asm {
        // 0x58908520: push esi
        __asm _emit 0x56
        // 0x58908521: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58908523: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58908527: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x58908529: je 0x589085ea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890852F: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58908532: push edi
        __asm _emit 0x57
        // 0x58908533: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58908537: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908539: je 0x5890855f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5890853B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5890853E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908540: je 0x58908558
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58908542: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58908544: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58908546: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58908549: push edi
        __asm _emit 0x57
        // 0x5890854A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890854C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5890854F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58908552: je 0x5890855f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58908554: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908556: jne 0x58908542
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58908558: pop edi
        __asm _emit 0x5F
        // 0x58908559: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890855B: pop esi
        __asm _emit 0x5E
        // 0x5890855C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5890855F: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58908562: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908567: ja 0x589085a4
        __asm _emit 0x77
        __asm _emit 0x3B
        // 0x58908569: je 0x58908595
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5890856B: sub eax, 0x100
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908570: je 0x58908586
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58908572: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x58908575: jne 0x589085b5
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x58908577: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58908579: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5890857C: push edi
        __asm _emit 0x57
        // 0x5890857D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890857F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58908581: pop edi
        __asm _emit 0x5F
        // 0x58908582: pop esi
        __asm _emit 0x5E
        // 0x58908583: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58908586: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58908588: mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x1C
        // 0x5890858B: push edi
        __asm _emit 0x57
        // 0x5890858C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890858E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58908590: pop edi
        __asm _emit 0x5F
        // 0x58908591: pop esi
        __asm _emit 0x5E
        // 0x58908592: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58908595: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58908597: mov eax, dword ptr [edx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x34
        // 0x5890859A: push edi
        __asm _emit 0x57
        // 0x5890859B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890859D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890859F: pop edi
        __asm _emit 0x5F
        // 0x589085A0: pop esi
        __asm _emit 0x5E
        // 0x589085A1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x589085A4: sub eax, 0x202
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589085A9: je 0x589085db
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x589085AB: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x589085AE: je 0x589085cc
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x589085B0: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x589085B3: je 0x589085bd
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x589085B5: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x589085B8: pop edi
        __asm _emit 0x5F
        // 0x589085B9: pop esi
        __asm _emit 0x5E
        // 0x589085BA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x589085BD: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x589085BF: mov eax, dword ptr [edx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x28
        // 0x589085C2: push edi
        __asm _emit 0x57
        // 0x589085C3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x589085C5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x589085C7: pop edi
        __asm _emit 0x5F
        // 0x589085C8: pop esi
        __asm _emit 0x5E
        // 0x589085C9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x589085CC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x589085CE: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x2C
        // 0x589085D1: push edi
        __asm _emit 0x57
        // 0x589085D2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x589085D4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x589085D6: pop edi
        __asm _emit 0x5F
        // 0x589085D7: pop esi
        __asm _emit 0x5E
        // 0x589085D8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x589085DB: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x589085DD: mov eax, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x30
        // 0x589085E0: push edi
        __asm _emit 0x57
        // 0x589085E1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x589085E3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x589085E5: pop edi
        __asm _emit 0x5F
        // 0x589085E6: pop esi
        __asm _emit 0x5E
        // 0x589085E7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x589085EA: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x589085ED: pop esi
        __asm _emit 0x5E
        // 0x589085EE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
