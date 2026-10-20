// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048BA6F .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0048ba6f_0048BA6F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF F0 FF FF: call 0x48ab38
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40c30h
        ; Exact mapped bytes E8 B5 05 00 00: call 0x48c050
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3B CD 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
