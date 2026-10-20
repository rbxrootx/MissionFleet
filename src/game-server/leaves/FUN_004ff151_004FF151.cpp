// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF151 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_004ff151_004FF151() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 126h
        push 5cb750h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F0 BF FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4ff18d
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 5cb750h
        ; Exact mapped bytes E8 78 58 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ff18d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4ff170
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 74 15: je 0x4ff1b8
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
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
        ; Exact mapped bytes E8 DB E4 FE FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4ff1eb
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E5 C6 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc6
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
