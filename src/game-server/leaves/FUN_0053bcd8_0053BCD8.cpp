// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053BCD8 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_0053bcd8_0053BCD8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x53bd04
        __asm _emit 0x75
        __asm _emit 0x11
        push 35h
        push 582398h
        ; Exact mapped bytes E8 01 8D FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53bd04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x53bce2
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        push 0
        push 31h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E8 AE FF FF: call 0x536c0b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
