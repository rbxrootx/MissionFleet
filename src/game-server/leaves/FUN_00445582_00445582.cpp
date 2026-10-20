// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445582 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_00445582_00445582() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 6B: jne 0x445601
        __asm _emit 0x75
        __asm _emit 0x6b
        push 1
        push 3fah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 93 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5D 9E 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 3fbh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 93 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 47 9E 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b682ch
        push 3fbh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 96 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x96
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2c8h
        ; Exact mapped bytes E8 26 A1 0F 00: call 0x53f708
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2c8h
        ; Exact mapped bytes E8 69 A1 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 54 64 04 00: call 0x48ba53
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 52: jmp 0x445653
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 4C: jne 0x445653
        __asm _emit 0x75
        __asm _emit 0x4c
        push 0
        push 3fah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB 92 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EC 9D 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 3fbh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 92 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D6 9D 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6834h
        push 3fbh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 95 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 E4 63 04 00: call 0x48ba37
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 7E 31 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
