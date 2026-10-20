// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048B10F .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0048b10f_0048B10F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 7C 8E F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1C: je 0x48b159
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 8E F7 FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x48b14c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x48b159
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 8E F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB DE: jmp 0x48b137
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 4]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 7A D6 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
