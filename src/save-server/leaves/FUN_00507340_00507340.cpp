// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507340 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_00507340_00507340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 64h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1B EA FC FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x507373
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ebh
        push 678024h
        ; Exact mapped bytes E8 D2 19 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507373
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x507359
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 6F 02 00: call 0x52e352
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 0C: jne 0x507396
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 60h], 0
        ; Exact mapped bytes EB 56: jmp 0x5073ec
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 73 02 00: call 0x52e6a2
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 60h], eax
        push 1f6h
        push 678024h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        ; Exact mapped bytes E8 A2 2E FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        push 639040h
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 C2 2D FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5073e6
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f7h
        push 678024h
        ; Exact mapped bytes E8 5F 19 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5073e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x5073be
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DE 77 FC FF: call 0x4cebd2
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x77
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
