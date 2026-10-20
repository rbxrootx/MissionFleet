// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437B42 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_00437b42_00437B42() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x437b54
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax + 1ch]
        lea ecx, [ebp - 4]
        push ecx
        push eax
        ; Exact mapped bytes E8 4A D2 FF FF: call 0x434da8
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 23 7C FF FF: call 0x42f78a
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 60h]
        push eax
        ; Exact mapped bytes E8 9E 12 FF FF: call 0x428e0e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes E8 5F 7C FF FF: call 0x42f7d6
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 D8 77 FF FF: call 0x42f356
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x437b8f
        __asm _emit 0x74
        __asm _emit 0x0b
        push 1
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 48 C5 43 00: call dword ptr [0x43c548]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push 2
        pop eax
        cmp edi, eax
        ; Exact mapped bytes 74 38: je 0x437bce
        __asm _emit 0x74
        __asm _emit 0x38
        cmp edi, 75h
        ; Exact mapped bytes 75 0C: jne 0x437ba7
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 8ch], 1
        ; Exact mapped bytes EB 24: jmp 0x437bcb
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp edi, 76h
        ; Exact mapped bytes 74 19: je 0x437bc5
        __asm _emit 0x74
        __asm _emit 0x19
        cmp edi, 77h
        ; Exact mapped bytes 75 0C: jne 0x437bbd
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 8ch], 3
        ; Exact mapped bytes EB 0E: jmp 0x437bcb
        __asm _emit 0xeb
        __asm _emit 0x0e
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 E4 FE FF FF: call 0x437aa9
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 8ch], eax
        push 1
        pop eax
        pop edi
        pop esi
        leave
        ret
    }
}
