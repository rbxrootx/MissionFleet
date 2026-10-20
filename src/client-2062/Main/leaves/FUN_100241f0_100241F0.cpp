// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100241F0 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_100241f0_100241F0() {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr [ebx + 6ch]
        push edi
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x10024204
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 08: jmp 0x1002420c
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebx + 70h]
        sub ecx, eax
        sar ecx, 3
        mov eax, 51eb851fh
        mul ecx
        mov ebp, edx
        shr ebp, 4
        inc ebp
        cmp ebp, 0ah
        ; Exact mapped bytes 73 05: jae 0x10024223
        __asm _emit 0x73
        __asm _emit 0x05
        mov ebp, 0ah
        mov esi, dword ptr [ebx + 6ch]
        mov ecx, esi
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x10024230
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10024238
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebx + 70h]
        sub eax, ecx
        sar eax, 3
        mov edx, dword ptr [esp + 20h]
        mov ecx, dword ptr [edx]
        cmp ecx, eax
        ; Exact mapped bytes 73 05: jae 0x10024247
        __asm _emit 0x73
        __asm _emit 0x05
        lea esi, [esi + ecx*8]
        ; Exact mapped bytes EB 06: jmp 0x1002424d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [edx], 0
        cmp esi, dword ptr [ebx + 70h]
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x100242f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        test ebp, ebp
        ; Exact mapped bytes 0F 86 97 00 00 00: jbe 0x100242f9
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        inc eax
        mov dword ptr [edx], eax
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 454h]
        test ecx, ecx
        ; Exact mapped bytes 75 77: jne 0x100242ea
        __asm _emit 0x75
        __asm _emit 0x77
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [edi + 0ch]
        push ecx
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 BE FD FF FF: call 0x10024040
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 5F: jne 0x100242e6
        __asm _emit 0x75
        __asm _emit 0x5f
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edi + 0ch]
        mov edx, dword ptr [edx + 4e8h]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [edx + 8]
        sub eax, dword ptr [edx + 4]
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes E8 E7 84 14 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 D9 84 14 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x00
        xor edx, edx
        lea ecx, [edi + 68h]
        ; Exact mapped bytes 66 83 79 F4 02: cmp word ptr [ecx - 0xc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0xf4
        __asm _emit 0x02
        ; Exact mapped bytes 75 04: jne 0x100242dd
        __asm _emit 0x75
        __asm _emit 0x04
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 77 28: ja 0x10024305
        __asm _emit 0x77
        __asm _emit 0x28
        inc edx
        add ecx, 34h
        cmp edx, 2
        ; Exact mapped bytes 7C EC: jl 0x100242d2
        __asm _emit 0x7c
        __asm _emit 0xec
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [ebx + 70h]
        add esi, 8
        dec ebp
        cmp esi, eax
        ; Exact mapped bytes 0F 85 61 FF FF FF: jne 0x1002425a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
