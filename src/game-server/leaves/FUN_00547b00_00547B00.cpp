// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00547B00 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00547b00_00547B00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 44 23 5E 00: call dword ptr [0x5e2344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 48 23 5E 00: call dword ptr [0x5e2348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, 1
        cmp ecx, dword ptr [ebp - 14h]
        sbb eax, eax
        neg eax
        mov esp, ebp
        pop ebp
        ret
    }
}
