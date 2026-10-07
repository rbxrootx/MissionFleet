// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587ECEC0 .. +0x4B bytes.
// Source symbol alias: FUN_587ecec0.
extern "C" __declspec(naked) void FUN_587ecec0() {
    __asm {
        // 0x587ECEC0: mov dl, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587ECEC4: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECECA: push esi
        __asm _emit 0x56
        // 0x587ECECB: mov si, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x587ECECF: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x587ECED2: push edi
        __asm _emit 0x57
        // 0x587ECED3: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587ECED7: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECEDC: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xF7
        // 0x587ECEDF: or si, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF2
        // 0x587ECEE2: mov word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x587ECEE6: cmp word ptr [ecx + 0x105f0], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x587ECEEE: jne 0x587ecf06
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587ECEF0: mov ecx, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECEF6: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587ECEFA: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x587ECEFC: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x587ECEFF: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587ECF02: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587ECF06: pop edi
        __asm _emit 0x5F
        // 0x587ECF07: pop esi
        __asm _emit 0x5E
        // 0x587ECF08: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
