// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00510B55 .. +0x1E8 bytes.
extern "C" __declspec(naked) void FUN_00510b55_00510B55() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 300000h
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A4 FF FF FF: call 0x510b15
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x510b7b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 BC 01 00 00: jmp 0x510d37
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 100000h
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 70h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 200000h
        neg eax
        sbb eax, eax
        neg eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x510bb6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 7D 69: jge 0x510c2a
        __asm _emit 0x7d
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 4]
        add edx, 0ea00h
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0E DD FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 36: jne 0x510c12
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        add eax, 0ea00h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x510bfe
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 C5 39 FF FF: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 0ea00h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D2 DC FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        neg edx
        sbb edx, edx
        and edx, 5
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 07 E7 FD FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 83: jmp 0x510bad
        __asm _emit 0xeb
        __asm _emit 0x83
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x510c3c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 7D 6A: jge 0x510cb1
        __asm _emit 0x7d
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 8]
        add eax, 0ea10h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 89 DC FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 38: jne 0x510c99
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ea10h
        push ecx
        push 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x510c84
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 3F 39 FF FF: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ea10h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4B DC FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        neg eax
        sbb eax, eax
        and eax, 5
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 80 E6 FD FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 82: jmp 0x510c33
        __asm _emit 0xeb
        __asm _emit 0x82
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 5C: je 0x510d16
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 53: je 0x510d16
        __asm _emit 0x74
        __asm _emit 0x53
        push 0ea20h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 11 DC FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 31: jne 0x510d0a
        __asm _emit 0x75
        __asm _emit 0x31
        push 0ea20h
        push 8000008h
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x510cfa
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 C9 38 FF FF: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ea20h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DA DB FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 5
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1B E6 FD FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 21: jmp 0x510d37
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0ea20h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BE DB FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x510d37
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
