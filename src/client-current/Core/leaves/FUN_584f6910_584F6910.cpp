// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F6910 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_584f6910_584F6910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, 14h
        imul ecx, eax, 0dh
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, 14h
        imul edx, ecx, 0dh
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 14h]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f6956
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 55: jge 0x584f69b3
        __asm _emit 0x7d
        __asm _emit 0x55
        movzx ecx, byte ptr [ebp + 8]
        imul edx, dword ptr [ebp - 4], 0d4h
        mov eax, dword ptr [ebp - 8]
        movzx edx, byte ptr [eax + edx]
        cmp ecx, edx
        ; Exact mapped bytes 75 3D: jne 0x584f69b1
        __asm _emit 0x75
        __asm _emit 0x3d
        movzx eax, byte ptr [ebp + 9]
        imul ecx, dword ptr [ebp - 4], 0d4h
        mov edx, dword ptr [ebp - 8]
        movzx ecx, byte ptr [edx + ecx + 1]
        cmp eax, ecx
        ; Exact mapped bytes 75 26: jne 0x584f69b1
        __asm _emit 0x75
        __asm _emit 0x26
        movzx edx, word ptr [ebp + 0ah]
        imul eax, dword ptr [ebp - 4], 0d4h
        mov ecx, dword ptr [ebp - 8]
        movzx eax, word ptr [ecx + eax + 2]
        cmp edx, eax
        ; Exact mapped bytes 75 0F: jne 0x584f69b1
        __asm _emit 0x75
        __asm _emit 0x0f
        imul ecx, dword ptr [ebp - 4], 0d4h
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 02: jmp 0x584f69b3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9A: jmp 0x584f694d
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
