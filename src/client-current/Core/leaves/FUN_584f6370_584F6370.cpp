// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F6370 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_584f6370_584F6370() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, 14h
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 8]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        mov ecx, 14h
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 14h]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f63b6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 25: jge 0x584f63e3
        __asm _emit 0x7d
        __asm _emit 0x25
        movzx ecx, word ptr [ebp + 8]
        imul edx, dword ptr [ebp - 4], 318h
        mov eax, dword ptr [ebp - 0ch]
        movzx edx, word ptr [eax + edx + 2]
        cmp ecx, edx
        ; Exact mapped bytes 75 0C: jne 0x584f63e1
        __asm _emit 0x75
        __asm _emit 0x0c
        imul eax, dword ptr [ebp - 4], 318h
        add eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 04: jmp 0x584f63e5
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB CA: jmp 0x584f63ad
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
