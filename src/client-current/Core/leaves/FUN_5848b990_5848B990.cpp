// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848B990 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_5848b990_5848B990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 0ch], 14h
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + eax + 109h]
        sub dl, 1
        imul eax, dword ptr [ebp + 0ch], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 109h], dl
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 46: jne 0x5848ba04
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 77 0A 00 00: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        imul eax, dword ptr [ebp + 0ch], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 108h]
        add edx, 1bh
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 16 00 00: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, ax
        xor ecx, 55h
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        xor edx, 55h
        mov dword ptr [ebp - 8], edx
        imul eax, dword ptr [ebp + 0ch], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 109h]
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x5848ba2b
        __asm _emit 0x75
        __asm _emit 0x14
        imul eax, dword ptr [ebp + 0ch], 14h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 110h], 0
        ; Exact mapped bytes EB 22: jmp 0x5848ba4d
        __asm _emit 0xeb
        __asm _emit 0x22
        imul edx, dword ptr [ebp + 0ch], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 109h]
        test ecx, ecx
        ; Exact mapped bytes 7D 0F: jge 0x5848ba4d
        __asm _emit 0x7d
        __asm _emit 0x0f
        imul edx, dword ptr [ebp + 0ch], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 109h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
