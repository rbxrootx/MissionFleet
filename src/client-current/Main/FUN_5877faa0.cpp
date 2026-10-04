// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877FAA0 .. +0x1B3 bytes.
// Source symbol alias: FUN_5877faa0.
extern "C" __declspec(naked) void FUN_5877faa0() {
    __asm {
        // 0x5877FAA0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877FAA4: push ebx
        __asm _emit 0x53
        // 0x5877FAA5: push ebp
        __asm _emit 0x55
        // 0x5877FAA6: push esi
        __asm _emit 0x56
        // 0x5877FAA7: push edi
        __asm _emit 0x57
        // 0x5877FAA8: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5877FAAA: mov dword ptr [edi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x64
        // 0x5877FAAD: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877FAB1: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5877FAB4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877FAB6: push ecx
        __asm _emit 0x51
        // 0x5877FAB7: push edx
        __asm _emit 0x52
        // 0x5877FAB8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877FABA: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x37
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877FABF: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5877FAC2: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5877FAC5: push eax
        __asm _emit 0x50
        // 0x5877FAC6: push ecx
        __asm _emit 0x51
        // 0x5877FAC7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877FACD: call 0x587e5e10
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5877FAD2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877FAD4: je 0x5877fae6
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5877FAD6: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x5877FADA: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5877FADD: jne 0x5877faf7
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5877FADF: or word ptr [edi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5877FAE4: jmp 0x5877faf7
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5877FAE6: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5877FAEA: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5877FAEC: je 0x5877faf7
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5877FAEE: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FAF3: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5877FAF7: or word ptr [edi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5877FAFC: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5877FAFE: mov edx, 0xc0
        __asm _emit 0xBA
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FB03: mov dword ptr [edi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x7C
        // 0x5877FB06: lea ebp, [ebx + 3]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x03
        // 0x5877FB09: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877FB0D: lea esi, [edi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FB13: mov dword ptr [esp + 0x14], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FB1B: jmp 0x5877fb24
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5877FB1D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5877FB20: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877FB24: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877FB29: mov ecx, dword ptr [eax + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5877FB2F: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5877FB32: cmp dword ptr [esp + 0x1c], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877FB36: je 0x5877fb92
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x5877FB38: lea ecx, [ebp - 2]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFE
        // 0x5877FB3B: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FB41: jle 0x5877fb57
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5877FB43: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5877FB45: jl 0x5877fb57
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x5877FB47: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FB4D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5877FB4F: je 0x5877fb57
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5877FB51: lea eax, [edx + eax - 0x80]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x5877FB55: jmp 0x5877fb59
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877FB57: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877FB59: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5877FB5B: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5877FB5E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5877FB60: je 0x5877fb8a
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5877FB62: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5877FB65: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5877FB68: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5877FB6B: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5877FB6E: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5877FB71: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877FB73: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5877FB76: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5877FB78: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877FB7B: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5877FB7E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5877FB81: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5877FB84: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5877FB87: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5877FB8A: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x5877FB8D: sub edx, 0x33
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x33
        // 0x5877FB90: jmp 0x5877fbe2
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x5877FB92: cmp dword ptr [eax + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FB98: jle 0x5877fbac
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5877FB9A: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5877FB9C: jl 0x5877fbac
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5877FB9E: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FBA4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5877FBA6: je 0x5877fbac
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5877FBA8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5877FBAA: jmp 0x5877fbae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877FBAC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877FBAE: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5877FBB0: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5877FBB3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5877FBB5: je 0x5877fbdf
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5877FBB7: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5877FBBA: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5877FBBD: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5877FBC0: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5877FBC3: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5877FBC6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877FBC8: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5877FBCB: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5877FBCD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877FBD0: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5877FBD3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5877FBD6: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5877FBD9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5877FBDC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5877FBDF: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x5877FBE2: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5877FBE5: push ecx
        __asm _emit 0x51
        // 0x5877FBE6: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5877FBE8: push edx
        __asm _emit 0x52
        // 0x5877FBE9: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x36
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877FBEE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5877FBF0: add dword ptr [esp + 0x18], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x40
        // 0x5877FBF5: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5877FBF8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5877FBFA: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FBFF: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877FC03: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5877FC06: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FC0B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877FC0F: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5877FC12: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x5877FC14: sub dword ptr [esp + 0x14], ecx
        __asm _emit 0x29
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877FC18: jne 0x5877fb20
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877FC1E: cmp dword ptr [esp + 0x1c], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877FC22: mov ecx, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x68
        // 0x5877FC25: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5877FC28: inc al
        __asm _emit 0xFE
        __asm _emit 0xC0
        // 0x5877FC2A: mov dword ptr [edi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FC30: mov dword ptr [edi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FC36: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x5877FC39: mov dword ptr [edi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x58
        // 0x5877FC3C: mov dword ptr [edi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x5C
        // 0x5877FC3F: mov byte ptr [edi + 0x60], al
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0x60
        // 0x5877FC42: mov dword ptr [edi + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x6C
        // 0x5877FC45: mov dword ptr [edi + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FC4C: pop edi
        __asm _emit 0x5F
        // 0x5877FC4D: pop esi
        __asm _emit 0x5E
        // 0x5877FC4E: pop ebp
        __asm _emit 0x5D
        // 0x5877FC4F: pop ebx
        __asm _emit 0x5B
        // 0x5877FC50: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
