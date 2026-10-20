// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436DE3 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00436de3_00436DE3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes E8 FF 7E 01 00: call 0x44ecff
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 478h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b0h
        ; Exact mapped bytes E8 FB CA FC FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 C1 19 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
