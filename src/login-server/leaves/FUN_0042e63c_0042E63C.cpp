// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E63C .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0042e63c_0042E63C() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov eax, ebx
        push edi
        mov edi, ecx
        shr eax, 10h
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        mov dword ptr [edi + 40h], ebx
        ; Exact mapped bytes 75 0C: jne 0x42e65e
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [edi + 3ch], 0
        ; Exact mapped bytes 75 06: jne 0x42e65e
        __asm _emit 0x75
        __asm _emit 0x06
        movzx eax, bx
        mov dword ptr [edi + 3ch], eax
        ; Exact mapped bytes E8 50 76 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [eax + 0ch]
        push 5
        push ebx
        push esi
        ; Exact mapped bytes FF 15 70 C2 43 00: call dword ptr [0x43c270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 58 C1 43 00: call dword ptr [0x43c158]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        mov ecx, edi
        push dword ptr [esp + 18h]
        push eax
        ; Exact mapped bytes E8 06 00 00 00: call 0x42e68b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
