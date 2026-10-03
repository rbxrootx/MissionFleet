// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588193B0 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_588193b0() {
    __asm {
        // 0x588193B0: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588193B5: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588193B8: ja 0x58819515
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588193BE: jmp dword ptr [eax*4 + 0x58819520]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x95
        __asm _emit 0x81
        __asm _emit 0x58
        // 0x588193C5: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588193CB: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588193CF: mov dword ptr [eax + 0xcd0], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588193D5: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588193D9: mov dword ptr [ecx + 0x1ac], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588193DF: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588193E5: cmp dword ptr [eax + 0xcd0], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588193EC: jne 0x588193f7
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588193EE: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588193F0: mov word ptr [eax + 0x88], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588193F7: mov eax, dword ptr [ecx + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588193FD: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58819401: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58819404: je 0x58819515
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881940A: mov eax, dword ptr [ecx + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819410: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58819415: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881941A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5881941D: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819423: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58819427: mov dword ptr [eax + 0xcd4], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881942D: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58819431: mov dword ptr [ecx + 0x1b0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819437: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881943D: cmp dword ptr [eax + 0xcd4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819444: jne 0x5881944f
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58819446: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58819448: mov word ptr [eax + 0x8a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881944F: mov eax, dword ptr [ecx + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819455: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58819459: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5881945C: je 0x58819515
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819462: mov eax, dword ptr [ecx + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819468: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5881946D: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58819472: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58819475: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881947B: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5881947F: mov dword ptr [eax + 0xcdc], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819485: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58819489: mov dword ptr [ecx + 0x1b4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881948F: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819495: cmp dword ptr [eax + 0xcdc], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881949C: jne 0x588194a7
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5881949E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588194A0: mov word ptr [eax + 0x8e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588194A7: mov eax, dword ptr [ecx + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588194AD: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588194B1: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588194B4: je 0x58819515
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x588194B6: mov eax, dword ptr [ecx + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588194BC: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588194C1: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588194C6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588194C9: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588194CF: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588194D3: mov dword ptr [eax + 0xcd8], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588194D9: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588194DD: mov dword ptr [ecx + 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588194E3: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588194E9: cmp dword ptr [eax + 0xcd8], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588194F0: jne 0x588194fb
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588194F2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588194F4: mov word ptr [eax + 0x8c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588194FB: mov eax, dword ptr [ecx + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819501: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58819505: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58819508: je 0x58819515
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5881950A: mov eax, dword ptr [ecx + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819510: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58819515: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881951A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
