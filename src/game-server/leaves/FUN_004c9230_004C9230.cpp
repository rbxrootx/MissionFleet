// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9230 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_004c9230_004C9230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 5B FF FF FF: call 0x4c91a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 59f730h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 CD 70 FE FF: call 0x4b0320
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
