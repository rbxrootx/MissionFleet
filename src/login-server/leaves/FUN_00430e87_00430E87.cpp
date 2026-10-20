// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430E87 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_00430e87_00430E87() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 8B 3D C0 C4 43 00: mov edi, dword ptr [0x43c4c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, 121h
        push 1
        push esi
        push esi
        lea eax, [ebp - 1ch]
        push 0
        mov ebx, ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x430ec3
        __asm _emit 0x74
        __asm _emit 0x16
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 08 C4 43 00: call dword ptr [0x43c408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        push esi
        push esi
        lea eax, [ebp - 1ch]
        push 0
        push eax
        ; Exact mapped bytes EB E4: jmp 0x430ea7
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov ecx, ebx
        ; Exact mapped bytes E8 75 E3 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
