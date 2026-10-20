// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C3EA0 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_004c3ea0_004C3EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 31 04 00 00: call 0x4c42e0
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
        ; Exact mapped bytes 8B 15 A4 F0 5D 00: mov edx, dword ptr [0x5df0a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        sbb edx, edx
        and edx, 0fffff005h
        add edx, 1002h
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4c3ef1
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes C7 05 B8 F0 5D 00 00 00 00 00: mov dword ptr [0x5df0b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 55: jmp 0x4c3f46
        __asm _emit 0xeb
        __asm _emit 0x55
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 B4 F0 5D 00: mov edx, dword ptr [0x5df0b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 1F 68 FF FF: call 0x4ba720
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x4c3f39
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 0F 01 00 00: call 0x4c4020
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x4c3f39
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D BC F0 5D 00: mov dword ptr [0x5df0bc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 BC F0 5D 00: mov edx, dword ptr [0x5df0bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 A0 F0 5D 00: mov dword ptr [0x5df0a0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or al, 4
        ; Exact mapped bytes A3 B8 F0 5D 00: mov dword ptr [0x5df0b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
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
