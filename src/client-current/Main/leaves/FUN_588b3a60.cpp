// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B3A60 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_588b3a60() {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 0ch]
        push edi
        xor ebx, ebx
        xor edi, edi
        ; Exact mapped bytes E8 38 65 ED FF: call 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 99 00 00 00: jle 0x588b3b19
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 354h]
        cmp eax, dword ptr [ebp + 0d0h]
        ; Exact mapped bytes 75 73: jne 0x588b3b02
        __asm _emit 0x75
        __asm _emit 0x73
        mov ecx, dword ptr [esi + 100ch]
        movzx eax, word ptr [ecx + 4]
        and eax, 1fh
        cmp eax, 6
        ; Exact mapped bytes 74 44: je 0x588b3ae5
        __asm _emit 0x74
        __asm _emit 0x44
        cmp eax, 7
        ; Exact mapped bytes 74 3F: je 0x588b3ae5
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp eax, 8
        ; Exact mapped bytes 75 07: jne 0x588b3ab2
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 35: jmp 0x588b3ae7
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp eax, 4
        ; Exact mapped bytes 74 27: je 0x588b3ade
        __asm _emit 0x74
        __asm _emit 0x27
        cmp eax, 5
        ; Exact mapped bytes 74 22: je 0x588b3ade
        __asm _emit 0x74
        __asm _emit 0x22
        cmp eax, 3
        ; Exact mapped bytes 75 02: jne 0x588b3ac3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 24: jmp 0x588b3ae7
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp eax, 2
        ; Exact mapped bytes 75 07: jne 0x588b3acf
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 4
        ; Exact mapped bytes EB 18: jmp 0x588b3ae7
        __asm _emit 0xeb
        __asm _emit 0x18
        xor edx, edx
        cmp eax, 9
        sete dl
        add edx, 5
        mov eax, edx
        ; Exact mapped bytes EB 09: jmp 0x588b3ae7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 2
        ; Exact mapped bytes EB 02: jmp 0x588b3ae7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 75 15: jne 0x588b3b02
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        ; Exact mapped bytes E8 EC 2B 02 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x588b3b02
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [esi + 438h], 0
        ; Exact mapped bytes 75 01: jne 0x588b3b02
        __asm _emit 0x75
        __asm _emit 0x01
        inc ebx
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [esi + 78h]
        inc edi
        ; Exact mapped bytes E8 9F 64 ED FF: call 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x64
        __asm _emit 0xed
        __asm _emit 0xff
        cmp edi, eax
        ; Exact mapped bytes 0F 8C 67 FF FF FF: jl 0x588b3a80
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
