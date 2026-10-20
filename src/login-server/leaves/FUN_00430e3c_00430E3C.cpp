// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430E3C .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00430e3c_00430E3C() {
    __asm {
        push ebp
        mov ebp, esp
        lea eax, [ebp + 0ch]
        push esi
        push eax
        mov eax, dword ptr [ebp + 0ch]
        mov esi, ecx
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 ED FB FF FF: call 0x430a3e
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x430e5a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 07: jmp 0x430e61
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 DE E3 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe3
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
