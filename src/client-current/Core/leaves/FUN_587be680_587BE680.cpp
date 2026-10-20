// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BE680 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_587be680_587BE680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x587be79c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 4
        ; Exact mapped bytes 74 09: je 0x587be6b5
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 6
        ; Exact mapped bytes 75 5D: jne 0x587be712
        __asm _emit 0x75
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 75 45: jne 0x587be703
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 2E: je 0x587be6f5
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 BE 1F CE FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1f
        __asm _emit 0xce
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 1C: je 0x587be6f5
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 2
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ecx + 58h], eax
        ; Exact mapped bytes EB 0F: jmp 0x587be712
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x587be733
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587be733
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x587be79c
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587be756
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x587be73c
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 6E CD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6e
        __asm _emit 0xcd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x587be77a
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x587be79c
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x587be79a
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8E 6E CD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6e
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x587be73c
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
