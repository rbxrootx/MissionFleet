// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9F60 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_004a9f60_004A9F60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D 8C 02 5E 00 00: cmp dword ptr [0x5e028c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x4a9f8b
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4D B3 00 00: call 0x4b52d0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x4aa02b
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 5E B2 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        xor edx, edx
        mov dl, byte ptr [ecx + 5e03a1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 41: je 0x4a9ff8
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 1F: je 0x4a9fea
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        shl eax, 8
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        or eax, edx
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 09: jne 0x4a9fe8
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0C: jmp 0x4a9ff6
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 06: jne 0x4a9ff6
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0E: jmp 0x4aa006
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 06: jne 0x4aa006
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        test edx, edx
        ; Exact mapped bytes 0F 85 77 FF FF FF: jne 0x4a9f95
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 6B B2 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
