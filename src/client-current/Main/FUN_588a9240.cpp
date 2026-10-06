// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A9240 .. +0xBC bytes.
// Source symbol alias: FUN_588a9240.
extern "C" __declspec(naked) void FUN_588a9240() {
    __asm {
        // 0x588A9240: push esi
        __asm _emit 0x56
        // 0x588A9241: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A9243: mov eax, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9249: mov dword ptr [eax + 0x68], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9250: mov ecx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9256: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A9258: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A925B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A925D: movzx eax, word ptr [esi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9264: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588A9268: je 0x588a92cd
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x588A926A: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588A926E: je 0x588a92cd
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x588A9270: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A9275: cmp dword ptr [eax + 0x170], 0xf
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x588A927C: jle 0x588a9292
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A927E: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9285: je 0x588a9292
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A9287: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A928D: mov ecx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x3C
        // 0x588A9290: jmp 0x588a9294
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9292: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A9294: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A929A: push edx
        __asm _emit 0x52
        // 0x588A929B: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xE6
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A92A0: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A92A5: cmp dword ptr [eax + 0x170], 0xf
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x588A92AC: jle 0x588a92c2
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A92AE: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A92B5: je 0x588a92c2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A92B7: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A92BD: mov ecx, dword ptr [eax + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x3C
        // 0x588A92C0: jmp 0x588a92c4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A92C2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A92C4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A92C6: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A92C9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A92CB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A92CD: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A92D3: mov dword ptr [eax + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A92DA: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A92E1: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A92E7: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588A92EA: movzx eax, byte ptr [edx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A92F1: mov ecx, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A92F7: mov dword ptr [ecx + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x588A92FA: pop esi
        __asm _emit 0x5E
        // 0x588A92FB: ret
        __asm _emit 0xC3
    }
}
