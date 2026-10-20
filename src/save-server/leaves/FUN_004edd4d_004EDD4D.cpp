// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDD4D .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004edd4d_004EDD4D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 2C FE FF: call 0x4d0991
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        ; Exact mapped bytes E8 22 70 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4edd82
        __asm _emit 0x74
        __asm _emit 0x14
        push 229h
        push 677b4ch
        ; Exact mapped bytes E8 C3 AF 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4edd82
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4edd5f
        __asm _emit 0x75
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
