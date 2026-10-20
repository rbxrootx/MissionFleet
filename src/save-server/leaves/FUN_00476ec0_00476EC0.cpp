// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476EC0 .. +0x166 bytes.
extern "C" __declspec(naked) void FUN_00476ec0_00476EC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes 0F BE 45 18: movsx eax, byte ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x476ef7
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 14h]
        xor edx, edx
        cmp dword ptr [ecx], 2dh
        sete dl
        mov eax, dword ptr [ebp + 8]
        add eax, edx
        mov dword ptr [ebp - 4], eax
        xor ecx, ecx
        cmp dword ptr [ebp + 0ch], 0
        setg cl
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 3C 04 00 00: call 0x477330
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx], 2dh
        ; Exact mapped bytes 75 0F: jne 0x476f14
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 2dh
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 1E: jle 0x476f38
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 1]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A0 D0 E0 67 00: mov al, byte ptr [0x67e0d0]
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        mov byte ptr [edx], al
        push 63f2d4h
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 55 18: movsx edx, byte ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x18
        neg edx
        sbb edx, edx
        inc edx
        add ecx, edx
        push ecx
        ; Exact mapped bytes E8 1C EA FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x476f66
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 45h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x47701f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0E: jge 0x476fa1
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        neg ecx
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 2dh
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 8], 64h
        ; Exact mapped bytes 7C 25: jl 0x476fd5
        __asm _emit 0x7c
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov cl, byte ptr [edx]
        add cl, al
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7C 25: jl 0x477009
        __asm _emit 0x7c
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov cl, byte ptr [edx]
        add cl, al
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax]
        add cl, byte ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
