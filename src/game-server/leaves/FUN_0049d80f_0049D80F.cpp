// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049D80F .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_0049d80f_0049D80F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 2
        ; Exact mapped bytes 75 0D: jne 0x49d830
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 42 08: mov word ptr [edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes EB 46: jmp 0x49d876
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp edx, 0bh
        ; Exact mapped bytes 75 1E: jne 0x49d85b
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x49d850
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 41 08 00 00: mov word ptr [ecx + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x49d859
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 42 08 FF FF: mov word ptr [edx + 8], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x49d876
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D ED 0A 00: call 0x54c5e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xed
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 00 02 00: mov word ptr [eax], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 51 08: mov word ptr [ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
