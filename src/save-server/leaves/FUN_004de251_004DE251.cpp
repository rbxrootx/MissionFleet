// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DE251 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_004de251_004DE251() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 126h
        push 677f28h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F0 BF FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4de28d
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 677f28h
        ; Exact mapped bytes E8 B8 AA 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4de28d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4de270
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 74 15: je 0x4de2b8
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ch
        ; Exact mapped bytes E8 7B E4 FE FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4de2eb
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A5 C3 FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
