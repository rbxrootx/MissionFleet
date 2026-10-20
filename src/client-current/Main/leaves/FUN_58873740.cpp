// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873740 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_58873740() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 10h]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 14h]
        inc dword ptr [esi]
        dec eax
        mov byte ptr [esp + 0bh], 0
        mov dword ptr [esp + 18h], eax
        test eax, eax
        ; Exact mapped bytes 0F 8E DF 00 00 00: jle 0x58873842
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        xor ebp, ebp
        test eax, eax
        ; Exact mapped bytes 0F 8E BD 00 00 00: jle 0x5887382c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor ecx, ecx
        mov eax, ebx
        test ebp, ebp
        ; Exact mapped bytes 7E 10: jle 0x58873788
        __asm _emit 0x7e
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58873786
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, ebp
        ; Exact mapped bytes 7C F4: jl 0x58873778
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x58873788
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 0ch]
        movzx edx, word ptr [eax + 5eh]
        mov edi, dword ptr [esi]
        and edx, 0fh
        inc edx
        cmp edx, edi
        ; Exact mapped bytes 7D 03: jge 0x5887379c
        __asm _emit 0x7d
        __asm _emit 0x03
        add edx, 9
        lea esi, [ebp + 1]
        xor ecx, ecx
        mov eax, ebx
        test esi, esi
        ; Exact mapped bytes 7E 10: jle 0x588737b7
        __asm _emit 0x7e
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x588737b5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 7C F4: jl 0x588737a7
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x588737b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [eax + 0ch]
        movzx eax, word ptr [ecx + 5eh]
        and eax, 0fh
        inc eax
        cmp eax, edi
        ; Exact mapped bytes 7D 03: jge 0x588737c9
        __asm _emit 0x7d
        __asm _emit 0x03
        add eax, 9
        cmp edx, edi
        ; Exact mapped bytes 74 04: je 0x588737d1
        __asm _emit 0x74
        __asm _emit 0x04
        cmp eax, edi
        ; Exact mapped bytes 75 05: jne 0x588737d6
        __asm _emit 0x75
        __asm _emit 0x05
        mov byte ptr [esp + 13h], 1
        cmp edx, eax
        ; Exact mapped bytes 7E 3E: jle 0x58873818
        __asm _emit 0x7e
        __asm _emit 0x3e
        xor ecx, ecx
        mov eax, ebx
        test esi, esi
        ; Exact mapped bytes 7E 0C: jle 0x588737ee
        __asm _emit 0x7e
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x58873806
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 7C F4: jl 0x588737e2
        __asm _emit 0x7c
        __asm _emit 0xf4
        mov edx, eax
        xor ecx, ecx
        mov eax, ebx
        test ebp, ebp
        ; Exact mapped bytes 7E 14: jle 0x5887380c
        __asm _emit 0x7e
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5887380a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, ebp
        ; Exact mapped bytes 7C F4: jl 0x588737f8
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 06: jmp 0x5887380c
        __asm _emit 0xeb
        __asm _emit 0x06
        xor edx, edx
        ; Exact mapped bytes EB E6: jmp 0x588737f0
        __asm _emit 0xeb
        __asm _emit 0xe6
        xor eax, eax
        mov edi, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [edx + 0ch], ecx
        mov ebp, esi
        cmp ebp, dword ptr [esp + 20h]
        mov esi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 0F 8C 48 FF FF FF: jl 0x58873770
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 20h]
        dec eax
        mov dword ptr [esp + 20h], eax
        test eax, eax
        ; Exact mapped bytes 0F 8F 2C FF FF FF: jg 0x58873765
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [esp + 13h], 0
        pop edi
        pop ebp
        ; Exact mapped bytes 75 12: jne 0x58873854
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebx + 0ch]
        movzx eax, word ptr [edx + 5eh]
        and eax, 0fh
        mov dword ptr [esi], eax
        pop esi
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        dec dword ptr [esi]
        pop esi
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
