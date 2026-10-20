// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040262B .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0040262b_0040262B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d7ch]
        mov ecx, dword ptr [edx + 20h]
        ; Exact mapped bytes E8 3B FB 05 00: call 0x462189
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x402677
        __asm _emit 0x75
        __asm _emit 0x25
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 170h]
        or ecx, 30000h
        push ecx
        push 80020116h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 74 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x40269b
        __asm _emit 0xeb
        __asm _emit 0x24
        push 0
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 170h]
        or eax, 30000h
        push eax
        push 80020116h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 4B 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 36 61 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
