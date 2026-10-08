// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 224 bytes in 1 exact ranges.
// Source symbol alias: FUN_58734770.

// Ghidra body range 0x58734770..0x58734850; 224 mapped bytes.
extern "C" __declspec(naked) void FUN_58734770_segment_00() {
    __asm {
        // 0x58734770: push esi
        __asm _emit 0x56
        // 0x58734771: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58734773: call 0x587330c0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734778: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873477A: call 0x58733120
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873477F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58734781: mov word ptr [esi + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734788: mov dword ptr [esi + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873478E: movzx eax, word ptr [esi + 0x12a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734795: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58734797: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58734799: mov word ptr [esi + 0x122], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587347A0: mov word ptr [esi + 0x120], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587347A7: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587347AB: jne 0x587347d1
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x587347AD: movzx eax, word ptr [esi + 0x128]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587347B4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587347B6: pop esi
        __asm _emit 0x5E
        // 0x587347B7: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587347BA: jne 0x587347c1
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587347BC: jmp 0x58732290
        __asm _emit 0xE9
        __asm _emit 0xCF
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587347C1: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587347C5: jne 0x587347cc
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587347C7: jmp 0x58732710
        __asm _emit 0xE9
        __asm _emit 0x44
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587347CC: jmp 0x58732e60
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587347D1: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587347D5: jne 0x587347fb
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x587347D7: movzx eax, word ptr [esi + 0x128]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587347DE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587347E0: pop esi
        __asm _emit 0x5E
        // 0x587347E1: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587347E4: jne 0x587347eb
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587347E6: jmp 0x58732290
        __asm _emit 0xE9
        __asm _emit 0xA5
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587347EB: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587347EF: jne 0x587347f6
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587347F1: jmp 0x58732710
        __asm _emit 0xE9
        __asm _emit 0x1A
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587347F6: jmp 0x58732980
        __asm _emit 0xE9
        __asm _emit 0x85
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587347FB: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587347FF: movzx eax, word ptr [esi + 0x128]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734806: jne 0x58734825
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58734808: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873480A: pop esi
        __asm _emit 0x5E
        // 0x5873480B: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873480E: jne 0x58734815
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58734810: jmp 0x58732290
        __asm _emit 0xE9
        __asm _emit 0x7B
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734815: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58734819: jne 0x58734820
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5873481B: jmp 0x58732710
        __asm _emit 0xE9
        __asm _emit 0xF0
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734820: jmp 0x58732bf0
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734825: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58734828: jne 0x58734832
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5873482A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873482C: pop esi
        __asm _emit 0x5E
        // 0x5873482D: jmp 0x58732290
        __asm _emit 0xE9
        __asm _emit 0x5E
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734832: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58734836: jne 0x58734840
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58734838: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873483A: pop esi
        __asm _emit 0x5E
        // 0x5873483B: jmp 0x587344a0
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734840: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58734844: je 0x5873484e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58734846: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58734848: pop esi
        __asm _emit 0x5E
        // 0x58734849: jmp 0x58732710
        __asm _emit 0xE9
        __asm _emit 0xC2
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873484E: pop esi
        __asm _emit 0x5E
        // 0x5873484F: ret
        __asm _emit 0xC3
    }
}
