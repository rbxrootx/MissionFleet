// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C4C20 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_586c4c20_586C4C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 0a4h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 84 28 DC FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        push 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 99 3A FF FF: call 0x586b86e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5A 41 00 00: call 0x586c8db0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C2 6D FF FF: call 0x586bba20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
