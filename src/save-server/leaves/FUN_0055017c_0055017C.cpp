// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055017C .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_0055017c_0055017C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        push 19bh
        push 67bf90h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 AC A0 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 20h
        ; Exact mapped bytes E8 CD 4B FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5501c7
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 64: jmp 0x55022b
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 20h
        ; Exact mapped bytes E8 D8 4B FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5501e4
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 36: jmp 0x55021a
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 9D 5D F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x5d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 D9 D3 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd3
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 64 C2 68 00: call dword ptr [0x68c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        lea esp, [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
