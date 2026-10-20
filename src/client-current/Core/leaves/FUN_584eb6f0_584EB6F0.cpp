// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EB6F0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_584eb6f0_584EB6F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 7ah]
        cmp edx, 1
        ; Exact mapped bytes 75 09: jne 0x584eb715
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 9
        ; Exact mapped bytes EB 22: jmp 0x584eb737
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 7ah]
        cmp ecx, 2
        ; Exact mapped bytes 75 09: jne 0x584eb72a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 7
        ; Exact mapped bytes EB 07: jmp 0x584eb731
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 3
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 0ch]
        mov byte ptr [eax + 79h], cl
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 7ah]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 D0 FF FF: call 0x584e8770
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 FE FF FF: call 0x584eb5a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 58h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
