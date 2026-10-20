// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500B80 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58500b80_58500B80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 2F F7 FF FF: call 0x585002c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 755h
        ; Exact mapped bytes 74 48: je 0x58500be0
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 10h], 1
        push 104h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 54h
        push edx
        ; Exact mapped bytes E8 5E C2 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc2
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        push 588a3764h
        ; Exact mapped bytes E8 31 14 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        push eax
        push 588a3784h
        push 104h
        mov eax, dword ptr [ebp - 4]
        add eax, 54h
        push eax
        ; Exact mapped bytes E8 17 02 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 10h
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58500be5
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
