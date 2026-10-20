// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414E56 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00414e56_00414E56() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 94h]
        cmp eax, 1
        ; Exact mapped bytes 74 05: je 0x414e6f
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 2
        ; Exact mapped bytes 75 1E: jne 0x414e8d
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push esi
        push 4
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 F3 05 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        lea ecx, [ebp - 38h]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        pop esi
        leave
        ret
    }
}
