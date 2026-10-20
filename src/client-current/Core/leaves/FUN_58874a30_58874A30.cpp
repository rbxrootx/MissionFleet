// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874A30 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_58874a30_58874A30() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        ; Exact mapped bytes 74 04: je 0x58874a42
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 72: jmp 0x58874ab4
        __asm _emit 0xeb
        __asm _emit 0x72
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 75 26: jne 0x58874a6d
        __asm _emit 0x75
        __asm _emit 0x26
        push 4
        push 4
        ; Exact mapped bytes E8 C0 A7 FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 B7 81 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x58874a7a
        __asm _emit 0x74
        __asm _emit 0x18
        mov dword ptr [esi + 4], eax
        add eax, 10h
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes EB D1: jmp 0x58874a3e
        __asm _emit 0xeb
        __asm _emit 0xd1
        sub edi, dword ptr [esi]
        sar edi, 2
        cmp edi, 7fffffffh
        ; Exact mapped bytes 76 05: jbe 0x58874a7f
        __asm _emit 0x76
        __asm _emit 0x05
        push 0ch
        pop eax
        ; Exact mapped bytes EB 35: jmp 0x58874ab4
        __asm _emit 0xeb
        __asm _emit 0x35
        push ebx
        push 4
        lea ebx, [edi + edi]
        push ebx
        push dword ptr [esi]
        ; Exact mapped bytes E8 C3 F0 FE FF: call 0x58863b50
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58874a99
        __asm _emit 0x75
        __asm _emit 0x05
        push 0ch
        pop esi
        ; Exact mapped bytes EB 10: jmp 0x58874aa9
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [esi], eax
        lea ecx, [eax + edi*4]
        lea eax, [eax + ebx*4]
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esi + 8], eax
        xor esi, esi
        push 0
        ; Exact mapped bytes E8 60 81 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, esi
        pop ebx
        pop edi
        pop esi
        ret
    }
}
