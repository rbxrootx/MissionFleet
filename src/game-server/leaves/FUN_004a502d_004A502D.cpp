// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A502D .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_004a502d_004A502D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fc75h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 44h
        mov dword ptr [ebp - 10h], 80040102h
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 06: jne 0x4a505b
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x4a506c
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 5d020ch
        ; Exact mapped bytes E8 AC AB 02 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x4a511e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        lea edx, [ebp - 50h]
        push edx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 B8 F9 FF FF: call 0x4a4a40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 40h], 0
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp + 14h], 3
        ; Exact mapped bytes 75 09: jne 0x4a50b8
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 80040101h
        ; Exact mapped bytes EB 57: jmp 0x4a510f
        __asm _emit 0xeb
        __asm _emit 0x57
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 2D FB FF FF: call 0x4a4bf3
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4a50d3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 80040100h
        ; Exact mapped bytes EB 3C: jmp 0x4a510f
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4ch]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x4a5108
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4a50ff
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 07: jmp 0x4a5106
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 80004005h
        ; Exact mapped bytes EB 07: jmp 0x4a510f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 80040101h
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 92 00 00 00: call 0x4a51b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
