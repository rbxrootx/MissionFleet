// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DB7BA .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_004db7ba_004DB7BA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 4], 675bd0h
        ; Exact mapped bytes 66 C7 45 F4 0A 00: mov word ptr [ebp - 0xc], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x00
        push 11h
        ; Exact mapped bytes FF 15 80 B6 68 00: call dword ptr [0x68b680]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0B: jne 0x4db7ec
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0dh
        ; Exact mapped bytes FF 15 80 B6 68 00: call dword ptr [0x68b680]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5C: je 0x4db84e
        __asm _emit 0x74
        __asm _emit 0x5c
        lea eax, [ebp - 48h]
        push eax
        push 3ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 8C B6 68 00: call dword ptr [0x68b68c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x4db84e
        __asm _emit 0x74
        __asm _emit 0x48
        lea edx, [ebp - 2ch]
        mov dword ptr [ebp - 4], edx
        push 0
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 7D 08: jge 0x4db825
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 48h]
        neg eax
        mov dword ptr [ebp - 48h], eax
        push 5ah
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 30 B4 68 00: call dword ptr [0x68b430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 48h
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov eax, dword ptr [ebp - 4ch]
        push eax
        push 0
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 75 08: jne 0x4db863
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 55 F4: mov dx, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 55 08: mov word ptr [ebp + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 74 FD FF FF: call 0x4db5e8
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
