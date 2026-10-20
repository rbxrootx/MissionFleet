// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2C6B .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_004d2c6b_004D2C6B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d2c92
        __asm _emit 0x75
        __asm _emit 0x14
        push 896h
        push 671a64h
        ; Exact mapped bytes E8 B3 60 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d2c92
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d2c75
        __asm _emit 0x75
        __asm _emit 0xdd
        push 897h
        push 671a64h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 B5 75 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 31 A2 05 00: call 0x52cee1
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 FE FF FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 9D 05 00: call 0x52c9f6
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        xor ecx, ecx
        cmp esi, eax
        sete cl
        mov eax, ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
