// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571099 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_00571099_00571099() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1a0h
        push 5d0930h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 AD A0 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80004001h
        ; Exact mapped bytes E8 CD C3 FD FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
