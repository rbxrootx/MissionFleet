// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876EB10 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5876eb10_5876EB10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 DB D3 D1 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd3
        __asm _emit 0xd1
        __asm _emit 0xff
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 4], cl
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
