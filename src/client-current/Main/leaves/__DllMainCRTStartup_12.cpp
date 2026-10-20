// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897D517 .. +0x23 bytes.
extern "C" __declspec(naked) void __DllMainCRTStartup_12() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 05: jne 0x5897d527
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 DF 04 00 00: call 0x5897da06
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CC FE FF FF: call 0x5897d401
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
