// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567FB9 .. +0x80 bytes.
extern "C" __declspec(naked) void _RetryRejectedCall_XMessageFilter_COleMessageFilter__UAGKPAUHTASK____KK_Z_00567FB9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        sub eax, 3ch
        mov dword ptr [ebp - 4], eax
        push 10ch
        push 5ce570h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 85 31 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 05: jne 0x567fe6
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 4D: jmp 0x568033
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [edx + 30h]
        ; Exact mapped bytes 77 04: ja 0x567ff5
        __asm _emit 0x77
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3E: jmp 0x568033
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 2F: je 0x56802d
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 08: je 0x568024
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 74 07: je 0x568029
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes EB 09: jmp 0x56802d
        __asm _emit 0xeb
        __asm _emit 0x09
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 0A: jmp 0x568033
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x568033
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 30h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
