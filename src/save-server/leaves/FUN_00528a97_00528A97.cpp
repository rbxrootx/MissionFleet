// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528A97 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_00528a97_00528A97() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 673b24h
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
        ; Exact mapped bytes E8 BE FC FF FF: call 0x528780
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfc
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
