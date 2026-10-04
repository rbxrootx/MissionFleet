// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D6DB0 .. +0xA0 bytes.
// Source symbol alias: FUN_587d6db0.
extern "C" __declspec(naked) void FUN_587d6db0() {
    __asm {
        // 0x587D6DB0: cmp dword ptr [ecx + 0x500], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DB7: mov eax, dword ptr [ecx + 0x4d4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DBD: jne 0x587d6e05
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x587D6DBF: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DC4: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D6DC8: mov eax, dword ptr [ecx + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DCE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D6DD2: mov eax, dword ptr [ecx + 0x4dc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DD8: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DDD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D6DE1: add ecx, 0x4e0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DE7: mov edx, 5
        __asm _emit 0xBA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DEC: push edi
        __asm _emit 0x57
        // 0x587D6DED: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587D6DF0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D6DF2: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DF7: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587D6DFB: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D6DFE: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587D6E01: jne 0x587d6df0
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587D6E03: pop edi
        __asm _emit 0x5F
        // 0x587D6E04: ret
        __asm _emit 0xC3
        // 0x587D6E05: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587D6E0A: mov eax, dword ptr [ecx + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6E10: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587D6E15: cmp dword ptr [0x58a24568], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587D6E1C: mov eax, dword ptr [ecx + 0x4dc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6E22: jne 0x587d6e2b
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587D6E24: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587D6E29: jmp 0x587d6e34
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x587D6E2B: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6E30: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D6E34: add ecx, 0x4e0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6E3A: mov edx, 5
        __asm _emit 0xBA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6E3F: nop
        __asm _emit 0x90
        // 0x587D6E40: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D6E42: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587D6E47: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D6E4A: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587D6E4D: jne 0x587d6e40
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x587D6E4F: ret
        __asm _emit 0xC3
    }
}
