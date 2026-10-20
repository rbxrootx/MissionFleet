// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ADA31 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004ada31_004ADA31() {
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
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ada60
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b4h
        push 635af0h
        ; Exact mapped bytes E8 E5 B2 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb2
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ada60
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4ada3b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        push 1018h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 2D 1E 02 00: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
