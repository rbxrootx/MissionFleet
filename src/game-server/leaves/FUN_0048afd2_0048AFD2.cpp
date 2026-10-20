// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048AFD2 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_0048afd2_0048AFD2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 B9 8F F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x48b01f
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 8F F7 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x48b012
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 10: jmp 0x48b022
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 8F F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB DB: jmp 0x48affa
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 4]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 B4 D7 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd7
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
