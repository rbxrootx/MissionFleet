// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A094 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_0056a094_0056A094() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 61 03 00 00: call 0x56a409
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1C: jne 0x56a0cd
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x56a0cd
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d1h
        push 67c668h
        ; Exact mapped bytes E8 78 EC FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a0cd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x56a0a8
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 07: jne 0x56a0e2
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x56a1fe
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x56a10d
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 71 93 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56a10d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d6h
        push 67c668h
        ; Exact mapped bytes E8 38 EC FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a10d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x56a0e2
        __asm _emit 0x75
        __asm _emit 0xcf
        xor eax, eax
        cmp dword ptr [ebp + 0ch], 0
        sete al
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 BD 24 FE FF: call 0x54c5ee
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0A: je 0x56a144
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 10h], 21h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 21h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56a165
        __asm _emit 0x75
        __asm _emit 0x14
        push 0deh
        push 67c668h
        ; Exact mapped bytes E8 E0 EB FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xeb
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a165
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x56a144
        __asm _emit 0x75
        __asm _emit 0xd9
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 04: jge 0x56a190
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6E: jmp 0x56a1fe
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 1
        ; Exact mapped bytes 74 08: je 0x56a1a4
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 3ch], 20h
        ; Exact mapped bytes 74 02: je 0x56a1a4
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x56a1f2
        __asm _emit 0xeb
        __asm _emit 0x4e
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x56a1af
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 4F: jmp 0x56a1fe
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 2ch], 0
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        push edx
        ; Exact mapped bytes E8 99 25 FE FF: call 0x54c76a
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x56a1e3
        __asm _emit 0x75
        __asm _emit 0x0e
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 B0 C2 68 00: call dword ptr [0x68c2b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 1B: jmp 0x56a1fe
        __asm _emit 0xeb
        __asm _emit 0x1b
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 C2 68 00: call dword ptr [0x68c2b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes EB 0C: jmp 0x56a1fe
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 B0 C2 68 00: call dword ptr [0x68c2b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
