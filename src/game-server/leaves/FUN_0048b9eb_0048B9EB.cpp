// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048B9EB .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0048b9eb_0048B9EB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c28h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x48ba29
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE E4 FF FF: call 0x489eca
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 85 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB E5: jmp 0x48ba0e
        __asm _emit 0xeb
        __asm _emit 0xe5
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 AD CD 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
