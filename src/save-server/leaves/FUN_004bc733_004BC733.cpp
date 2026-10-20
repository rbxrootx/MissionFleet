// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC733 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004bc733_004BC733() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 674470h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 0E DB 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4bc76c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 674470h
        ; Exact mapped bytes E8 D9 C5 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc76c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bc752
        __asm _emit 0x75
        __asm _emit 0xe0
        push 674480h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 11 DA 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4bc797
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 674470h
        ; Exact mapped bytes E8 AE C5 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc797
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4bc772
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 674470h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 B0 DA 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4bc7ca
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 674470h
        ; Exact mapped bytes E8 7B C5 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc7ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bc7b0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 82 95 06 00: call 0x525d5a
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4bc839
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 76 95 06 00: call 0x525d5a
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A7 95 06 00: call 0x525d96
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 FD FF FF: call 0x4bc523
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4bc80e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 44 95 06 00: call 0x525d5a
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4bc839
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6F 95 06 00: call 0x525d96
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A6 95 06 00: call 0x525ddd
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4bc805
        __asm _emit 0xeb
        __asm _emit 0xcc
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
