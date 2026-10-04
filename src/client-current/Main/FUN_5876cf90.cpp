// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876CF90 .. +0x3C bytes.
// Source symbol alias: FUN_5876cf90.
extern "C" __declspec(naked) void FUN_5876cf90() {
    __asm {
        // 0x5876CF90: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5876CF93: push esi
        __asm _emit 0x56
        // 0x5876CF94: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5876CF98: push eax
        __asm _emit 0x50
        // 0x5876CF99: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876CF9B: call dword ptr [0x5898c160]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876CFA1: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CFA5: add ecx, -8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xF8
        // 0x5876CFA8: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5876CFAA: mov byte ptr [esi + 0x60], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5876CFAD: cmp cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x5876CFB1: ja 0x5876cfb7
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5876CFB3: mov byte ptr [esi + 0x60], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5876CFB7: cmp byte ptr [esi + 0x60], al
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5876CFBA: jne 0x5876cfc4
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5876CFBC: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5876CFBF: pop esi
        __asm _emit 0x5E
        // 0x5876CFC0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5876CFC3: ret
        __asm _emit 0xC3
        // 0x5876CFC4: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5876CFC7: pop esi
        __asm _emit 0x5E
        // 0x5876CFC8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5876CFCB: ret
        __asm _emit 0xC3
    }
}
