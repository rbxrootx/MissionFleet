// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005047C4 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_005047c4_005047C4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 116h
        push 677834h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 82 5A FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 16 E7 F9 FF: call 0x4a2ef9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
