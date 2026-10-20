// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F6650 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_584f6650_584F6650() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, 14h
        shl eax, 3
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 8]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 14h], 0
        mov eax, 14h
        shl eax, 3
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 14h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f6696
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 25: jge 0x584f66c3
        __asm _emit 0x7d
        __asm _emit 0x25
        movzx edx, word ptr [ebp + 8]
        imul eax, dword ptr [ebp - 4], 574h
        mov ecx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [ecx + eax + 2]
        cmp edx, eax
        ; Exact mapped bytes 75 0C: jne 0x584f66c1
        __asm _emit 0x75
        __asm _emit 0x0c
        imul eax, dword ptr [ebp - 4], 574h
        add eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 04: jmp 0x584f66c5
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB CA: jmp 0x584f668d
        __asm _emit 0xeb
        __asm _emit 0xca
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
