// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477330 .. +0x2E bytes.
extern "C" __declspec(naked) void __shift_00477330() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 23: je 0x47735c
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FE E3 FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 07 E9 FE FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        pop ebp
        ret
    }
}
