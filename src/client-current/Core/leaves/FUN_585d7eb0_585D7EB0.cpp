// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D7EB0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_585d7eb0_585D7EB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20f08h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 11 DF EA FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 23 86 EF FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x86
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20f18h], 0
        push 2ceh
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 EF ED FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 63 10 00: call 0x586de270
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x63
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B0 DF EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
