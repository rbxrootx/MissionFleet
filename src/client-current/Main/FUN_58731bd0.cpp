// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58731BD0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_58731bd0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        push edi
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x58731be8
        __asm _emit 0x74
        __asm _emit 0x08
        cmp ebx, 7fffffffh
        ; Exact mapped bytes 76 4D: jbe 0x58731c35
        __asm _emit 0x76
        __asm _emit 0x4d
        mov eax, 80070057h
        xor esi, esi
        test eax, eax
        ; Exact mapped bytes 7C 62: jl 0x58731c55
        __asm _emit 0x7c
        __asm _emit 0x62
        mov ecx, ebx
        sub ecx, esi
        lea edx, [esi + ebp]
        mov eax, 0
        ; Exact mapped bytes 74 4B: je 0x58731c4c
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edi, ecx
        sub edi, ebx
        lea esi, [edi + esi + 7fffffffh]
        mov edi, dword ptr [esp + 1ch]
        sub edi, edx
        test esi, esi
        ; Exact mapped bytes 74 32: je 0x58731c48
        __asm _emit 0x74
        __asm _emit 0x32
        mov bl, byte ptr [edi + edx]
        test bl, bl
        ; Exact mapped bytes 74 2B: je 0x58731c48
        __asm _emit 0x74
        __asm _emit 0x2b
        mov byte ptr [edx], bl
        dec ecx
        inc edx
        dec esi
        test ecx, ecx
        ; Exact mapped bytes 75 EC: jne 0x58731c12
        __asm _emit 0x75
        __asm _emit 0xec
        pop edi
        pop esi
        dec edx
        pop ebp
        mov eax, 8007007ah
        mov byte ptr [edx], cl
        pop ebx
        ret 0ch
        lea edi, [esp + 18h]
        mov ecx, ebx
        mov edx, ebp
        ; Exact mapped bytes E8 BE F8 FF FF: call 0x58731500
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 18h]
        ; Exact mapped bytes EB A7: jmp 0x58731bef
        __asm _emit 0xeb
        __asm _emit 0xa7
        test ecx, ecx
        ; Exact mapped bytes 75 06: jne 0x58731c52
        __asm _emit 0x75
        __asm _emit 0x06
        dec edx
        mov eax, 8007007ah
        mov byte ptr [edx], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0ch
    }
}
