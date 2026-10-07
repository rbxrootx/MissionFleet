// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 176 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cba30.

// Ghidra body range 0x588CBA30..0x588CBAE0; 176 mapped bytes.
extern "C" __declspec(naked) void FUN_588cba30_segment_00() {
    __asm {
        // 0x588CBA30: push esi
        __asm _emit 0x56
        // 0x588CBA31: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CBA33: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CBA39: call 0x588946b0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x8C
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588CBA3E: push 0xc4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBA43: lea eax, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588CBA46: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CBA48: push eax
        __asm _emit 0x50
        // 0x588CBA49: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x11
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588CBA4E: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588CBA50: lea ecx, [esi + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBA56: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CBA58: push ecx
        __asm _emit 0x51
        // 0x588CBA59: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x11
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588CBA5E: mov ax, word ptr [esp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588CBA63: mov dx, word ptr [esp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588CBA68: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBA6E: mov word ptr [esi + 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588CBA72: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588CBA75: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588CBA78: push eax
        __asm _emit 0x50
        // 0x588CBA79: mov dword ptr [esi + 0x29c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBA83: mov word ptr [esi + 0x62], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x62
        // 0x588CBA87: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CBA8C: movzx ecx, word ptr [esi + 0x62]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x62
        // 0x588CBA90: push ecx
        __asm _emit 0x51
        // 0x588CBA91: mov ecx, dword ptr [esi + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBA97: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CBA9C: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CBAA0: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBAA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CBAA8: mov dword ptr [esi + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x588CBAAB: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CBAB1: push eax
        __asm _emit 0x50
        // 0x588CBAB2: call 0x58796af0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588CBAB7: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBABD: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBAC2: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588CBAC6: mov eax, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBACC: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588CBAD0: movzx ecx, word ptr [esi + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588CBAD4: push ecx
        __asm _emit 0x51
        // 0x588CBAD5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CBAD7: call 0x588cb0e0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CBADC: pop esi
        __asm _emit 0x5E
        // 0x588CBADD: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
