// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FFE9D .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_004ffe9d_004FFE9D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 0fffffffch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x4ffedb
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 63 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ffedb
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        or ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        ; Exact mapped bytes EB 26: jmp 0x4fff01
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 20: jne 0x4fff01
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 63 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4fff01
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        or ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
