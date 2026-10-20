// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A0BE0 .. +0x16F bytes.
extern "C" __declspec(naked) void FUN_584a0be0_584A0BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
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
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x584a0d4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 6
        ; Exact mapped bytes 74 09: je 0x584a0c15
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0ah
        ; Exact mapped bytes 75 41: jne 0x584a0c56
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584a0c56
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 67 FA FF FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x584a0c56
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 5
        ; Exact mapped bytes 75 0A: jne 0x584a0c69
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 6
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], 4
        ; Exact mapped bytes 75 0A: jne 0x584a0c7c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 5
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 9
        ; Exact mapped bytes 75 0A: jne 0x584a0c8f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 0ah
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 8
        ; Exact mapped bytes 75 0A: jne 0x584a0ca2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 9
        ; Exact mapped bytes 8B 15 24 5F 96 58: mov edx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF F9 FF FF: call 0x584a06b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x584a0cc3
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584a0ce4
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584a0ce4
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x584a0d4d
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584a0d07
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x584a0ced
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 01 49 FF FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584a0d2b
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
        ; Exact mapped bytes EB 24: jmp 0x584a0d4d
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584a0d4b
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD 48 FF FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x584a0ced
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
