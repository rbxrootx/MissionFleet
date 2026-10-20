// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B4A50 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_585b4a50_585B4A50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 64h]
        cmp ecx, 0a9h
        ; Exact mapped bytes 75 38: jne 0x585b4a9e
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, 0fff0h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 90 58 0D 00 00: and dx, word ptr [eax + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 91 58 0D 00 00: mov word ptr [ecx + 0xd58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ff0fh
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 90 58 0D 00 00: and dx, word ptr [eax + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 CA 10: or dx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 91 58 0D 00 00: mov word ptr [ecx + 0xd58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4C: jmp 0x585b4aea
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 64h]
        and eax, 0ff00h
        sar eax, 8
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        mov ecx, 0fff0h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 58 0D 00 00: and cx, word ptr [edx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 58 0D 00 00: mov word ptr [eax + 0xd58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ff0fh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 58 0D 00 00: and cx, word ptr [edx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C9 10: or cx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 58 0D 00 00: mov word ptr [eax + 0xd58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
