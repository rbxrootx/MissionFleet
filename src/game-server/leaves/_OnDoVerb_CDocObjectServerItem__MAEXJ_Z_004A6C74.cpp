// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A6C74 .. +0x61 bytes.
extern "C" __declspec(naked) void _OnDoVerb_CDocObjectServerItem__MAEXJ_Z_004A6C74() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DB 02 00 00: call 0x4a6f60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 384h
        push 5d0270h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C5 44 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 96 0C 00: call 0x570309
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4a6cc3
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp + 8], -5
        ; Exact mapped bytes 74 06: je 0x4a6cb3
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 10: jne 0x4a6cc3
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x4a6ccf
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC 9D 0C 00: call 0x570acb
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
