// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748010 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_58748010_58748010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AF D7 FF FF: call 0x587457d0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5874802c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x587480ad
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 7C D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x7c
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 7A D6 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7a
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 4B: je 0x58748098
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1B 7C D6 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7c
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 50h]
        movzx edx, byte ptr [eax + 46h]
        cmp ecx, edx
        ; Exact mapped bytes 7C 09: jl 0x58748079
        __asm _emit 0x7c
        __asm _emit 0x09
        movzx eax, byte ptr [ebp - 1]
        cmp eax, 53h
        ; Exact mapped bytes 7E 1F: jle 0x58748098
        __asm _emit 0x7e
        __asm _emit 0x1f
        ; Exact mapped bytes E8 72 F1 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf1
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 3bah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DC 0C D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0c
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x587480ad
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E0 CF FF FF: call 0x58745080
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x587480a8
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x587480ad
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
