// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E234 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_0055e234_0055E234() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        push 58a6d0h
        ; Exact mapped bytes E8 B5 CE F9 FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xce
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x55e319
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 18 00 00: call 0x55fb09
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 0ch]
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 74 65: je 0x55e2d8
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 0E CE FD FF: call 0x53b08c
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 53: jne 0x55e2d6
        __asm _emit 0x75
        __asm _emit 0x53
        xor ecx, ecx
        cmp dword ptr [ebp + 8], 0
        setne cl
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 35: je 0x55e2d6
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2F: je 0x55e2d6
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        shl eax, 10h
        or edx, eax
        push edx
        push 11fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A D9 FD FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 45: jmp 0x55e31b
        __asm _emit 0xeb
        __asm _emit 0x45
        ; Exact mapped bytes EB 41: jmp 0x55e319
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 35: je 0x55e319
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2F: je 0x55e319
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        shl ecx, 10h
        or eax, ecx
        push eax
        push 11fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C7 D8 FD FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x55e31b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
