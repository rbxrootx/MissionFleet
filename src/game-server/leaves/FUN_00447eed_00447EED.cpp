// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00447EED .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_00447eed_00447EED() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 74 27: je 0x447f2e
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        shl edx, 10h
        or edx, 1
        push edx
        push 0
        push 8002001bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 F3 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x447f45
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002001bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED F2 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 8C 08 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
