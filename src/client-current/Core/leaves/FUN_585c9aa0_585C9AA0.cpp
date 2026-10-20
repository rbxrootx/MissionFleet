// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C9AA0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_585c9aa0_585C9AA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 300h
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 D3 EE FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd3
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A C1 10 00: call 0x586d5c50
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc1
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 04 C4 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
