// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052EF04 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_0052ef04_0052EF04() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 75 0A: jne 0x52ef21
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 29 FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 79: jmp 0x52ef9a
        __asm _emit 0xeb
        __asm _emit 0x79
        lea ecx, [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA D2 00 00: call 0x53c1f7
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A1 DB 00 00: call 0x53cad3
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 20: je 0x52ef57
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0bch], 0
        push 0
        push 0
        push 85h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 CC 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 43: jmp 0x52ef9a
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 FA FF FF: call 0x52e9fb
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        cmp eax, 3
        sete dl
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes 74 20: je 0x52ef9a
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        cmp dword ptr [ecx + 0c0h], 0
        sete dl
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c0h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 00 00 00: call 0x52f00d
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
