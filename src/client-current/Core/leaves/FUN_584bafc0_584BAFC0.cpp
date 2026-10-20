// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BAFC0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_584bafc0_584BAFC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58895994h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 A5 FF FF FF: call 0x584baf80
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 BA FF FF FF: call 0x584bafa0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
