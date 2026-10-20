// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542071 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_00542071_00542071() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 4000h
        ; Exact mapped bytes E8 74 53 FB FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x53
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54209c
        __asm _emit 0x75
        __asm _emit 0x11
        push 1dh
        push 5c6b58h
        ; Exact mapped bytes E8 69 29 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54209c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x54207d
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp + 8]
        and ecx, 40000000h
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x5420c0
        __asm _emit 0x75
        __asm _emit 0x11
        push 20h
        push 5c6b68h
        ; Exact mapped bytes E8 45 29 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5420c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DC: jne 0x5420a2
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 5c6b78h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
