// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00502907 .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_00502907_00502907() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 18h], 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x502940
        __asm _emit 0x75
        __asm _emit 0x14
        push 555h
        push 675764h
        ; Exact mapped bytes E8 05 64 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502940
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x502926
        __asm _emit 0x75
        __asm _emit 0xe0
        push 638340h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D 78 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50296b
        __asm _emit 0x75
        __asm _emit 0x14
        push 556h
        push 675764h
        ; Exact mapped bytes E8 DA 63 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50296b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x502946
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 72 14: jb 0x502993
        __asm _emit 0x72
        __asm _emit 0x14
        push 557h
        push 675764h
        ; Exact mapped bytes E8 B2 63 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502993
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x502971
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 E3 FF FF: call 0x500d28
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0fffbffffh
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 17: jne 0x5029cd
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        or edx, 40000h
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        and eax, 0fffdffffh
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x5029eb
        __asm _emit 0x74
        __asm _emit 0x14
        push 563h
        push 675764h
        ; Exact mapped bytes E8 5A 63 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5029eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DC: jne 0x5029cd
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D E3 FF FF: call 0x500da1
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
