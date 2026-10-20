// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874C71 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_58874c71_58874C71() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        lea ecx, [ebp - 10h]
        push 0
        ; Exact mapped bytes E8 54 30 FE FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 25 50 9C 96 58 00: and dword ptr [0x58969c50], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x50
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp eax, -2
        ; Exact mapped bytes 75 12: jne 0x58874ca4
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes C7 05 50 9C 96 58 01 00 00 00: mov dword ptr [0x58969c50], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 80 41 89 58: call dword ptr [0x58894180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes EB 2C: jmp 0x58874cd0
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp eax, -3
        ; Exact mapped bytes 75 12: jne 0x58874cbb
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes C7 05 50 9C 96 58 01 00 00 00: mov dword ptr [0x58969c50], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 84 41 89 58: call dword ptr [0x58894184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes EB 15: jmp 0x58874cd0
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp eax, -4
        ; Exact mapped bytes 75 10: jne 0x58874cd0
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes C7 05 50 9C 96 58 01 00 00 00: mov dword ptr [0x58969c50], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x58874ce0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        leave
        ret
    }
}
