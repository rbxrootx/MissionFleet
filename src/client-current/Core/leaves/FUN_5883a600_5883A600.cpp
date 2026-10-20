// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A600 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_5883a600_5883A600() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 74 53: je 0x5883a65e
        __asm _emit 0x74
        __asm _emit 0x53
        push edi
        push esi
        ; Exact mapped bytes E8 6E 6B 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, 400h
        pop ecx
        cmp eax, edi
        ; Exact mapped bytes 73 41: jae 0x5883a65d
        __asm _emit 0x73
        __asm _emit 0x41
        push edi
        push esi
        push edi
        push 58966e88h
        ; Exact mapped bytes E8 07 BB 02 00: call 0x58866130
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C6 05 87 72 96 58 00: mov byte ptr [0x58967287], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x87
        __asm _emit 0x72
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        push edi
        mov edi, 58967288h
        push edi
        push esi
        ; Exact mapped bytes E8 40 6B 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        push esi
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        push edi
        ; Exact mapped bytes 66 A3 86 7A 96 58: mov word ptr [0x58967a86], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E FF FF FF: call 0x5883a5ba
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop edi
        xor eax, eax
        pop esi
        pop ebp
        ret
    }
}
