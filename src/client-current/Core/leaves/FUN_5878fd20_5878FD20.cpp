// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878FD20 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_5878fd20_5878FD20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5878fd3b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 23: jae 0x5878fd66
        __asm _emit 0x73
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx*8 + 4]
        push eax
        mov ecx, dword ptr [edx + ecx*8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CD 37 00 00: call 0x58793530
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x5878fd32
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A8 00 00 00: call 0x5878fe20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 73 74 D4 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x74
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 588b697ch
        ; Exact mapped bytes E8 F6 13 0C 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x13
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 588b6990h
        push 2710h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C6 8F D4 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8f
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
