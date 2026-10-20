// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472BF2 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_00472bf2_00472BF2() {
    __asm {
        push 0
        push 0
        ; Exact mapped bytes A1 88 89 68 00: mov eax, dword ptr [0x688988]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 BC B8 68 00: call dword ptr [0x68b8bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x472c30
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 78h
        ; Exact mapped bytes 75 18: jne 0x472c29
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 7A AA FF FF: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 78h
        ; Exact mapped bytes E8 5F AA FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 28h
        ; Exact mapped bytes EB 07: jmp 0x472c30
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0fffffffch
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
