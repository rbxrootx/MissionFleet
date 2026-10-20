// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5B4E .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_004a5b4e_004A5B4E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 92 02 00: call 0x4cee04
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 67d620h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 2C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7F 2E 08 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x2e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        push 67d634h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 2C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8D 2F 08 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2f
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        push eax
        mov ecx, dword ptr [edx + 70h]
        push ecx
        push 67d644h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 2C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 DD FF 03 00: call 0x4e5b92
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 78h
        push edx
        push 67d65ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 2C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 05 00 04 00: call 0x4e5bd4
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 78h
        push eax
        push 67d674h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 2C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EB FF 03 00: call 0x4e5bd4
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 4a34d0h
        ; Exact mapped bytes 75 0F: jne 0x4a5c07
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67d68ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 2C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4a5c14
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67d6c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 2C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a4h], 4a34d0h
        ; Exact mapped bytes 75 0F: jne 0x4a5c32
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67d6fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B 2C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4a5c3f
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67d734h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 2C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        push 67d76ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 2B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x2b
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
