// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DE209 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_004de209_004DE209() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 11bh
        push 677f28h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3D C0 FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 02: jne 0x4de22e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1F: jmp 0x4de24d
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 34 B9 68 00: call dword ptr [0x68b934]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4de24d
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 43 C4 FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
