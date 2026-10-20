// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425829 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_00425829_00425829() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        xor ebx, ebx
        cmp byte ptr [ebp + 18h], bl
        push esi
        mov esi, dword ptr [ebp + 14h]
        push edi
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 1B: je 0x425857
        __asm _emit 0x74
        __asm _emit 0x1b
        xor eax, eax
        cmp dword ptr [ebp + 0ch], ebx
        setg al
        push eax
        xor eax, eax
        cmp dword ptr [esi], 2dh
        sete al
        add eax, edi
        push eax
        ; Exact mapped bytes E8 76 02 00 00: call 0x425acb
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        cmp dword ptr [esi], 2dh
        mov eax, edi
        ; Exact mapped bytes 75 06: jne 0x425864
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [edi], 2dh
        lea eax, [edi + 1]
        cmp dword ptr [ebp + 0ch], ebx
        ; Exact mapped bytes 7E 12: jle 0x42587b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov dl, byte ptr [eax + 1]
        lea ecx, [eax + 1]
        mov byte ptr [eax], dl
        mov eax, ecx
        ; Exact mapped bytes 8A 0D D0 AE 44 00: mov cl, byte ptr [0x44aed0]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        mov byte ptr [eax], cl
        xor ecx, ecx
        cmp byte ptr [ebp + 18h], bl
        push 440068h
        sete cl
        add ecx, eax
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 ED 08 00 00: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], ebx
        pop ecx
        pop ecx
        mov ecx, eax
        ; Exact mapped bytes 74 03: je 0x42589f
        __asm _emit 0x74
        __asm _emit 0x03
        mov byte ptr [ecx], 45h
        mov eax, dword ptr [esi + 0ch]
        inc ecx
        cmp byte ptr [eax], 30h
        ; Exact mapped bytes 74 3C: je 0x4258e4
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ebx, dword ptr [esi + 4]
        dec ebx
        ; Exact mapped bytes 79 05: jns 0x4258b3
        __asm _emit 0x79
        __asm _emit 0x05
        neg ebx
        mov byte ptr [ecx], 2dh
        inc ecx
        cmp ebx, 64h
        ; Exact mapped bytes 7C 11: jl 0x4258ca
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, ebx
        push 64h
        cdq
        pop esi
        idiv esi
        add byte ptr [ecx], al
        mov eax, ebx
        cdq
        idiv esi
        mov ebx, edx
        inc ecx
        cmp ebx, 0ah
        ; Exact mapped bytes 7C 11: jl 0x4258e1
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, ebx
        push 0ah
        cdq
        pop esi
        idiv esi
        add byte ptr [ecx], al
        mov eax, ebx
        cdq
        idiv esi
        mov ebx, edx
        add byte ptr [ecx + 1], bl
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
