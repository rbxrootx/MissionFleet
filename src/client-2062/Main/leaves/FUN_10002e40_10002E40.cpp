// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10002E40 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_10002e40_10002E40() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 0ah
        ; Exact mapped bytes 73 05: jae 0x10002e4e
        __asm _emit 0x73
        __asm _emit 0x05
        xor al, al
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 11h
        ; Exact mapped bytes 73 05: jae 0x10002e58
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 1
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 18h
        ; Exact mapped bytes 73 05: jae 0x10002e62
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 2
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1fh
        ; Exact mapped bytes 73 05: jae 0x10002e6c
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 3
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 26h
        ; Exact mapped bytes 73 05: jae 0x10002e76
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 4
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 2fh
        ; Exact mapped bytes 73 05: jae 0x10002e80
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 5
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 38h
        ; Exact mapped bytes 73 05: jae 0x10002e8a
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 6
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 41h
        ; Exact mapped bytes 73 05: jae 0x10002e94
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 7
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 4ch
        ; Exact mapped bytes 73 05: jae 0x10002e9e
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 57h
        ; Exact mapped bytes 73 05: jae 0x10002ea8
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 9
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 62h
        ; Exact mapped bytes 73 05: jae 0x10002eb2
        __asm _emit 0x73
        __asm _emit 0x05
        mov al, 0ah
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 7dh
        sbb al, al
        and eax, 0bh
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
