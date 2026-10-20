// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FCC4 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0042fcc4_0042FCC4() {
    __asm {
        push ebp
        mov ebp, esp
        lea eax, [ebp + 0ch]
        push esi
        push eax
        mov eax, dword ptr [ebp + 0ch]
        mov esi, ecx
        push dword ptr [eax + 8]
        ; Exact mapped bytes E8 65 0D 00 00: call 0x430a3e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x42fce2
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 07: jmp 0x42fce9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 56 F5 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
