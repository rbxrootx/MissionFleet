// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00502A0D .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00502a0d_00502A0D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x502a25
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 7E 14: jle 0x502a39
        __asm _emit 0x7e
        __asm _emit 0x14
        push 569h
        push 675764h
        ; Exact mapped bytes E8 0C 63 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502a39
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x502a19
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x502a62
        __asm _emit 0x75
        __asm _emit 0x14
        push 56bh
        push 675764h
        ; Exact mapped bytes E8 E3 62 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502a62
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x502a48
        __asm _emit 0x75
        __asm _emit 0xe0
        push 638340h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 77 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x502a8d
        __asm _emit 0x75
        __asm _emit 0x14
        push 56ch
        push 675764h
        ; Exact mapped bytes E8 B8 62 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502a8d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x502a68
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 72 14: jb 0x502ab5
        __asm _emit 0x72
        __asm _emit 0x14
        push 56dh
        push 675764h
        ; Exact mapped bytes E8 90 62 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502ab5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x502a93
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E E2 FF FF: call 0x500d28
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffeeffffh
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 0E: jne 0x502ae6
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        or edx, 10000h
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 11: jmp 0x502af7
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x502af7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        or eax, 100000h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x502b15
        __asm _emit 0x74
        __asm _emit 0x14
        push 575h
        push 675764h
        ; Exact mapped bytes E8 30 62 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502b15
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DC: jne 0x502af7
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 8]
        or al, 2
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 E2 FF FF: call 0x500da1
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xe2
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
