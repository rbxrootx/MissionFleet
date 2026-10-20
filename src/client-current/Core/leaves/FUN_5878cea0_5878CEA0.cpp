// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878CEA0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_5878cea0_5878CEA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 6ah]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 04: je 0x5878ceb9
        __asm _emit 0x74
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 55: jmp 0x5878cf0e
        __asm _emit 0xeb
        __asm _emit 0x55
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5878cecb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 3B: jge 0x5878cf0c
        __asm _emit 0x7d
        __asm _emit 0x3b
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5878cee3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 21: jge 0x5878cf0a
        __asm _emit 0x7d
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [ecx + 6bh]
        imul eax, dword ptr [ebp - 4], 6
        add edx, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 04: jne 0x5878cf08
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 06: jmp 0x5878cf0e
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes EB D0: jmp 0x5878ceda
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes EB B6: jmp 0x5878cec2
        __asm _emit 0xeb
        __asm _emit 0xb6
        xor al, al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
