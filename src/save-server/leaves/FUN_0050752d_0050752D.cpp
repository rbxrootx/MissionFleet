// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050752D .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0050752d_0050752D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 13 F5 01 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 57: je 0x5075a4
        __asm _emit 0x74
        __asm _emit 0x57
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 1D F5 01 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        push 639040h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 22 2C FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x507586
        __asm _emit 0x75
        __asm _emit 0x14
        push 22ah
        push 678024h
        ; Exact mapped bytes E8 BF 17 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507586
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x507561
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 80 00 00 00: call dword ptr [edx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5075a2
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x5075a9
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB A3: jmp 0x507547
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
