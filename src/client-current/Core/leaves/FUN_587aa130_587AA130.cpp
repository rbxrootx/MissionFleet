// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA130 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_587aa130_587AA130() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [edi + 2d0h]
        cmp ebp, dword ptr [edi + 2b4h]
        ; Exact mapped bytes 76 06: jbe 0x587aa14f
        __asm _emit 0x76
        __asm _emit 0x06
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret
        push ebx
        test esi, esi
        ; Exact mapped bytes 74 26: je 0x587aa17a
        __asm _emit 0x74
        __asm _emit 0x26
        cmp ebp, dword ptr [edi + 2d4h]
        ; Exact mapped bytes 76 46: jbe 0x587aa1a2
        __asm _emit 0x76
        __asm _emit 0x46
        push esi
        push edi
        mov dword ptr [edi + 2d0h], 0
        mov dword ptr [edi + 2d4h], 0
        ; Exact mapped bytes E8 59 C8 FF FF: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push ebp
        push edi
        ; Exact mapped bytes E8 1F C9 FF FF: call 0x587a6aa0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 8
        test esi, esi
        ; Exact mapped bytes 74 18: je 0x587aa1a2
        __asm _emit 0x74
        __asm _emit 0x18
        push ebp
        push 0
        push esi
        ; Exact mapped bytes E8 7D 2C 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 2d0h], esi
        mov dword ptr [edi + 2d4h], ebp
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
