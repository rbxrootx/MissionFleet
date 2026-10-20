// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C51A0 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_587c51a0() {
    __asm {
        mov eax, dword ptr [ecx + 20h]
        mov eax, dword ptr [eax]
        push ebx
        mov ebx, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x587c51d9
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ecx + 10h]
        cmp dword ptr [edx], eax
        ; Exact mapped bytes 73 24: jae 0x587c51d9
        __asm _emit 0x73
        __asm _emit 0x24
        cmp ebx, -1
        ; Exact mapped bytes 74 08: je 0x587c51c2
        __asm _emit 0x74
        __asm _emit 0x08
        movzx eax, byte ptr [eax - 1]
        cmp eax, ebx
        ; Exact mapped bytes 75 17: jne 0x587c51d9
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 30h]
        inc dword ptr [eax]
        mov ecx, dword ptr [ecx + 20h]
        dec dword ptr [ecx]
        mov eax, ebx
        inc eax
        neg eax
        sbb eax, eax
        and eax, ebx
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 4ch]
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x587c5203
        __asm _emit 0x74
        __asm _emit 0x23
        cmp ebx, -1
        ; Exact mapped bytes 74 1E: je 0x587c5203
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 75 18: jne 0x587c5203
        __asm _emit 0x75
        __asm _emit 0x18
        movzx ecx, bl
        push eax
        push ecx
        ; Exact mapped bytes E8 B3 7D 1B 00: call 0x5897cfa8
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 8
        cmp eax, -1
        ; Exact mapped bytes 74 06: je 0x587c5203
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, ebx
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        or eax, 0ffffffffh
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
