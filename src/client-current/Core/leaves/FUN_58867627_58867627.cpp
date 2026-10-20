// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867627 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_58867627_58867627() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 75 07: jne 0x5886763e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x58867742
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push dword ptr [ebp + 14h]
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8D 06 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        xor edx, edx
        cmp dword ptr [eax + 8], edx
        ; Exact mapped bytes 75 16: jne 0x5886766a
        __asm _emit 0x75
        __asm _emit 0x16
        push esi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 EB FF FF: call 0x58866230
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov edx, eax
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x5886772f
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 8]
        test ebx, ebx
        ; Exact mapped bytes 74 0A: je 0x5886767b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        test ecx, ecx
        ; Exact mapped bytes 75 1A: jne 0x58867695
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 EF AD FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 20 99 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, 7fffffffh
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5886772f
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        movzx edi, byte ptr [ebx]
        dec esi
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, edi
        inc ebx
        test byte ptr [eax + ecx + 19h], 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 34: je 0x588676de
        __asm _emit 0x74
        __asm _emit 0x34
        test esi, esi
        ; Exact mapped bytes 75 19: jne 0x588676c7
        __asm _emit 0x75
        __asm _emit 0x19
        movzx eax, byte ptr [ecx]
        mov edi, edx
        mov edx, dword ptr [ebp - 0ch]
        push esi
        test byte ptr [eax + edx + 19h], 4
        movzx eax, byte ptr [ecx]
        pop ecx
        cmove ecx, eax
        xor edx, edx
        ; Exact mapped bytes EB 4A: jmp 0x58867711
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov al, byte ptr [ebx]
        test al, al
        ; Exact mapped bytes 75 04: jne 0x588676d1
        __asm _emit 0x75
        __asm _emit 0x04
        mov edi, edx
        ; Exact mapped bytes EB 0D: jmp 0x588676de
        __asm _emit 0xeb
        __asm _emit 0x0d
        shl edi, 8
        movzx eax, al
        ; Exact mapped bytes 66 0B F8: or di, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf8
        inc ebx
        movzx edi, di
        movzx ecx, byte ptr [ecx]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, ecx
        inc dword ptr [ebp - 4]
        push 0
        test byte ptr [eax + edx + 19h], 4
        pop edx
        ; Exact mapped bytes 74 21: je 0x58867714
        __asm _emit 0x74
        __asm _emit 0x21
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x588676fb
        __asm _emit 0x75
        __asm _emit 0x04
        mov ecx, edx
        ; Exact mapped bytes EB 19: jmp 0x58867714
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        dec esi
        mov al, byte ptr [eax]
        test al, al
        ; Exact mapped bytes 74 F2: je 0x588676f7
        __asm _emit 0x74
        __asm _emit 0xf2
        shl ecx, 8
        movzx eax, al
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        inc dword ptr [ebp - 4]
        movzx ecx, cx
        ; Exact mapped bytes 66 3B CF: cmp cx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 75 0F: jne 0x58867728
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 10: je 0x5886772e
        __asm _emit 0x74
        __asm _emit 0x10
        test esi, esi
        ; Exact mapped bytes 0F 85 70 FF FF FF: jne 0x58867696
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5886772e
        __asm _emit 0xeb
        __asm _emit 0x06
        sbb edx, edx
        and edx, 2
        dec edx
        pop edi
        cmp byte ptr [ebp - 8], 0
        pop ebx
        ; Exact mapped bytes 74 0A: je 0x58867740
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 14h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, edx
        pop esi
        leave
        ret
    }
}
