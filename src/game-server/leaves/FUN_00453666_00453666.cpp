// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00453666 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00453666_00453666() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF BE FF FF: call 0x44f555
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 50 51 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
