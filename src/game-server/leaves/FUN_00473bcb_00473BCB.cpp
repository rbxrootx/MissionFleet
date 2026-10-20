// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00473BCB .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_00473bcb_00473BCB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581cb4h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 D3 67 FA FF: call 0x41a3c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 E9 4B 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
