// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786870 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_58786870_58786870() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 29 D3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x29
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 74 16: je 0x5878689d
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ech]
        ; Exact mapped bytes E8 CB 29 D3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x29
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 1A: jne 0x587868b7
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0ech]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 03 00 00: call 0x58786c30
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 F6 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf6
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
