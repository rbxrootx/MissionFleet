// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004992F0 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_004992f0_004992F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 65 17 00 00: call 0x49aa70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x499330
        __asm _emit 0x75
        __asm _emit 0x21
        push 5caed0h
        push 0
        push 446h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 09 78 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x499330
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x499303
        __asm _emit 0x75
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 21: jne 0x499360
        __asm _emit 0x75
        __asm _emit 0x21
        push 5caee0h
        push 0
        push 447h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 D9 77 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x499360
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x499336
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 32 FD FF FF: call 0x4990a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 0ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffh
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, -1
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 16 00 00: call 0x49aa80
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 05: je 0x4993bd
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 34: jmp 0x4993f1
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EB 00 00 00: call 0x4994b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 20: jge 0x4993ee
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        push edx
        push 5caef4h
        push 0
        push 2000h
        ; Exact mapped bytes E8 1D 00 00 00: call 0x499400
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B2 FC FF FF: call 0x4990a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
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
