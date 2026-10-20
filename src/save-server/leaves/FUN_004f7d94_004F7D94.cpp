// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7D94 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004f7d94_004F7D94() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 F5 FF FF: call 0x4f731e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 5C: je 0x4f7e0d
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F4 BE 68 00: call dword ptr [0x68bef4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 20: jle 0x4f7de4
        __asm _emit 0x7e
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 70 54 FD FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F8 BE 68 00: call dword ptr [0x68bef8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x4f7e01
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 100h
        push 0ffh
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 A2 52 FD FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 F8 BE 68 00: call dword ptr [0x68bef8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 C8 53 FD FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 31: jmp 0x4f7e3e
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 95 CF 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push -1
        push 14dh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x4f7e3e
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 76 CF 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 05 40 FF FF: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
