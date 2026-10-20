// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00574CFC .. +0x9D bytes.
extern "C" __declspec(naked) void _ConnectView_COleServerDoc__IAEXPAVCWnd__PAVCView___Z_00574CFC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        push 54ah
        push 67cd14h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 48 55 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x55
        __asm _emit 0xf6
        __asm _emit 0xff
        push 54bh
        push 67cd14h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 35 55 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x55
        __asm _emit 0xf6
        __asm _emit 0xff
        push 54ch
        push 67cd14h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 22 55 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x55
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9E 7D FB FF: call 0x52cae8
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x574d64
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x574d6f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 DD F5 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xdd
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 ED F9 FF: call 0x513b09
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
