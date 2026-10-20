// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D3E0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0044d3e0_0044D3E0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes EB 08: jmp 0x44d3ed
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 53 32 FF FF: call 0x440640
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 07 2F FF FF: call 0x440300
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x44d411
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB D4: jmp 0x44d3e5
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp ebp, esp
        ; Exact mapped bytes E8 C8 B3 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        pop ebp
        ret
    }
}
