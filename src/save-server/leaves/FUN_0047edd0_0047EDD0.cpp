// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047EDD0 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_0047edd0_0047EDD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 31 04 00 00: call 0x47f210
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        push 78h
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 B8 75 68 00: mov edx, dword ptr [0x6875b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        sbb edx, edx
        and edx, 0fffff005h
        add edx, 1002h
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x47ee21
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes C7 05 CC 75 68 00 00 00 00 00: mov dword ptr [0x6875cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 55: jmp 0x47ee76
        __asm _emit 0xeb
        __asm _emit 0x55
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 C8 75 68 00: mov edx, dword ptr [0x6875c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 0F 74 FF FF: call 0x476240
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x47ee69
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 0F 01 00 00: call 0x47ef50
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x47ee69
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D D0 75 68 00: mov dword ptr [0x6875d0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D0 75 68 00: mov edx, dword ptr [0x6875d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 B4 75 68 00: mov dword ptr [0x6875b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or al, 4
        ; Exact mapped bytes A3 CC 75 68 00: mov dword ptr [0x6875cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 4
        neg eax
        sbb eax, eax
        inc eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
