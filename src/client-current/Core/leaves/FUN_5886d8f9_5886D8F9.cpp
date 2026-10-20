// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D8F9 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_5886d8f9_5886D8F9() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        mov ebx, dword ptr [ebp + 14h]
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes 0F BF CB: movsx ecx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcb
        mov edx, dword ptr [esi + 4]
        and edx, dword ptr [ebp + 10h]
        and eax, dword ptr [esi]
        and edx, 0fffffh
        ; Exact mapped bytes E8 30 F9 00 00: call 0x5887d250
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        movzx edi, ax
        ; Exact mapped bytes 75 09: jne 0x5886d932
        __asm _emit 0x75
        __asm _emit 0x09
        cmp edi, 8
        sbb al, al
        inc al
        ; Exact mapped bytes EB 55: jmp 0x5886d987
        __asm _emit 0xeb
        __asm _emit 0x55
        ; Exact mapped bytes E8 A9 48 00 00: call 0x588721e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5886d94d
        __asm _emit 0x75
        __asm _emit 0x12
        push ebx
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 F7 F6 FF FF: call 0x5886d03f
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 3A: jmp 0x5886d987
        __asm _emit 0xeb
        __asm _emit 0x3a
        cmp eax, 200h
        ; Exact mapped bytes 75 16: jne 0x5886d96a
        __asm _emit 0x75
        __asm _emit 0x16
        xor eax, eax
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 2C: je 0x5886d987
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [esi + 4], eax
        ; Exact mapped bytes 7C 27: jl 0x5886d987
        __asm _emit 0x7c
        __asm _emit 0x27
        ; Exact mapped bytes 7F 04: jg 0x5886d966
        __asm _emit 0x7f
        __asm _emit 0x04
        cmp dword ptr [esi], eax
        ; Exact mapped bytes 72 21: jb 0x5886d987
        __asm _emit 0x72
        __asm _emit 0x21
        mov al, 1
        ; Exact mapped bytes EB 1D: jmp 0x5886d987
        __asm _emit 0xeb
        __asm _emit 0x1d
        cmp eax, 100h
        ; Exact mapped bytes 75 14: jne 0x5886d985
        __asm _emit 0x75
        __asm _emit 0x14
        xor eax, eax
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 0F: je 0x5886d987
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [esi + 4], eax
        ; Exact mapped bytes 7F 0A: jg 0x5886d987
        __asm _emit 0x7f
        __asm _emit 0x0a
        ; Exact mapped bytes 7C E7: jl 0x5886d966
        __asm _emit 0x7c
        __asm _emit 0xe7
        cmp dword ptr [esi], eax
        ; Exact mapped bytes 73 04: jae 0x5886d987
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes EB E1: jmp 0x5886d966
        __asm _emit 0xeb
        __asm _emit 0xe1
        xor al, al
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
