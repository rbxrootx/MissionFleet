// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58874260 .. +0xAC bytes.
// Source symbol alias: FUN_58874260.
extern "C" __declspec(naked) void FUN_58874260() {
    __asm {
        // 0x58874260: push edi
        __asm _emit 0x57
        // 0x58874261: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58874263: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58874267: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58874269: je 0x58874306
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887426F: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58874273: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874278: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887427B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874280: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58874283: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58874287: jne 0x588742a4
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58874289: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887428E: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58874291: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58874296: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58874299: mov word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5887429D: or word ptr [edi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588742A2: jmp 0x588742e1
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x588742A4: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588742A7: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588742AC: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588742AF: jne 0x588742dd
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x588742B1: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588742B6: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x588742BA: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588742BF: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x588742C3: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588742C7: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588742CC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588742CF: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588742D4: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588742D7: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588742DB: jmp 0x588742e1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588742DD: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588742E1: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x588742E4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588742E6: je 0x58874306
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588742E8: push esi
        __asm _emit 0x56
        // 0x588742E9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588742F0: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x38
        // 0x588742F3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588742F5: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588742F8: cmp esi, dword ptr [edi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x3C
        // 0x588742FB: je 0x58874308
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588742FD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588742FF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58874301: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58874303: jne 0x588742f0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58874305: pop esi
        __asm _emit 0x5E
        // 0x58874306: pop edi
        __asm _emit 0x5F
        // 0x58874307: ret
        __asm _emit 0xC3
        // 0x58874308: pop esi
        __asm _emit 0x5E
        // 0x58874309: pop edi
        __asm _emit 0x5F
        // 0x5887430A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
