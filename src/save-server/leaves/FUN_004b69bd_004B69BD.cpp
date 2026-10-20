// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B69BD .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_004b69bd_004B69BD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e32bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4b69f8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f5h
        push 677e8ch
        ; Exact mapped bytes E8 4D 23 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b69f8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4b69de
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 01 E3 06 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 67 32 02 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b6a31
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f8h
        push 677e8ch
        ; Exact mapped bytes E8 14 23 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b6a31
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4b6a0d
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 63 E3 06 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DB FE FF FF: call 0x4b692b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8D 5E 01 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
