// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3840 .. +0x2E bytes.
extern "C" __declspec(naked) void __shift_004B3840() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 23: je 0x4b386c
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7E 5B FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 27 90 FF FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop ebp
        ret
    }
}
