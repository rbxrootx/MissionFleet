// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00463284 .. +0x61 bytes.
extern "C" __declspec(naked) void _OnDoVerb_CDocObjectServerItem__MAEXJ_Z_00463284() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DB 02 00 00: call 0x463570
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 384h
        push 67ca48h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B5 6F 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 5A 11 00: call 0x578cb9
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4632d3
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp + 8], -5
        ; Exact mapped bytes 74 06: je 0x4632c3
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 10: jne 0x4632d3
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
        ; Exact mapped bytes EB 0C: jmp 0x4632df
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9C 61 11 00: call 0x57947b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x61
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
