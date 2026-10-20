// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F61F6 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004f61f6_004F61F6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 FC F3 03 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0A: jne 0x4f6213
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, 5de898h
        ; Exact mapped bytes E8 D0 73 00 00: call 0x4fd5e3
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E3 8B FF FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x4f624d
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes E8 03 B6 FF FF: call 0x4f182c
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 1
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 36 65 04 00: call 0x53c783
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1D B6 FF FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
