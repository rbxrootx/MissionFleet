// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58618110 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58618110_58618110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 75 2D: jne 0x58618152
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 F0 EB FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 EF EB FF: call 0x584d7110
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xef
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 64h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
