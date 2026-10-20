// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883105E .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5883105e_5883105E() {
    __asm {
        push ebp
        mov ebp, esp
        test byte ptr [ebp + 8], 1
        push esi
        mov esi, ecx
        mov dword ptr [esi], 588c1c5ch
        ; Exact mapped bytes 74 0A: je 0x5883107a
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0ch
        push esi
        ; Exact mapped bytes E8 BC FF FF FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
