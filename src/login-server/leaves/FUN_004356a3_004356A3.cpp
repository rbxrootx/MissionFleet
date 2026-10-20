// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004356A3 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_004356a3_004356A3() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        xor ebx, ebx
        push edi
        mov edi, esi
        cmp byte ptr [esi], bl
        ; Exact mapped bytes 74 5D: je 0x435711
        __asm _emit 0x74
        __asm _emit 0x5d
        mov cl, byte ptr [edi]
        cmp cl, 25h
        ; Exact mapped bytes 75 41: jne 0x4356fc
        __asm _emit 0x75
        __asm _emit 0x41
        mov al, byte ptr [edi + 1]
        cmp al, 30h
        ; Exact mapped bytes 7C 04: jl 0x4356c6
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp al, 39h
        ; Exact mapped bytes 7E 14: jle 0x4356da
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp al, 41h
        ; Exact mapped bytes 7C 32: jl 0x4356fc
        __asm _emit 0x7c
        __asm _emit 0x32
        cmp al, 5ah
        ; Exact mapped bytes 7F 2E: jg 0x4356fc
        __asm _emit 0x7f
        __asm _emit 0x2e
        cmp al, 39h
        ; Exact mapped bytes 7E 08: jle 0x4356da
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        sub eax, 38h
        ; Exact mapped bytes EB 06: jmp 0x4356e0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        sub eax, 31h
        inc edi
        inc edi
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7D 24: jge 0x43570b
        __asm _emit 0x7d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx + eax*4]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x43570c
        __asm _emit 0x74
        __asm _emit 0x1b
        push eax
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        add ebx, eax
        ; Exact mapped bytes EB 10: jmp 0x43570c
        __asm _emit 0xeb
        __asm _emit 0x10
        movzx eax, cl
        test byte ptr [eax + 4512c1h], 4
        ; Exact mapped bytes 74 02: je 0x43570a
        __asm _emit 0x74
        __asm _emit 0x02
        inc ebx
        inc edi
        inc edi
        inc ebx
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 75 A3: jne 0x4356b4
        __asm _emit 0x75
        __asm _emit 0xa3
        push ebx
        mov ebx, dword ptr [ebp + 8]
        mov ecx, ebx
        ; Exact mapped bytes E8 59 88 FF FF: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 74 6E: je 0x435791
        __asm _emit 0x74
        __asm _emit 0x6e
        mov cl, byte ptr [esi]
        cmp cl, 25h
        ; Exact mapped bytes 75 4F: jne 0x435779
        __asm _emit 0x75
        __asm _emit 0x4f
        mov al, byte ptr [esi + 1]
        cmp al, 30h
        ; Exact mapped bytes 7C 04: jl 0x435735
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp al, 39h
        ; Exact mapped bytes 7E 14: jle 0x435749
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp al, 41h
        ; Exact mapped bytes 7C 40: jl 0x435779
        __asm _emit 0x7c
        __asm _emit 0x40
        cmp al, 5ah
        ; Exact mapped bytes 7F 3C: jg 0x435779
        __asm _emit 0x7f
        __asm _emit 0x3c
        cmp al, 39h
        ; Exact mapped bytes 7E 08: jle 0x435749
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        sub eax, 38h
        ; Exact mapped bytes EB 06: jmp 0x43574f
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        sub eax, 31h
        inc esi
        inc esi
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7C 06: jl 0x43575c
        __asm _emit 0x7c
        __asm _emit 0x06
        mov byte ptr [edi], 3fh
        inc edi
        ; Exact mapped bytes EB C2: jmp 0x43571e
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx + eax*4]
        test eax, eax
        ; Exact mapped bytes 74 B8: je 0x43571e
        __asm _emit 0x74
        __asm _emit 0xb8
        push eax
        push edi
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        add edi, eax
        ; Exact mapped bytes EB A5: jmp 0x43571e
        __asm _emit 0xeb
        __asm _emit 0xa5
        movzx eax, cl
        test byte ptr [eax + 4512c1h], 4
        ; Exact mapped bytes 74 04: je 0x435789
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [edi], cl
        inc edi
        inc esi
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        inc edi
        inc esi
        ; Exact mapped bytes EB 8D: jmp 0x43571e
        __asm _emit 0xeb
        __asm _emit 0x8d
        sub edi, dword ptr [ebx]
        mov ecx, ebx
        push edi
        ; Exact mapped bytes E8 29 88 FF FF: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
