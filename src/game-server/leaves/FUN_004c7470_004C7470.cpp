// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C7470 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_004c7470_004C7470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 5d2ab0h
        sub eax, 60h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4c748c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x4c752f
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 13: jge 0x4c74a5
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 0ch]
        neg ecx
        mov dword ptr [ebp + 0ch], ecx
        mov edx, 5d2c10h
        sub edx, 60h
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 08: jne 0x4c74b3
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 76: je 0x4c752f
        __asm _emit 0x74
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 7
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 0ch]
        sar eax, 3
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 02: jne 0x4c74dc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D7: jmp 0x4c74b3
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 4]
        add edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 8000h
        ; Exact mapped bytes 7C 23: jl 0x4c751d
        __asm _emit 0x7c
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 12h]
        sub eax, 1
        mov dword ptr [ebp - 12h], eax
        lea ecx, [ebp - 14h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 06 FB FF FF: call 0x4c7030
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 84: jmp 0x4c74b3
        __asm _emit 0xeb
        __asm _emit 0x84
        mov esp, ebp
        pop ebp
        ret
    }
}
