// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B84B0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_588b84b0() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        cmp eax, 0dfh
        mov edx, ecx
        mov dword ptr [esp], edx
        ; Exact mapped bytes 7D 07: jge 0x588b84c8
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, 0dfh
        ; Exact mapped bytes EB 0E: jmp 0x588b84d6
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp eax, 142h
        mov ecx, 142h
        ; Exact mapped bytes 7F 02: jg 0x588b84d6
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ecx, eax
        push ebp
        mov ebp, dword ptr [edx + 0e4h]
        lea eax, [edx + 0e4h]
        push esi
        mov esi, dword ptr [ebp + 88h]
        sub esi, 8
        test esi, esi
        ; Exact mapped bytes 0F 8E 9A 00 00 00: jle 0x588b858f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        xor edi, edi
        test esi, esi
        ; Exact mapped bytes 7E 2C: jle 0x588b8529
        __asm _emit 0x7e
        __asm _emit 0x2c
        mov eax, 63h
        cdq
        lea ebx, [esi + esi]
        idiv ebx
        mov ebx, eax
        xor eax, eax
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        imul eax, eax, 63h
        cdq
        idiv esi
        lea eax, [eax + ebx + 0dfh]
        cmp ecx, eax
        ; Exact mapped bytes 7C 08: jl 0x588b8529
        __asm _emit 0x7c
        __asm _emit 0x08
        inc edi
        ; Exact mapped bytes 0F BF C7: movsx eax, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc7
        cmp eax, esi
        ; Exact mapped bytes 7C E7: jl 0x588b8510
        __asm _emit 0x7c
        __asm _emit 0xe7
        mov ecx, ebp
        ; Exact mapped bytes 0F BF DF: movsx ebx, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xdf
        ; Exact mapped bytes E8 3D FC 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 74 56: je 0x588b858d
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 07: jne 0x588b8543
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0dfh
        ; Exact mapped bytes EB 18: jmp 0x588b855b
        __asm _emit 0xeb
        __asm _emit 0x18
        cmp ebx, esi
        ; Exact mapped bytes 75 07: jne 0x588b854e
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 142h
        ; Exact mapped bytes EB 0D: jmp 0x588b855b
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, ebx
        imul eax, eax, 63h
        cdq
        idiv esi
        add eax, 0dfh
        mov ebp, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 15ch]
        push eax
        ; Exact mapped bytes E8 F5 AD 04 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        lea esi, [ebp + 0e4h]
        mov edi, 3
        mov ecx, dword ptr [esi]
        push ebx
        ; Exact mapped bytes E8 12 FC 04 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 F0: jne 0x588b8576
        __asm _emit 0x75
        __asm _emit 0xf0
        mov ecx, ebp
        ; Exact mapped bytes E8 13 D9 FF FF: call 0x588b5ea0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebx
        pop esi
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
