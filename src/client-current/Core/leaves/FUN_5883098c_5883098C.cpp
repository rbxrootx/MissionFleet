// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883098C .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_5883098c_5883098C() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        xor esi, esi
        push 2ch
        push esi
        push edi
        ; Exact mapped bytes E8 71 C4 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E8 4D 37 03 00: call 0x588640f4
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 92 37 03 00: call 0x58864140
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi + 4], eax
        ; Exact mapped bytes E8 63 37 03 00: call 0x58864119
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 8]
        xor eax, eax
        test ecx, ecx
        sete al
        mov dword ptr [edi + 8], eax
        test ecx, ecx
        ; Exact mapped bytes 74 32: je 0x588309f9
        __asm _emit 0x74
        __asm _emit 0x32
        push ebx
        ; Exact mapped bytes E8 52 35 03 00: call 0x58863f1f
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        mov ebx, eax
        xor eax, eax
        ; Exact mapped bytes 66 39 04 73: cmp word ptr [ebx + esi*2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x73
        ; Exact mapped bytes 7D 18: jge 0x588309ef
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, esi
        mov eax, esi
        shr edx, 3
        and eax, 7
        movzx ecx, byte ptr [edx + edi + 0ch]
        bts ecx, eax
        xor eax, eax
        mov byte ptr [edx + edi + 0ch], cl
        inc esi
        cmp esi, 100h
        ; Exact mapped bytes 7C D9: jl 0x588309d1
        __asm _emit 0x7c
        __asm _emit 0xd9
        pop ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret
    }
}
