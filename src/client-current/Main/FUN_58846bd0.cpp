// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58846BD0 .. +0xF2 bytes.
// Source symbol alias: FUN_58846bd0.
extern "C" __declspec(naked) void FUN_58846bd0() {
    __asm {
        // 0x58846BD0: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58846BD3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58846BD8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58846BDA: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58846BDE: cmp dword ptr [esp + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58846BE3: push ebp
        __asm _emit 0x55
        // 0x58846BE4: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58846BE6: jne 0x58846c11
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58846BE8: call 0x58843190
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58846BED: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x58846BF0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58846BF2: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58846BF5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58846BF7: push 0xee49
        __asm _emit 0x68
        __asm _emit 0x49
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58846BFC: push ebp
        __asm _emit 0x55
        // 0x58846BFD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58846BFF: pop ebp
        __asm _emit 0x5D
        // 0x58846C00: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58846C04: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58846C06: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x5F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58846C0B: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58846C0E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58846C11: push ebx
        __asm _emit 0x53
        // 0x58846C12: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58846C16: push esi
        __asm _emit 0x56
        // 0x58846C17: push edi
        __asm _emit 0x57
        // 0x58846C18: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58846C1C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58846C1E: dec ebx
        __asm _emit 0x4B
        // 0x58846C1F: nop
        __asm _emit 0x90
        // 0x58846C20: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58846C22: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58846C26: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58846C2A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58846C2E: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58846C32: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58846C36: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58846C3A: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x58846C3D: cmp al, 0x3b
        __asm _emit 0x3C
        __asm _emit 0x3B
        // 0x58846C3F: je 0x58846c54
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58846C41: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58846C45: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58846C47: je 0x58846c54
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58846C49: inc esi
        __asm _emit 0x46
        // 0x58846C4A: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x58846C4C: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x58846C4F: inc ecx
        __asm _emit 0x41
        // 0x58846C50: cmp al, 0x3b
        __asm _emit 0x3C
        __asm _emit 0x3B
        // 0x58846C52: jne 0x58846c45
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58846C54: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58846C58: push eax
        __asm _emit 0x50
        // 0x58846C59: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58846C5E: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58846C64: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58846C66: je 0x58846c74
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58846C68: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58846C6C: push ecx
        __asm _emit 0x51
        // 0x58846C6D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58846C6F: call 0x58843060
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58846C74: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58846C76: je 0x58846c7b
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58846C78: inc esi
        __asm _emit 0x46
        // 0x58846C79: jmp 0x58846c20
        __asm _emit 0xEB
        __asm _emit 0xA5
        // 0x58846C7B: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58846C82: pop edi
        __asm _emit 0x5F
        // 0x58846C83: pop esi
        __asm _emit 0x5E
        // 0x58846C84: pop ebx
        __asm _emit 0x5B
        // 0x58846C85: jne 0x58846c9e
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58846C87: movsx edx, word ptr [ebp + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x95
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58846C8E: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58846C92: dec eax
        __asm _emit 0x48
        // 0x58846C93: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58846C95: je 0x58846c9e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58846C97: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58846C99: call 0x58843190
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58846C9E: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x58846CA1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58846CA3: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58846CA6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58846CA8: push 0xee49
        __asm _emit 0x68
        __asm _emit 0x49
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58846CAD: push ebp
        __asm _emit 0x55
        // 0x58846CAE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58846CB0: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58846CB4: pop ebp
        __asm _emit 0x5D
        // 0x58846CB5: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58846CB7: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x5F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58846CBC: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58846CBF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
