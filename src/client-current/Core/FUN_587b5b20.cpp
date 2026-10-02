// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5B20 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_587b5b20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x587b5bdc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x587b5b73
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587b5b73
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5A: je 0x587b5bdc
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587b5b96
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x587b5b7c
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 FA CD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x587b5bba
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x587b5bdc
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x587b5bda
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E FA CD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfa
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB A0: jmp 0x587b5b7c
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
