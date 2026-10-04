// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877B080 .. +0x6F bytes.
// Source symbol alias: FUN_5877b080.
extern "C" __declspec(naked) void FUN_5877b080() {
    __asm {
        // 0x5877B080: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877B085: push esi
        __asm _emit 0x56
        // 0x5877B086: push edi
        __asm _emit 0x57
        // 0x5877B087: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5877B089: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B08F: mov esi, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B095: mov dx, word ptr [esi + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5877B099: mov eax, 0x3e0
        __asm _emit 0xB8
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B09E: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5877B0A1: cmp dx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x40
        // 0x5877B0A5: jne 0x5877b0ea
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x5877B0A7: movzx ecx, byte ptr [esi + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B0AE: push ecx
        __asm _emit 0x51
        // 0x5877B0AF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877B0B1: call 0x58779c30
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877B0B6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877B0B8: jne 0x5877b0ea
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x5877B0BA: mov dx, word ptr [edi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x5E
        // 0x5877B0BE: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x5877B0C2: mov eax, 0xffaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B0C7: xor dx, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xD0
        // 0x5877B0CA: mov ax, word ptr [esi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x5877B0CE: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B0D3: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5877B0D7: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x5877B0DA: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5877B0DD: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5877B0E0: ja 0x5877b0ea
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5877B0E2: pop edi
        __asm _emit 0x5F
        // 0x5877B0E3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877B0E8: pop esi
        __asm _emit 0x5E
        // 0x5877B0E9: ret
        __asm _emit 0xC3
        // 0x5877B0EA: pop edi
        __asm _emit 0x5F
        // 0x5877B0EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877B0ED: pop esi
        __asm _emit 0x5E
        // 0x5877B0EE: ret
        __asm _emit 0xC3
    }
}
