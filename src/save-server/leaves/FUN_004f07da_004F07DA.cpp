// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F07DA .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_004f07da_004F07DA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 208h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes E8 A3 E2 FE FF: call 0x4dea9f
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 20h
        ; Exact mapped bytes E8 8C C3 FD FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 20h
        ; Exact mapped bytes E8 6D 45 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f0837
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d7h
        push 678234h
        ; Exact mapped bytes E8 0E 85 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0837
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x4f0811
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 4ch], 0
        push 0d9h
        push 678234h
        mov edx, dword ptr [ebp - 208h]
        push edx
        ; Exact mapped bytes E8 00 9A FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        push 100h
        lea eax, [ebp - 100h]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes E8 07 E8 FE FF: call 0x4df07f
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x4f0894
        __asm _emit 0x75
        __asm _emit 0x18
        lea edx, [ebp - 100h]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2E: je 0x4f08c8
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 20h
        ; Exact mapped bytes E8 02 45 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 C2 11 04 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20ch], eax
        mov eax, dword ptr [ebp - 20ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0e4h
        push 678234h
        mov eax, dword ptr [ebp - 208h]
        push eax
        ; Exact mapped bytes E8 82 99 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
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
