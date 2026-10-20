// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DC72 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0041dc72_0041DC72() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        push dword ptr [esp + 14h]
        mov ecx, ebx
        ; Exact mapped bytes E8 4D 04 01 00: call 0x42e0d1
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x41dcc3
        __asm _emit 0x75
        __asm _emit 0x3b
        push 1
        push eax
        push ebx
        ; Exact mapped bytes E8 F6 FC FF FF: call 0x41d987
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        cmp edi, ebx
        ; Exact mapped bytes 74 2A: je 0x41dcc1
        __asm _emit 0x74
        __asm _emit 0x2a
        mov esi, edi
        mov ecx, edi
        ; Exact mapped bytes E8 DC 05 01 00: call 0x42e27c
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 74 17: je 0x41dcbd
        __asm _emit 0x74
        __asm _emit 0x17
        push 1
        push esi
        push ebx
        ; Exact mapped bytes E8 D8 FC FF FF: call 0x41d987
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x41dcc1
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp esi, edi
        ; Exact mapped bytes 74 08: je 0x41dcc1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, esi
        ; Exact mapped bytes EB DE: jmp 0x41dc9b
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, esi
        ; Exact mapped bytes EB 02: jmp 0x41dcc3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
