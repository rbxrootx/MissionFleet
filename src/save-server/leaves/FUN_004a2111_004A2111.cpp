// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2111 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_004a2111_004A2111() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2A: je 0x4a2147
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 37 13 00 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a2147
        __asm _emit 0x75
        __asm _emit 0x14
        push 399h
        push 671534h
        ; Exact mapped bytes E8 FE 6B 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2147
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4a2117
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 09: jmp 0x4a2158
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x4a217d
        __asm _emit 0x74
        __asm _emit 0x15
        push 4
        push 671494h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 88 31 FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB D2: jmp 0x4a214f
        __asm _emit 0xeb
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
