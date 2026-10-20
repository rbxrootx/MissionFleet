// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769A00 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_58769a00_58769A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 8], ecx
        push 40000000h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BE 2B 00 00: call 0x5876c5e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10c0h], 0
        ; Exact mapped bytes 74 23: je 0x58769a52
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e7ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2F 4C D5 FF: call 0x584be680
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4c
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
