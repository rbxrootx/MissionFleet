// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E110 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0047e110_0047E110() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x47e11e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x47e1a1
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], 6875e0h
        ; Exact mapped bytes 74 77: je 0x47e1a1
        __asm _emit 0x74
        __asm _emit 0x77
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 28 92 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 17 92 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        ; Exact mapped bytes E8 06 92 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        ; Exact mapped bytes E8 F5 91 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 E4 91 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 D3 91 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 24h]
        push edx
        ; Exact mapped bytes E8 C2 91 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        pop ebp
        ret
    }
}
