// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410A0C .. +0x2A2 bytes.
extern "C" __declspec(naked) void FUN_00410a0c_00410A0C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 AB 0C 06 00: call 0x471706
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes E8 A1 5B 07 00: call 0x48660e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x5b
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 A5 03 00: call 0x44afe7
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 45 01 00 00: jne 0x410bc3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 100h]
        add eax, 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 100h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC A3 03 00: call 0x44aea7
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes E8 C0 0C 06 00: call 0x47177e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 37 5C 00 00: call 0x416703
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 5C 00 00: call 0x416732
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 E9 99 FF FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        mov eax, dword ptr [ebp - 14h]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 C6 04 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 DB 5C 00 00: call 0x4167e8
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 AA 04 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 94 04 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 7E 04 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], 2
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        shl eax, 10h
        mov ecx, dword ptr [ebp - 14h]
        or eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0ch], eax
        push 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 0F 99 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 E0 98 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 104h]
        add edx, 1
        shl edx, 10h
        mov eax, dword ptr [ebp - 14h]
        or edx, dword ptr [eax + 10ch]
        push edx
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 74 66 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x410c9e
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 35 5B 00 00: call 0x416703
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 F4 98 FF FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        mov edx, dword ptr [ebp - 14h]
        add edx, 80h
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 D0 03 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 E5 5B 00 00: call 0x4167e8
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 B4 03 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 9E 03 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 8], 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        shl edx, 10h
        mov eax, dword ptr [ebp - 14h]
        or edx, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0ch], edx
        push 0
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 2F 98 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 00 98 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 104h]
        add ecx, 1
        shl ecx, 10h
        mov edx, dword ptr [ebp - 14h]
        or ecx, dword ptr [edx + 10ch]
        push ecx
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 65 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x65
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 38 7B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7b
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
