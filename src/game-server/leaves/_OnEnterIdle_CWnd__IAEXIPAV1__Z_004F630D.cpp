// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F630D .. +0x3F bytes.
extern "C" __declspec(naked) void _OnEnterIdle_CWnd__IAEXIPAV1__Z_004F630D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        push 1
        push 121h
        push 121h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4f633e
        __asm _emit 0x74
        __asm _emit 0x0c
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 88 25 5E 00: call dword ptr [0x5e2588]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB D8: jmp 0x4f6316
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2C B5 FF FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
