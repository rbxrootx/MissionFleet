// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005105B3 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_005105b3_005105B3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 148h
        push 5c84b0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 8E AB FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x5105ef
        __asm _emit 0x75
        __asm _emit 0x14
        push 149h
        push 5c84b0h
        ; Exact mapped bytes E8 16 44 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5105ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5105d2
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        ; Exact mapped bytes E8 11 4F 02 00: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 1
        push 1
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        or eax, 10000000h
        or eax, 40000000h
        push eax
        push 0
        push 5c859ch
        push 0
        ; Exact mapped bytes FF 15 C8 25 5E 00: call dword ptr [0x5e25c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x51064a
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 5c85a8h
        ; Exact mapped bytes E8 CE F5 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        cmp dword ptr [ebp - 4], 0
        setne al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
