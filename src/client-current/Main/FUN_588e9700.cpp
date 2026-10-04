// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E9700 .. +0x9C bytes.
// Source symbol alias: FUN_588e9700.
extern "C" __declspec(naked) void FUN_588e9700() {
    __asm {
        // 0x588E9700: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E9704: push esi
        __asm _emit 0x56
        // 0x588E9705: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E9707: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x588E970A: sub ecx, 5
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x588E970D: je 0x588e9746
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588E970F: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588E9712: je 0x588e9738
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588E9714: sub ecx, 7
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x07
        // 0x588E9717: je 0x588e972a
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588E9719: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E971D: mov dword ptr [esi + ecx*4 + 0xb40], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9728: jmp 0x588e975d
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x588E972A: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9730: push eax
        __asm _emit 0x50
        // 0x588E9731: call 0x58778f30
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xF7
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9736: jmp 0x588e9752
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588E9738: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E973E: push eax
        __asm _emit 0x50
        // 0x588E973F: call 0x58778d60
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xF6
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9744: jmp 0x588e9752
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E9746: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E974C: push eax
        __asm _emit 0x50
        // 0x588E974D: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xF5
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9752: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E9756: mov dword ptr [esi + ecx*4 + 0xb40], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E975D: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588E9762: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9767: mov dword ptr [esi + ecx*8 + 0xbc0], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9772: mov dword ptr [esi + ecx*8 + 0xbc4], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E977D: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588E977F: mov word ptr [esi + ecx*4 + 0xac0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9787: mov word ptr [esi + ecx*4 + 0xac2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E978F: je 0x588e9798
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588E9791: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588E9793: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9798: pop esi
        __asm _emit 0x5E
        // 0x588E9799: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
