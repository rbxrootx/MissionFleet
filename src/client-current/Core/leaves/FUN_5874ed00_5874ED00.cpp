// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874ED00 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_5874ed00_5874ED00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 88 B8 01 00 00: mov word ptr [eax + 0x1b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 0ch], 190h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], edx
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 1b8h]
        cmp edx, 0dh
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x5874edff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1c0h]
        xor ecx, 55h
        cmp ecx, 3e8h
        ; Exact mapped bytes 7E 45: jle 0x5874ed93
        __asm _emit 0x7e
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1c8h], 7d0h
        ; Exact mapped bytes 7E 27: jle 0x5874ed84
        __asm _emit 0x7e
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1c8h], 0bb8h
        ; Exact mapped bytes 7E 09: jle 0x5874ed75
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 3
        ; Exact mapped bytes EB 07: jmp 0x5874ed7c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 2
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x5874ed8b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 07: jmp 0x5874ed9a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 204h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 204h]
        mov dword ptr [edx + 214h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21ch], 9
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1c0h]
        xor ecx, 55h
        ; Exact mapped bytes 74 11: je 0x5874ede4
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 204h]
        add eax, 0ch
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0F: jmp 0x5874edf3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 204h]
        add edx, 14h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 218h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
