// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FF290 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_584ff290_584FF290() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 25ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 50h
        ; Exact mapped bytes 74 16: je 0x584ff2d2
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 54h
        ; Exact mapped bytes 75 45: jne 0x584ff317
        __asm _emit 0x75
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 220h]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A8 6C F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1dch]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E2 6B F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 238h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7C 6C F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 43: jmp 0x584ff35a
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 220h]
        mov dword ptr [ebp - 14h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 63 6C F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1dch]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9D 6B F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 238h]
        mov dword ptr [ebp - 1ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 37 6C F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 55h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 2ch
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9E 62 2B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x62
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 214h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 55h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 18h
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 76 62 2B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x62
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 214h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D0 6B F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 55h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 38 62 2B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x62
        __asm _emit 0x2b
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE 69 F8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
