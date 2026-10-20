// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511958 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00511958_00511958() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 14: je 0x511981
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a4h
        push 673dc0h
        ; Exact mapped bytes E8 C4 73 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511981
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x511964
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5119a1
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a5h
        push 673dc0h
        ; Exact mapped bytes E8 A4 73 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5119a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x511987
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 06 01 02 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 68 BC 68 00: call dword ptr [0x68bc68]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 48h], eax
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        cmp dword ptr [eax + 48h], 0
        setne cl
        mov eax, ecx
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
