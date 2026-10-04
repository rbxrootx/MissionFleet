// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E97A0 .. +0x7C bytes.
// Source symbol alias: FUN_588e97a0.
extern "C" __declspec(naked) void FUN_588e97a0() {
    __asm {
        // 0x588E97A0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E97A4: push esi
        __asm _emit 0x56
        // 0x588E97A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E97A7: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x588E97AA: sub ecx, 0xb
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x0B
        // 0x588E97AD: je 0x588e97ec
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588E97AF: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588E97B2: je 0x588e97cc
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588E97B4: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E97B8: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E97BC: lea edx, [eax + ecx*2 + 0x2f0]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E97C3: mov dword ptr [esi + edx*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E97CA: jmp 0x588e980a
        __asm _emit 0xEB
        __asm _emit 0x3E
        // 0x588E97CC: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E97D2: push eax
        __asm _emit 0x50
        // 0x588E97D3: call 0x58778e20
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xF6
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E97D8: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E97DC: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E97E0: lea ecx, [ecx + edx*2 + 0x2f0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x51
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E97E7: mov dword ptr [esi + ecx*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x8E
        // 0x588E97EA: jmp 0x588e980a
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x588E97EC: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E97F2: push eax
        __asm _emit 0x50
        // 0x588E97F3: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xF5
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E97F8: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E97FC: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E9800: lea edx, [edx + ecx*2 + 0x2f0]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x4A
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9807: mov dword ptr [esi + edx*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x96
        // 0x588E980A: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588E980F: je 0x588e9818
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588E9811: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588E9813: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9818: pop esi
        __asm _emit 0x5E
        // 0x588E9819: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
