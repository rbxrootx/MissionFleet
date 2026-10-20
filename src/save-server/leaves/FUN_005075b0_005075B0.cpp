// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005075B0 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_005075b0_005075B0() {
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
        ; Exact mapped bytes E8 90 F4 01 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 53: je 0x507623
        __asm _emit 0x74
        __asm _emit 0x53
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 9A F4 01 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        push 639040h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 2B FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x507609
        __asm _emit 0x75
        __asm _emit 0x14
        push 237h
        push 678024h
        ; Exact mapped bytes E8 3C 17 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507609
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5075e4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A7: jmp 0x5075ca
        __asm _emit 0xeb
        __asm _emit 0xa7
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
