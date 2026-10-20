// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D0180 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_588d0180() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        mov ecx, dword ptr [eax + 0cc0h]
        push ebp
        push esi
        movzx esi, word ptr [ecx + 0ch]
        push edi
        shr esi, 0ah
        xor edi, edi
        and esi, 1fh
        ; Exact mapped bytes 7E 39: jle 0x588d01d8
        __asm _emit 0x7e
        __asm _emit 0x39
        lea ebp, [eax + 0bc0h]
        xor ecx, ecx
        mov edx, ebp
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x588d01c7
        __asm _emit 0x74
        __asm _emit 0x11
        cmp byte ptr [eax], 0bh
        ; Exact mapped bytes 75 0C: jne 0x588d01c7
        __asm _emit 0x75
        __asm _emit 0x0c
        mov al, byte ptr [eax + 9bh]
        and al, 0fh
        cmp al, 5
        ; Exact mapped bytes 74 1A: je 0x588d01e1
        __asm _emit 0x74
        __asm _emit 0x1a
        inc ecx
        add edx, 4
        cmp ecx, 2
        ; Exact mapped bytes 7C E0: jl 0x588d01b0
        __asm _emit 0x7c
        __asm _emit 0xe0
        inc edi
        add ebp, 8
        cmp edi, esi
        ; Exact mapped bytes 7C CD: jl 0x588d01a5
        __asm _emit 0x7c
        __asm _emit 0xcd
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        ret
        push 0
        push 0
        push 0
        push 2eh
        ; Exact mapped bytes E8 02 B9 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3B 4B E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x4b
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret
    }
}
