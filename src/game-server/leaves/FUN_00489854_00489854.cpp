// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00489854 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00489854_00489854() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c7ch], 0
        ; Exact mapped bytes 74 12: je 0x489880
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 B8 12 00 00: call 0x48ab38
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 56 EF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
