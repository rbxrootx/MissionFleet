// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EC140 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_584ec140_584EC140() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x584ec1e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes 75 1E: jne 0x584ec17c
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 8D B0 FE FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 259h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 56 FF FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 66: jmp 0x584ec1e2
        __asm _emit 0xeb
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 70h]
        ; Exact mapped bytes 75 16: jne 0x584ec19d
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0ch], edx
        push 11h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 36 12 08 00: call 0x5856d3d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x12
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 45: jmp 0x584ec1e2
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes 75 16: jne 0x584ec1be
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 10h], eax
        push 11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 11 08 00: call 0x5856d330
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x584ec1e2
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 75 19: jne 0x584ec1e2
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF D2 FF FF: call 0x584e94d0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
