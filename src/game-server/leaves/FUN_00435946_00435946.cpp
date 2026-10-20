// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435946 .. +0x208 bytes.
extern "C" __declspec(naked) void FUN_00435946_00435946() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 100h]
        mov dword ptr [edx + 170h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [edx + 100h]
        add eax, 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [edx + 100h], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 17ch], 0
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 B0 DF FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 18h]
        mov byte ptr [ecx + 64h], al
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 F8 BD 03 00: call 0x4717db
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 DF 4A FD FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        push 70h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        add edx, 80h
        push edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 BB B5 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 A8 B5 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 65 4A FD FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 39 4A FD FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 2D DF FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        shl eax, 10h
        or al, 1
        push eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ecx + 104h]
        add edx, 1
        shl edx, 10h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 18h]
        or edx, dword ptr [ecx + 10ch]
        push edx
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 17 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x17
        __asm _emit 0x05
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 78 BC 03 00: call 0x471706
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 34 4A FD FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 17 B5 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 82 ED FC FF: call 0x404840
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x435ad3
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 DB 8F 02 00: call 0x45eaac
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 6B: jmp 0x435b3e
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes E8 29 0B 05 00: call 0x48660e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 10 B8 FC FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x435b00
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E3 B7 FC FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 38: je 0x435b3e
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 2E: je 0x435b3c
        __asm _emit 0x74
        __asm _emit 0x2e
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 75 49 FD FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 49 49 FD FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 0
        push 4000008h
        push 80020114h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F6 16 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB B7: jmp 0x435af5
        __asm _emit 0xeb
        __asm _emit 0xb7
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 98 2C 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
