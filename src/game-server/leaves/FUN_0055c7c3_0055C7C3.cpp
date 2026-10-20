// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C7C3 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_0055c7c3_0055C7C3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 46dh
        push 5cebe0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 81 E9 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 84h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 84h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x55c81d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB D0: jmp 0x55c7ed
        __asm _emit 0xeb
        __asm _emit 0xd0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x55c82a
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 49: jmp 0x55c873
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 25 3E F9 FF: call 0x4f0657
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 63 47 FD FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 84h]
        push eax
        ; Exact mapped bytes E8 43 C5 F6 FF: call 0x4c8d9e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 66 3E F9 FF: call 0x4f06cc
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, -1
        mov esp, ebp
        pop ebp
        ret
    }
}
