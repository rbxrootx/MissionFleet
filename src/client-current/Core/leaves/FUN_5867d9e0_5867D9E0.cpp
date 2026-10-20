// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867D9E0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_5867d9e0_5867D9E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2d0h], 40000000h
        ; Exact mapped bytes 75 34: jne 0x5867da2c
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 31 ED FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x31
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 2ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 10 3A ED FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xff
        push 2ch
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 93 F6 FF: call 0x585e6df0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x93
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2d0h], 0
        ; Exact mapped bytes EB 32: jmp 0x5867da5e
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 31 ED FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x31
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0dh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DC 39 ED FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x39
        __asm _emit 0xed
        __asm _emit 0xff
        push 0dh
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 93 F6 FF: call 0x585e6df0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x93
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2d0h], 40000000h
        mov esp, ebp
        pop ebp
        ret
    }
}
