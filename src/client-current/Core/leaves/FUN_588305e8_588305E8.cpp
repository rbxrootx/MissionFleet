// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588305E8 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_588305e8_588305E8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 8
        ; Exact mapped bytes E8 1D 90 02 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x5883060f
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes A1 0C 62 96 58: mov eax, dword ptr [0x5896620c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x62
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes 89 0D 0C 62 96 58: mov dword ptr [0x5896620c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x62
        __asm _emit 0x96
        __asm _emit 0x58
        leave
        ret
        ; Exact mapped bytes E8 5C E1 FF FF: call 0x5882e770
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
