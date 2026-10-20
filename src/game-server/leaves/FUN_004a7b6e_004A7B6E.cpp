// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A7B6E .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004a7b6e_004A7B6E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 38h
        mov dword ptr [ebp - 8], eax
        push 13bh
        push 5d052ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 D0 35 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x4a7bad
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 20h]
        ; Exact mapped bytes E8 22 3B 0C 00: call 0x56b6ca
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 1F: jmp 0x4a7bcc
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        add ecx, 0e0h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax + 0e0h]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
