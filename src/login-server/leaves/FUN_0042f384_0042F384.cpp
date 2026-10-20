// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F384 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_0042f384_0042F384() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 360h
        ; Exact mapped bytes 75 05: jne 0x42f395
        __asm _emit 0x75
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 1A: jmp 0x42f3af
        __asm _emit 0xeb
        __asm _emit 0x1a
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 FF FF FF: call 0x42f2ff
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 68 FD FF FF: call 0x42f117
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
