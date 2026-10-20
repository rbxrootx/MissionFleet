// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AA57 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0041aa57_0041AA57() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push 10h
        push 440238h
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 26 66 00 00: call 0x421090
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x41aaa9
        __asm _emit 0x74
        __asm _emit 0x35
        push 10h
        push 4401f8h
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0D 66 00 00: call 0x421090
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x41aaa9
        __asm _emit 0x74
        __asm _emit 0x1f
        lea eax, [esi - 90h]
        push 10h
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F5 65 00 00: call 0x421090
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41aaa9
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 80004002h
        ; Exact mapped bytes EB 0D: jmp 0x41aab6
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 10h]
        push esi
        mov dword ptr [eax], esi
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        xor eax, eax
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
