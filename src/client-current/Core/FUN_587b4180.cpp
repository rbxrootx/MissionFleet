// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4180 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_587b4180() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x587b418f
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x587b4196
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 80070057h
        ; Exact mapped bytes EB 3C: jmp 0x587b41d2
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 13: jne 0x587b41af
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + ecx], 0
        xor eax, eax
        ; Exact mapped bytes EB 23: jmp 0x587b41d2
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 52 8C 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 9E C8 F8 FF: call 0x58740a70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0xf8
        __asm _emit 0xff
        pop ebp
        ret
    }
}
