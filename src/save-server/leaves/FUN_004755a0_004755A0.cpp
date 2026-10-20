// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004755A0 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_004755a0_004755A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [eax + 10h]
        sar ecx, 0ch
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx + ecx*8 + 18h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 76 32: jbe 0x475607
        __asm _emit 0x76
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ebp + 14h]
        mov byte ptr [ecx], dl
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        add edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0f1h
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x4756fd
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F 83 EA 00 00 00: jae 0x4756fd
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0f8h
        cmp ecx, edx
        ; Exact mapped bytes 0F 87 D3 00 00 00: ja 0x4756fd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 09: jmp 0x475647
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 73 0D: jae 0x47565c
        __asm _emit 0x73
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x47565c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB E2: jmp 0x47563e
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x4756fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ebp + 14h]
        mov byte ptr [ecx], dl
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 77 68: ja 0x4756e2
        __asm _emit 0x77
        __asm _emit 0x68
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 76 5E: jbe 0x4756e2
        __asm _emit 0x76
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0f8h
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 73 3B: jae 0x4756cd
        __asm _emit 0x73
        __asm _emit 0x3b
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 12: jmp 0x4756b5
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x4756c2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB E1: jmp 0x4756a3
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 15: jmp 0x4756e2
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        add eax, ecx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
