// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418829 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_00418829_00418829() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        cmp dword ptr [ebp + 10h], 0
        push esi
        lea eax, [ebp - 24h]
        push 0ah
        push eax
        mov esi, ecx
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 07: je 0x418848
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 F9 8C 00 00: call 0x42153f
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x41884d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 1C 8D 00 00: call 0x421569
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add esp, 0ch
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 84 00 00 00: call dword ptr [eax + 0x84]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
