// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AE096 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_004ae096_004AE096() {
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
        ; Exact mapped bytes 75 14: jne 0x4ae0c5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dah
        push 635af0h
        ; Exact mapped bytes E8 80 AC 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ae0c5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4ae0a0
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 81 02 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4ae0f0
        __asm _emit 0x74
        __asm _emit 0x14
        push 0dah
        push 635af0h
        ; Exact mapped bytes E8 55 AC 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ae0f0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4ae0cb
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1030h
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
