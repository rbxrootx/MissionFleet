// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8E90 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_584a8e90_584A8E90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 804h], 0
        ; Exact mapped bytes 74 3C: je 0x584a8edf
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 800h], 0
        ; Exact mapped bytes 75 02: jne 0x584a8eb1
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 2E: jmp 0x584a8edf
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 804h]
        ; Exact mapped bytes E8 91 87 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 74 02: je 0x584a8ec8
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 17: jmp 0x584a8edf
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 C7 FF FF: call 0x584a55d0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ech
        ; Exact mapped bytes E8 62 9D FF FF: call 0x584a2c40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
