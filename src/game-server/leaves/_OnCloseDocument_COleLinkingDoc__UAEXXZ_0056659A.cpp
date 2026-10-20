// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056659A .. +0xBA bytes.
extern "C" __declspec(naked) void _OnCloseDocument_COleLinkingDoc__UAEXXZ_0056659A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 5F FE FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D 00 00 00: call 0x566654
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 FD FF FF: call 0x566330
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0a0h], 0
        ; Exact mapped bytes 74 19: je 0x5665e4
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a0h], 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9E 03 00 00: call 0x566982
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 48h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 BA FE FF: call 0x552011
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0f3h
        push 5d0c78h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 4E 4B F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2B: je 0x566650
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x566649
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x566650
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
