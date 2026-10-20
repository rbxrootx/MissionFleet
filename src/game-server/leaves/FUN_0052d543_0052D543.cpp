// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D543 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_0052d543_0052D543() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 208h
        mov dword ptr [ebp - 208h], ecx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 A1 18 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x52d5f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 204h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5C: je 0x52d5d3
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 7E 2D: jle 0x52d5c1
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        push 5c91d8h
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [ebp + eax - 204h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        push 5c91dch
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 90 23 5E 00: call dword ptr [0x5e2390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 0ach
        ; Exact mapped bytes E8 C6 39 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 90 23 5E 00: call dword ptr [0x5e2390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x52d678
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 0ach
        ; Exact mapped bytes E8 A2 39 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5C: je 0x52d678
        __asm _emit 0x74
        __asm _emit 0x5c
        push 5c91e0h
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 90 23 5E 00: call dword ptr [0x5e2390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 90 23 5E 00: call dword ptr [0x5e2390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 7E 2D: jle 0x52d678
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 40h]
        push eax
        push 5c91e4h
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp + eax - 204h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 F5 97 FD FF: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
