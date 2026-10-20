// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051CBB9 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_0051cbb9_0051CBB9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 1
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 96 68 F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51cbe5
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 6778d4h
        ; Exact mapped bytes E8 60 C1 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51cbe5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x51cbc3
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C FE FF FF: call 0x51ca23
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 B8 FC FF: call 0x4e8453
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
