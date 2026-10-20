// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00465A60 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_00465a60_00465A60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D 8C 8B 68 00 00: cmp dword ptr [0x688b8c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x465a8b
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0D AF 00 00: call 0x470990
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x465b2b
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 1E AE 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xae
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
        mov dl, byte ptr [ecx + 688ca1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 41: je 0x465af8
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 1F: je 0x465aea
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        shl eax, 8
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        or eax, edx
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 09: jne 0x465ae8
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0C: jmp 0x465af6
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 06: jne 0x465af6
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0E: jmp 0x465b06
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 06: jne 0x465b06
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
        ; Exact mapped bytes 0F 85 77 FF FF FF: jne 0x465a95
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 2B AE 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
