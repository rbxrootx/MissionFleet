// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00444810 .. +0x37A bytes.
extern "C" __declspec(naked) void FUN_00444810_00444810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 0F 84 54 03 00 00: je 0x444b7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 0F 85 42 03 00 00: jne 0x444b7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 85 95 01 00 00: jne 0x4449e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 37: je 0x4448a0
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 2C: jne 0x4448a0
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x4449e4
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x44493f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 0C: je 0x4448e5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 0A: jne 0x444905
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 28: jmp 0x44492d
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 0E: jne 0x444921
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes EB 0C: jmp 0x44492d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx], 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x44498a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 0A: jne 0x4449aa
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 28: jmp 0x4449d2
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 75 0E: jne 0x4449c6
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], edx
        ; Exact mapped bytes EB 0C: jmp 0x4449d2
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x444b79
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 37: je 0x444a35
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x444a35
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx], 1
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x444b79
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x444ad4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x444a7a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x444a9a
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 28: jmp 0x444ac2
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 75 0E: jne 0x444ab6
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x444ac2
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 0C: je 0x444b1f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 0A: jne 0x444b3f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 28: jmp 0x444b67
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 0E: jne 0x444b5b
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes EB 0C: jmp 0x444b67
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes E9 9E FC FF FF: jmp 0x44481c
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov byte ptr [ecx], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
