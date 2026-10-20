// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E8D5 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_0041e8d5_0041E8D5() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D AC 11 45 00 00: cmp dword ptr [0x4511ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 75 12: jne 0x41e8f6
        __asm _emit 0x75
        __asm _emit 0x12
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 3D 00 00: call 0x422680
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x41e97f
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 0D 3D 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        mov edi, dword ptr [ebp + 8]
        pop ecx
        ; Exact mapped bytes 66 0F B6 0F: movzx cx, byte ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0f
        movzx eax, cl
        inc edi
        mov dword ptr [ebp + 0ch], ecx
        test byte ptr [eax + 4512c1h], 4
        ; Exact mapped bytes 74 16: je 0x41e92e
        __asm _emit 0x74
        __asm _emit 0x16
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 75 06: jne 0x41e924
        __asm _emit 0x75
        __asm _emit 0x06
        and dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes EB 0A: jmp 0x41e92e
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor edx, edx
        inc edi
        mov dh, cl
        mov dl, al
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 66 0F B6 1E: movzx bx, byte ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x1e
        movzx eax, bl
        inc esi
        test byte ptr [eax + 4512c1h], 4
        ; Exact mapped bytes 74 13: je 0x41e952
        __asm _emit 0x74
        __asm _emit 0x13
        mov al, byte ptr [esi]
        test al, al
        ; Exact mapped bytes 75 04: jne 0x41e949
        __asm _emit 0x75
        __asm _emit 0x04
        xor ebx, ebx
        ; Exact mapped bytes EB 09: jmp 0x41e952
        __asm _emit 0xeb
        __asm _emit 0x09
        xor ecx, ecx
        inc esi
        mov ch, bl
        mov cl, al
        mov ebx, ecx
        ; Exact mapped bytes 66 39 5D 0C: cmp word ptr [ebp + 0xc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0x0c
        ; Exact mapped bytes 75 09: jne 0x41e961
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 83 7D 0C 00: cmp word ptr [ebp + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x41e975
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes EB A3: jmp 0x41e904
        __asm _emit 0xeb
        __asm _emit 0xa3
        push 19h
        ; Exact mapped bytes E8 03 3D 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 5D 0C: cmp bx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x5d
        __asm _emit 0x0c
        pop ecx
        sbb eax, eax
        and eax, 2
        dec eax
        ; Exact mapped bytes EB 0A: jmp 0x41e97f
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 19h
        ; Exact mapped bytes E8 EF 3C 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
