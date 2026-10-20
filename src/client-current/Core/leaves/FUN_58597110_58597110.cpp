// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58597110 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_58597110_58597110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0cch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0d0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0a8h]
        cdq
        idiv dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        cdq
        idiv dword ptr [ebp + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c4h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 16 00 00: call 0x58598810
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d4h], eax
        mov eax, dword ptr [ebp + 8]
        imul eax, dword ptr [ebp + 0ch]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 83 9E 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9e
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c8h], ecx
        mov edx, dword ptr [ebp + 8]
        shl edx, 2
        imul edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        push ecx
        ; Exact mapped bytes E8 23 5C 2B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5c
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
