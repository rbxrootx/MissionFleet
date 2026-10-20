// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045FC50 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_0045fc50_0045FC50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x45fc82
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x45fd4b
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 21: jne 0x45fca9
        __asm _emit 0x75
        __asm _emit 0x21
        push 67ad2ch
        push 0
        push 15bh
        push 676fb8h
        push 2
        ; Exact mapped bytes E8 C0 D1 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x45fca9
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x45fc82
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 20h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2E 91 FF FF: call 0x458df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        push 26h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 40h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 20h
        push edx
        ; Exact mapped bytes E8 29 56 00 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        push eax
        push 20h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 66h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 46h
        push edx
        ; Exact mapped bytes E8 FD 90 FF FF: call 0x458df0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        push 2eh
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0a6h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 66h
        push ecx
        ; Exact mapped bytes E8 F6 55 00 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 46: mov ax, word ptr [edx + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x46
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x45fd3f
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 46: mov dx, word ptr [ecx + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x46
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0d4h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 94h
        push ecx
        ; Exact mapped bytes E8 C4 55 00 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 42 24 94 00: mov word ptr [edx + 0x24], 0x94
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
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
