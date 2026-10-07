// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A30B0 .. +0x14C bytes.
// Source symbol alias: FUN_588a30b0.
extern "C" __declspec(naked) void FUN_588a30b0() {
    __asm {
        // 0x588A30B0: push esi
        __asm _emit 0x56
        // 0x588A30B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A30B3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588A30B7: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A30BC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588A30BF: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A30C4: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588A30C7: jne 0x588a31fa
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A30CD: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A30D3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A30D5: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A30D8: push edi
        __asm _emit 0x57
        // 0x588A30D9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A30DB: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A30E0: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588A30E4: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588A30E9: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588A30ED: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A30F2: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588A30F5: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A30FA: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588A30FD: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588A3101: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A3106: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588A3109: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A310B: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588A310E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3110: push 0x65
        __asm _emit 0x6A
        __asm _emit 0x65
        // 0x588A3112: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3114: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A3116: cmp dword ptr [esi + 0x36c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A311D: mov dword ptr [esi + 0x368], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3123: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3129: jne 0x588a3170
        __asm _emit 0x75
        __asm _emit 0x45
        // 0x588A312B: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588A3130: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3136: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A313B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A313F: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3145: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A314A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A314E: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3154: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588A3158: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A315E: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588A3162: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3168: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588A316A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A316E: jmp 0x588a31b3
        __asm _emit 0xEB
        __asm _emit 0x43
        // 0x588A3170: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3175: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A3179: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A317F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588A3184: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A318A: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588A318E: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3194: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3199: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A319D: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A31A3: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588A31A5: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A31A9: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A31AF: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588A31B3: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A31B8: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588A31BB: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A31BD: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588A31C0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A31C2: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588A31C4: push esi
        __asm _emit 0x56
        // 0x588A31C5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A31C7: push edi
        __asm _emit 0x57
        // 0x588A31C8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A31CA: call 0x5889f0c0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A31CF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A31D1: call 0x5889ecd0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A31D6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A31D8: call 0x588a1340
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A31DD: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A31E3: mov dword ptr [esi + 0x35c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A31ED: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588A31F0: mov edx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A31F6: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588A31F9: pop edi
        __asm _emit 0x5F
        // 0x588A31FA: pop esi
        __asm _emit 0x5E
        // 0x588A31FB: ret
        __asm _emit 0xC3
    }
}
