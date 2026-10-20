// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A8E31 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_004a8e31_004A8E31() {
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
        ; Exact mapped bytes 75 11: jne 0x4a8e5d
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ah
        push 672a58h
        ; Exact mapped bytes E8 E8 FE 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a8e5d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4a8e3b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 D4 02 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 0ah
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4a8e83
        __asm _emit 0x74
        __asm _emit 0x11
        push 2bh
        push 672a58h
        ; Exact mapped bytes E8 C2 FE 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a8e83
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4a8e63
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 00 B3 68 00: call dword ptr [0x68b300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
