// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00566330 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_00566330_00566330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 8dh
        push 5d0c78h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 14 4E F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 74 48: je 0x5663a0
        __asm _emit 0x74
        __asm _emit 0x48
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        push edx
        push 0
        ; Exact mapped bytes FF 15 08 2A 5E 00: call dword ptr [0x5e2a08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 22: je 0x566393
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 94h], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 25: je 0x5663d1
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 98h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 98h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 98h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x5663a0
        __asm _emit 0x75
        __asm _emit 0xc9
        push 5dece8h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 9ch
        ; Exact mapped bytes E8 13 77 F8 FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
