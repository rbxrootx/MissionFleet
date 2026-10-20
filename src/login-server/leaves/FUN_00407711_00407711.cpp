// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407711 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_00407711_00407711() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        mov dword ptr [ebp - 74h], ecx
        mov dword ptr [ebp - 4], 0
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 0c0000000h
        mov eax, dword ptr [ebp - 74h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x407755
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 138h]
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x4077eb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 140h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 67: je 0x4077e6
        __asm _emit 0x74
        __asm _emit 0x67
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 74 61: je 0x4077e6
        __asm _emit 0x74
        __asm _emit 0x61
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 5B: je 0x4077e6
        __asm _emit 0x74
        __asm _emit 0x5b
        push 0
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        push 5ch
        lea edx, [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 48h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 0ch]
        push eax
        push 4
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 9F: jmp 0x407785
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x40774c
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
