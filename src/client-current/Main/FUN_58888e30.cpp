// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58888E30 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_58888e30() {
    __asm {
        // 0x58888E30: push esi
        __asm _emit 0x56
        // 0x58888E31: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58888E33: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58888E37: mov ecx, 0xe4ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E3C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58888E3F: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E44: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58888E47: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58888E4B: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E50: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58888E54: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x58888E59: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58888E5C: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58888E5F: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E65: mov dword ptr [esi + 0x54], 0xffffff38
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58888E6C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888E6E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58888E71: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888E73: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E79: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888E7B: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58888E7E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888E80: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E86: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888E88: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58888E8B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888E8D: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E93: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888E95: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58888E98: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888E9A: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888EA0: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58888EA4: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58888EA8: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58888EAB: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58888EAE: jne 0x58888eca
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58888EB0: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888EB6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888EB8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58888EBB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888EBD: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888EC3: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888ECA: pop esi
        __asm _emit 0x5E
        // 0x58888ECB: ret
        __asm _emit 0xC3
    }
}
