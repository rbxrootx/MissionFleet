// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041CCF0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0041ccf0_0041CCF0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes EB 08: jmp 0x41ccfd
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 43 E1 FF FF: call 0x41ae40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 B7 DA FF FF: call 0x41a7c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x41cd21
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB D4: jmp 0x41ccf5
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp ebp, esp
        ; Exact mapped bytes E8 B8 BA 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xba
        __asm _emit 0x08
        __asm _emit 0x00
        pop ebp
        ret
    }
}
