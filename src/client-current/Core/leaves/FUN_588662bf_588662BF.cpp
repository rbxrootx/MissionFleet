// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588662BF .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_588662bf_588662BF() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        lea ecx, [ebp - 10h]
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 02 1A FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x588662e3
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x588662fd
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 87 C1 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 B8 AC FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, 7fffffffh
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5886638d
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 8]
        xor edx, edx
        cmp dword ptr [ebx + 8], edx
        ; Exact mapped bytes 75 25: jne 0x5886632c
        __asm _emit 0x75
        __asm _emit 0x25
        mov al, byte ptr [ecx]
        cmp al, byte ptr [esi]
        ; Exact mapped bytes 75 18: jne 0x58866325
        __asm _emit 0x75
        __asm _emit 0x18
        test al, al
        ; Exact mapped bytes 74 7C: je 0x5886638d
        __asm _emit 0x74
        __asm _emit 0x7c
        mov al, byte ptr [ecx + 1]
        cmp al, byte ptr [esi + 1]
        ; Exact mapped bytes 75 0C: jne 0x58866325
        __asm _emit 0x75
        __asm _emit 0x0c
        add ecx, 2
        add esi, 2
        test al, al
        ; Exact mapped bytes 75 E4: jne 0x58866307
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes EB 68: jmp 0x5886638d
        __asm _emit 0xeb
        __asm _emit 0x68
        sbb edx, edx
        or edx, 1
        ; Exact mapped bytes EB 61: jmp 0x5886638d
        __asm _emit 0xeb
        __asm _emit 0x61
        movzx edi, byte ptr [ecx]
        inc ecx
        test byte ptr [edi + ebx + 19h], 4
        ; Exact mapped bytes 74 17: je 0x5886634e
        __asm _emit 0x74
        __asm _emit 0x17
        mov al, byte ptr [ecx]
        test al, al
        ; Exact mapped bytes 75 04: jne 0x58866341
        __asm _emit 0x75
        __asm _emit 0x04
        mov edi, edx
        ; Exact mapped bytes EB 0D: jmp 0x5886634e
        __asm _emit 0xeb
        __asm _emit 0x0d
        shl edi, 8
        movzx eax, al
        ; Exact mapped bytes 66 0B F8: or di, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf8
        inc ecx
        movzx edi, di
        movzx ebx, byte ptr [esi]
        inc esi
        mov edx, dword ptr [ebp - 8]
        mov eax, ebx
        push 0
        test byte ptr [eax + edx + 19h], 4
        pop edx
        ; Exact mapped bytes 74 17: je 0x58866378
        __asm _emit 0x74
        __asm _emit 0x17
        mov al, byte ptr [esi]
        test al, al
        ; Exact mapped bytes 75 04: jne 0x5886636b
        __asm _emit 0x75
        __asm _emit 0x04
        mov ebx, edx
        ; Exact mapped bytes EB 0D: jmp 0x58866378
        __asm _emit 0xeb
        __asm _emit 0x0d
        shl ebx, 8
        movzx eax, al
        ; Exact mapped bytes 66 0B D8: or bx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd8
        inc esi
        movzx ebx, bx
        ; Exact mapped bytes 66 3B DF: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 75 0A: jne 0x58866387
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ebx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 A7: jne 0x5886632c
        __asm _emit 0x75
        __asm _emit 0xa7
        ; Exact mapped bytes EB 06: jmp 0x5886638d
        __asm _emit 0xeb
        __asm _emit 0x06
        sbb edx, edx
        and edx, 2
        dec edx
        cmp byte ptr [ebp - 4], 0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 74 0A: je 0x588663a0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, edx
        leave
        ret
    }
}
