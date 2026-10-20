// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B9AB .. +0x26A bytes.
extern "C" __declspec(naked) void FUN_5883b9ab_5883B9AB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        mov dword ptr [ebp - 4], ecx
        lea ecx, [ebp + 0ch]
        push edi
        ; Exact mapped bytes E8 9E 6D C6 FF: call 0x584a2760
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6d
        __asm _emit 0xc6
        __asm _emit 0xff
        mov ecx, dword ptr [ebx]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 74 05: je 0x5883b9cf
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [ebx + 8]
        ; Exact mapped bytes EB 17: jmp 0x5883b9e6
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebx + 8]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 74 04: je 0x5883b9dc
        __asm _emit 0x74
        __asm _emit 0x04
        mov edi, ecx
        ; Exact mapped bytes EB 0A: jmp 0x5883b9e6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 0ch]
        mov edi, dword ptr [edx + 8]
        cmp edx, ebx
        ; Exact mapped bytes 75 74: jne 0x5883ba5a
        __asm _emit 0x75
        __asm _emit 0x74
        cmp byte ptr [edi + 0dh], 0
        mov esi, dword ptr [ebx + 4]
        ; Exact mapped bytes 75 03: jne 0x5883b9f2
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [edi + 4], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 4], ebx
        ; Exact mapped bytes 75 05: jne 0x5883ba01
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [eax + 4], edi
        ; Exact mapped bytes EB 0B: jmp 0x5883ba0c
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp dword ptr [esi], ebx
        ; Exact mapped bytes 75 04: jne 0x5883ba09
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [esi], edi
        ; Exact mapped bytes EB 03: jmp 0x5883ba0c
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 8], edi
        mov eax, dword ptr [edx]
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 75 1E: jne 0x5883ba30
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 74 04: je 0x5883ba1c
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, esi
        ; Exact mapped bytes EB 10: jmp 0x5883ba2c
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [edi]
        mov eax, edi
        ; Exact mapped bytes EB 04: jmp 0x5883ba26
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, ecx
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 74 F6: je 0x5883ba22
        __asm _emit 0x74
        __asm _emit 0xf6
        mov ecx, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 8], ebx
        ; Exact mapped bytes 75 7F: jne 0x5883bab6
        __asm _emit 0x75
        __asm _emit 0x7f
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 74 04: je 0x5883ba41
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, esi
        ; Exact mapped bytes EB 12: jmp 0x5883ba53
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [edi + 8]
        mov eax, edi
        ; Exact mapped bytes EB 05: jmp 0x5883ba4d
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, ecx
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 74 F5: je 0x5883ba48
        __asm _emit 0x74
        __asm _emit 0xf5
        mov ecx, dword ptr [edx]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 5C: jmp 0x5883bab6
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebx]
        mov dword ptr [edx], eax
        cmp edx, dword ptr [ebx + 8]
        ; Exact mapped bytes 75 04: jne 0x5883ba6a
        __asm _emit 0x75
        __asm _emit 0x04
        mov esi, edx
        ; Exact mapped bytes EB 1A: jmp 0x5883ba84
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp byte ptr [edi + 0dh], 0
        mov esi, dword ptr [edx + 4]
        ; Exact mapped bytes 75 03: jne 0x5883ba76
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [edi + 4], esi
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        cmp dword ptr [eax + 4], ebx
        ; Exact mapped bytes 75 05: jne 0x5883ba93
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 0E: jmp 0x5883baa1
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebx + 4]
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 75 04: jne 0x5883ba9e
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 03: jmp 0x5883baa1
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], eax
        mov cl, byte ptr [edx + 0ch]
        mov al, byte ptr [ebx + 0ch]
        mov byte ptr [edx + 0ch], al
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [ebx + 0ch], cl
        cmp byte ptr [ebx + 0ch], 1
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x5883bba9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        cmp edi, dword ptr [eax + 4]
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x5883bba5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi + 0ch], 1
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 0F 85 C7 00 00 00: jne 0x5883bba5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        cmp edi, ecx
        ; Exact mapped bytes 75 74: jne 0x5883bb58
        __asm _emit 0x75
        __asm _emit 0x74
        mov ecx, dword ptr [esi + 8]
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 16: jne 0x5883bb03
        __asm _emit 0x75
        __asm _emit 0x16
        mov byte ptr [ecx + 0ch], 1
        mov ecx, edx
        push esi
        mov byte ptr [esi + 0ch], 0
        ; Exact mapped bytes E8 06 F8 FF FF: call 0x5883b303
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebp - 4]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x5883bb8e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0ch], 1
        ; Exact mapped bytes 75 09: jne 0x5883bb1e
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 0ch], 1
        ; Exact mapped bytes 74 6C: je 0x5883bb8a
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 0ch], 1
        ; Exact mapped bytes 75 15: jne 0x5883bb3c
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ecx]
        push ecx
        mov byte ptr [eax + 0ch], 1
        mov byte ptr [ecx + 0ch], 0
        mov ecx, edx
        ; Exact mapped bytes E8 0E F8 FF FF: call 0x5883b347
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov al, byte ptr [esi + 0ch]
        mov byte ptr [ecx + 0ch], al
        mov byte ptr [esi + 0ch], 1
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 4]
        push esi
        mov byte ptr [eax + 0ch], 1
        ; Exact mapped bytes E8 AD F7 FF FF: call 0x5883b303
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4D: jmp 0x5883bba5
        __asm _emit 0xeb
        __asm _emit 0x4d
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 15: jne 0x5883bb73
        __asm _emit 0x75
        __asm _emit 0x15
        mov byte ptr [ecx + 0ch], 1
        mov ecx, edx
        push esi
        mov byte ptr [esi + 0ch], 0
        ; Exact mapped bytes E8 D9 F7 FF FF: call 0x5883b347
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ebp - 4]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 75 15: jne 0x5883bb8e
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 0ch], 1
        ; Exact mapped bytes 75 5B: jne 0x5883bbdd
        __asm _emit 0x75
        __asm _emit 0x5b
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0ch], 1
        ; Exact mapped bytes 75 53: jne 0x5883bbdd
        __asm _emit 0x75
        __asm _emit 0x53
        mov byte ptr [ecx + 0ch], 0
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [esi + 4]
        mov edi, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 0F 85 29 FF FF FF: jne 0x5883bacb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 10h]
        mov byte ptr [edi + 0ch], 1
        lea ecx, [ebx + 10h]
        ; Exact mapped bytes E8 0F B9 C8 FF: call 0x584c74c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb9
        __asm _emit 0xc8
        __asm _emit 0xff
        push 40h
        push 1
        push ebx
        ; Exact mapped bytes E8 F1 E6 FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add esp, 0ch
        mov eax, dword ptr [ecx + 4]
        pop edi
        pop esi
        pop ebx
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5883bbcf
        __asm _emit 0x74
        __asm _emit 0x04
        dec eax
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0ch], 1
        ; Exact mapped bytes 75 15: jne 0x5883bbfa
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ecx + 8]
        push ecx
        mov byte ptr [eax + 0ch], 1
        mov byte ptr [ecx + 0ch], 0
        mov ecx, edx
        ; Exact mapped bytes E8 0B F7 FF FF: call 0x5883b303
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        mov al, byte ptr [esi + 0ch]
        mov byte ptr [ecx + 0ch], al
        mov byte ptr [esi + 0ch], 1
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        push esi
        mov byte ptr [eax + 0ch], 1
        ; Exact mapped bytes E8 34 F7 FF FF: call 0x5883b347
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 90: jmp 0x5883bba5
        __asm _emit 0xeb
        __asm _emit 0x90
    }
}
