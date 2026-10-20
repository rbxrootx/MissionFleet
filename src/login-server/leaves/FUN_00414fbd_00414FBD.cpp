// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414FBD .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00414fbd_00414FBD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        push 0
        push esi
        push 7
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 9C 04 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        pop esi
        leave
        ret
    }
}
