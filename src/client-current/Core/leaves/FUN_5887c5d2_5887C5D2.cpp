// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C5D2 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_5887c5d2_5887C5D2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push 0
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 35 30 7D 90 58: push dword ptr [0x58907d30]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x7d
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 44 43 89 58: call dword ptr [0x58894344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 2D: jne 0x5887c622
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 6
        ; Exact mapped bytes 75 22: jne 0x5887c622
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 B6 FF FF FF: call 0x5887c5bb
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 73 FF FF FF: call 0x5887c57d
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 35 30 7D 90 58: push dword ptr [0x58907d30]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x7d
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 44 43 89 58: call dword ptr [0x58894344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
