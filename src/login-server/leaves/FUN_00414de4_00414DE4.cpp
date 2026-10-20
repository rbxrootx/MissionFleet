// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414DE4 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00414de4_00414DE4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        push 0
        push esi
        push 2
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 75 06 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        lea ecx, [ebp - 38h]
        test byte ptr [esi + 2dh], 2
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes 74 05: je 0x414e13
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes FF 50 44: call dword ptr [eax + 0x44]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x44
        ; Exact mapped bytes EB 03: jmp 0x414e16
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 18h]
        pop esi
        leave
        ret
    }
}
