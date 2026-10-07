// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A1340 .. +0x76 bytes.
// Source symbol alias: FUN_588a1340.
extern "C" __declspec(naked) void FUN_588a1340() {
    __asm {
        // 0x588A1340: push ebx
        __asm _emit 0x53
        // 0x588A1341: push ebp
        __asm _emit 0x55
        // 0x588A1342: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588A1344: push esi
        __asm _emit 0x56
        // 0x588A1345: push edi
        __asm _emit 0x57
        // 0x588A1346: lea esi, [ebx + 0x150]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A134C: lea edi, [ebx + 0x1cc]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1352: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1357: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588A1359: lea edi, [ebx + 0x2e0]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A135F: mov ebp, 0x1f
        __asm _emit 0xBD
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1364: mov eax, dword ptr [edi - 0x114]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xEC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A136A: push eax
        __asm _emit 0x50
        // 0x588A136B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588A136D: call 0x5889ed80
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A1372: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588A1374: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588A1376: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588A1379: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A137B: je 0x588a13a9
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x588A137D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588A137F: je 0x588a13a9
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588A1381: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1386: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588A138C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588A138E: je 0x588a13a1
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588A1390: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588A1392: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588A1394: je 0x588a13a1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A1396: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588A1398: inc eax
        __asm _emit 0x40
        // 0x588A1399: inc edx
        __asm _emit 0x42
        // 0x588A139A: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588A139D: jne 0x588a1386
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588A139F: jmp 0x588a13a5
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588A13A1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588A13A3: jne 0x588a13a6
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588A13A5: dec eax
        __asm _emit 0x48
        // 0x588A13A6: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A13A9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588A13AC: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588A13AF: jne 0x588a1364
        __asm _emit 0x75
        __asm _emit 0xB3
        // 0x588A13B1: pop edi
        __asm _emit 0x5F
        // 0x588A13B2: pop esi
        __asm _emit 0x5E
        // 0x588A13B3: pop ebp
        __asm _emit 0x5D
        // 0x588A13B4: pop ebx
        __asm _emit 0x5B
        // 0x588A13B5: ret
        __asm _emit 0xC3
    }
}
