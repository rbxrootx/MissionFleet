// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856DE60 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5856de60_5856DE60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a98a8h
        ; Exact mapped bytes E8 3B BA FB FF: call 0x585298b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        push 12h
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 EF 9C F5 FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
