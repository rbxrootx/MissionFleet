// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F7FC0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_584f7fc0_584F7FC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, 14h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 8]
        mov dword ptr [ebp - 14h], edx
        mov eax, 14h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 14h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f8006
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 2B: jge 0x584f8039
        __asm _emit 0x7d
        __asm _emit 0x2b
        imul edx, dword ptr [ebp - 4], 390h
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 35eh]
        movzx edx, word ptr [ebp + 8]
        cmp ecx, edx
        ; Exact mapped bytes 75 0F: jne 0x584f8037
        __asm _emit 0x75
        __asm _emit 0x0f
        imul eax, dword ptr [ebp - 4], 390h
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 02: jmp 0x584f8039
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C4: jmp 0x584f7ffd
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
