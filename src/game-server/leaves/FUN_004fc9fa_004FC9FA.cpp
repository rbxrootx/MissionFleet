// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FC9FA .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_004fc9fa_004FC9FA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 4], 5c951ch
        ; Exact mapped bytes 66 C7 45 F4 0A 00: mov word ptr [ebp - 0xc], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x00
        push 11h
        ; Exact mapped bytes FF 15 64 21 5E 00: call dword ptr [0x5e2164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0B: jne 0x4fca2c
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0dh
        ; Exact mapped bytes FF 15 64 21 5E 00: call dword ptr [0x5e2164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5C: je 0x4fca8e
        __asm _emit 0x74
        __asm _emit 0x5c
        lea eax, [ebp - 48h]
        push eax
        push 3ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 60 21 5E 00: call dword ptr [0x5e2160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x4fca8e
        __asm _emit 0x74
        __asm _emit 0x48
        lea edx, [ebp - 2ch]
        mov dword ptr [ebp - 4], edx
        push 0
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 7D 08: jge 0x4fca65
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 48h]
        neg eax
        mov dword ptr [ebp - 48h], eax
        push 5ah
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 E4 1F 5E 00: call dword ptr [0x5e1fe4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 48h
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov eax, dword ptr [ebp - 4ch]
        push eax
        push 0
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 75 08: jne 0x4fcaa3
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
        ; Exact mapped bytes E8 74 FD FF FF: call 0x4fc828
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
