// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046A1D0 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_0046a1d0_0046A1D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0
        push 6ch
        push 63e92ch
        push 2
        push 74h
        push 1
        ; Exact mapped bytes E8 31 CA FF FF: call 0x466c20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x46a1fd
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 60: jmp 0x46a25d
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 DA 50 00 00: call 0x46f2e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 48h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 4ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], 0ffffffffh
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        push 46a290h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 30 BA 68 00: call dword ptr [0x68ba30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0B: jne 0x46a258
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 05: jmp 0x46a25d
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 22: jmp 0x46a27f
        __asm _emit 0xeb
        __asm _emit 0x22
        push 2
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 F8 D0 FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x46a27d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 66 33 00 00: call 0x46d5e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
