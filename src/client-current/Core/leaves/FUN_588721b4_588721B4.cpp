// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588721B4 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_588721b4_588721B4() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 84 42 89 58: call dword ptr [0x58894284]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x588721d8
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 41 02 FF FF: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        or eax, 0ffffffffh
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
