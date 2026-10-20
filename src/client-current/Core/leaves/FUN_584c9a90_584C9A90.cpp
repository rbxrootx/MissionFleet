// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C9A90 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_584c9a90_584C9A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 184h], ecx
        mov edx, 1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 24 01 00 00: mov word ptr [eax + 0x124], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 26 01 00 00: mov word ptr [edx + 0x126], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 126h]
        imul edx, ecx, 19h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 28 01 00 00: mov word ptr [eax + 0x128], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2dh
        push 4bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A FF FF FF: call 0x584c9a50
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 82 A0 00 00 00: mov ax, word ptr [edx + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 1E 01 00 00: mov word ptr [ecx + 0x11e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 11eh]
        cmp edx, 640h
        ; Exact mapped bytes 7E 4A: jle 0x584c9b56
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 11eh]
        cmp ecx, 960h
        ; Exact mapped bytes 7E 29: jle 0x584c9b47
        __asm _emit 0x7e
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 11eh]
        cmp eax, 0e10h
        ; Exact mapped bytes 7E 09: jle 0x584c9b38
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 3
        ; Exact mapped bytes EB 07: jmp 0x584c9b3f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 2
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x584c9b4e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 07: jmp 0x584c9b5d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 174h], 44h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 178h], 3ch
        ; Exact mapped bytes E8 EA 70 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x70
        __asm _emit 0x38
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x584c9b8e
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 42h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 17ch], eax
        ; Exact mapped bytes E8 CD 70 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x38
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x584c9bab
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 26h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 180h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 91 9C 00 00 00: mov dx, word ptr [ecx + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 1A 01 00 00: mov word ptr [eax + 0x11a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 91 9E 00 00 00: mov dx, word ptr [ecx + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 1C 01 00 00: mov word ptr [eax + 0x11c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 11ah]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 1A 01 00 00: mov word ptr [edx + 0x11a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 11ch]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 1C 01 00 00: mov word ptr [edx + 0x11c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
