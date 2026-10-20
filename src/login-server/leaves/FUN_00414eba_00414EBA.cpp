// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414EBA .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00414eba_00414EBA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        push 0
        push esi
        push 8
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 9F 05 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        lea ecx, [ebp - 38h]
        test byte ptr [esi + 2dh], 2
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes 74 05: je 0x414eef
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes FF 50 44: call dword ptr [eax + 0x44]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x44
        ; Exact mapped bytes EB 03: jmp 0x414ef2
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 18h]
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
