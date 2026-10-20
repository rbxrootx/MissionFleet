// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58660DB0 .. +0x235 bytes.
extern "C" __declspec(naked) void FUN_58660db0_58660DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58660dcb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 0d0h]
        ; Exact mapped bytes E8 0E 89 EC FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x89
        __asm _emit 0xec
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7D 6E: jge 0x58660e55
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 04 FE 15 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0x15
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x58660e50
        __asm _emit 0x75
        __asm _emit 0x39
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58660e29
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 1F: jge 0x58660e4e
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0d0h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 25 FB 15 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfb
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D2: jmp 0x58660e20
        __asm _emit 0xeb
        __asm _emit 0xd2
        ; Exact mapped bytes EB 05: jmp 0x58660e55
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x58660dc2
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0B: jmp 0x58660e6e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 48 E3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x48
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 67 01 00 00: je 0x58660fdf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 86 E5 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x86
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 56 FD 1E 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 85 45 01 00 00: jne 0x58660fda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 138h]
        ; Exact mapped bytes 75 2D: jne 0x58660ed0
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 13ch]
        ; Exact mapped bytes 75 1F: jne 0x58660ed0
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 13ch], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 138h], 0
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x58660fae
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 138h]
        ; Exact mapped bytes 75 36: jne 0x58660f14
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 48 E3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x48
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 138h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 48 E3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3C E9 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 8E E5 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x58660fae
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 13ch]
        ; Exact mapped bytes 75 33: jne 0x58660f55
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 3A E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x3a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 13ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 3A E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 38 8E E5 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE E8 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 59: jmp 0x58660fae
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 3A E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 47 E3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x47
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 09 8E E5 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 47 E3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x47
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 3A E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A7 E8 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D E8 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 8D E5 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8d
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x58660fd1
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58660fd8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 05: jmp 0x58660fdf
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 84 FE FF FF: jmp 0x58660e63
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
