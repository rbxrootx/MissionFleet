// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434D17 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00434d17_00434D17() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes E8 94 0F 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x434d3b
        __asm _emit 0x74
        __asm _emit 0x15
        push dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        mov ecx, eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 8C 00 00 00: call dword ptr [edx + 0x8c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x434d4b
        __asm _emit 0xeb
        __asm _emit 0x10
        push dword ptr [ebp + 10h]
        xor ecx, ecx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E5 FE FF FF: call 0x434c30
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
