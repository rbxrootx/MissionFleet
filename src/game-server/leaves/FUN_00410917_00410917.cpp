// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410917 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_00410917_00410917() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 B0 0D 06 00: call 0x471706
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes E8 A6 5C 07 00: call 0x48660e
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 5A 9B FF FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        mov eax, dword ptr [ebp - 0ch]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 37 06 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 21 06 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 DB 9A FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 AC 9A FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 A0 2F FF FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        shl eax, 10h
        or al, 1
        push eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 104h]
        add eax, 1
        shl eax, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or eax, dword ptr [ecx + 10ch]
        push eax
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 68 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 DA 7D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7d
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
