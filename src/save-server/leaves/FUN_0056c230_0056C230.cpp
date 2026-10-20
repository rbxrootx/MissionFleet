// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C230 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_0056c230_0056C230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 8dh
        push 67d450h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 14 E0 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 74 48: je 0x56c2a0
        __asm _emit 0x74
        __asm _emit 0x48
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        push edx
        push 0
        ; Exact mapped bytes FF 15 A0 C2 68 00: call dword ptr [0x68c2a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 22: je 0x56c293
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
        ; Exact mapped bytes 74 25: je 0x56c2d1
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
        ; Exact mapped bytes 75 C9: jne 0x56c2a0
        __asm _emit 0x75
        __asm _emit 0xc9
        push 687208h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 9ch
        ; Exact mapped bytes E8 B3 08 F6 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
