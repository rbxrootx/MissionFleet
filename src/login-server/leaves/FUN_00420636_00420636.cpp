// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420636 .. +0x185 bytes.
extern "C" __declspec(naked) void FUN_00420636_00420636() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 514h
        lea eax, [ebp - 14h]
        push esi
        push eax
        ; Exact mapped bytes FF 35 9C 11 45 00: push dword ptr [0x45119c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 C8 C0 43 00: call dword ptr [0x43c0c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x42076f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esi, 100h
        mov byte ptr [ebp + eax - 114h], al
        inc eax
        cmp eax, esi
        ; Exact mapped bytes 72 F4: jb 0x420660
        __asm _emit 0x72
        __asm _emit 0xf4
        mov al, byte ptr [ebp - 0eh]
        mov byte ptr [ebp - 114h], 20h
        test al, al
        ; Exact mapped bytes 74 37: je 0x4206b1
        __asm _emit 0x74
        __asm _emit 0x37
        push ebx
        push edi
        lea edx, [ebp - 0dh]
        movzx ecx, byte ptr [edx]
        movzx eax, al
        cmp eax, ecx
        ; Exact mapped bytes 77 1D: ja 0x4206a6
        __asm _emit 0x77
        __asm _emit 0x1d
        sub ecx, eax
        lea edi, [ebp + eax - 114h]
        inc ecx
        mov eax, 20202020h
        mov ebx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, ebx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        inc edx
        inc edx
        mov al, byte ptr [edx - 1]
        test al, al
        ; Exact mapped bytes 75 D0: jne 0x42067f
        __asm _emit 0x75
        __asm _emit 0xd0
        pop edi
        pop ebx
        push 0
        lea eax, [ebp - 514h]
        ; Exact mapped bytes FF 35 C4 13 45 00: push dword ptr [0x4513c4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 9C 11 45 00: push dword ptr [0x45119c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 114h]
        push esi
        push eax
        push 1
        ; Exact mapped bytes E8 33 4E 00 00: call 0x425508
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 214h]
        ; Exact mapped bytes FF 35 9C 11 45 00: push dword ptr [0x45119c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push esi
        push eax
        lea eax, [ebp - 114h]
        push esi
        push eax
        push esi
        ; Exact mapped bytes FF 35 C4 13 45 00: push dword ptr [0x4513c4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E8 B1 41 00 00: call 0x4248aa
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 314h]
        ; Exact mapped bytes FF 35 9C 11 45 00: push dword ptr [0x45119c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push esi
        push eax
        lea eax, [ebp - 114h]
        push esi
        push eax
        push 200h
        ; Exact mapped bytes FF 35 C4 13 45 00: push dword ptr [0x4513c4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E8 89 41 00 00: call 0x4248aa
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 5ch
        xor eax, eax
        lea ecx, [ebp - 514h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        test dl, 1
        ; Exact mapped bytes 74 16: je 0x42074a
        __asm _emit 0x74
        __asm _emit 0x16
        or byte ptr [eax + 4512c1h], 10h
        mov dl, byte ptr [ebp + eax - 214h]
        mov byte ptr [eax + 4511c0h], dl
        ; Exact mapped bytes EB 1C: jmp 0x420766
        __asm _emit 0xeb
        __asm _emit 0x1c
        test dl, 2
        ; Exact mapped bytes 74 10: je 0x42075f
        __asm _emit 0x74
        __asm _emit 0x10
        or byte ptr [eax + 4512c1h], 20h
        mov dl, byte ptr [ebp + eax - 314h]
        ; Exact mapped bytes EB E3: jmp 0x420742
        __asm _emit 0xeb
        __asm _emit 0xe3
        and byte ptr [eax + 4511c0h], 0
        inc eax
        inc ecx
        inc ecx
        cmp eax, esi
        ; Exact mapped bytes 72 BF: jb 0x42072c
        __asm _emit 0x72
        __asm _emit 0xbf
        ; Exact mapped bytes EB 49: jmp 0x4207b8
        __asm _emit 0xeb
        __asm _emit 0x49
        xor eax, eax
        mov esi, 100h
        cmp eax, 41h
        ; Exact mapped bytes 72 19: jb 0x420794
        __asm _emit 0x72
        __asm _emit 0x19
        cmp eax, 5ah
        ; Exact mapped bytes 77 14: ja 0x420794
        __asm _emit 0x77
        __asm _emit 0x14
        or byte ptr [eax + 4512c1h], 10h
        mov cl, al
        add cl, 20h
        mov byte ptr [eax + 4511c0h], cl
        ; Exact mapped bytes EB 1F: jmp 0x4207b3
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp eax, 61h
        ; Exact mapped bytes 72 13: jb 0x4207ac
        __asm _emit 0x72
        __asm _emit 0x13
        cmp eax, 7ah
        ; Exact mapped bytes 77 0E: ja 0x4207ac
        __asm _emit 0x77
        __asm _emit 0x0e
        or byte ptr [eax + 4512c1h], 20h
        mov cl, al
        sub cl, 20h
        ; Exact mapped bytes EB E0: jmp 0x42078c
        __asm _emit 0xeb
        __asm _emit 0xe0
        and byte ptr [eax + 4511c0h], 0
        inc eax
        cmp eax, esi
        ; Exact mapped bytes 72 BE: jb 0x420776
        __asm _emit 0x72
        __asm _emit 0xbe
        pop esi
        leave
        ret
    }
}
