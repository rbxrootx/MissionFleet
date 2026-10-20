// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005289C2 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_005289c2_005289C2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        push 673b10h
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8E FD FF FF: call 0x528780
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
