// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049D87F .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_0049d87f_0049D87F() {
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
        cmp ecx, 3
        ; Exact mapped bytes 75 0B: jne 0x49d89e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes EB 5A: jmp 0x49d8f8
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp edx, 0ah
        ; Exact mapped bytes 75 0B: jne 0x49d8b6
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes EB 42: jmp 0x49d8f8
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        cmp eax, 0bh
        ; Exact mapped bytes 75 1C: jne 0x49d8df
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0B: jne 0x49d8d4
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
        ; Exact mapped bytes EB 09: jmp 0x49d8dd
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
        ; Exact mapped bytes EB 19: jmp 0x49d8f8
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 EC 0A 00: call 0x54c5e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 00 03 00: mov word ptr [eax], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
