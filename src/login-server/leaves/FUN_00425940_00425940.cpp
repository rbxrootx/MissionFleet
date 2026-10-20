// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425940 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_00425940_00425940() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 10h]
        mov ebx, dword ptr [ebp + 8]
        push edi
        mov eax, dword ptr [esi + 4]
        dec eax
        cmp byte ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 1A: je 0x425970
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 15: jne 0x425970
        __asm _emit 0x75
        __asm _emit 0x15
        xor ecx, ecx
        cmp dword ptr [esi], 2dh
        sete cl
        add ecx, eax
        add ecx, ebx
        mov eax, ecx
        mov byte ptr [eax], 30h
        and byte ptr [eax + 1], 0
        cmp dword ptr [esi], 2dh
        mov edi, ebx
        ; Exact mapped bytes 75 06: jne 0x42597d
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebx], 2dh
        lea edi, [ebx + 1]
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 7F 10: jg 0x425994
        __asm _emit 0x7f
        __asm _emit 0x10
        push 1
        push edi
        ; Exact mapped bytes E8 3F 01 00 00: call 0x425acb
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov byte ptr [edi], 30h
        pop ecx
        inc edi
        ; Exact mapped bytes EB 02: jmp 0x425996
        __asm _emit 0xeb
        __asm _emit 0x02
        add edi, eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 44: jle 0x4259e0
        __asm _emit 0x7e
        __asm _emit 0x44
        push 1
        push edi
        ; Exact mapped bytes E8 27 01 00 00: call 0x425acb
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A0 D0 AE 44 00: mov al, byte ptr [0x44aed0]
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        pop ecx
        mov byte ptr [edi], al
        mov esi, dword ptr [esi + 4]
        inc edi
        pop ecx
        test esi, esi
        ; Exact mapped bytes 7D 2B: jge 0x4259e0
        __asm _emit 0x7d
        __asm _emit 0x2b
        cmp byte ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 04: je 0x4259bf
        __asm _emit 0x74
        __asm _emit 0x04
        neg esi
        ; Exact mapped bytes EB 07: jmp 0x4259c6
        __asm _emit 0xeb
        __asm _emit 0x07
        neg esi
        cmp dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 7C 03: jl 0x4259c9
        __asm _emit 0x7c
        __asm _emit 0x03
        mov dword ptr [ebp + 0ch], esi
        push dword ptr [ebp + 0ch]
        push edi
        ; Exact mapped bytes E8 F9 00 00 00: call 0x425acb
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        push 30h
        push edi
        ; Exact mapped bytes E8 03 91 FF FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
