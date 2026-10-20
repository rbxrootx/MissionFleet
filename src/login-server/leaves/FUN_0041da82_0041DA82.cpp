// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DA82 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0041da82_0041DA82() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        xor ebx, ebx
        push edi
        ; Exact mapped bytes E8 98 FE FF FF: call 0x41d92e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 03: je 0x41da9f
        __asm _emit 0x74
        __asm _emit 0x03
        mov esi, dword ptr [esi + 1ch]
        push 0
        push esi
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes FF 15 B8 C4 43 00: call dword ptr [0x43c4b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 27 18 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 23: je 0x41dada
        __asm _emit 0x74
        __asm _emit 0x23
        inc ebx
        cmp esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 1D: je 0x41dada
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp ebx, 3ch
        ; Exact mapped bytes 7F 18: jg 0x41dada
        __asm _emit 0x7f
        __asm _emit 0x18
        push dword ptr [ebp + 10h]
        push esi
        ; Exact mapped bytes E8 98 FF FF FF: call 0x41da63
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 C7: je 0x41da98
        __asm _emit 0x74
        __asm _emit 0xc7
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        push edi
        ; Exact mapped bytes E8 4B FE FF FF: call 0x41d92e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        mov esi, ebx
        push 3
        push esi
        push edi
        ; Exact mapped bytes E8 97 FE FF FF: call 0x41d987
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 10h]
        mov esi, eax
        push esi
        ; Exact mapped bytes E8 68 FF FF FF: call 0x41da63
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 D0: jne 0x41dad1
        __asm _emit 0x75
        __asm _emit 0xd0
        cmp esi, ebx
        ; Exact mapped bytes 75 E2: jne 0x41dae7
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes EB CC: jmp 0x41dad3
        __asm _emit 0xeb
        __asm _emit 0xcc
    }
}
