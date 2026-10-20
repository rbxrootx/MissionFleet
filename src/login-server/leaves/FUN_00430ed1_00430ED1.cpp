// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430ED1 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00430ed1_00430ED1() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [ebp + 0ch]
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 2E FB FF FF: call 0x430a11
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x430eec
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 07: jmp 0x430ef3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 4C E3 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
