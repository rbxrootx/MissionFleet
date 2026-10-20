// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ADB90 .. +0x162 bytes.
extern "C" __declspec(naked) void FUN_004adb90_004ADB90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes 83 3D 8C 02 5E 00 00: cmp dword ptr [0x5e028c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x4adbb4
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 84 C3 00 00: call 0x4b9f30
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x4adcee
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 35 76 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 0F B6 02: movzx ax, byte ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x4adc26
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x4adbfe
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 20: jmp 0x4adc1e
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        shl eax, 8
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        or eax, edx
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 66 8B 4D F4: mov cx, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 0F B6 02: movzx ax, byte ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x4adc8e
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x4adc66
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 20: jmp 0x4adc86
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        shl eax, 8
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        or eax, edx
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 66 8B 4D F0: mov cx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 74 2C: je 0x4adccf
        __asm _emit 0x74
        __asm _emit 0x2c
        push 19h
        ; Exact mapped bytes E8 E6 75 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffffh
        xor eax, eax
        cmp ecx, edx
        setle al
        dec eax
        and eax, 2
        add eax, -1
        ; Exact mapped bytes EB 1F: jmp 0x4adcee
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4adce9
        __asm _emit 0x75
        __asm _emit 0x0e
        push 19h
        ; Exact mapped bytes E8 AE 75 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4adcee
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 D0 FE FF FF: jmp 0x4adbbe
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
