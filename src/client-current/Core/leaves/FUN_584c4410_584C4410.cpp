// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C4410 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_584c4410_584C4410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 05: jne 0x584c4424
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x584c44b5
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x584c44b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes 75 76: jne 0x584c44b5
        __asm _emit 0x75
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 74 2F: je 0x584c447a
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 07 4E FF FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 19: jne 0x584c447a
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 57 BC 15 00: call 0x586200d0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xbc
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a8h], 0
        ; Exact mapped bytes 74 2F: je 0x584c44b5
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 CC 4D FF FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 19: jne 0x584c44b5
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6C E1 15 00: call 0x58622620
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe1
        __asm _emit 0x15
        __asm _emit 0x00
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
