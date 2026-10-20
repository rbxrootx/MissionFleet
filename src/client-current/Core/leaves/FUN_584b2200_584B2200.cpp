// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B2200 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_584b2200_584B2200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 2
        push 3
        push 0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 CE FF FF: call 0x584af0b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x584b222b
        __asm _emit 0x74
        __asm _emit 0x10
        push 2
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 D0 FF FF: call 0x584af320
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b222f
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 64: jmp 0x584b2293
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 EC FF FF: call 0x584b0f00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b2242
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 51: jmp 0x584b2293
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 FF FF FF: call 0x584b2160
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x584b2255
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 3E: jmp 0x584b2293
        __asm _emit 0xeb
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 DA FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 27 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        test edx, edx
        ; Exact mapped bytes 75 1F: jne 0x584b2291
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 79 4F 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 2716h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E3 6A 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b2293
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
