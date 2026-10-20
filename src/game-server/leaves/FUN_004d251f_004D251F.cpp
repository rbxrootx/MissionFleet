// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D251F .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_004d251f_004D251F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 E9 01 00: call 0x4f0ed4
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 5cb23ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 25 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7C 27 06 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        push 5cb250h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 25 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8A 28 06 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 70h]
        push eax
        push 5cb264h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D 25 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6F 28 06 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        push 5cb274h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 25 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4d25a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 10h
        ; Exact mapped bytes 7D 23: jge 0x4d25cd
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        push edx
        push 5cb288h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 25 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 29 28 06 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x4d259b
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 78h], 4cfec0h
        ; Exact mapped bytes 75 0F: jne 0x4d25e8
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5cb28ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 25 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4d25f5
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5cb2c0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 25 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        push 5cb2f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 25 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
