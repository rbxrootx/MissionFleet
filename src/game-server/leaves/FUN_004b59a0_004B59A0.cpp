// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B59A0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004b59a0_004B59A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0fffffffeh
        push 9
        ; Exact mapped bytes E8 3E F8 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E8 E6 17 00 00: call 0x4b71a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x4b59c5
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0fffffffch
        push 9
        ; Exact mapped bytes E8 C4 F8 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push 0
        push 0
        ; Exact mapped bytes A1 5C 02 5E 00: mov eax, dword ptr [0x5e025c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A8 22 5E 00: call dword ptr [0x5e22a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x4b5a0d
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 78h
        ; Exact mapped bytes 75 18: jne 0x4b5a06
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 8D B8 FF FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 78h
        ; Exact mapped bytes E8 72 B8 FF FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 28h
        ; Exact mapped bytes EB 07: jmp 0x4b5a0d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0fffffffch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
