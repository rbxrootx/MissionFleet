// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421290 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00421290_00421290() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes EB 08: jmp 0x42129d
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 43 E2 FF FF: call 0x41f4e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 57 DB FF FF: call 0x41ee00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4212c1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB D4: jmp 0x421295
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp ebp, esp
        ; Exact mapped bytes E8 18 75 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        pop ebp
        ret
    }
}
