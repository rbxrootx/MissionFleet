// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442515 .. +0x233 bytes.
extern "C" __declspec(naked) void FUN_00442515_00442515() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 B9 0F 00: call 0x53dea8
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 160h
        push ecx
        push 3f3h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 77 CD 0C 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 19ch
        push eax
        push 44bh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 60 CD 0C 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 1d8h
        push edx
        push 445h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 48 CD 0C 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 214h
        push ecx
        push 44ah
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 30 CD 0C 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 28ch
        push eax
        push 412h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 19 CD 0C 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 2c8h
        push edx
        push 3fah
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 01 CD 0C 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 304h
        push ecx
        push 3f8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E9 CC 0C 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 340h
        push eax
        push 3f2h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D2 CC 0C 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 37ch
        push edx
        push 3f1h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BA CC 0C 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3f4h
        push ecx
        push 3eah
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 52 C0 0C 00: call 0x50e66e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 3f8h
        push eax
        push 3e9h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3B C0 0C 00: call 0x50e66e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 3fch
        push edx
        push 3ebh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 23 C0 0C 00: call 0x50e66e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 400h
        push ecx
        push 3ech
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 0B C0 0C 00: call 0x50e66e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 404h
        push eax
        push 3eeh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F4 BF 0C 00: call 0x50e66e
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 408h
        push edx
        push 3edh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DC BF 0C 00: call 0x50e66e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40ch
        push ecx
        push 3efh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C4 BF 0C 00: call 0x50e66e
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 410h
        push eax
        push 3f0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 AD BF 0C 00: call 0x50e66e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 414h
        push edx
        push 3f7h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 95 BF 0C 00: call 0x50e66e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 418h
        push ecx
        push 3f9h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 CC BF 0C 00: call 0x50e6bd
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 41ch
        push eax
        push 40eh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B5 BF 0C 00: call 0x50e6bd
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 420h
        push edx
        push 410h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9D BF 0C 00: call 0x50e6bd
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 424h
        push ecx
        push 414h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 98 BE 0C 00: call 0x50e5d0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 9E 60 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
