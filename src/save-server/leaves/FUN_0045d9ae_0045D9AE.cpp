// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D9AE .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_0045d9ae_0045D9AE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E1 DD 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xdd
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x45d9da
        __asm _emit 0x74
        __asm _emit 0x14
        push 8d4h
        push 678664h
        ; Exact mapped bytes E8 6B B3 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45d9da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x45d9ba
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 5D 07 01 00: call 0x46e150
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes DD 55 F8: fst qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes DC 05 00 A5 63 00: fadd qword ptr [0x63a500]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xa5
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D F8 A4 63 00: fmul qword ptr [0x63a4f8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 01 01 00: call 0x46dba0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 18h
        ; Exact mapped bytes 7C 09: jl 0x45da1c
        __asm _emit 0x7c
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 18h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
