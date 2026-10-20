// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044774C .. +0x1C9 bytes.
extern "C" __declspec(naked) void FUN_0044774c_0044774C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 13ch], -1
        ; Exact mapped bytes 74 0D: je 0x447784
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 13ch], 0ffffffffh
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0f8h], 0
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x447867
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x447867
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 104h], 0
        ; Exact mapped bytes 74 58: je 0x447808
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 10ch], 1
        ; Exact mapped bytes 75 26: jne 0x4477e2
        __asm _emit 0x75
        __asm _emit 0x26
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 104h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 104h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 00 10 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x447806
        __asm _emit 0xeb
        __asm _emit 0x24
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 DA 0F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x44782c
        __asm _emit 0xeb
        __asm _emit 0x24
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 B4 0F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 D9 4B 00 00: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 1B: je 0x447867
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 29 4C 00 00: call 0x44c490
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 150h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        mov ecx, dword ptr [ecx + 18f8h]
        ; Exact mapped bytes E8 8A 20 0A 00: call 0x4e9912
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 168h], 0
        ; Exact mapped bytes 74 72: je 0x447906
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 168h]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 75 33: jne 0x4478d6
        __asm _emit 0x75
        __asm _emit 0x33
        push 0
        mov edx, dword ptr [ebp - 0ch]
        add edx, 150h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 8B 51 5C: mov dx, word ptr [ecx + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5c
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 54h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 2E 64 FD FF: call 0x41dd02
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 30: jmp 0x447906
        __asm _emit 0xeb
        __asm _emit 0x30
        push 0
        mov eax, dword ptr [ebp - 0ch]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 8B 42 5C: mov ax, word ptr [edx + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5c
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 0F DE 02 00: call 0x475715
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CF 0E 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
