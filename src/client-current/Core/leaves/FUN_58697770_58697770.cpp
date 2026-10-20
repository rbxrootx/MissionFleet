// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58697770 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_58697770_58697770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 56 06 00 00: mov cx, word ptr [eax + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 56 06 00 00: mov cx, word ptr [eax + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        xor edx, 55h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 27: jne 0x586977e9
        __asm _emit 0x75
        __asm _emit 0x27
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 72 21: jb 0x586977e9
        __asm _emit 0x72
        __asm _emit 0x21
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 1B: jne 0x586977e9
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 1D FA E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 73h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8A 15 E4 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x5869780e
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1F: je 0x5869780e
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 19: jne 0x5869780e
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes E8 F6 F9 E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 74h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 63 15 E4 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
