// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DB4D2 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_004db4d2_004DB4D2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4db4f3
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fch
        push 675b88h
        ; Exact mapped bytes E8 52 D8 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4db4f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4db4d9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 AE 05 00 00: call 0x4dbab0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4db50d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 68: jmp 0x4db575
        __asm _emit 0xeb
        __asm _emit 0x68
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 CA FD FF FF: call 0x4db2e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5F 05 00 00: call 0x4dba90
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 B6 05 00 00: call 0x4dbaf0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 20h
        push 20h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F2 1C FF FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 63 1C FF FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
