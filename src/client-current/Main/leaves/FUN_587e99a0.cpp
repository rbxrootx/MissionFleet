// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E99A0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_587e99a0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        push edi
        mov edi, dword ptr [esp + 14h]
        cmp edi, ebx
        mov ebp, ecx
        ; Exact mapped bytes 7E 02: jle 0x587e99b3
        __asm _emit 0x7e
        __asm _emit 0x02
        mov edi, ebx
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 10h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 3E: jne 0x587e99ff
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 66 83 7C 24 1C 0B: cmp word ptr [esp + 0x1c], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x0b
        ; Exact mapped bytes 75 24: jne 0x587e99ed
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, edi
        imul eax, eax, 64h
        cdq
        idiv ebx
        mov ecx, dword ptr [ebp + 10bdch]
        push esi
        mov esi, eax
        push esi
        ; Exact mapped bytes E8 80 D9 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10bf0h]
        push esi
        ; Exact mapped bytes E8 74 D9 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0x00
        pop esi
        mov eax, edi
        imul eax, eax, 64h
        cdq
        idiv ebx
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [edx + 127ch], eax
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
