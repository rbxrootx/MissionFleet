// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587986E0 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_587986e0() {
    __asm {
        // 0x587986E0: push esi
        __asm _emit 0x56
        // 0x587986E1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587986E3: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587986E9: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587986EC: mov dword ptr [esi + 0x2c8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587986F6: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587986F8: cmp cl, byte ptr [esi + 0x250]
        __asm _emit 0x3A
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587986FE: jne 0x58798755
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x58798700: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58798703: cmp dl, byte ptr [esi + 0x251]
        __asm _emit 0x3A
        __asm _emit 0x96
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798709: jne 0x58798755
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x5879870B: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x02
        // 0x5879870F: cmp cx, word ptr [esi + 0x252]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798716: jne 0x58798755
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x58798718: movsx ecx, word ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5879871D: mov edx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798723: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798729: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5879872B: je 0x58798748
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5879872D: push eax
        __asm _emit 0x50
        // 0x5879872E: mov eax, dword ptr [esi + 0x2e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798734: push ecx
        __asm _emit 0x51
        // 0x58798735: mov ecx, dword ptr [esi + 0x2dc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879873B: push eax
        __asm _emit 0x50
        // 0x5879873C: push ecx
        __asm _emit 0x51
        // 0x5879873D: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58798743: call 0x587b9f70
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58798748: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5879874A: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5879874D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879874F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58798751: pop esi
        __asm _emit 0x5E
        // 0x58798752: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58798755: mov cx, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5879875A: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5879875D: jle 0x5879878a
        __asm _emit 0x7E
        __asm _emit 0x2B
        // 0x5879875F: mov edx, dword ptr [esi + 0x2e0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798765: push eax
        __asm _emit 0x50
        // 0x58798766: mov eax, dword ptr [esi + 0x2dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879876C: movsx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xC9
        // 0x5879876F: push ecx
        __asm _emit 0x51
        // 0x58798770: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58798776: push edx
        __asm _emit 0x52
        // 0x58798777: push eax
        __asm _emit 0x50
        // 0x58798778: call 0x587b9f70
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5879877D: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5879877F: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58798782: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58798784: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58798786: pop esi
        __asm _emit 0x5E
        // 0x58798787: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879878A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879878C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879878E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798790: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58798792: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x33
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58798797: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58798799: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xC5
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5879879E: pop esi
        __asm _emit 0x5E
        // 0x5879879F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
