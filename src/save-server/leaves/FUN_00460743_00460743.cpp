// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460743 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_00460743_00460743() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 6414b8h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 99 A1 0E 00: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 80004001h
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x46078c
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x4607a5
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 4], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x46078c
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
