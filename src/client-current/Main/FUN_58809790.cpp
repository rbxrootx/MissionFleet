// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58809790 .. +0x94 bytes.
// Source symbol alias: FUN_58809790.
extern "C" __declspec(naked) void FUN_58809790() {
    __asm {
        // 0x58809790: push ebx
        __asm _emit 0x53
        // 0x58809791: push ebp
        __asm _emit 0x55
        // 0x58809792: push esi
        __asm _emit 0x56
        // 0x58809793: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58809795: push edi
        __asm _emit 0x57
        // 0x58809796: lea edi, [esi + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880979C: mov ebx, 0x80
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588097A1: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588097A3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588097A5: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588097A7: je 0x588097b3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588097A9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588097AB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588097AD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588097AF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588097B1: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x588097B3: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588097B6: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588097B9: jne 0x588097a3
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588097BB: cmp dword ptr [esi + 0x74], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x74
        // 0x588097BE: jle 0x588097df
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588097C0: lea edi, [esi + 0x2d4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588097C6: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588097C8: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588097CA: je 0x588097d6
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588097CC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588097CE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588097D0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588097D2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588097D4: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x588097D6: inc ebx
        __asm _emit 0x43
        // 0x588097D7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588097DA: cmp ebx, dword ptr [esi + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x588097DD: jl 0x588097c6
        __asm _emit 0x7C
        __asm _emit 0xE7
        // 0x588097DF: mov dword ptr [esi + 0x80], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588097E5: mov dword ptr [esi + 0x74], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x74
        // 0x588097E8: mov dword ptr [esi + 0x70], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x70
        // 0x588097EB: mov dword ptr [esi + 0x84], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588097F1: mov dword ptr [esi + 0x7c], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588097F8: mov dword ptr [esi + 0x78], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x78
        // 0x588097FB: mov dword ptr [esi + 0xd0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809801: add esi, 0x2f4
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809807: mov edi, 0x20
        __asm _emit 0xBF
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880980C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58809810: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58809812: call 0x588c78f0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xE0
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58809817: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5880981A: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5880981D: jne 0x58809810
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5880981F: pop edi
        __asm _emit 0x5F
        // 0x58809820: pop esi
        __asm _emit 0x5E
        // 0x58809821: pop ebp
        __asm _emit 0x5D
        // 0x58809822: pop ebx
        __asm _emit 0x5B
        // 0x58809823: ret
        __asm _emit 0xC3
    }
}
