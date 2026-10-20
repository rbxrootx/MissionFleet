// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588687C8 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_588687c8_588687C8() {
    __asm {
        push 8
        push 588ed450h
        ; Exact mapped bytes E8 8C 9F FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 3E B4 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 48h]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x58868809
        __asm _emit 0x74
        __asm _emit 0x18
        or eax, 0ffffffffh
        ; Exact mapped bytes F0 0F C1 01: lock xadd dword ptr [ecx], eax
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 0F: jne 0x58868809
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp ecx, 58907808h
        ; Exact mapped bytes 74 07: je 0x58868809
        __asm _emit 0x74
        __asm _emit 0x07
        push ecx
        ; Exact mapped bytes E8 08 44 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 12 00 00 00: call 0x58868827
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
