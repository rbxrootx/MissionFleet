// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9D27 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_004a9d27_004A9D27() {
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
        ; Exact mapped bytes 75 14: jne 0x4a9d56
        __asm _emit 0x75
        __asm _emit 0x14
        push 177h
        push 672a58h
        ; Exact mapped bytes E8 EF EF 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a9d56
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a9d31
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x4a9d87
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 C5 02 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a9d87
        __asm _emit 0x75
        __asm _emit 0x14
        push 17ah
        push 672a58h
        ; Exact mapped bytes E8 BE EF 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a9d87
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x4a9d5c
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 102fh
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
